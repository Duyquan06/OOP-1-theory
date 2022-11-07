#include<iostream>
#include<math.h>
#include"Fraction.h"

using namespace std;

Fraction input()
{
    Fraction temp;

    cout << "Enter numerator: ";
    cin >> temp.num;

    do 
    {
        cout << "Enter denominator: ";
        cin >> temp.den;
        if(!temp.den)
            cout << "enter denominator again\n";
    }while(!temp.den);

    if(temp.den < 0)
    {
        temp.num *= -1;
        temp.den *= -1;
    }

    return temp;
}

void output(Fraction f)
{
    if( f.den == 1 )
    {
        cout << f.num << "\n";
        return;
    }
    cout << f.num << "/" << f.den << "\n";
}


int GCD(int a, int b)
{
    if(a == 0)
        return b;
    
    if(b == 0)
        return a;
    
    a = abs(a);
    b = abs(b);

    if( a > b )
        return GCD( a - b, b );
    return GCD( a, b - a );
}

Fraction reduce(Fraction f)
{
    int gcd = GCD(f.num, f.den);
    
    f.num = f.num / gcd;
    f.den = f.den / gcd;

    return f; 
}


Fraction inverse(Fraction f)
{
    f = reduce(f);

    int temp = f.num;
    f.num = f.den;
    f.den = temp;

    if(f.den < 0)
    {
        f.num *= -1;
        f.den *= -1;
    }
    return f;
}

Fraction add(Fraction a, Fraction b)
{
    Fraction sum;

    sum.num = a.num * b.den + b.num * a.den;
    sum.den = a.den * b.den;
    sum = reduce(sum);

    return sum;
}

int compare(Fraction a, Fraction b)
{
    a = reduce(a);
    b = reduce(b);

    if(a.num == b.num && a.den == b.den)
        return 0;

    if( (a.num * b.den) > (b.num * a.den) )
        return 1;
    
    return -1;
}