OBJ:= $(patsubst %.c, %.o,$(wildcard *.c))
Hashing.out :$(OBJ)
	gcc -o $@ $^
clean:
	rm *.o *.out
