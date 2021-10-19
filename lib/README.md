# How to run
```
g++ -std=c++0x -I ./include -c ./src/src.cpp 
ar rcs libmy.a src.o
```

* `-c` means to create an intermediary object file, rather than an executable
* `r` means to insert with replacement
* `c` means to create a new archive
* `s` means to write an index

