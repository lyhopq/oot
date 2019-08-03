BUILD_DIR = _build
DEST_DIR = ${BUILD_DIR}/test
DEST_EXE_NAME = oot-test

.PHONY:build

all: build
	cd $(BUILD_DIR);  make -j8
run: build
	./$(DEST_DIR)/$(DEST_EXE_NAME)
clean:
	rm -rf $(BUILD_DIR)
build:
	mkdir -p $(BUILD_DIR);cd $(BUILD_DIR);cmake ..