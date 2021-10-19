MY_CPP_VER = 11
$(info    the cpp version is $(MY_CPP_VER))

all: main.o src.o
	g++ main.o src.o -o output.out

main.o: ./demo/main.cpp
	g++ -std=c++0x -I ./include -c ./demo/main.cpp

src.o: ./src/src.cpp
	g++ -std=c++${MY_CPP_VER} -I ./include -c ./src/src.cpp

clean:
	rm *.o output.out


