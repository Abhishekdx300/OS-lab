#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int quantum = 3;

void print(int n, vector<int> &bt, vector<int> &wt, vector<int> &tat)
{
    int avgWt = 0;
    int avgTat = 0;

    cout << "p\tAT\tBT\tWT\t TAT" << endl;
    for (int i = 0; i < n; i++)
    {
        avgWt += wt[i];
        avgTat += tat[i];

        cout << i + 1 << "\t0\t" << bt[i] << "\t" << wt[i] << "\t" << tat[i] << endl;
    }
    cout << "Average waiting time: " << (float)avgWt / n << endl;
    cout << "Average turnaround time: " << (float)avgTat / n << endl;
}

void roundRobin(int n, vector<int> &bt)
{
    vector<int> ct(n, 0), wt(n, 0), tat(n, 0);

    // {process,rem-bt}
    int totalCt = 0;
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++)
    {
        q.push({i, bt[i]});
    }

    while (!q.empty())
    {
        auto it = q.front();
        q.pop();
        int p = it.first;
        int len = it.second;

        if (len <= quantum)
        {
            totalCt += len;
            ct[p] = tat[p] = totalCt;
        }
        else
        {
            totalCt += quantum;

            q.push({p, len - quantum});
        }
    }

    for (int i = 0; i < n; i++)
    {
        wt[i] = ct[i] - bt[i];
    }

    print(n, bt, wt, tat);
}

int main()

{
    int n;
    cout << "No. of process:";
    cin >> n;

    vector<int> bt(n, 0);
    cout << "input process BT:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "P[" << i + 1 << "]:";
        cin >> bt[i];
        cout << endl;
    }

    roundRobin(n, bt);
    return 0;
}