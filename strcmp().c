//Defination of strcmp1()

#include<stdio.h>
#include<conio.h>

int strcmp1(char [],char []);

void main()
{
    int x,y,z;
    char s[100],t[100],c;
    printf("Please Enter two String : ");
    gets(s);
    gets(t);
    
    
    x = strcmp1(s,t);
    
    printf("%d",x);
    getch();
}

int strcmp1(char s[],char t[])
{
    int i,j,k,sum=0,n1,n2;
    int r[100];
    j=0;
    for(i=0,j=0;s[i]!=NULL&&t[j]!=NULL;)
    {
        if(s[i]!=NULL&&t[j]!=NULL)
        {
            n1 = (int)s[i];
            n2 = (int)t[j];
            r[i] = n1 - n2;
            i++;
            j++;
            printf("a =%d\n",r[i]);
        }
        else if(s[i]==NULL&&t[i]!=NULL)
        {
            n2 = (int)t[j];
            r[i] = 0 - n2;
            i++;
            j++;
            printf("b = %d\n",r[i]);
        }
        else if(s[i]!=NULL&&t[j]==NULL)
        {
            n1 = (int)s[i];
            r[i] = n1 - 0 ;
            i++;
            printf("c = %d\n",r[i]);
        }
       
    }
    
    for(i=0;r[i]!=NULL;i++)
    {
        sum = sum + r[i];
        
    }
    printf("sum = %d\n",sum);
    if(sum > 0)
    {
        return 1;
    }
    else if(sum < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}