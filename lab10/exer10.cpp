#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <numeric>

template <class T>
class Comparator { // we pass an object of this class as
                   // third arg to sort function...
public:
    bool operator()(T s1, T s2)
    {
            string temp=s1.substr(s1.find(';')+1);
        for(int j=0;j<6;j++)
            temp = temp.substr(temp.find(';')+1);
        temp = temp.substr(0,temp.find(';'));
    string temp2=s2.substr(s2.find(';')+1);
        for(int j=0;j<6;j++)
            temp2 = temp2.substr(temp2.find(';')+1);
        temp = temp2.substr(0,temp2.find(';'));
        return stoi(temp) < stoi(temp2);
    }
};

using namespace std;

vector<string> readData(){
    ifstream inFile;
    inFile.open("inputFile.txt");

    if(inFile.fail()){
        cout<<"Cant open file error"<<endl;
        exit(EXIT_FAILURE);
    }
    vector<string> input;    
    string data;
    char infile[150]="inputFile.txt";
    inFile.getline(infile,150);
    inFile.getline(infile,150);

    while(getline(inFile,data)){
        input.push_back(data);
    }
    return input;

}

int totalTime(vector<string> vec){
    vector<int> len;
    for(int i =0; i<vec.size();i++){
        string num = vec[i].substr(vec[i].find(';') +1);
        num = num.substr(0,num.find(';'));
        if(num.length()==0)
            num = '0';
        len.push_back(stoi(num));
        // cout<<num<<" "<< i<<endl;

    }
    int sum = accumulate(len.begin(),len.end(),0);
    return sum;
}
// bool myCmp(string s1, string s2)
// {
    string temp=s1.substr(s1.find(';')+1);
        for(int j=0;j<6;j++)
            temp = temp.substr(temp.find(';')+1);
        temp = temp.substr(0,temp.find(';'));
    string temp2=s2.substr(s2.find(';')+1);
        for(int j=0;j<6;j++)
            temp2 = temp2.substr(temp2.find(';')+1);
        temp = temp2.substr(0,temp2.find(';'));

    
//         s1=s1.substr(s1.find(';')+1);
//         for(int j=0;j<6;j++)
//             s1 = s1.substr(s1.find(';')+1);
//         s1 = s1.substr(0,s1.find(';'));

//         s2=s2.substr(s2.find(';')+1);
//         for(int j=0;j<6;j++)
//             s2 = s2.substr(s2.find(';')+1);
//         s2 = s2.substr(0,s2.find(';'));
//      if (s1. == s2.size()) {
//         return s1 < s2;
//     }

//     else {
//         return s1.size() < s2.size();
//     }
// }

vector<string> sortMovies(vector<string> vec){
    vector<string> movies;
    for(int i=0;i<vec.size();i++){
        string temp=vec[i].substr(vec[i].find(';')+1);
        for(int j=0;j<6;j++)
            temp = temp.substr(temp.find(';')+1);
        temp = temp.substr(0,temp.find(';'));
        string temp2 = vec[i].substr(vec[i].find(';')+1);
        temp2 = temp2.substr(temp2.find(';')+1);
        temp2 = temp2.substr(0,temp2.find(';'));
        temp += ": "+temp2;
        movies.push_back(temp);
        cout<<movies[i]<<endl;
    }
     sort(movies.begin(),movies.end());
     for(int i =0; i<10;i++)
        cout<<movies[i]<<endl;

    return vec;
}
int main(){
    vector<string> vec = readData();
    //int sum = totalTime(vec);
    // cout << sum<<endl;

    sortMovies(vec);
    sort(vec.begin(),vec.end(),Comparator<int>())

}



