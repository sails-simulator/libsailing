CC=gcc
CFLAGS=-I. -std=gnu99 -Wall -lm
DEPS = boat.h physics.h sailing.h wind.h
OBJ = boat.o sailing.o wind.o physics.o testing/test_sailing.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

test: $(OBJ)
	echo ${PKG_CONFIG_PATH}
	echo ${LD_LIBRARY_PATH}
	$(CC) -coverage -o test_sailing $^ $(CFLAGS) $(shell pkg-config --libs --cflags cmocka)

clean:
	rm *.o
