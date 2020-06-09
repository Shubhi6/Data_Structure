OBJ := $(patsubst %.c,%.o,$(wildcard *.c))
CFLAGS := -g 
a.out : $(OBJ)
	gcc $(CFLAGS) -o $@ $^

clean:
	rm *.o *.out

