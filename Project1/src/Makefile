PP = g++
EXEC=./tp1
TMPOUT=./tp1.testresult

tp1: main.cpp header/LinkedList.hpp header/Queue.hpp header/Node.hpp header/LinkedList.cpp header/Queue.cpp
	echo "Compilando ..."
	${PP} -c main.cpp ./header/Queue.cpp ./header/LinkedList.cpp
	${PP} -o tp1 main.o Queue.o LinkedList.o 
clean:
	rm -rf *o tp1

test: $(EXEC)
	@bash ./run_tests.sh $(EXEC) $(TMPOUT)