#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string mode = "";
    int lethalDose = 0;
    int mouseMass = 0;
    int massDieter = 0;
    int lethalAmountSoda = 0;
    float sodaAS = 0.001; //amount of artificial sweetener in soda
    float ratio = 0; //lethal amount of artificial sweetener per gram in mass
    cout<<"Enter 0 to stop program or anything else to continue"<<endl;
    while(cin>>mode && mode !="0"){
        cout<<"Enter the amount of artificial sweetener needed to kill a mouse rounded in grams"<<endl;
        cin>> lethalDose;
        cout << "Enter the mass of the given mouse rounded in grams"<< endl;
        cin>> mouseMass;
        ratio = (float)lethalDose/mouseMass; 
        cout<<"Enter the target weight of the dieter in grams. (454 grams per lb)"<<endl;
        cin >> massDieter;
        lethalAmountSoda = (ratio * massDieter) / (sodaAS) -1 ;//(lethal amount artifical sweetener for dieter) / (sodaAS)
        // which gives the minimum lethal amount of soda,  (-1) to not reach that lethal amount 
        cout << "The most diet soda the dieter can drink before reaching the lethal amount of artificial sweetener";
        cout << " is "<<lethalAmountSoda<<endl;//<< lethalAmountSoda;
        cout<<"Enter 0 to stop program or anything else to continue"<<endl;

    }
    


}
