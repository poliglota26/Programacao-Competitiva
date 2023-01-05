#include <bits/stdc++.h>

using namespace std;

int v[100005];
int cont;

int main()
{
    int N, B;
    int i, j;
    cin >> N >> B;
    for (int k = 0; k < N; k++)
        cin >> v[k];
    sort(v, v+N);

    i = 0;
    j = N-1;

    while(i < j)
    {
        int soma = v[i] + v[j];
        if(soma <= B)
        {
            i++;
            j--;
        }
        else
            j--;

        cont ++;
    }

    if (i == j)
        cont++;

    cout << cont << endl;

    return 0;
}
