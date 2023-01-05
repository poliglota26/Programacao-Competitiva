#include <bits/stdc++.h>

using namespace std;

int main()
{
    int * v, n;
    cin >> n;
    v = (int *) malloc (n * sizeof(int));
    for(int i = 0; i < n; i++)
        cin >> v[i];
    sort(v, v+n);
    for(int i = 0; i < n ; i++)
            cout << v[i] << " ";
    cout << endl;
    return 0;
}
