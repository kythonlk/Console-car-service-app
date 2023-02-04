all: main.o product.o user.o utilities.o
    g++ main.o product.o user.o utilities.o -o main

main.o: main.cpp
    g++ -c main.cpp

product.o: product.cpp
    g++ -c product.cpp

user.o: user.cpp
    g++ -c user.cpp

utilities.o: utilities.cpp
    g++ -c utilities.cpp

clean:
    rm -f *.o main
