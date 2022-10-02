#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double currentCost = 0;
    int numYears = 0; //assuming the number of years entered is meant to be an integer
    float rateInflation =0;
    cout<<"Enter current cost per item"<<endl;
    cin >> currentCost;
    cout<<"Enter number of years until expected purchase of item"<<endl;
    cin >> numYears;
    cout << "Enter the rate of inflation as a percent"<< endl;
    cin >> rateInflation;
    rateInflation /=100;
    for(int i=0; i<numYears; i+=1){
        currentCost *= (1+rateInflation);
    }
    currentCost = round(currentCost*100)/100;
    cout<<"After "<<numYears<<" years the expected cost per unit is $" << currentCost<<endl;
    return 0;
}