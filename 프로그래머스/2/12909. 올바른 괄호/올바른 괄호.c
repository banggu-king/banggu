#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) 
{
    bool answer = true;
    int k= strlen(s);
    int n=0;
    int m=0;
    for (int i=0; i<k; i++)
    {
        if (s[i] == '(')
            n++;
        else
            n--;
        
        if (n<0)
            return false;
    }
    if (n!=0)
            return false;
    return answer;
}