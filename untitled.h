#pragma once
#include <iostream>
#include <string>

using namespace std;

struct coord
{
    float x, y;
};

class untitled
{
private:
    coord _score[5];
    coord *_pointer;
    string _message;

public:
    untitled();
    void print();
    ~untitled();
};
