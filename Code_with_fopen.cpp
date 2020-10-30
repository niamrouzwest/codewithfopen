// Code with fopen.cpp : ???? ???? ???????? ??????? "main". ????? ?????????? ? ????????????? ?????????? ?????????.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
int main()
{

FILE* file;
char name[] = "C:/census.csv";
//file = fopen(name, "r");

int count=0;
char codenum[5];
char tempnum[5];


bool play=true;
while(play==true){
file = fopen(name, "r");
//memset(tempnum,0,100);

printf("Vvedite cod regiona\n");

gets(codenum);

printf("\n");
printf(codenum);
printf("\n");
while(!feof(file)){

count=0;

//printf(codenum);

fgets(tempnum,6,file);	

//printf(tempnum);

//fgets(tempnum,1,file);
int j=0;
for(int i=1;i<6;i++)
{
	
	

//	printf("%c",tempnum[i]);
//		printf("%c",codenum[j]);
	if(tempnum[i]==codenum[j])
	{
		count++;
		j++;
		if(j==4)
		{ fgets(tempnum,100,file);	
			break;
		}
	}
	else 
	{

	break;
	}
}
if(count==4)
{
printf(tempnum);
break;
}

}
if(count!=4){

printf("Net Takogo znacenia\n");
printf("Poprobuite eshe raz\n");
}
else{play=false;
}
}
}

