#include<stdio.h>
int main()
    {
        int n;
        int bt[10],wt[10],tat[10],i,j;
        float awt=0,atat=0;
        printf("Enter the number of processes:\n");
        scanf("%d",&n);
        printf("Enter the burst time of the processes:\n");
        for(i=0;i<n;i++)
        {
            printf("Process %d: ",i+1);
            scanf("%d",&bt[i]);         

    }
        //first process will have waiting time 0
        wt[0]=0;
        //calculating waiting time
        for(i=1;i<n;i++)
        {
            wt[i]=0;
            for(j=0;j<i;j++)
                wt[i]+=bt[j];
        }
        printf("Process\tBurst Time\tWaiting Time\tTurnaround Time\n");
        for(i=0;i<n;i++)
        {
            tat[i]=bt[i]+wt[i];
        }
        //calculating average 
        for(i=0;i<n;i++)
        {
            awt+=wt[i];
            atat+=tat[i];
            printf("%d\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
        }
        awt/=n;
        atat/=n;
        printf("Average Waiting Time: %f\n",awt);
        printf("Average Turnaround Time: %f\n",atat);       
        // displaying the Gantt chart
        printf("Gantt Chart:\n");
        printf("0");
        for(i=0;i<n;i++)
        {
            printf(" | P%d | %d",i+1,wt[i]+bt[i]);
        }
        printf("\n");       
            //display results in a tabular format
        printf("Process\tBurst Time\tWaiting Time\tTurnaround Time\n");
        for(i=0;i<n;i++)
        {
            printf("%d\t%d\t\t%d\t\t%d\n",i+1,bt
[i],wt[i],tat[i]);
        }
        return 0;
    }   
    