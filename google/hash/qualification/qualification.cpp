#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int lld;
typedef long double ld;

/*ostream & operator <<(ostream &os, const proyecto &sol )
{
	os<<"-------------\n";
	os<<"Proyecto: "<<sol.nombre<<"\n";
	os<<"dias: "<<sol.dias<<" socre: "<<sol.score<<" tiempo: "<<sol.time<<"\n";
	os<<"skills:\n";
	for(auto a: sol.skill)
		os<<a.first<<" -> "<<a.second<<", ";	
	return os <<"\n-----------------\n";
}*/

struct persona
{
	string nombre;
	int dialibre;
	map < string, int > skill;
	bool operator == ( const persona &a) const
	{
		return nombre == a.nombre;
	}
};

struct proyecto
{
	string nombre;
	int dias, score, time;
	vector < pair < string , int > > skill;
	bool operator < (const proyecto &a) const
	{
		if(dias != a.dias)
			return dias < a.dias;
		else if(score != a.score)
			return score < a.score;
		else return time < a.time;
	}
};


int diasTotales;
int puntos;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout<<setprecision(15)<<fixed;

	int n,m;
	cin>>n>>m;
	vector < persona > humano(n);
	vector < proyecto > project(m);
	for(int c = 0 ; c<n; c++)
	{
		string lenguaje;
		int level;
		int skil;
		cin>>humano[c].nombre>>skil;
		for(int d = 0 ; d<skil; d++)
		{
			cin>>lenguaje>>level;
			humano[c].skill[lenguaje] = level;
		}
	}

	stack < pair < proyecto, int >  > proceso;
	vector < pair < proyecto, vector < persona > > > ans;
		

	for(int x = 0 ; x<m; x++)
	{
		int skil;
		cin>>project[x].nombre>>project[x].dias>>project[x].score>>project[x].time>>skil;
		while(skil--)
		{
			string lenguaje;
			int level;
			cin>>lenguaje>>level;
			project[x].skill.push_back({lenguaje,level});	

		}

	}

	for(int x = 0 ; x<m;  x++)
	{
		vector < bool > marca(n,0);
		while(proceso.size() )
		{
			proyecto current = proceso.top().first;
			proceso.pop();
		//	cout<<current<<"\n";
			//cout<<current.nombre<<"\n";
			vector < persona > temporal;
			for(int c = 0 ; c<(int)humano.size(); c++)
			{
				for(int d = 0 ; d<(int)current.skill.size(); d++)
				{
					int level = 0;
					if(humano[c].skill.find(current.skill[d].first) != humano[c].skill.end())
						level = humano[c].skill[current.skill[d].first];
					if(level >= current.skill[d].second && !marca[c])
					{
						marca[c] = true;
						temporal.push_back(humano[c]);
						if(level == current.skill[d].second)
							humano[c].skill[current.skill[d].first]++;
					} 
				}
			}
			if(temporal.size())
				ans.push_back({current, temporal});
		}
		proceso.push({project[x], x});
	}


	while(proceso.size() )
		{
			vector < bool > marca(n,0);
			proyecto current = proceso.top().first;
			proceso.pop();
		//	cout<<current<<"\n";
		//	cout<<current.nombre<<"\n";
			vector < persona > temporal;
			for(int c = 0 ; c<(int)humano.size(); c++)
			{
				for(int d = 0 ; d<(int)current.skill.size(); d++)
				{
					int level = 0;
					if(humano[c].skill.find(current.skill[d].first) != humano[c].skill.end())
						level = humano[c].skill[current.skill[d].first];
					if(level >= current.skill[d].second && !marca[c])
					{
						marca[c] = true;
						temporal.push_back(humano[c]);
						if(level == current.skill[d].second)
							humano[c].skill[current.skill[d].first]++;
					} 
				}
			}
			if(temporal.size())
				ans.push_back({current, temporal});
		}
	
	//sort(project.rbegin(), project.rend());
	cout<<ans.size()<<"\n";
	for(int c = 0 ; c<(int)ans.size(); c++)
	{
		cout<<ans[c].first.nombre<<"\n";
		for(persona a: ans[c].second)
			cout<<a.nombre<<" ";
		cout<<"\n";
	}


		//cout<<"\n";
}