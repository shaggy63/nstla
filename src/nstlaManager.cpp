#include "nstlaManager.h"
#include <iostream>

nstlaManager::nstlaManager()
{
    //ctor
}

nstlaManager::~nstlaManager()
{
    //dtor
}

bool nstlaManager::askKeepFile(){
    std::cout << "Processing done ! Do you want to keep the preprocessed file ? [Y/n]";
    std::string tmp = "Y";


    getline(std::cin, tmp);
    if(tmp.empty())
        tmp = "Y";


    switch(tolower(tmp[0])){
        case 'y' :
            return false;
        case '\0' :
            return false;
        case 'n' :
            system("rm ./ips");
            return true;
        default:
            std::cout << std::endl << "Bad option. Try again !" << std::endl;
            return this->outputChecker();
    }

}
