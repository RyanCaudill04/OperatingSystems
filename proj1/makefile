flags = -std=c++17 -Wall -I .

all : clean calculate

calculate : calculator.o main.cc
	g++ $(flags) $^ -o $@

calculator : calculator.cc
	g++ -c calculator.cc -o calculator.o

clean : 
	rm -rf main.o calculate calculator.o