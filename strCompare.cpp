// strCompare.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<stdio.h>
#include<string.h>
//#include"malloc.h"

int strCompare(char* str1,char* str2)
{
	int i=0, j=0, k=0, max = 0,index=0, lenth = 0;
	
    for(i = 0 ; i < strlen(str1); i++)
    {
     	index = i;

    	for(j = 0; j <= strlen(str2); j++)
     	{  
		    if(str1[i] == str2[j])
			i = i + 1;
		    else
		    {
			    lenth = i-index;
			    if (max < lenth)
				    max = lenth;
			    i = index;
		    }
	  }

	   index++;
  }

  return max;
}
		
		 
int _tmain(int argc, _TCHAR* argv[])
{
	char *a, *b;
	scanf("%s",a);
	scanf("%s",b);
	int number = 0;
	number = strCompare(a, b);
	printf("%d",number);
	while(1);
	return 0;
}
