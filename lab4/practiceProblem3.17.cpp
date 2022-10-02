#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(){
    string input;
    vector<string> inputs;
    cout<<"Keep entering a word, or 1 to stop\n";
    while(cin >> input && input != "1"){
        input[0]=toupper(input[0]);
        inputs.push_back(input);
    }
    for(int i=0;i<inputs.size();i++){
        cout << inputs[i] + " ";
        if((i+1)%8==0)
            cout<< endl;
    }


    return 0;
}
