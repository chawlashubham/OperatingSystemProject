#include<iostream>
#include<conio.h>

using namespace std;

   void fcfs(){
    int n,bt[20],wt[20],i,j;
    float avwt=0.0;
    cout<<"Enter Total Number Of Teams:";
    cin>>n;

    cout<<"\nEnter Amount Of Time Allocated To Each Team(in minutes):\n";
    for(i=0;i<n;i++)
    {
        cout<<"P["<<i+1<<"]:";
        cin>>bt[i];
    }

    wt[0]=0;

    //calculating waiting time
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
    }

    cout<<"\n\nTeam\t\tAllocated Time\tWaiting Time\n";


    for(i=0;i<n;i++)
    {
        avwt+=wt[i];

        cout<<"\nP["<<i+1<<"]"<<"   \t\t"<<bt[i]<<"   \t\t"<<wt[i];
    }

    avwt/=i;

    cout<<"\n\nAverage Waiting Time: "<<avwt<<" minutes";

   }


