add-nbo.exe : add-nbo.o
	g++ -o add-nbo.exe add-nbo.o

add-nbo.o : add-nbo.h add-nbo.cpp
	g++ -c -o add-nbo.o add-nbo.cpp

clean :
	rm -f *.o
