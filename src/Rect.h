/*
 * Copyright (c) 2022, Magius(CHE) <magiusche@magius.it>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */
#pragma once
#include <iostream>
using namespace std;

class Rect
{
public:
    Rect(int l, int m);
    int strange_sum();

private:
    int left;
    int top;
};
