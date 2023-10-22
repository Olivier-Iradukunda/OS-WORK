/* c program to implement fcfs scheduling with arrival time */
#include<stdio.h>
#include<conio.h>
  #define max 30
    int main()
	{
    	int i,j,n,Bt[max],At[max],wt[max],Tat[max],Temp[max];
    	float Awt=0,Atat=0;
    	printf("Enter the number of process:");
    	scanf("%d",&n);
    	printf("Enter the burst time of the process :");
    	for(i=0;i<n;i++){
    		scanf("%d",&Bt[i]);
		}
		printf("Enter the arrival time of the porcess: ");
		for(i=0;i<n;i++){
			scanf("%d",&At[i]);
		}
		Temp[0]=0;
		printf("process\t Burst time\t arrival time\t waiting time\t turn around time\n");
		for(i=0;i<n;i++){
			wt[i]=0;
			Tat[i]=0;
			Temp[i+1]=Temp[i]+Bt[i];
			wt[i]=Temp[i]-At[i];
			Tat[i]=wt[i]+Bt[i];
			Awt=Awt+wt[i];
			Atat=Atat+Tat[i];
			printf("%d\t%d\t\t%d\t\t%d\t\t%d\n",i+1,Bt[i],At[i],wt[i],Tat[i]);
		}
		Awt=Awt/n;
		Atat=Atat/n;
		printf("Average waiting time = %f\n",Awt);
		printf("Average turn around time = %f",Atat);
		
		return 0;
	}