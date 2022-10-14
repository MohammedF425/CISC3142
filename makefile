default: 
	make lab

helloWorld:
	c++ ./Exer3/hello_world.cpp && ./a.out
lab4:
	make prob3.17
	make prob3.23
	make prob4.28
	make inflation
	make nutritionCalc

prob3.17:  
	c++ ./lab4/practiceProblem3.17.cpp -o a.out
	./a.out 

prob3.23:  
	c++ ./lab4/practiceProblem3.23.cpp -o a.out
	./a.out


prob4.28:  
	c++ ./lab4/practiceProblem4.28.cpp -o a.out
	./a.out

inflation:
	c++ ./lab4/inflation.cpp -o a.out
	./a.out


nutritionCalc:
	c++ ./
lab4/nutritionCalc.cpp -o a.out
	./a.out

lab5: echo Running Sum of Digits
      g++ ./lab5/sumOfDigits.cpp 
      ./a.out
      
      echo Running Prime Numbers
      g++ ./lab5/primeNumbers.cpp
      ./a.out

      echo Running Linear Regression with input file
      g++ ./lab5/linearRegression.cpp

