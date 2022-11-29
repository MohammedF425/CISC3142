#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

vector<int> readData(){
    ifstream inFile;
    inFile.open("forecast.txt");

    if(inFile.fail()){
        cout<<"Cant open file error"<<endl;
        exit(EXIT_FAILURE);
    }
    vector<int> forecast;    
    string words;
    char infile[20]="forecast.txt";
    inFile.getline(infile,20);
    for(int i=0;i<9;i++){
        inFile>>words;
        string num = words.substr(words.find(',') +1, words.length());
        forecast.push_back(stoi(num));
    }
    return forecast;

}

double calcSimpleAver(vector<int> vec, int monthNum){
    double simpleAver = 0;
    for(int i=0;i<monthNum;i++){
        temp--;
        simpleAver += vec[i];
    }
    return simpleAver/monthNum;
}

double calcMovingAver(vector<int> vec, int monthNum){
    double numerator=0;
    double denominator=monthNum;
    for(int i=0; i<monthNum; i++){
        numerator += vec[i];
    }
    cout<<numerator/ denominator<<endl;
    return numerator/denominator;
}

int main(){
    vector<int> forecast= readData();
    double simpleMovingAver=calcSimpleAver(forecast,9);
    cout<<"The simple moving average for " << 9 << " month is " << simpleMovingAver << endl;
    
    simpleMovingAver=calcSimpleAver(forecast,3);
    cout<<"The simple moving average for " << 3 << " month is " << simpleMovingAver << endl;
    
    double weightMoveringAver=calcMovingAver(forecast,3);
    cout<<"The weightage moving average for " << 3 << " month is " << simpleMovingAver << endl;
    
    return 0;


    
}