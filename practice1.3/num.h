#pragma once
#include<iostream>

//số trước lớn hơn số sau thì return 1, nhỏ hơn thì return -1
template<class T>
int compare(T a , T b)
{
    if(a == b)
        return 0;
    if(a > b)
        return 1;
    return -1;
}



