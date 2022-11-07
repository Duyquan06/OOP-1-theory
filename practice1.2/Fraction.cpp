#include<iostream>
#include<math.h>
#include"Fraction.h"

using namespace std;

Fraction *input(int &size)
{
   cout << "Enter the size of fraction array: ";
   cin >> size;

   Fraction *arr = new Fraction[size];
   
   for(int i = 0; i < size; i++)
    {
        cout << "Enter numberator and denominator of fraction " << i + 1 << ": ";

        cin >> arr[i].num;
        do
        {
            cin >> arr[i].den;
            if(!arr[i].den)
                cout << "enter the denominator again\n";
        } while(!arr[i].den);

        if(arr[i].den < 0)
        {
            arr[i].num *= -1;
            arr[i].den *= -1;
        }
    }

    return arr;
}

void output(Fraction *arr, int size)
{
   for(int i = 0; i < size; i++)
   {
      if(arr[i].den == 1)
        cout << arr[i].num;
      else 
        cout << arr[i].num << "/" << arr[i].den;

      if(i != size - 1 )
        cout  << " ,";
   }

   cout << "\n";
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