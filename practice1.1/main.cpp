#include<iostream>
#include"Fraction.h"

using namespace std;

int main()
{
    Fraction f1, f2;
    cout << "input fraction 1\n";
    f1 = input();

    cout << "\ninput fraction 2\n";
    f2 = input();

    cout << "\n2 fractions are\n";
    output(f1);
    output(f2);

    cout << "\nAfter reduce 2 fractions\n";
    output(reduce(f1));
    output(reduce(f2));

    cout << "\nInverse of 2 fractions are\n";
    output( inverse(f1) );
    output( inverse(f2) );

    cout << "\nSum of 2 fractions: "; 
    output( add(f1, f2) );

    cout << "\ncompare 2 fractions\n";
    int comp = compare(f1, f2);
    if(!comp)
        cout << "equal";
    else if(comp == -1)
        cout << "f2 is bigger";
    else 
        cout << "f1 is bigger";

    return 0;
}