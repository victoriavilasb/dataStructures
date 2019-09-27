PP = g++
tp1: main.cpp header/LinkedList.hpp header/Queue.hpp header/Node.hpp
	echo "Compilando ..."
	${PP} -c main.cpp ./header/Queue.cpp ./header/LinkedList.cpp
	${PP} -o tp1 main.o Queue.o LinkedList.o 
clean:
	rm -rf *o tp1