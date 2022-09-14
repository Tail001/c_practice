
#include <stdio.h>
 
int main()
{
    int n, reversedInteger = 0, remainder, originalInteger;
 
    printf("input: ");
    scanf("%d", &n);
 
    originalInteger = n;
 
    // 翻转
    while( n!=0 )
    {
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }
 
    // 判断
    if (originalInteger == reversedInteger)
        printf("%d YES", originalInteger);
    else
        printf("%d NO。", originalInteger);
    
    return 0;
}