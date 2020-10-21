
all: example1.x

test: test-factorial.x test-catch2.x test_googletest.x


%.o: %.cpp %.h
	g++ -c $<

example1.x: example1.o factorial.o
	g++ $^ -o $@

test-factorial.x: test-factorial.o factorial.o
	g++ $^ -o $@

test-catch2.x: test-catch2.o factorial.o
	g++ $^ -o $@

test_googletest.x: test_googletest.o factorial.o
	g++ $^ -o $@ -lgtest

clean:
	rm -f *.x *.o a.out
