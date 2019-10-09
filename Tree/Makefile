PP = g++

tree: main.cpp header/Tree.hpp header/Node.hpp header/Tree.cpp
	echo "Compilando ..."
	${PP} -c main.cpp ./header/Tree.cpp
	${PP} -o tree main.o Tree.o 

clean:
	rm -rf *o tree
