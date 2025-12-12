#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
     printf("Make Password\n");
     char Pass[30];
     scanf("%s",Pass);
    
    int upper = 0;
    int lower = 0;
    
    size_t PL = strlen(Pass);
    
    if (PL >= 8 )
    {
        for (size_t i = 0; i <= PL; i++ )
        {
            char P = Pass[i];
            
            if (isupper(P))
            {
                upper = 1;
            }
            else if (islower(P))
            {
                lower = 1;
            }
            
             if (upper == 1 && lower == 1) 
            {
                break;
            }
            
        }
        
        if (upper == 1 && lower == 1) 
        {
            printf("No problem :)");
        } 
        
        else if (lower == 0)
        {
            printf("Please add lowercase letters");
        }
        
        else if (upper == 0)
        {
            printf("Please add uppercase letters");
        }
        
    }
    
    else 
    {
        printf("Please make it longer than 8 character");
    }
    
    return 0;
}