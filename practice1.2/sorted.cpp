#include"sorted.h"
#include<algorithm>

int de_oder(Fraction a, Fraction b)
{
   if( compare(a, b) == -1)
        return 1;
    return 0;
}

int as_oder(Fraction a, Fraction b)
{
    if( compare(a, b) == 1)
        return 1;
    return 0;
}

void sort(Fraction *&arr, int size, oder_sorted p)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(p(arr[i], arr[j]))
                std::swap(arr[i], arr[j]);
        }
    }
}

