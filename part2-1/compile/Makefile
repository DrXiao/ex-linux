CC := gcc
AS := as
LD := ld

all:
	$(CC) -S main.c foo.c
	$(AS) -o main.o main.s
	$(AS) -o foo.o foo.s
	$(LD) -m elf_x86_64 -dynamic-linker /lib64/ld-linux-x86-64.so.2 \
		-o main.elf main.o foo.o /lib/x86_64-linux-gnu/crt1.o \
		/lib/x86_64-linux-gnu/crti.o \
		/lib/gcc/x86_64-linux-gnu/9/crtbegin.o \
		-lc /lib/gcc/x86_64-linux-gnu/9/crtend.o \
		/lib/x86_64-linux-gnu/crtn.o

clean:
	rm *.s *.o *.elf
