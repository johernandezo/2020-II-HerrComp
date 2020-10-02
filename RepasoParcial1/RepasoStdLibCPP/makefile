#Comentarios
#@: Target
#<: Primera dependencia

CXX = g++
CXXF = -o

all:figura.png

histo.x: prom_histo.cpp
	$(CXX) $< $(CXXF) $@

prom.txt: histo.x
	./$< > $@

figura.png: prom.txt
	gnuplot < plot '$<'

clean:
	rm -f histo.x a.out prom.txt
