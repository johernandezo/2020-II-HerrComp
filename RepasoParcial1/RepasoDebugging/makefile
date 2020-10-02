#Comentario
#@:target
#<:la primera dependencia

CXX = g++
F1 = -g
F2 = -Wall -Werror
F3 = -fsanitize=leak -fsanitize=address -fsanitize=undefined

all: datos.txt

a.out: fixing.cpp
	$(CXX) $(F1) $(F2) $<

datos.txt: a.out
	./$< > $@

clean:
	rm -f a.out datos.txt 
