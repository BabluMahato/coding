#include<bits/stdc++.h>
using namespace std;


void powerSet(string &s, int index, vector<string> &ans ,string output)
{
    if(index >= s.length())
    {
        if(output.length() > 0 )
        {    
            ans.push_back(output);
        }
        return;
    }
    
    /* exclude */
    powerSet(s, index +1, ans, output);
    
    /* include  */ 
    char c = s[index];
    output.push_back(c);
    powerSet(s, index + 1, ans, output);

}

	    
vector<string> AllPossibleStrings(string s)
{
    // Code here
    vector<string> ans;
    string output;

    powerSet(s, 0, ans, output);
    //sort(ans.begin(), ans.end());
    return ans;
    
}

int main()
{
    string  s = "dmxn";
    vector<string> ans;
    ans = AllPossibleStrings(s);

    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
}




