#include <iostream>
#include <fstream>

using namespace std;

void ingresar(int arreglo[], int n);
void mostrar(int arreglo[], int n);
void insercion(int arreglo[], int n);//ordenamiento por insercion
bool busqueda(int arreglo[],int n, int numb, int c);//busqueda por interpolacion


int main()
{
    int num;
    int a;
    cout<<"Ingrese el numero de elementos del arreglo"<<endl;
    cin>>a;
    int arreglo[a];
    ingresar(arreglo,a);
    mostrar(arreglo,a);
    cout<<endl<<endl;
    insercion(arreglo,a);
    mostrar(arreglo,a);
    cout<<endl;
    cout<<"Ingrese el elemento a buscar"<<endl;
    cin>>num;
    int c=0;
    bool valor;
    valor=busqueda(arreglo,a,num,c);
    if(valor==true){
        cout<<"Elemento encontrado";
    }
    else if(valor==false){
        cout<<"Elemento no encontrado";
    }
    cout<<endl;

}


void ingresar(int arreglo[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"Ingrese el elemento numero "<<i+1<<" para el arreglo"<<" => ";
        cin>>arreglo[i];
    }
}

void mostrar(int arreglo[],int n)
{

    for(int i=0; i<n; i++)
    {
        cout<<"["<< arreglo[i]<<"]";
    }
}

void insercion(int arreglo[], int n)
{
    int j,i,aux;
    for(i=0; i<n; i++)
    {
        aux=arreglo[i];
        for(int p=i; p>0; p--)
        {
            if(arreglo[p-1]>aux)
            {
                arreglo[p]=arreglo[p-1];
                arreglo[p-1]=aux;
            }
        }
    }
}
bool busqueda(int arreglo[],int n, int num,int c)
{
    int primero=0;
    int ultimo=n-1;
    int medio;

    medio=primero+((num-arreglo[primero])*(ultimo-primero))/(arreglo[ultimo]-arreglo[primero]);

    if(c<n){

        if(arreglo[medio]<num)
        {
            primero=medio+1;
        }
        if(arreglo[medio]>num)
        {
            ultimo=medio-1;
        }
        else
        {
            primero=medio;
        }
        busqueda(arreglo,n,num,c+1);


    }
    else{
        return false;
    }
    

    if(arreglo[primero]==num)
    {
        return true;
    }
    else
    {
        return false;
    }
}
