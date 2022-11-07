#pragma once
#include<iostream>
#include"sorted.h"
#include"num.h"

template<class T>
void input(T *&arr, int size)
{
    arr = new T[size];
    std::cout << "Enter " << size << " elements " <<": ";
    for(int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}


template<class T>
void output(T *arr, int size)
{
    for(int i = 0; i < size; i++)
        std::cout << arr[i] << "    ";
    std::cout << "\n";
}


template<class T>
void  process(int size, int oder, T *&arr)
{
    arr = new T[size];
    input(arr, size);

    std::cout << "Befor sorting\n";
    output(arr, size);

    if(oder == 1)
        Sort_criterial(arr, size, as);
    else 
        Sort_criterial(arr, size, des);

    std::cout << "\nAfter sorting\n";
    output(arr, size);
}