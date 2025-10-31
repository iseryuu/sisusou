#include <stdio.h>

int main()
{
    
    int k;
    int s;
    printf("How many your KYUURYOU?>>>");
    scanf("%d",&k);
    printf("How many your SANZAI?>>>");
    scanf("%d",&s);
    
    if (k * 0.3 > k - s && k - s >= k * 0.1)
    {
      printf("You are good. Your old age will be nice");  
    }
    
    else if (k - s >= k * 0.3)
     {
      printf("You are clever. Your old age will be Heaven");  
    }
    
    else
    {
      printf("You are fool. Your old age will be Hell");  
    }