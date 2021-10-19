# How to run
* build `mylib.a` first
```
g++ -std=c++11 main.cpp ../lib/libmy.a -I ../lib/include
```
or

```
g++ -std=c++11 main.cpp -L ../lib/ -lmy -I ../lib/include
```
* `-L`: Directory where the library resides
* `-l`: library name




