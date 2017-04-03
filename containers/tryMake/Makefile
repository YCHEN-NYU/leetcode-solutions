output: main.o msg.o
	g++ main.o msg.o -o output

main.o: main.cpp
	g++ -c main.cpp

msg.o: msg.h msg.cpp
	g++ -c msg.cpp

clean:
	rm *.o output

target: dependencies
	action