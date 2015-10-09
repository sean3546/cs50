#include <stdio.h>
#include <cs50.h>


int main(void)
{

int height;

do
{
    printf("Please enter a height between 0 and 23: ");
    height = GetInt();

}
while (!(height >= 0 && height <=23));   

int i;
int x;
int z;
int nspace;
int nhash;
for (i = 0; i < height; ++i)
{       
   
     nspace = (height-1) - i;
     nhash = i + 2;
                                            // printf("value of nspace: %d\n", nspace);
                                            //printf("value of nhash:  %d", nhash);
     
    for (z = 0; z < nspace; ++z)
    {
    
    printf(" ");

        
     }   for (x = 0; x < nhash; ++x)
        {
        
        printf("#");
        } 
        printf("\n"); 
          

    
    
       }

}
