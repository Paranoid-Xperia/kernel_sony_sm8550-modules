KERNEL_SRC ?= /lib/modules/$(shell uname -r)/build
M ?= $(shell pwd)

# $(WLAN_PLATFORM_ROOT) has to be a absolute path
ifeq ($(WLAN_PLATFORM_ROOT),)
WLAN_PLATFORM_ROOT = $(shell pwd)

# If it reaches here, compilation is probably without Android.mk,
# so enable all flags (including debug flag CONFIG_CNSS2_DEBUG) by
# default.
KBUILD_OPTIONS := WLAN_PLATFORM_ROOT=$(WLAN_PLATFORM_ROOT)
ifeq ($(WLAN_BASEMACHINE),qcs40x)
KBUILD_OPTIONS += CONFIG_CNSS_OUT_OF_TREE=y
KBUILD_OPTIONS += CONFIG_ICNSS2=m
KBUILD_OPTIONS += CONFIG_ICNSS2_QMI=y
KBUILD_OPTIONS += CONFIG_ICNSS2_DEBUG=y
KBUILD_OPTIONS += CONFIG_CNSS_QMI_SVC=m
KBUILD_OPTIONS += CONFIG_WCNSS_MEM_PRE_ALLOC=m
KBUILD_OPTIONS += CONFIG_CNSS_UTILS=m
KBUILD_OPTIONS += CONFIG_CNSS_GENL=m
KBUILD_OPTIONS += CONFIG_CNSS_PLAT_IPC_QMI_SVC=m
else ifeq ($(USE_EXTERNAL_CONFIGS),)
KBUILD_OPTIONS += CONFIG_CNSS_OUT_OF_TREE=y
KBUILD_OPTIONS += CONFIG_CNSS2=m
KBUILD_OPTIONS += CONFIG_ICNSS2=m
KBUILD_OPTIONS += CONFIG_CNSS2_QMI=y
KBUILD_OPTIONS += CONFIG_ICNSS2_QMI=y
KBUILD_OPTIONS += CONFIG_CNSS2_DEBUG=y
KBUILD_OPTIONS += CONFIG_ICNSS2_DEBUG=y
KBUILD_OPTIONS += CONFIG_CNSS_QMI_SVC=m
KBUILD_OPTIONS += CONFIG_CNSS_PLAT_IPC_QMI_SVC=m
KBUILD_OPTIONS += CONFIG_CNSS_GENL=m
KBUILD_OPTIONS += CONFIG_WCNSS_MEM_PRE_ALLOC=m
KBUILD_OPTIONS += CONFIG_CNSS_UTILS=m
KBUILD_OPTIONS += CONFIG_CNSS2_SSR_DRIVER_DUMP=y
endif
endif

all: modules

%:
	$(MAKE) -C $(KERNEL_SRC) M=$(M) $@ $(KBUILD_OPTIONS)

modules_install:
	$(MAKE) INSTALL_MOD_STRIP=1 -C $(KERNEL_SRC) M=$(M) modules_install

clean:
	$(MAKE) -C $(KERNEL_SRC) M=$(M) clean
