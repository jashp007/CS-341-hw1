all: Homework_1.o
	g++ -g Homework_1.o -o Homework_1
Homework_1.o: main.cpp
	g++ -g main.cpp -c -o Homework_1.o
clean:
	rm -rf Homework_1.o Homework_1 d