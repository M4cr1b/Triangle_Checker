#include <iostream>

using namespace std;

int main()
{
    //Declaration of variables
    int a,b,c;

    //Accepting user input
    cout<< "Enter 3 numbers."<<endl;
    cout<< "Number 1:";
    cin>> a;
    cout<< "Number 2:";
    cin>> b;
    cout<< "Number 3:";
    cin>> c;

    //If statements to check whether the numbers entered can form a triangle
    if (a+b>c && a+c>b && b+c>a){
        cout<< "The numbers can form a triangle"<<endl;

    //If statements to check whether the triangle is Equilateral, Isosceles, or Scalene
        if (a==b && b==c){
            cout<< "The triangle is Equilateral"<<endl;
        }else if(a==b || b==c){
            cout<< "The triangle is Isosceles"<<endl;
        }else{
            cout<< "The triangle is Scalene"<<endl;
        }

    }else{
        cout<< "The numbers do not form a triangle"<<endl;
    }

    return 0;
}
