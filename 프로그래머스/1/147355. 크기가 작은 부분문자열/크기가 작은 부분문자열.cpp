#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) 
{
    int A = t.length();
    int B = p.length();
    int answer = 0;

    for (int i = 0; i <= A - B; i++)
    {
        string part = t.substr(i, B); 

       
        if (part <= p)  
            answer++;
    }

    return answer;
}
