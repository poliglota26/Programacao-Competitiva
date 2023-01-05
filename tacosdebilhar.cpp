#include <bits/stdc++.h>

using namespace std;

int main()
{
    int C;
    int tot = 0;
    set <int> s;
    cin >> C;

    for(int i = 0; i < C; i++)
    {
        int x;
        cin >> x;
        if(s.find(x) == s.end())
        {
            tot += 2;
            s.insert(x);
        }
        else
            s.erase(x);
    }

    cout << tot << endl;

    return 0;
}
