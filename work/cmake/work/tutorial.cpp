// tutorial.cpp

#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>
#include <TutorialConfig.h>

int main()
{
    // report version
    std::cout << " Version " << Tutorial_VERSION_MAJOR << "." << Tutorial_VERSION_MINOR << "." <<Tutorial_VERSION_PATCH<<" "<<std::endl;
    std::cout << "Usage: " << " number" << std::endl;
    // convert input to double
    double x;scanf("%lf",&x);
    const double inputValue = x;
    // calculate square root
    const double outputValue = sqrt(inputValue);
    std::cout << "The square root of " << inputValue << " is " << outputValue << std::endl;
    return 0;
}