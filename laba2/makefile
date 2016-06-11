./bin/main: bin obj ./obj/source.o ./obj/source1.o
	gcc ./obj/source.o ./obj/source1.o -o ./bin/main -lm

./obj/source.o: ./src/source.c
	gcc -c ./src/source.c -o ./obj/source.o

./obj/source1.o: ./src/source1.c
	gcc -c ./src/source1.c -o ./obj/source1.o

bin:  
	mkdir bin

obj: 
	mkdir obj

.PHONY: clean
clean:
	rm -f -r bin/ obj/
