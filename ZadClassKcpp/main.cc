#include <iostream>
#include "ZadKcpp.h"

using namespace std;

int main(int argc, char *argv[])
{
    ZadKcpp *d1 = new ZadKcpp();

    while (d1->isRunning())
    {
        d1->renderMenu();
    }
}