#include "Mystring.h"
#include <string.h>

namespace cs225 {

    // ctors
    Mystring::Mystring() : len_(0) {
        str_ = nullptr;
    }

    Mystring::Mystring(const char *rhs) {
        len_ = strlen(rhs);
        str_ = new char[len_];
        memcpy(str_, rhs, len_);
    }

    Mystring::Mystring(char ch, int len) {
        len_ = len;
        str_ = new char[len];
        for (int i = 0; i < len; i++) str_[i] = ch;
    }

    Mystring::Mystring(const Mystring &rhs) {
        len_ = rhs.len_;
        str_ = new char[len_];
        memcpy(str_, rhs.str_, len_);
    }


    // operator
    Mystring& Mystring::operator=(const Mystring &rhs) {
        if (this == &rhs) return *this;
        if (str_ != nullptr) delete[] str_;
        len_ = rhs.len_;
        str_ = new char[len_];
        memcpy(str_, rhs.str_, len_);
        return *this;
    }

    Mystring Mystring::operator+(const Mystring &rhs) {
        Mystring new_str;
        new_str.len_ = len_ + rhs.len_;
        new_str.str_ = new char[new_str.len_];
        memcpy(new_str.str_, str_, len_);
        memcpy(new_str.str_ + len_, rhs.str_, rhs.len_);
        return new_str;
    }

    // helper
    void Mystring::Display() {
        for (int i = 0; i < len_; i++) {
            std::cout << str_[i];
        }
    }

    // dtors
    Mystring::~Mystring() {
        if (str_ != nullptr) delete[] str_;
    }
}

