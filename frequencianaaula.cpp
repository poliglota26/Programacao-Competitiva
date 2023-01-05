#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;
    map <int, bool> m;

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> M;
        if(m.find(M) == m.end())
            m.insert({M,true});
    }
    cout << m.size() << endl;
    return 0;
}
