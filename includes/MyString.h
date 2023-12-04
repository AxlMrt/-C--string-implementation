#ifndef MY_STRING
#define MY_STRING

#include <iostream>

class MyString
{

  private:
    char *data;
    size_t length;

  public:
    MyString();
    MyString(const char *str);
    MyString(const MyString &other);

    ~MyString();

    // iterators

    // capacity
    size_t size() const;

    // element access
    const char &at(size_t pos) const;
    const char &front() const;
    const char &back() const;

    // string operation
    const char *c_str() const;

    // function overloads
    // Pour que les opérateurs puissent fonctionner
    MyString &operator=(const MyString &other); // MyString str = "ceci est une string.";
};

std::ostream &operator<<(std::ostream &os, const MyString &str);

#endif // !MY_STRING
