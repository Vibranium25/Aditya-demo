#include<iostream>
using namespace std;


main()
{
    char a;
    bool isaLowercaseVowel , isaUppercaseVowel;

    cout <<"\nEnter the Alphabet:-";
    cin >> a;

    isaLowercaseVowel = ( a=='a' || a=='e' || a=='i' || a=='i' || a=='u' );

    isaUppercaseVowel = ( a=='A' || a=='E' || a=='I' || a=='O' || a=='U' );

    if (!isalpha(a))
        cout <<"\nError! Non-alphabetic character";
    else if (isaLowercaseVowel || isaUppercaseVowel) 
        cout << a << " " <<"Is a Vowel..";
    else 
        cout << a << " " <<"Is a Consonant..";

    return 0;
}