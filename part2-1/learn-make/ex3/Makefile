
# C++ Compiler settings
CC := g++
CFLAGS := -std=c++98 -pedantic-errors
EXEC := main.elf

# OS commands settings
ECHO := echo
RM := rm

build: main.o foo.o
	$(CC) -o $(EXEC) $^ && $(ECHO) "compile succussfully"

%.o: %.cpp
	$(CC) $(CFLAGS) -c $^

clean:
	$(RM) *.elf *.o




# Previous Makefile in ex2			\
						\
build: main.o foo.o				\
	g++ -o main.elf $^			\
						\
main.o: main.cpp				\
	g++ -c $^				\
						\
foo.o: foo.cpp					\
	g++ -c $^				\
						\
clean:						\
	rm *.elf *.o				\


