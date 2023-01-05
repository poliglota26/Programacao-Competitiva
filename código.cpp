#include <iostream>

using namespace std;

int main ()
{
    int n;
    int posicao[10005];
    int quantidade = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> posicao[i];
    for (int i = 0; i < n; i++)
    {
        if (posicao[i] == 1 && posicao [i + 1] == 0 && posicao [i+2] == 0 && i < (n-2))
            quantidade++;
    }
    cout << quantidade << endl;
    return 0;
}
