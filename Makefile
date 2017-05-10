OBJ = main.o Vec3.o

RayTracer: $(OBJ)
	g++ $(OBJ) -o RayTracer

main.o: main.cpp
		g++ -c main.cpp
clean:
	rm -f $(OBJ) RayTracer
