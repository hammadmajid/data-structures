COMPILER := clang++
SRC_DIR := src
BUILD_DIR := build

compile:
	$(COMPILER) $(SRC_DIR)/main.cpp -o $(BUILD_DIR)/a.out

run:
	$(BUILD_DIR)/a.out