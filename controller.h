#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../models/models.h"

struct data *createNode(int date, int month, int year, char *name) {
	struct data *node=(struct data*)malloc(sizeof(struct data));
	node->date=date;
	node->month=month;
	node->year=year;
	strcpy(node->name,name);
	return node;
}

long DateNumber(int date, int month, int year){
	return (long)(year*10000)+(month*100)+date;
}

void Data() {
	int date, year;
	char month[255], name[255];
	scanf("%d %s %d - %[^\n]", &date, &month, &year, &name); 
	getchar();
	Push(date, month, year, name);
}

void popAll(){
	while(head){
		popHead();
	}
}

void popHead() {
	if(head!=NULL){
		temp=head;
		head=head->next;
		free(temp);
	}
}
