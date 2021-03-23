//Total Number of Handshakes?

#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main()
{
    int i,j,k,m,n,p,q,r,a[100];
    printf("Please Enter a Number of Students : ");
    scanf("%d",&n);
    
    i=0;
    m = n;
    while(m!=0)
    {
        a[i] = m%10;
        i++;
        m = m/10;
    }
    p = i ;
    printf("%d",p);
    j=0;
    
k=0;
    while(p!=0)
    {
        for(k=0;k<=i-1;k++)
        {
            switch(a[k])
            {
                case 1 : printf("one");
                        break;
                case 2 : printf("two");
                        break;
                case 3 : printf("three");
                        break;
                case 4 : printf("four");
                        break;
                case 5 : printf("five");
                        break;
                case 6 : printf("six");
                        break;
                case 7 : printf("seven");
                        break;
                case 8 : printf("eight");
                        break;
                case 9 : printf("nine");
                        break;
            }
            if(p==4)
            {
                printf(" Thousand");
                p--;
            }
            if(p==3)
            {
                printf(" Hundred and ");
                p--;
                switch(a[k])
                {
                    a:
                    case 11 : printf("Eleven");
                    p--;
                        break;
                    case 12 : printf("Twelve");
                        p--;
                        break;
                        case 13 : printf("Thirteen");
                            p--;
                        break;
                        case 14 : printf("Fourteen");
                            p--;
                        break;
                        case 15 : printf("Fifteen");
                            p--;
                        break;
                        case 16 : printf("Sixteen");
                            p--;
                        break;
                        case 17 : printf("Seventeen");
                            p--;
                        break;
                        case 18 : printf("Eighteen");
                            p--;
                        break;
                        case 19 : printf("Nineteen");
                            p--;
                        break;
                case 2   : printf("twenty");
                            p--;
                        break;
                case 3 : printf("thirty");
                            p--;
                        break;
                case 4 : printf("fourty");
                            p--;
                        break;
                case 5 : printf("fifty");
                        p--;
                        break;
                case 6 : printf("sixty");
                        p--;
                        break;
                case 7 : printf("seventy");
                        p--;
                        break;
                case 8 : printf("eighty");
                        p--;
                        break;
                case 9 : printf("ninety");
                        p--;
                        break;   
                }
                if(a[k+1]!=0)
                goto a;
            }
        }
    }
    getch();
}