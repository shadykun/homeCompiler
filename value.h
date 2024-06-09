#pragma once
#include <iostream>

template <class T>
class value
{
    private:
        T x;

    public:
        void print();
};

#include "value.cpp"