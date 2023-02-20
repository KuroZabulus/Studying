#include<stdio.h>
#define LV1 5000000
#define LV2 10000000
#define LV3 18000000
#define RATE1 0.05
#define RATE2 0.1
#define RATE3 0.15
#define RATE4 0.2
int main()
{
	long income,ti,tf,tax,sumtax;
	int depend, level;
	const int pa=9000000, pd=3600000;
	do{
    printf("Income this year: ");
    scanf("%ld",&income);
    if (income<0){ //retry input
      printf("Income cannot be negative \n");}}
  while (income<0);
	printf("\nNumber of dependant: ");
	scanf("%d",&depend);
	
	tf=12*(pa+depend*pd);
	ti=income-tf;
	
	printf("\nTax-free income: %ld",tf);
	
	if (ti<=LV2){ //0-10tr
		if (ti<=0){ //negative ti
			ti=0;
			printf("\nTaxable income: %ld",ti);
			level=0;}
		else{
			level= ti>LV1? 2:1; 
			printf("\nTaxable income: %ld",ti);}}
//level=2 when ti<=10tr and ti>5tr (ti:5tr01-10tr)	
//level=1 whem ti<=10tr and ti<=5tr (ti:0-5tr)
	else{ //10tr01-18tr+
		level= ti>LV3? 4:3; 
		printf("\nTaxable income: %ld",ti);}
//level=4 when ti>10tr and ti>18tr (ti:18tr01+)
//level=3 when ti>10tr and ti<=18tr (ti:10tr01-18tr)
	
	//printf("\nAssigned level: %d",level); //debug
	
	switch(level){
		case 1: //0-5tr
			tax=ti*RATE1; 
			printf("\nIncome tax: %ld",tax);
			break; //tax=ti+(ti*0.05)
		case 2: //5tr01-10tr
			tax=(LV1*RATE1)+((ti-LV1)*RATE2); 
			printf("\nIncome tax: %ld",tax);
			break; //tax=ti+(5tr*0.05)+((ti-5tr)*0.1)
		case 3: //10tr01-18tr
			tax=(LV1*RATE1)+((LV2-LV1)*RATE2)+((ti-LV2)*RATE3); 
			printf("\nIncome tax: %ld",tax);
			break; //tax=ti+(ti*0.05)+((10tr-5tr)*0.1)+((ti-10tr)*0.15)
		case 4: //18tr01+
			tax=(LV1*RATE1)+((LV2-LV1)*RATE2)+((LV3-LV2)*RATE3)+((ti-LV3)*RATE4);
			printf("\nIncome tax: %ld",tax);
			break; //tax=ti+(ti*0.05)+((10tr-5tr)*0.1)+((18tr-10tr)*0.15)+((ti-18tr)*0.2)
		default: printf("\nIncome tax: 0");}
	getchar();
	return 0;
}

