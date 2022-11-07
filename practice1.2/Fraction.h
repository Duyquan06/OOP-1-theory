#pragma once
struct Fraction
{
    int num;
    int den;
};

Fraction *input(int &);
void output(Fraction *, int);

int GCD(int, int);
Fraction reduce(Fraction);

int compare(Fraction, Fraction);