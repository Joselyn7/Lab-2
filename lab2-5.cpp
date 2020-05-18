//PROBLEMA 5
#include <iostream>
using namespace std;
void con(char b[],int t2,int t,char a[])
{
	if(t2>0){
		b[t2+t-1]=b[t2-1];
		return con(b,--t2,t,a);
	}
	for(int i=0;i<t;i++)
		b[i]=a[i];
}
void mostrar(char b[],int l)
{
	for(int i=0;i<l;i++)
		cout<<b[i];
}
int main()
{
	char b[]={"flores"};
	char a[]={"gato"};
	con(b,6,4,a);
	mostrar(b,10); //10 es el tamaño b + tamaño a
}
