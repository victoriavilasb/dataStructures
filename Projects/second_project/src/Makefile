PP = g++
EXEC=./tp2
TMPOUT=./tp2.testresult

tp2: main.cpp header/Appointment.hpp header/helpers.hpp header/methods.hpp
	echo "Compilando ..."
	${PP} -c main.cpp ./header/Appointment.hpp
	${PP} -o tp2 main.o
clean:
	rm -rf *o ./tp2

# test: $(EXEC)
# 	@bash ./run_tests.sh $(EXEC) $(TMPOUT)