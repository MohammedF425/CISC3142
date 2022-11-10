#include <iostream>

using namespace std;

class Rectangle
{
private:
    float length;
    float width;
public:
    Rectangle(/* args */);
    ~Rectangle();
    void setlength(float length); //sets the length data member
    void setwidth(float width); //sets the width data member
    float perimeter(); //calculates and returns the perimeter
    float area(); //calculates and returns the perimeter of the rectangle
    void show(); //displays the length and width of the rectangle
    int sameArea(Rectangle rec); //returns 1 if enter rectangle has the same area, 0 otherwise

};

Rectangle::Rectangle(/* args */)
{
}

Rectangle::~Rectangle()
{
}

void Rectangle::setlength(float length){
    this-> length = length;
}

void Rectangle::setwidth(float width){
    this->width = width;
}

float Rectangle::perimeter(){
    return 2*width + 2* length;
}

float Rectangle::area(){
    return length*width;
}

void Rectangle::show(){
    cout<<"The length and width of the rectangle are " << length << " " << width << ", respectively.\n";
}

int Rectangle::sameArea(Rectangle rec){
    if(area()==rec.area()){
        return 1;
    }
    return 0;
}


int main(){
    Rectangle rec1;
    rec1.setlength(5);
    rec1.setwidth(2.5);
    Rectangle rec2;
    rec2.setlength(5);
    rec2.setwidth(18.9);
    rec1.show();
    cout<<"Rectangle 1's area, " << rec1.area()<< ", perimeter, "<< rec1.perimeter()<<endl;
    rec2.show();
    cout<<"Rectangle 2's area, " << rec2.area()<< ", perimeter, "<< rec2.perimeter()<<endl;


    rec1.sameArea(rec2)==1 ? cout<<"The two Rectangles have the same area\n" : cout<<"The two Rectangles have different areas\n";

    rec1.setlength(15);
    rec1.setwidth(6.3);
    rec1.show();
    cout<<"Rectangle 1's area, " << rec1.area()<< ", perimeter, "<< rec1.perimeter()<<endl;
    rec2.show();
    cout<<"Rectangle 2's area, " << rec2.area()<< ", perimeter, "<< rec2.perimeter()<<endl;

    rec1.sameArea(rec2)==1 ? cout<<"The two Rectangles have the same area\n" : cout<<"The two Rectangles have different areas\n";


    return 0;
}