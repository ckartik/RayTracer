OBJ = main.o

RayTracer: $(OBJ)
	g++ $(OBJ) -o RayTracer

main.o:
		g++ -c main.cpp

clean:
	rm -f $(OBJ) RayTracer
