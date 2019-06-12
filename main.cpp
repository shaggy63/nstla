#include <iostream>
#include "nstlaManager.h"

int main()
{
    std::cout << "Welcome to nstla. Preprocessing..." << std::endl;
    system("./processing.sh");
    nstlaManager nsm;

    nsm.outputChecker();

    return 0;
}
