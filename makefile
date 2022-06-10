all:
	g++ -g ./*/*.cpp main.cpp -o main.exe
	./main.exe