#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) 
{
    int answer = 0;
    while(n >= a)
    {
        answer += n/a *b; 
        int k = n%a;
        n = n/a*b + k;
    }
    return answer;
}