PROGRAM_NAME := simple
VER := 0.3.36
DIST := ../dist
FILE := string_savant
BUILD_DIR := $(DIST)/build
SOURCE_DIR := .
SOURCE_FILE := $(SOURCE_DIR)/$(FILE).c
OBJECT_FILE := $(BUILD_DIR)/$(FILE).o
DISABLE_WARNING_FLAG := -w # -Wno-implicit-function-declaration -Wno-int-conversion
LINK_FLAGS := -shared
LIB_FLAGS := -L../../../simple/dist/ -l$(PROGRAM_NAME)
RELOCATION_FLAG := -fPIC

OSNAME := $(shell uname)
ifeq ($(OSNAME), Darwin)
LIB_FILE := $(DIST)/$(FILE).dylib
else
LIB_FILE := $(DIST)/$(FILE).so
endif

# Dependency information
SIMPLE_MAIN_SOURCE_DIR := ../../../simple/sources
SIMPLE_MAIN_BUILD_DIR := ../../../simple/dist/build
SIMPLE_MAIN_MAKEFILES_DIR := ../../../simple/makefiles
SIMPLE_MAIN_SOURCE_FILES := $(wildcard $(SIMPLE_MAIN_SOURCE_DIR)/*.c)
SIMPLE_MAIN_OBJECT_FILES := $(addprefix $(SIMPLE_MAIN_BUILD_DIR)/,$(notdir $(SIMPLE_MAIN_SOURCE_FILES:%.c=%.o)))

# Folder creation commands
CREATE_BUILD_DIR := mkdir -p $(BUILD_DIR)

# Compile commands
COMPILE_OBJECT_FILE = $(CC) $(RELOCATION_FLAG) $(SOURCE_FILE) $(DISABLE_WARNING_FLAG) -c -o $(OBJECT_FILE)
COMPILE_LIBRARY := $(CC) $(LINK_FLAGS) $(OBJECT_FILE) $(LIB_FLAGS) -o $(LIB_FILE)
BUILD_SIMPLE_MAIN := $(MAKE) -f Makefile-Unix.mk -C $(SIMPLE_MAIN_MAKEFILES_DIR)

# .SILENT:

$(OBJECT_FILE): $(SOURCE_FILE)
	$(BUILD_SIMPLE_MAIN)
	$(CREATE_BUILD_DIR)
	$(COMPILE_OBJECT_FILE)
	$(COMPILE_LIBRARY)

build: $(LIB_FILE)

clean:
	rm -rf $(DIST)
	$(CREATE_BUILD_DIR)

all: build
.PHONY: build all uninstall run
