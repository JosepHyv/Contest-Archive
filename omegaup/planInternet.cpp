#include<iostream>
using namespace std;
///aqui puede ir algo 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	/*
	Plan N°1 de 1MB a 500MB, $2 pesos por mega.
Plan N°2 de 501MB a 1GB, $1.80 pesos por mega.
Plan N°3 de 1025MB a 2GB, $1.60 pesos por mega.
Plan N°4 de 2049MB a 4GB, $1.40 pesos por Mega.
Plan N°5 de 4097MB a 10GB, $0.50 pesos por Mega.*/
	int n;
	cin >> n ;
	double ans = 0 ;
	if( n >= 1 &&  n <= 500)
	{
		cout<<"Plan #1 - $";
		ans = n * 2;
	} 
	else if( n >= 500 && n <= 1024)
	{
		cout<<"Plan #2 - $";
		ans = n * 1.80;
	}
	else if( n >= 1025 && n <= 2048)
	{
		cout<<"Plan #3 - $";
		ans = n * 1.60;
	}
	else if( n >= 2049 && n <= 4096)
	{
		cout<<"Plan #4 - $";
		ans = n * 1.40;
	}
	else if( n >= 4097)
	{
		cout<<"Plan #5 - $";
		ans  = n * 0.50;
	}
	cout<<ans;
	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/