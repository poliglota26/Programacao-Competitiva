#include <bits/stdc++.h>

using namespace std;

int cont;

int main()
{
    int N, M;
    cin >> N;
    if(N == 1 || N == 2)
        cont = 2;
    else
        for(int i = 1; i < N/2; i++)
        {
            M = N;
            while(M > i+1)
                M = M - (2*i+1);
            if(M == (i+1))
                cont++;
        }
    cout << cont/2 << endl;

    return 0;
}
