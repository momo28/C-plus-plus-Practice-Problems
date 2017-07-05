//
// Created by black on 6/8/17.
//

#ifndef UNTITLED_ARRRAYSPROBLEM2_H
#define UNTITLED_ARRRAYSPROBLEM2_H

#include <iostream>
#include <queue>

using namespace std;
typedef std::queue<char> CharQueue;

class ArraysProblem2 {
    public:
        void problem2();

    private:
        void reverseStringV1 (char* const str);
        void reverseStringV2 (char* const str);
        void reverseStringRecurse (char* const str, int strIterator, CharQueue &strReverseQueue);
        void printReverseStringTestV1(char* const tempString);
        void printReverseStringTestV2(char* const tempString);
};


#endif //UNTITLED_ARRRAYSPROBLEM2_H
