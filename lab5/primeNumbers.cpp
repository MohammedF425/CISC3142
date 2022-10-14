#include <iostream>
using namespace std;
int main(){
    cout<<"Prime numbers from 3-100: ";
    for(int i = 3; i<=100; i++){
        bool prime = true;
        for(int j=2; j<i; j++){
            if(i%j==0)
                prime = false;
        }
        if(prime)
            cout<< i << " ";
    }


    return 0;
}

//Psuedocode
// Prime numbers
// for(int i=3, i<=100;i++){
// 	bool prime = true
// 	for(int j=2;j<i;j++){
// 		if(i%j ==0)
// 			Prime = false

// 	}
// }

