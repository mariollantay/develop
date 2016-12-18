CC=g++
CXXFLAGS=-Wall -I../inc/
DEPS=../inc/my_class.h
OBJ=main.o my_class.o

%.o: %.c $(DEPS)
	$(CC) -c -o %@ %< $(CXXFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CXXFLAGS)


