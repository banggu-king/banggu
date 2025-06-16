#include <string>
#include <vector>

using namespace std;
string toBinary(int n);

vector<int> solution(string s) 
{
    int k=0;
    int z=0;
    int count =0;
    vector<int> answer;
    
    while (s.length() !=1)
    {
        k=0;
        for (int i=0; i<s.length(); i++)
        {
            if (s[i]=='1')
                k++;
            else
                z++;
        }
        count++;
        s = toBinary(k);        
    }
    answer = {count, z};
    return answer;
}

string toBinary(int n)
{
    if (n==0)
        return "0";
    string result = "";
    while (n>0)
    {
        result = char('0' + n%2) +result;
        n/=2;
    }
    return result;
}

