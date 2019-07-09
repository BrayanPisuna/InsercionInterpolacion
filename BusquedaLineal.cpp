#include<iostream>
using namespace std;
void ingresarElementos(int arra[],int n);
void busquedaLineal(int arra[],int n,int x);
void mostrarElementos(int arra[],int n);
int main()
 {
	int t;
	cout<<"INGRESE TAMAÑO "<<endl;
	cin>>t;
	int arreglo[t];
	ingresarElementos(arreglo,t);
	mostrarElementos(arreglo,t);
	int x;
	cout<<endl;
	cout<<"ingrese el elemento a buscar: "<<endl;
	cin>>x;
	cout<<endl;
	busquedaLineal(arreglo,t,x);

}

void ingresarElementos(int arra[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"elemento "<<i<<"= ";
		cin>>arra[i];
	}
}

void busquedaLineal(int arra[],int n,int x)
{
	bool cambio=false;
	for(int i=0;i<n;i++)
	{
		if(x==arra[i])
		{
			cout<<"elemento encontrado"<<" se encuentra en la posicion "<<i<<endl;
			cambio=true;
		}
		
	}
	    if (cambio==false)
		{
			cout<<"elemento no encontrado"<<endl;
		}
}

void mostrarElementos(int arra[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"["<<arra[i]<<"]";
	}
}
