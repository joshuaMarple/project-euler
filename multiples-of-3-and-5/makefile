all: multiples_of_3_and_5 multiplesC++

multiples_of_3_and_5: setup.py multiples.pyx
	python setup.py build_ext --inplace

multiplesC++: multiples.o
	g++ multiples.o -o multiples

multiplesC++.o: multiples.cpp
	g++ -c multiples.cpp

# hello: main.o factorial.o hello.o
# 	g++ main.o factorial.o hello.o -o hello

# main.o: main.cpp
# 	g++ -c main.cpp

# factorial.o: factorial.cpp
# 	g++ -c factorial.cpp

# hello.o: hello.cpp
# 	g++ -c hello.cpp

clean:
	rm -rf *o ./build hello multiples.c *.so multiples