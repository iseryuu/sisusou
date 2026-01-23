
#include <math.h>
#include <stdio.h>

int main(void)
{
    double a,b,c,D,x1,x2,x3Re,x3Im;
    
    printf("ax^2+bx+c=0のa b cを入力してください>>>");    
    scanf("%lf %lf %lf",&a,&b,&c);
    
    if(a == 0.0)
    {
        printf("aは０を避けてください。\n");
        
    }
    else
    {
        D = b * b - 4 * a * c;
        if(D >= 0.0)
        {
            x1 = (-b + sqrt(D))/(2*a);
            x2 = (-b - sqrt(D))/(2*a); 
            if(D == 0)
            {
                printf("解は、重解となり%gです。\n", x1);
            }
            else
            {
                printf("解は、%gと%gです。\n",x1,x2);
            }
        }
        else
        {
            x3Re = (-b )/(2*a) ;
            x3Im = (sqrt(-D))/(2*a);
            
            
            
            printf("虚数解となり、解は%g+%giと%g-%giです。\n",x3Re,x3Im,x3Re,x3Im);
        }
        
    }
    
    return 0;
}