#include<bits/stdc++.h>
#define fi first
#define se second
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int maxn = 1e6+2;
constexpr int inf = 2e9;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*
	La comisión de radio te ha dicho que el 
	rango válido de frecuencias para transmitir 
	es de 540 MHz hasta 1520 MHz. Consultando el sitio 
	web de la asociación de radiodifusoras, has encontrado 
	que existen 5 estaciones:

	Radio Karel, transmitiendo en 580 MHz.
	La Z++, transmitiendo en 980 MHz.
	Estereo Java, transmitiendo en 1190 MHz.
	Beta Radio, transmitiendo en 1250 MHz.
	SabroCta, transmitiendo en 1420 MHz.
*/
	int n;
	cin>>n;
	if( n < 540  || n > 1520)
		cout<<"error";
	if( n>= 540 && n <=580 )
		cout<<"adelante "<<580 - n;
	if( n > 580 && n <=780)
		cout<<"atras "<< n - 580;
	if( n>=780 && n <= 980)
		cout<<"adelante "<<980-n;
	if( n > 980 && n <=1085)
		cout<<"atras "<< n - 980;
	if( n >= 1085 && n <= 1190)
		cout<<"adelante "<<1190 - n;
	if( n > 1190 && n <=1220)
		cout<<"atras "<<n-1190;
	if( n >= 1220 && n <= 1250)
		cout<<"adelante "<<1250-n;
	if( n > 1250 && n <=1335 )
		cout<<"atras "<<n - 1250;
	if( n >= 1335 && n <= 1420)
		cout<<"adelante "<<1420-n;
	if( n > 1420)
		cout<<"atras "<<n - 1420;



}
