#include<iostream>
using namespace std;
int main()
{
    int T,N;
    cin>>T;
    for (int i=0;i<T;i++)
    {
        cin>>N;
        int a[N],b[N],c[N],ans[N];
        for(int j=0;j<N;j++)
        {
            cin>>a[j];
        }
        for(int j=0;j<N;j++)
        {
            cin>>b[j];
        }
        for(int j=0;j<N;j++)
        {
            cin>>c[j];
        }




        ans[0]=a[0];
        for(int j=1;j<N;j++)
        {
        	if(ans[j-1]!=a[j])
        	ans[j]=a[j];
        	else if (ans[j-1]!=b[j])
        	ans[j]=b[j];
        	else if(ans[j-1]!=c[j])
        	ans[j]=c[j];
        	
        }
            
            
            
            
        for(int j=0;j<N;j++)
        cout<<ans[j]<<' ';
        cout<<'\n';
    }
}