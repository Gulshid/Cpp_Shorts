#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    // Arthematic Operator 
    cout<<" *** Arthematic Operator ***"<<endl;
    float a,b;
    cout<<"Enter the value for a :";
    cin>>a;

    cout<<"Enter the value for b :";
    cin>>b;

    // Addition       ---> +
    cout<<"The Addition of two value :"<<a + b <<endl;


    // Subtraction    ---> - 
    cout<<"The Subtraction of two value :"<<a - b <<endl;


    // Multiplication ---> *
    cout<<"The Multiplication of two value :"<<a * b <<endl;


    // Division       ---> /
    cout<<"The Division  of two value :"<<a / b <<endl;

    // Modulas        ---> %
    cout<<"The Addition of two value :"<< fmod(a,b) <<endl;
}