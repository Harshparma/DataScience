#include <iostream>
using namespace std;

int main()
{
    int n, bt[50], wt[50], tat[50], avgwt = 0, avgtat = 0, i, j;
    cout << "Enter number of proecees";
    cin >> n;

    cout << "\nEnter process burst time\n";
    for (i = 0; i < n; i++)
    {
        cout << "P[" << i + 1 << "]:";
        cin >> bt[i];
    }
    wt[0] = 0;
    for(i=1;i<n;i++){
        wt[i]=0;
        for(j=0;j<i;j++){
            wt[i]+=bt[j];
        }
    }
    cout<<"\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time";

    for(i=0;i<n;i++){
        tat[i]=bt[i]+wt[i];
        avgwt+=wt[i];
        avgtat+=tat[i];
        cout<<"\nP["<<i+1<<"]"<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i];
    }
    avgwt/=i;
    avgtat/=i;
    cout<<"\n\nAverage waiting time:"<<avgwt;
    cout<<"\nAverage Turnaroung time:"<<avgtat;
    return 0;
}