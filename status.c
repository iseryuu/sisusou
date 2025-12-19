
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand(time(0));
    
    
    int INT = (rand() % 20) + 1;
    
    int STAS =(20 - INT);
    
    int STA = (rand() % STAS ) + 1;
    int CHA = 20-(INT + STA);
    
    printf("intelligence %d\n stamina %d\n charisma %d\n",INT,STA,CHA);
 
    if (INT > STA)
    {
        if (INT > CHA)
        {
            printf("You are mage");
        }
        
        else if (INT == CHA)
        {
            printf("You are magethief");
            
        }
        
        else
        {
            printf("You are thief");
        }
        
       
        
    }
    else
    {
        if (STA > CHA)
        {
            printf("You are knight");
        }
        
        else if (STA == CHA)
        {
            printf("You are knightthief");
        }
        
        else
        {
            printf("You are thief");
        }
    }     
    
    if (INT == STA)
    {
        printf("You are mageknight");
    }
   
    return 0;
}