# How to run
* build `mylib.a` using `make` first
* build `libHelloLibrary.a` using `cmake` first
 
```
g++ -std=c++11 main.cpp ../lib/libmy.a -I ../lib/include
g++ -std=c++11 main.cpp ../lib/build/libHelloLibrary.a -I ../lib/include
```
or

```
g++ -std=c++11 main.cpp -L ../lib/ -lmy -I ../lib/include
g++ -std=c++11 main.cpp -L ../lib/build/ -lHelloLibrary -I ../lib/include
```
* `-L`: Directory where the library resides
* `-l`: library name




