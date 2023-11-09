#include <bits/stdc++.h>

using namespace std;

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

void sjf(int n, vector<int> &bt, vector<int> &priority)
{
    vector<int> ct(n, 0), wt(n, 0), tat(n, 0);
    vector<pair<int, int>> p;
    // {bt,process};
    for (int i = 0; i < n; i++)
    {
        p.push_back({priority[i], i});
    }

    sort(p.begin(), p.end());

    int totalCt = 0;
    for (auto it : p)
    {
        int curBt = bt[it.second];
        int curP = it.second;
        //
        wt[curP] = totalCt;
        totalCt += curBt;
        ct[curP] = totalCt;

        tat[curP] = wt[curP] + bt[curP];
    }

    print(n, bt, wt, tat);
}

int main()

{
    int n;
    cout << "No. of process:";
    cin >> n;

    vector<int> bt(n, 0), priority(n, 0);
    cout << "input process BT:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "P[" << i + 1 << "]:";
        cin >> bt[i];
        cout << endl;
    }

    cout << "input process priority:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "P[" << i + 1 << "]:";
        int x;
        cin >> x;
        priority[i] = -x;
        cout << endl;
    }

    sjf(n, bt, priority);

    return 0;
}