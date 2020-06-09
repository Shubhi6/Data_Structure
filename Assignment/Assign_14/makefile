OBJ := $(patsubst %.c,%.o,$(wildcard *.c))
CFLAGS:=-g -Wall -Wextra
a.out : $(OBJ)
	gcc $(CFLAGS) -o $@ $^
clean:
	rm *.o *.out



