# MyString Class

`MyString` is a simplified C++ class for managing and manipulating strings.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Usage](#usage)
- [Constructors](#constructors)
- [Main Methods](#main-methods)
- [Overloaded Functions](#overloaded-functions)
- [Author](#author)

## Introduction

This `MyString` class provides a straightforward interface for string manipulation in C++. It includes various methods for string operations and is designed to mimic some of the functionalities of the standard string library.

## Features

- **Constructor Overloads:** Allows initialization from a C-string or another `MyString` object.
- **Access Functions:** Enables access to string size, individual characters, and C-style strings.
- **String Operations:** Basic string operations such as front, back, and element access.

## Usage

To use the `MyString` class, simply include the `MyString.h` header file in your C++ project. Then, instantiate the `MyString` object using its constructors or assign values using the appropriate methods.

## Constructors

- `MyString()`: Default constructor.
- `MyString(const char* str)`: Constructor accepting a C-string.
- `MyString(const MyString& other)`: Copy constructor.

## Main Methods

- `size_t size() const`: Returns the size of the string.
- `const char& at(size_t pos) const`: Returns the character at a specified position.
- `const char& front() const`: Returns the first character.
- `const char& back() const`: Returns the last character.
- `const char* c_str() const`: Returns a C-style string representation.

## Overloaded Functions

- `MyString& operator=(const MyString& other)`: Assignment operator overload.
- `std::ostream& operator<<(std::ostream& os, const MyString& str)`: Output stream operator overload.

## Author

AxlMrt
