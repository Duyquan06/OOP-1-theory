#include<iostream>
#include"Fraction.h"
#include"sorted.h"

using namespace std;

int main()
{
    Fraction *arr;
    int size;
    int choice;

    arr = input(size);
    cout << "Befor sorting\n";
    output(arr, size);

    cout << "Choose oder sorted: 1 = ascending, 2 = descending\n";
    cout << "Enter choice: ";
    cin >> choice;

    if(choice == 1)
        sort(arr, size, as_oder);
    else if(choice == 2) 
        sort(arr, size, de_oder); 
    else 
    {
        cout << "invalid choice, re-runnning the program";
        return 0;
    }

    cout << "After sorting\n";
    output(arr, size);

    delete arr;
    return 0;
}