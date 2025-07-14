#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) 
{
    vector<int> answer;
    int alph[26];
    
    for (int i =0; i < 26; i++)
    {
        alph[i] = -1;
    }
    
    for (int i=0; i< s.size(); i++)
    {
        int idx = s[i] -'a';
        
        if (alph[idx] == -1)
            answer.push_back(-1);
        else
            answer.push_back(i-alph[idx]);
        
        alph[idx] = i;
    }
    
    return answer;
}