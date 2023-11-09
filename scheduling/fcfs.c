#include <stdio.h>

void findWaitingTime(int bt[], int wt[], int n)
{
    wt[0] = 0;
    for (int i = 1; i < n; i++)
    {
        wt[i] = bt[i - 1] + wt[i - 1];
    }
}

void findTat(int wt[], int bt[], int tat[], int n)
{
    for (int i = 0; i < n; i++)
    {
        tat[i] = bt[i] + wt[i];
    }
}

void findAvgTime(int bt[], int tat[], int wt[], int n)
{
    findWaitingTime(bt, wt, n);
    findTat(wt, bt, tat, n);

    printf("processes\tBurstTime\tWaiting Time\tTurnaround Time\n");
    float avg_wt = 0;
    float avg_tat = 0;
    for (int i = 0; i < n; i++)
    {
        avg_wt += wt[i];
        avg_tat += tat[i];
        printf("%d\t%d\t%d\t%d\n", i + 1, bt[i], wt[i], tat[i]);
    }

    printf("average waiting time: %f\n", avg_wt / n);
    printf("average turnaround time: %f", avg_tat / n);
}

int main()
{
    // arrival time =0

    int bt[20], tat[20], wt[20];
    int n;
    printf("no. of processes:");
    scanf("%d", &n);

    printf("input Burst Time:\n");
    for (int i = 0; i < n; i++)
    {
        printf("P%d : ", i + 1);
        scanf("%d", &bt[i]);
    }

    findAvgTime(bt, tat, wt, n);

    return 0;
}