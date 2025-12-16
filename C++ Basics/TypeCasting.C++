#include<iostream>   
using namespace std;

int main()
{
    // Type Casting

    // int ---> float 
    int a = 4;
    float b = float(a);
    cout<<"int :"<<a<<". float :"<<b<<endl;


    // float ---> int 

    float c = 3.5;
    int d = int(c);
    cout<<"float :"<<c<<" int :"<<d<<endl;

    // char ---> int 
    char e = 'd';
    int f = int(e);
    cout<<"char :"<<e<<"  int :"<<f<<endl;

    //int ---> char

    int g = 89;
    char h = char(g);
    cout<<"int :"<<g<<" char :"<<h<<endl;

    //int ---> bool 
    int i = 5;
    bool j = bool(i);
    cout<<"int :"<<i<<" bool :"<<j<<endl;


    //bool ---> int
    bool k = true;
    int l = int(k);
    cout<<"bool :"<<k<<" int :"<<l<<endl;


    // char ----> bool
    char m = 'H';
    bool n = bool(m);
    cout<<"char :"<<m<<" bool :"<<n<<endl;


}