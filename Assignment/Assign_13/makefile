OBJ := $(patsubst %.c,%.o,$(wildcard *.c))
CFLAGS:=-g -Wall 
a.out : $(OBJ)
	gcc $(CFLAGS) -o $@ $^
clean:
	rm *.o *.exe



