THEOS_DEVICE_IP = 127.0.0.1
THEOS_DEVICE_PORT = 2222
ARCHS = armv7
TARGET = iPhone:7.1

include theos/makefiles/common.mk

TOOL_NAME = rootdaemonserver
rootdaemonserver_FILES = main.mm Reachability.m
rootdaemonserver_FRAMEWORKS = UIKIT MobileCoreServices SystemConfiguration
include $(THEOS_MAKE_PATH)/tool.mk