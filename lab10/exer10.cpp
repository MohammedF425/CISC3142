#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <numeric>


using namespace std;

class Movie{
    public:
    int year;
    int len;
    string title;
    string subject;
    string actor;
    string actress;
    string director;
    int popularity;
    string Awards;
    string image;
    // Movie(int a,int b, string c,string d,string e,string f,string g,int h,string i,string j ){
    //  year=a;
    //  len=b;
    //  title=c;
    //  subject=d;
    //  actor=e;
    //  actress=f;
    //  director=g;
    //  popularity=h;
    //  Awards=i;
    //  image=j;
    // }

    bool operator < (const Movie& movie) const
    {
        return (popularity<movie.popularity);
    }
    // bool operator==(const Movie& movie) const 
    // { 
    //     return (title == movie.title);
    // }


};

string getLine(string data,ifstream& infile, char ch){
    getline(infile, data, ch);
    if(data==""){
        data ='0';
    }
    return data;

}

vector<Movie> readData(){
    ifstream inFile;
    inFile.open("inputFile.txt");

    if(inFile.fail()){
        cout<<"Cant open file error"<<endl;
        exit(EXIT_FAILURE);
    }
    vector<Movie> input;    
    string data;
    char infile[150]="inputFile.txt";
    inFile.getline(infile,150);
    inFile.getline(infile,150);
    int i=0;
    while(getline(inFile,data,';')){
        Movie temp;
        
        i++;
        temp.year = stoi(data);
        temp.len=stoi(getLine(data,inFile,';'));
        temp.title=getLine(data,inFile,';');
        temp.subject=getLine(data,inFile,';');
        temp.actor=getLine(data,inFile,';');
        temp.actress=getLine(data,inFile,';');
        temp.director=getLine(data,inFile,';');
        temp.popularity=stoi(getLine(data,inFile,';'));
        temp.Awards=getLine(data,inFile,';');

        temp.image=getLine(data,inFile,'.')+".png";
        getline(inFile,data);
        
        input.push_back(temp);
    }
    return input;

}

// void findMovie(string title, vector<Movie> movies){
//     // find(movies.begin(),movies.end(),title);
// }




int main(){
    vector<Movie> movies = readData();
    sort(movies.begin(), movies.end());
    for(int i=0;i<20;i++){
        cout<<movies[i].popularity<<endl;
    }

    int sum;
    vector<int>temp;
    for(int i=0;i<movies.size();i++){
        temp.push_back(movies[i].year);
    }
    sum=accumulate(temp.begin(),temp.end(),0);
    cout<<sum<<endl;
    

    //find(movies.begin(),movies.end(),title);

    // COULDN'T FINISH FIND OR UNIQUE AS I WAS HAVING TROUBLE WITH THE OPERATOR 
    // OVERLOAD PART
}