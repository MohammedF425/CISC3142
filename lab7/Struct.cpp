#include <iostream>
using namespace std;

struct Pixel{
int C, R;
};
void Display(Pixel P){
cout << "Col "<< P.C << " Row " << P.R << endl;
}
int main(){
Pixel X = {40,50}, Y, Z;
Z = X; // Z, 40,50
X.C += 10; // X, 50,50
Y = Z; // Y, 40,50
Y.C += 10; // Y 50,50
Y.R += 20; // Y 50, 70
Z.C -= 15; // Z 25, 50
Display(X); //Col 50 Row 50
Display(Y); //Col 50 Row 70
Display(Z); //Col 25 Row 50
return 0;
}