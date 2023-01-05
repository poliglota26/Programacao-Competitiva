#include <bits/stdc++.h>

using namespace std;

int main()
{
    int D, N, M;
    stack <char> q;
    stack <char> p;
    char c;
    cin >> N >> D;
    while (N != 0 && D != 0)
    {
        while(q.size() != 0)
            q.pop();
        while(p.size() != 0)
            p.pop();
        q.push('0');
        int j = 0;
        M = N;
        for (int i = 0; i < M; i++)
        {
            cin >> c;
INICIO:
            if(j < (D+1) && q.size()!= 0)
            {
                if(c > q.top())
                {
                    q.pop();
                    j++;
                    goto INICIO;
                }
            }
            else if(c == '0' && j < (D+1))
            {
                j++;
                continue;
            }
            q.push(c);
        }
        for (int i = 0; i < (D-j+1); i++)
            q.pop();

        for(int i = 0; i < (N-D); i++)
        {
            p.push(q.top());
            q.pop();
        }
        for(int i = 0; i < (N-D); i++)
        {
            cout << p.top();
            p.pop();
        }

        cin >> N >> D;
        //if(N != 0 || D != 0 )
        cout << endl;
    }

    return 0;
}
