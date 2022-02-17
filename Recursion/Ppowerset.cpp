#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	    void sub(string up,string p,vector<string>&ans)
	    {
	        if(up.empty())
	        {
	            ans.push_back(p);
                cout<<p<<endl;
	            return;
	        }
	        char ch  = up[0];
	        sub(up.substr(1),p+ch,ans);
	        sub(up.substr(1),p,ans);
	    }
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> ans;
		    if(s.size() < 1)
		    return ans;
		    string p = "";
		    sub(s,p,ans);
		    sort(ans.begin(),ans.end());
		    auto it = ans.begin();
		    ans.erase(it);
		    return ans;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends