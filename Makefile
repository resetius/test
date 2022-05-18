main.exe: main.o roman2int.o
	gcc $^ -o $@

%.o: %.c
	gcc -c $<

clean:
	rm -f *.o
	rm main.exe
