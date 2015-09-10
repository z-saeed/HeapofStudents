heapOfStudents: date.o address.o student.o main.o
	g++ date.o address.o student.o main.o -o heapOfStudents
date.o: date.cpp date.h
	g++ -c date.cpp
address.o: address.cpp address.h
	g++ -c address.cpp
student.o: student.cpp student.h
	g++ -c student.cpp student.h
main.o: main.cpp student.h address.h date.h
	g++ -c main.cpp
clear:
	rm -f *.o