all:
	g++ -g ./Classes/*.cpp ./Daos/*.cpp ./Tools/*.cpp main.cpp -o main.exe
	./main.exe