#!/bin/bash

clang++-11 -std=c++20 -c Vector.cpp -Xclang -emit-module-interface -o Vector.pcm
clang++-11 -fmodules -fprebuilt-module-path=. -std=c++20 user.cpp Vector.cpp
./a.out ; rm ./a.out *.pcm