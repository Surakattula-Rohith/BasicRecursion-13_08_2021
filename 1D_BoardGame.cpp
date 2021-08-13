#include <iostream>
using namespace std;

int countPath(int n, int *a_c)
{
    if (n == 2)
    {
        return 1;
    }
    int b;
    b = *a_c;

    for (int i = 1; i <= n; i++)
    {
        *a_c += countPath(n - i, &b);
    }
    return *a_c;
}

int cPath(int n)
{
    if (n == 2)
    {
        return 1;
    }
    return (n - 1) + cPath(n - 1);
}

int main()
{

    int c = 0;

    int *a_c;
    a_c = &c;

    cout << countPath(4, &c) << endl;
    cout << cPath(4) << endl;

    return 0;
}