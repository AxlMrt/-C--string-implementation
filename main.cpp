#include "includes/MyString.h"
#include <iostream>

using namespace std;

int main()
{
    MyString str = "ceci est un test";
    size_t index = 5;
    char atIndex = str.at(index);

    cout << str << " -> est de longueur: " << str.size() << endl;
    cout << atIndex << " is at index " << index << endl;
    cout << str.front() << " is at the front" << endl;
    cout << str.back() << " is at the end" << endl;

    return 0;
}
