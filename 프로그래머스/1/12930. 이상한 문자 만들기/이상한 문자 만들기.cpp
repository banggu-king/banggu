#include <string>
#include <vector>

using namespace std;

string solution(string s) 
{
    string answer = "";
    int k = 0;
    
    for(int i =0; i<s.length(); i++)
    {
        char c = s[i];
        if (c == ' ')
        {
            answer+=' ';
            k =0;
        }
        else
        {
            if (k%2 ==0)
            {
                answer += toupper(c);
                k++;
            }
            else
            {
                answer += tolower(c);
                k++;
            }
        }
        
    }
    
    return answer;
}