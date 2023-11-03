
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <string>
#include <B.h>
using namespace std;

int main()
{

    std::cout << " Version " << A_VERSION_MAJOR << "." << A_VERSION_MINOR << "." <<A_VERSION_PATCH<<" "<<std::endl;
    std::cout << "Usage: " << " number" << std::endl;

    // convert input to double
    double x;scanf("%lf",&x);
    const double inputValue = x;
    // calculate square root

    const double outputValue = sqrt(inputValue);
    std::cout << "The square root of " << inputValue << " is " << outputValue << std::endl;
    return 0;
}