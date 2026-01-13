all:
	g++ -O3 test.cpp -o laser_solver

clean:
	rm -f laser_solver
