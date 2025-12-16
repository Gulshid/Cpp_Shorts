#include<iostream>
using namespace std;


int main()
{

    // AND (&) compares bits and returns 1 only if both bits are 1.

    // OR (|) returns 1 if any one of the bits is 1.

    // XOR (^) returns 1 only if the bits are different.

    // NOT (~) flips the bits (converts 1 to 0 and 0 to 1). 


      // 5 and 2 

        /*
            Bitwise '&'
                5 & 2 ====> 0101
                            0010
                        -------------
Answer in Binary ==>        0000         ===>   Answer in decimal = 0
                        -------------

            Bitwise '|'
                5 | 2 ====> 0101
                            0010
                        -------------
Answer in Binary ==>        0111        ===>   Answer in decimal = 7
                        -------------

            Bitwise '^'
                5 ^ 2 ====> 0101
                            0010
                        -------------
Answer in Binary ==>        0111        ===>   Answer in decimal = 7
                        -------------

            Bitwise '~' (Unary NOT)
                ~5     ====> 0101 (5)
                            ~0101 = 1010  ===>  ~5
                        -------------
                            -6      Answer in decimal 
                        -------------

            Bitwise '~' (Unary NOT)
                ~2    ====>  0010   
                            --------
                            1101    ====> ~2

                            1101 = -3 Answer in decimal

        */


    int a = 5 ; // convert into binary code. ---> 5 in binary = 0101
    int b= 2; //  convert into binary code. ---> 2 in binary = 0010

    cout<<"Bitwise & : (a & b) :"<<(a & b)<<endl;
    cout<<"Bitwise | : (a | b) :"<<(a | b)<<endl;
    cout<<"Bitwise ^ : (a ^ b) :"<<(a ^ b)<<endl;
    cout<<"Bitwise ~ : ~a :"<<~a<<endl;
    cout<<"Bitwise ~ : ~b :"<<~b<<endl;
    




    
}

