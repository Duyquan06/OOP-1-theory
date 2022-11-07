#pragma once
struct Fraction
{
    int num;
    int den;
};

Fraction input();
void output(Fraction);

int GCD(int, int);
Fraction reduce(Fraction);

Fraction inverse(Fraction);

Fraction add(Fraction, Fraction);

int compare(Fraction, Fraction);