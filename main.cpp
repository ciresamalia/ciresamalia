#include<iostream>
using namespace std;
int n;
int V[100];
int main()
{
    cout<<"n=";cin>>n;
    for(int i=0;0<=n;i++)
    {
        cout<<"V["<<i<<"]";cin>>V[i];}
        cout<<"Initial"<<endl;
        for(int i=0;i<=n;i++)
        cout<<V[i]<<"";
        for(int i=0;i<=n-1;i++)
        {
            int minim=V[0];
            int loc=0;
            for(int j=i+1;j<=n;j++);
            {
                if(V[j]<minim){minim=V[j];
                loc=j;}
            }
        } int aux;
        aux=V[i];
        V[i]=V[loc];
        V[loc]=aux;
    }
    cout<<"Sortate"<<endl;
    for(int i-1)
}
