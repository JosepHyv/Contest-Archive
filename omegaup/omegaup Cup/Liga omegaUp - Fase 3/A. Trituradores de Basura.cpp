// no solved problem
// solution bugged
#include<queue>
#include<vector>
#include<string>
#include<iostream>
using namespace std;

vector < int > grf[20] = {{}, {0,1,2,3,4,5,6,7,8,9}, {0,1,3,5,6,8,9},
						  {6,9}, {0,5,6,7,8,9}, {0,6,8,9}, {9}, {0,8,9},
						  {0,9},{}};
struct nn
{
	bool vs[12];
	int tm;
	string ans = "";
};

int n;
int number;

string bfs(string a, int n)
{
	queue< nn > cl;
	nn root;
	root.vs[n] = true;
	root.ans += to_string(n);
	root.tm = 1;
	cl.push(root);
	while(!cl.empty())
	{
		nn r = cl.front();
		//cout<<r.ans<<" ";
		if( r.ans == a )
			return r.ans;
		int node = r.ans[r.ans.size()-1];
		node -= 48;
		if( grf[node].empty())
		{
			nn h = r;
			h.ans += to_string(node);
			h.vs[node] = true;
			h.tm++;
			cl.push(h);
			continue;
		}
		for(auto v:grf[node] )
		{
			if( r.tm <= a.size() &&  v <= (a[r.tm])-48 && !r.vs[v])
			{
				nn h = r;
				h.ans += to_string(v);
				h.tm++;
				h.vs[v] = true;
				cl.push(h);
			}
		}
	}
	return "no";

}

string solve( int  n)
{
	string a = to_string(n);
	int maxi = 0;
	int fins = a[0];
	fins -= 48;
	//cout<<"--------"<<fins<<"\n";
	for(int c = 1; c<=fins; c++)
	{
		string abss = bfs(a,c);
		cout<<abss<<"\n";
		if( abss != "no" )
		maxi = atoi(abss.c_str());
	}
	return to_string(maxi);
}

main()
{
	//ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin>>n;
	for(int c = 0; c<n; c++)
	{
		cin>>number;
		cout<<solve(number)<<"\n";
	}
	return 0;
}


