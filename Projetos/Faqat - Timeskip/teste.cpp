
#include <iostream>

using namespace std;

int a = 8;
int b = 8;

int main()
{

    a = b+b;

    cout << "VALOR INICIAL:";
    cout << a << endl << endl;

    while (a < 640)
    {
        a = a+b;
        cout << "loop:" << a << endl;

    }
    
    cout << "VALOR FINAL:";
    cout << a << endl;

    return 0;
}

