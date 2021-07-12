sin_cos : fac.o sinx.o cosx.o tang.o main.o 
	g++ fac.o sinx.o cosx.o main.o tang.o -o sin_cos
fac.o : fac.cpp sin_cos.hpp
	g++ -c fac.cpp -o fac.o
sinx.o : sinx.cpp fac.cpp sin_cos.hpp
	g++ -c sinx.cpp  -o sinx.o
cosx.o : cosx.cpp fac.cpp sin_cos.hpp
	g++ -c cosx.cpp  -o cosx.o
tang.o : tang.cpp sin_cos.hpp
	g++ -c tang.cpp -o tang.o
main.o : main.cpp sin_cos.hpp
	g++ -c main.cpp -o main.o
clean :
	rm *.o sin_cos

