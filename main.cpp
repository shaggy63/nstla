#include <iostream>
#include "nstlaManager.h"

int main()
{
    nstlaManager nsm; // Initializing the CLI class to interact with the user

    std::cout << "Welcome to nstla. Preprocessing..." << std::endl;
    system("./processing.sh"); // Launching the shell script to preprocess the logs in a single file


    nsm.askKeepFile(); //Asking the user if he wants to keep the preprocessed file

    return 0;
}
