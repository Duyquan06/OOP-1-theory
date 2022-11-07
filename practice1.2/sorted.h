#pragma once
#include"Fraction.h"

typedef int (*oder_sorted)(Fraction,  Fraction);

int de_oder(Fraction , Fraction );
int as_oder(Fraction , Fraction );
void sort(Fraction *&, int, oder_sorted);