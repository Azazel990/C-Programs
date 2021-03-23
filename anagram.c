//Program to check if two strings are anagram or not 

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    int i,j,k;
    char s1[100],s2[100],temp;
    printf("Please Enter Two Stirngs : ");
    gets(s1);
    gets(s2);
    
    //Sorting First String
    k = strlen(s1);
	for(i=0;i!=k-1;i++)
	{
		if(s1[i]>s1[i+1])
		{
			temp = s1[i];
			s1[i] = s1[i+1];
			s1[i+1] = temp;

			j = i;

			while(j!=0)
			{

				if(s1[j-1]>s1[j])
				{
					temp = s1[j-1];
					s1[j-1] = s1[j];
					s1[j] = temp;

				}

			      j--;
			}
		}

	}
	
	//Sorting Second String
    
    k = strlen(s2);
	for(i=0;i!=k-1;i++)
	{
		if(s2[i]>s2[i+1])
		{
			temp = s2[i];
			s2[i] = s2[i+1];
			s2[i+1] = temp;

			j = i;

			while(j!=0)
			{

				if(s2[j-1]>s2[j])
				{
					temp = s2[j-1];
					s2[j-1] = s2[j];
					s2[j] = temp;

				}

			      j--;
			}
		}

	}

	i = strcmp(s1,s2);
	
	if(i==0)
	{
	    printf("Anagram Strings");
	}
	else
	{
	    printf("Non Anagram Strings");
	}
    getch();
}