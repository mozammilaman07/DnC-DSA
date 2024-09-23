#include <iostream>
using namespace std;

void printPermutation(string str, int index)
{
    // base case
    if (index >= str.length())
    {
        cout << str << " ";
        return;
    }
}

int main()
{
    string str = "abc";
    int index = 0;

    printPermutation(str, index);
}