#pragma once

#include <iostream>

namespace cs225 {
    class Mystring {
        public:
            // ctor
            Mystring();
            Mystring(const char *rhs);
            Mystring(char ch, int len);
            Mystring(const Mystring &rhs);

            // operator
            Mystring& operator=(const Mystring &rhs);
            Mystring operator+(const Mystring &rhs);

            // helper
            void Display();

            // dtors
            ~Mystring();
            
        private:
            int len_;
            char *str_;
    };  
}
