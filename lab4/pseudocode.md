**Nutrition Calculator**<br>
```
//include all the necessary files
include <iostream>
include string
include <cmath>
using namespace std

int main (){
	
	string mode //will represent users choice of continuing or stopping the program
	int lethalDose //will represent the lethal dose to the given mouse
	int mouseMass // will represent the mouse's mass
	int massDieter // will represent the dieters target weight // assuming they are going to lose weight
	int lethalAmountSoda // will represent the minimum lethal amount of diet soda in terms of the dieter
	const float SodaAS // represents the amount of artificial sweeteners in a diet soda pop
	float ratio // will represent the ratio of lethal dose of A.S over the subjects mass in grams

	prompt user to enter something to continue running or 0 to stop
	while(user enter something other than 0){
		prompt user to enter lethalDose value and assign it to lethalDose
		prompt user to enter mouseMass value and assign it to mouseMass
		prompt user to enter massDieters value and assign it it massDieters
		set ratios value to lethalDose/mouseMass
		set lethalAmountSoda to ratio*massDieter / sodaAS
		print lethalAmount-1 with promper heading
		prompt user to enter something to continue running the program or 0 to stop


	} 

	return 0;

}


```


**Inflation**<br>
```
//include iostream and cmath
using namespace std;

int main(){

	double currentCost // represents current cost of item
	int numYears // represents # of years till purchase
	float rateInflation //represents the rate of inflation in percentage form
	prompt user to enter current cost of item and set currentCost equal to that
	prompt user to enter number of years till purchase and set numYears equal to that
	promp user to enter rate of inflation and set rateInflation to that
	change rateInflation to decimal form over percentage by /100
	for(numyears){
		currentCost*=(1+rateInflation);
	}
	print the cost of the object after numYears years, adjusted for inflation
}

```
