#include<iostream>
#include "Fraction.h"
#include"io.h"

using namespace std;

int main()
{
    int size, oder;
    cout << "Enter size: ";
    cin >> size;

    cout << "Enter oder (1 = asceding, 2 = descending): ";
    cin >> oder;

   Fraction *arr; // có thể đổi kiểu dữ liệu của *arr
   process(size, oder, arr);
   delete arr;
   
   return 0;
}


