#include<iostream>
using namespace std;

main()
{
    float a ;
    float b ;
    float c ;

    cout <<"\nEnter the number a..";
    cin >>a ;

    cout <<"\nEnter the number b..";
    cin >>b;

    cout <<"\nEntered Nos : " <<a<< " , " <<b;

    c = a;

    a = b;

    b = c;

    cout <<"\n\nSwaped Nos : " <<a<<" , "<<b;
    
    return 0;

}