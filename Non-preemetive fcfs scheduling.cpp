/* c program to implement fcfs scheduling without arrival time  */

#include <stdio.h>
#include <conio.h>
# define max 30
   int main()
   {
   	int i,j,n,Bt[max],wt[max],Tat[max];
   	float Awt=0, Atat=0;
   
   	printf("Enter the number of process:");
   	scanf("%d",&n);
	   printf("Enter the burst time of the process:");
   	for(i=0;i<n;i++){
   		scanf("%d",&Bt[i]);
	   }
	   printf("Process\t Burst time\t Waiting time\t Turn around time\n");
	   for(i = 0;i < n;i++){
	   	wt[i] = 0;
	   	Tat[i] = 0;
	   	for(j=0;j<i;j++){
	   		wt[i] = wt[i] + Bt[j];
		   }
		   Tat[i]=wt[i]+Bt[i];
		   Awt=Awt+wt[i];
		   Atat=Atat+Tat[i];
		   printf("%d\t%d\t\t%d\t\t%d\n", i+1,Bt[i],wt[i],Tat[i]);
	   }
	   Awt=Awt/n;
	   Atat=Atat/n;
	   printf("Average waiting time = %f\n",Awt);
	   printf("Average turn around time = %f",Atat);
	   
	   return 0;
   }