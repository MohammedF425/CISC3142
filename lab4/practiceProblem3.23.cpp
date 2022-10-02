
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main(){
    vector<int> vec;
    for(int i=0;i<10;i++){
        vec.push_back(i);
    }
    for(vector<int>::iterator i =vec.begin(); i != vec.end(); ++i){
        *i= *(i) * 2;
    }

    for(int i=0;i<10;i++){
    cout<<vec[i]<<endl;
    }
    return 0;
}
