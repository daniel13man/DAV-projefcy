#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int z;
    int a;
    cout << "enter a number: ";
    cin >> x;
    cout << "enter another nubmer: ";
    cin >> y;
    z = max(x, y);
    cout << "the biggest number is: " << z << endl;
    a = min(x, y);
    cout << "the smallest number is: " << a << endl;
    return 0;
}


