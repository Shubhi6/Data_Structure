OBJ := $(patsubst %.c,%.o,$(wildcard *.c))
CFLAGS := -g -wall
a.out : $(OBJ)
	gcc $(CFLAGS) -o $@ $^

clean:
	rm *.o *.out

