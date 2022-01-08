#include "untitled.h"

untitled::untitled()
{
    for (int i = 0; i < 5; i++)
    {
        _score[i].x = i;
        _score[i].y = i + 1;
    }

    _pointer = _score;

    _message = "Hello world";
}

void untitled::print()
{
    cout << _message;
}

untitled::~untitled() {}