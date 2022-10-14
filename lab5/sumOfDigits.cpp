#include <iostream>
#include <string>
using namespace std;

int main(){
int num;
int sum=0;
cout << "Enter a positive number: ";
cin >> num;
int temp = num;
while(temp>0){
    sum+= temp%10;
    temp /= 10;
}
cout<< "\nSum of the digits of the number "<< num<<" is: "<<sum<<endl;

}

//Pseudocode
// Sum of digits:
// int num
// Int sum
// Prompt user to enter num
// cin>>num;
// int temp =num
// while(num>)
// 	sum+=temp%10;
//  temp/=10
// }
// print num and sum
