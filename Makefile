test: test_sailing.c
	cc -o test_sailing -Wall test_sailing.c sailing.c $(shell pkg-config --libs --cflags cmocka)
	./test_sailing
