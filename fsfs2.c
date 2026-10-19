#include<stdio.h>
 int main()
 {
    int n ;
    int bt[10],wt[10],tat[10],ct[10];
    float avg_wt=0,avg_tat=0;
    printf("enter no of process:");
    scanf("%d",&n);
    //inpute burst time 
    for(int i=0; i<n;i++)
    {
        printf("enter burst time for P%d",i+1);
        scanf("%d",&bt[i]);
    }
    //first process waiting time 
    wt[0]=0;

    //calculate the waiting time 
    for(int i=1;i<n;i++)
    {
        wt[i]=wt[i-1]+bt[i-1];

    }
    //calculate Turnaround time 
    for(int i=0;i<n;i++)
    {
        tat[i]=wt[i]+bt[i] ;
    }
    //calculate averages
    for(int i=0;i<n;i++)
    {
        avg_wt=avg_wt+wt[i] ;
        avg_tat=avg_tat+tat[i] ;
    }
    avg_wt=avg_wt/n ;
    avg_tat=avg_tat/n ;
    //Display result
    printf("\nProcess\tBT\tWT\tTAT\n");
    for(int i=0;i<n;i++)
    {
        printf("P%d\t%d\t%d\t%d\n",i+1,bt[i],wt[i],tat[i]);
        
    }
    printf("\nAverage waiting time =%f",avg_wt);
    printf("\n Average Turnaround Time = %f\n",avg_tat);
    return 0;
 }