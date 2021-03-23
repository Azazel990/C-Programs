//Program to replace a substring in a string

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    int i,j,k1,k2,l,f,q;
    char s1[100],s2[100],temp,s3[100];
    printf("Please Enter Two Stirngs : ");
    gets(s1);
    
    printf("Please Enter the string to be replaced : ");
    gets(s2);
   
   printf("Please Enter the new Substring : ");
   gets(s3);
   
    for(i=0;s1[i]!=NULL;i++)
    {
        //puts(s1);
        if(s1[i]==s2[0])
        {
            //puts(s2);
            k1 = i;
                          //printf("k1 = %d\n",k1);
            f= 0;
            for(j=0;s2[j]!=NULL;j++)
            {
                if(s1[i]!=s2[j])
                {
                    f = 1;
                    break;
                }
                i++;
               
            }
            // printf("%d\n",f);
            //  k2 = i-1;

            //  printf("k2 = %d\n",k2);
        }
        if(f==0)
        {
            //printf("%d\n",f);
            k2 = i-1;
            //printf("k2 = %d",k2);
            //p = 0 ;
            for(l=k1;l<=k2;l++)
            {
                s1[l] = '#';
            }
            puts(s1);
            printf("\n");
            q = 0;
            for(l=k1;s3[q]!=NULL;l++)
            {
                s1[l] = s3[q];
                q++;
            }
            puts(s1);
            // for(l=q;l<=k2;l++)
            // {
            //     if(s1[l]=='#')
            //     {
            //         for(j=l;s1[j]!=NULL;j++)
            //         {
            //             s1[j] = s1[j+1];
            //         }
            //     }
            // }
        }
        
    }
   
   printf("THe New String is : ");
   puts(s1);
    getch();
}