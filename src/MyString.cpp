#include "../includes/MyString.h"
#include <ostream>
#include <stdexcept>

using namespace std;

MyString::MyString()
{
}

MyString::~MyString()
{
}

// Constructor implementation
MyString::MyString(const char *str)
{
    length = 0;

    while (str[length] != '\0')
    {
        ++length;
    }

    data = new char[length + 1];

    for (size_t i = 0; i < length; i++)
    {
        data[i] = str[i];
    }

    data[length] = '\0';
}

MyString::MyString(const MyString &other)
{
    length = other.length;

    data = new char[length + 1];

    for (size_t i = 0; i < length; i++)
    {
        data[i] = other.data[i];
    }

    other.data[length] = '\0';
}

// capacity
size_t MyString::size() const
{
    return length;
}

// element access
const char &MyString::at(size_t pos) const
{
    if (pos >= length || pos < 0)
        throw out_of_range("Out of range.");

    return data[pos];
}

const char &MyString::front() const
{
    return data[0];
}

const char &MyString::back() const
{
    return data[length - 1];
}

// string operations
const char *MyString::c_str() const
{
    return data;
}

// function overloads

MyString &MyString::operator=(const MyString &other)
{
    *this = MyString(other.data);

    return *this;
}

std::ostream &operator<<(std::ostream &os, const MyString &str)
{
    os << str.c_str();
    return os;
}
