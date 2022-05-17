
build: main.o foo.o
	g++ -o main.elf $^

main.o: main.cpp
	g++ -c $^

foo.o: foo.cpp
	g++ -c $^

clean:
	rm *.elf *.o
