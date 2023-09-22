.PHONY: build run test clean

build:
	mkdir -p build
	cd ./build; cmake ..; make all

run:
	./build/*main

test:
	./build/*tests

clean:
	rm -rf ./build/