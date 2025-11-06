#include<stdio.h>
int  main(){
	int n,i,num,min,max;
	float sum=0,avg;
	printf("Enter number of elements :");
	scanf("%d",&n);
	printf("Enter number 1:");
	scanf("%d",&num);
	min=max=num;
	sum=num;
	for(i=2;i<=n;i++){
		printf("Enter  number %d :",i);
		scanf("%d",&num);
		if(num<min)min=num;
		if(num>max)max=num;
		sum+=num;
	}
	avg=sum/n;
	printf("Smallest=%d\nLargest= %d\nAverage=%.2f\n",min,max,avg);
	return 0;
}
