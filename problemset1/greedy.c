//this program returns the least amount of coins needed that add up to a given amount (using coins of value 1, 5, 10  and 25

#include <stdio.h>
#include <cs50.h>
#include <math.h>




int main(void)
{
int greedy();
float change;
int x; 
//get the amount needed
do{
printf("Please enter your change: ");
change = GetFloat();
}
while (!(change > 0));

//converts the input for easier calculation
change = change*100;
x = roundf(change);

printf("%d", greedy(x));


}

//greedy(); simply adds 1 to count for every condition met while subtracting a "coin" value from x

int greedy(int x)
{

int count = 0;
do
{



    if( x >= 25)
    {
    
    
    x = x-25;
    ++count;
    }
        else if( x >= 10)
        {
        
        
        x = x-10;
        ++count;
        }
        
        else if( x >=5)
        {
        
        
        x = x-5;
          ++count;     
        }
        
        else if( x == 1)
        {
        
        
        x = x - 1;
        ++count;
        }
}

while( x > 0);
return count;        
}
