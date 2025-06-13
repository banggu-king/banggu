#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int k, int d) 
{
    long long answer = 0;
    for (long long i=0; i<=d; i+=k)
    {
        long long j = (long long)(sqrt((long long)d*d - i*i))/k +1;
        answer += j;
    }
    return answer;
}