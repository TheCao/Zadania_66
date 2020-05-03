#include "Zadania_66.h"


int main(int argc, char* argv[])
{
    if (argc == 2)
    {
        std::cout << "Is \"" << argv[1] << "\" PalindromAble? "
            << (isPalindromAble(argv[1]) ? "Yes!" : "No!") << std::endl;
    }
    else
    {
        std::cerr << "Wrong number of arguments passed!" << std::endl;
    }
    return 1;
}