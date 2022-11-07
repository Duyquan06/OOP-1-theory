#pragma once

#include<iostream>
#include"num.h"
#include"Fraction.h"

//Thứ tự giảm dần: nếu số trước nhỏ hơn số sau, thì return 1
template<class T>
int des(T a, T b)
{
    if(compare(a, b) == -1)
        return 1;
    return 0;
}

//thứ tự tăng dần: nếu số trước lớn hơn số sau, thì return 1
template<class T>
int  as(T a, T b)
{
    if(compare(a, b) == 1)
        return 1;
    return 0;
}

template<class T>
void Sort_criterial(T *&arr, int size, int (*oder)(T a, T b))
{
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
            if(oder(arr[i], arr[j]))
                std::swap(arr[i], arr[j]);
    }
}