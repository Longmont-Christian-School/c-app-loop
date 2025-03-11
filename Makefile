all: clean build

clean: 
	rm -f app

build:
	gcc main.c -o app