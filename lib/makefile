MY_CPP_VER = 11
$(info    the cpp version is $(MY_CPP_VER))

all: src.o
	ar rcs libmy.a src.o 

src.o: ./src/src.cpp
	g++ -std=c++${MY_CPP_VER} -I ./include -c ./src/src.cpp

clean:
	rm *.o *.a


