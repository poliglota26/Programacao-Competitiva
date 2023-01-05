#include <bits/stdc++.h>

using namespace std;

int N;

void Merge(int * V, int ini, int fim)
{
    int * T; // auxiliar
    int i, j, k, meio;
    meio = (ini + fim)/2;
    T = (int *) malloc (N*sizeof(int));
    i = ini;
    j = ini;
    k = meio + 1;
    while(j <= meio && k <= fim)
    {
        if(V[j] < V[k])
        {
            T[i] = V[j];
            j++;
        }
        else
        {
            T[i] = V[k];
            k++;
        }
        i++;
    }


    while(k <= fim)
    {
        T[i] = V[k];
        k++;
        i++;
    }

    while(j <= meio)
    {
        T[i] = V[j];
        j++;
        i++;
    }

    for(i = ini; i <= fim; i++)
        V[i] = T[i];
    free(T);
}

void MergeSort(int * V, int ini, int fim)
{
    int meio;
    if (ini < fim)
    {
        meio = (ini + fim)/2;
        MergeSort(V, ini, meio);
        MergeSort(V, meio + 1, fim);
        Merge(V, ini, fim);
    }
}

int main()
{

    int * V;
    cin >> N;
    V = (int *) malloc (N * sizeof(int));
    for (int i = 0; i < N; i++)
        cin >> V[i];
    MergeSort(V, 0, N-1);
    for(int i = N-1; i >= 0; i--)
        cout << V[i] << " ";
    cout << endl;
    return 0;
}
