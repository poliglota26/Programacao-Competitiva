#include <bits/stdc++.h>

using namespace std;

int v[100005];

int main()
{
    int N, K, A, B;
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> v[i];
    cin >> K;

    A = 0;
    B = N-1;

    while (true)
    {
        int soma = v[A] + v[B];
        if (soma == K)
            break;
        else if (soma < K)
            A++;
        else
            B--;
    }

    cout << v[A] << " " << v[B] << endl;

    return 0;
}
