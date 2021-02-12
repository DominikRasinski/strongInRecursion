#include <iostream>

using namespace std;

int strong(int x);

int main()
{
    cout << strong(8) << endl;
}

int strong(int x)
{
    if (x == 1)
    {
        return x;
    }
    else
    {
        return x * strong(x - 1);
    }
}