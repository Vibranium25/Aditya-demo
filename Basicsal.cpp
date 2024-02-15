//HRA is 10% of basic pay TA is 5% of basic pay tax is 2% on total salary cal net salary 
#include<iostream>
using namespace std;

main()
{
    int Bsal,HRA,TA,Tax,Tsal;

    cout <<"\nEnter the Basic pay..";
    cin >>Bsal ;

    if (Bsal<=0)
        cout <<"\nInvalid amount..";
    else
    HRA = (10 * Bsal) / 100;
        cout <<"\nThe HRA ="<<HRA;
    TA =(5 * Bsal) / 100;
        cout <<"\nThe TA ="<<TA;
    Tsal=Bsal+HRA+TA;
        cout <<"\nThe Total Salary ="<<Tsal;
    Tax=(2 * Tsal) / 100;
    cout <<"\nTax ="<<Tax;
}
