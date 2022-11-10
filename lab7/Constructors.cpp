class Sample
{
private:
int x;
double y;
public :
Sample(); //Constructor 1
Sample(int); //Constructor 2
Sample(int, int); //Constructor 3
Sample(int, double); //Constructor 4
};

Sample::Sample(){
    this->x = 0;
    this->y = 0;
}

Sample::Sample(int val1){
    this->x = val1;
    this->y = 0;
}

Sample::Sample(int val1, int val2){
    this->x = val1;
    this->y = val2;
}

Sample::Sample(int val1, double val2){
    this->x = val1;
    this->y = val2;
}