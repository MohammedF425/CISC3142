#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <double> vecX;
    vector <double> vecY;
    double meanX = 0;
    double meanY = 0;
    double tempX = 0;
    double tempY = 0;
    double numeratorSum = 0;
    double denominatorSum = 0;
    double slope = 0;
    double intercept = 0;
    while(cin>>tempX>>tempY) {
        // cout<<tempX<< " " << tempY<<endl;
        vecX.push_back(tempX);
        vecY.push_back(tempY);
        meanX+=tempX;
        meanY+=tempY;
    }
        meanX/=vecX.size();
        meanY/=vecY.size();
    for(int i=0; i< vecX.size();++i){
        numeratorSum+=(vecX.at(i)-meanX)*(vecY.at(i)-meanY);
        denominatorSum+= (vecX.at(i)-meanX)*(vecX.at(i)-meanX);
    }
    slope = numeratorSum/denominatorSum;
    intercept = meanY - slope*meanX;
    cout<<"The linear regression is y = "<< intercept << " +  " << slope << "x" <<endl;
    return 0;
}

// Pseudocode
// int main(){
//     vector vexX
//     vector vecY
//     double meanX
//     double meanY
//     tempX
//     tempY
//     numeratorSum
//     denominatorSum
//     slope
//     intercept
//     while(cin>>tempX>>tempY)
//         vecX.push_back(tempX)
//         vecY.puhd_back(tempY)
//     for(int i=0; i< vecX;++i){
//         numeratorSum+=(vecX(i)-meanX)*(vexY(i)-meanY)
//         denominatorSum+= (vecX(i)-meanX)*(vecX(i)-meanX)
//            }
//     slope = numeratorSum/denominatorSum
//     intercept = meanY - slope*meanY
//     cout<<"The linear regression is y = "<< intercept << " +  " << slope << "x" <<endl;
// }