#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char ch, s[100], sen[100];
    
    scanf("%c\n", &ch);
    scanf("%s\n", &s);
    scanf("%[^\n]%*c", &sen);
    
    printf("%c", ch); 
    printf("\n%s", s);
    printf("\n%s", sen);
    return 0;
}
