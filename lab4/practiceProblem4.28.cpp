#include <iostream>
#include <string>
using namespace std;
// #include <stdio.h>
  

int main()
{
    int integerType;
    char charType;
    float floatType;
    double doubleType;
    bool booleanType;
    string stringType;
    
    cout<<"Size of integer is: "<< sizeof(integerType) <<endl;

    cout<< "Size of float is: "<< sizeof(floatType) << endl;
 
    cout<<"Size of double is: "<< sizeof(doubleType) << endl;

    cout<<"Size of boolean is: "<< sizeof(booleanType) << endl;

    cout<<"Size of character is: "<< sizeof(charType) << endl;

    cout<<"Size of string is: "<< sizeof(stringType) << endl;
  
    return 0;
}