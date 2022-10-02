#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main(){
    vector<int> vec;

    for(int i=1;i<11;i++){
        vec.push_back(i);
    }
    for(int j : vec){
        j*=2;
        cout<<j<<endl;
    }
}

 
//another way of doing it
// int main(){
//     vector<int> vec;
//     for(int i=0;i<10;i++){
//         vec.push_back(1);
//     }
//     for(vector<int>::iterator it =vec.begin(); it != vec.end(); ++it){
//         *it= *(it) * 2;
//     }

//     for(int i=0;i<10;i++){
//     cout<<array[i]<<endl;
//     }
//     return 0;
// }
