/*
Stwórz funkcję, która sprawdza, czy z podanego słowa (napisu) zawierającego małe
litery alfabetu angielskiego można ułożyć palindrom? Palindrom ma zawierać tyle
samo znaków co oryginalne słowo, ale można dowolnie przestawiać znaki w słowie.
aabbcc =>abccba
*/
#include "Zadania_66.h"

bool isEven(int val)
{
    if (val % 2 == 0) return true;
    else return false;
}
bool isPalindromAble(const std::string &word) // in word it can be only maximum 1 odd count of letter, rest of them should be even
{
    if (word.length() < 2 ) return false;
    std::map<char, int> map;
    std::map<char, int>::iterator mIter;
    

    //remove white spaces and uppercases
    std::string inputString = word;
    std::transform(inputString.begin(), inputString.end(), inputString.begin(), ::tolower);
    inputString.erase(std::remove(inputString.begin(), inputString.end(), ' '), inputString.end());

    //find all letters and count occurencies
    for (auto& a : inputString)
    {
        mIter = map.find(a);
        if (mIter == map.end())
        {
            map.insert(std::pair<char, int>(a, 1));
        }
        else
        {
            mIter->second++;
        }
    }

    //check map's second values 
    int oddLetters = 0;
    for (auto& m : map)
    {
        if (!(isEven(m.second))) ++oddLetters;
        if (oddLetters > 1) return false;
    }

    return true;
}
