test: testing/test_sailing.c
	cc -coverage -o test_sailing -Wall testing/test_sailing.c sailing.c -I. $(shell pkg-config --libs --cflags cmocka)
	./test_sailing
