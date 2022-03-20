#include <iostream>
#include "Rect.h"
using namespace std;

int main()
{
    auto rect = new Rect(6,4);
    int ret = rect->strange_sum();
    printf("My favorite number is %i\n",ret);
    std::cout << "My favorite number is " << ret << "\n ";

    return 0;
}