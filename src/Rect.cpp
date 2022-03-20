#include "Rect.h"

Rect::Rect(int l, int m)
{
    this->left = l;
    this->top = m;
}

int Rect::strange_sum()
{
    return this->left + this->top +1;
}