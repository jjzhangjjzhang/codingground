#include <iostream>

using namespace std;
bool hasUniqChar(string s)
{
    for(int i=0;i<s.size()-1;i++)
    for(int j=i+1;j<s.size();j++)
    {
        if (s[j]==s[i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
   cout << "Hello World" << endl; 
   cout<<"abcd"<<endl;
   cout << hasUniqChar("abcc")<<endl;
   return 0;
}

