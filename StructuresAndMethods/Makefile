PP = g++

main: main.cpp header/LinkedList/LinkedList.hpp \
	header/Queue/Queue.hpp header/LinkedList/Node.hpp \
	header/LinkedList/LinkedList.cpp header/Queue/Queue.cpp \
	header/Tree/Tree.hpp header/Tree/Tree.cpp header/Tree/NodeTree.hpp
	echo "Compilando ..."
	${PP} -c main.cpp ./header/Queue/Queue.cpp ./header/LinkedList/LinkedList.cpp ./header/Tree/Tree.cpp
	${PP} -o main main.o Queue.o LinkedList.o Tree.o
clean:
	rm -rf *o main
