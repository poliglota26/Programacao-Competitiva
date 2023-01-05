#include <iostream>

using namespace std;

int main ()
{
    int x, campo[50];
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> campo[i];
    }
    for (int i = 0; i < x; i++)
    {
        int quantidade = 0;
        if (campo[i-1] == 1 && i > 0)
            quantidade += 1;
        if (campo[i] == 1)
            quantidade += 1;
        if (campo[i+1] == 1 && i < x)
            quantidade += 1;
        cout << quantidade << endl;
    }
    return 0;
}
