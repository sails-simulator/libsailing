test: test_sailing.c
	gcc -v -o test_sailing test_sailing.c $(shell pkg-config --libs --cflags cmocka)
