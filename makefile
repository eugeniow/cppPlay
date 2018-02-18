main : list 
	g++ -o  main lList.o main.cpp 
 
list: 
	g++ -c lList.h lList.cpp

clean : 
	rm main

test : main
	./main
