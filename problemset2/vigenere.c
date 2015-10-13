#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>
int main(int argc,  string argv[])
{

if(argc != 2)
{
         
    printf("Usage: ./caesar key");
    
    return 1;
    
}
string text = GetString();
string key = argv[1];
int keyLength = strlen(key);

//int key = atoi(argv[1])


//int i = 0;
for ( int i = 0; i < strlen(key); i++)
{

    if(isupper(key[i]))
    {
        key[i] = key[i] - 'A';
        
    }
    else if(islower(key[i]))
    {
        key[i] = key[i] - 'a';
    }

}
int j = 0;
int k = 0;

for(j=0, k=0; j < strlen(text); j++, k++)
{
    
    
        if(isupper(text[j]) && isalpha(text[j]))
        {
           text[j] = (((text[j] - 'A') + key[k % keyLength])  % 26) + 'A';
           printf("%c", text[j]);
        }  

        
  
        if (islower(text[j]) && isalpha(text[j]))
        {
            text[j] = (((text[j] - 'a') + key[k % keyLength])  % 26) + 'a';
            printf("%c", text[j]);
        }   

        
       
   
        else
        {        
        printf("%c", text[j]);
        }
        
        
        
        
    
    
};



}

// c= (p+k) % 267
