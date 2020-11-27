#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../controller/controller.h"

int main() {
	int Patients, Cure;
	scanf("%d %d",&Patients,&Cure); 
	getchar();
	for(int i=0; i<Patients; i++)
	for(int i=0; i<Cure; i++)
		popHead();
	if(totalPatients > totalCure)
		printf("Need %d more cure\n",Patients-Cure);
}
