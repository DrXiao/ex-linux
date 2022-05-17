
build: main.o foo.o
	@echo doing the target $@
	g++ -o main.elf $^

main.o: main.cpp
	g++ -c $^

foo.o: foo.cpp
	g++ -c $^

clean:
	@echo doing the target $@
	rm *.elf *.o
