#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) 
{
    int l = number.size();
    int answer = 0;
    
    for(int i=0; i <l-2; i++)
    {
        for(int j = i+1; j<l-1; j++)
        {
            for(int k =j+1; k<l; k++)
            {
                if (number[i]+number[j]+number[k]==0)
                    answer++;
            }
        }
    }
    
    
    
    return answer;
}