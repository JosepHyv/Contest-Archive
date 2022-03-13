#include<bits/stdc++.h>
using namespace std;


string s;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int l = 0, r = 0 ;
	int turno = 0;
	int win[2] = {0,0};
	cin>>s;
	for(int c = 0; c<s.size()-1; c++)
	{
		if( s[c] =='S')
		{
			if(turno % 2 )
				r++;
			else
				l++;
			
			if( turno % 2)
			{
				if( r >= 5 && abs(r - l) >= 2 || r >= 10 )
				{
					win[1]++;
					r = l = 0 ;
				}
			}
			else
			{
				if( l >= 5 && abs(r - l) >= 2 || l >= 10 )
				{
					win[0]++;
					r = l = 0 ;
				}	
			}
		}
		if( s[c] == 'R')
		{
			turno++;
			if( turno % 2)
				r ++;
			else
				l++;
			if( turno % 2)
			{
				if( r >= 5 && abs(r - l) >= 2 || r >= 10 )
				{
					win[1]++;
					r = l = 0 ;
				}
			}
			else
			{
				if( l >= 5 && abs(r - l) >= 2 || l >= 10 )
				{
					win[0]++;
					r = l = 0 ;
				}	
			}
		}

		if( s[c] == 'Q')
		{
			//0 (1) - 0 (3*)
			if( turno % 2 )
				cout<<win[0]<<" ("<<l<<") - "<<win[1]<<" ("<<r<<"*)\n";
			else 
				cout<<win[0]<<" ("<<l<<"*) - "<<win[1]<<" ("<<r<<")\n";
		}
	}

	if( s.back() == 'Q')
	{
		if( win[0] > win[1])
			cout<<win[0]<<" (winner) - "<<win[1]<<"\n";
		else
			cout<<win[0]<<" - "<<win[1]<<" (winner)\n";
	}



}

