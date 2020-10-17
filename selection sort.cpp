#include<iostream>
using namespace std;
int main()
{	
	//deklarasi variable
    int i,j,n,loc,temp,min,a[30];
    
    //input
    cout<<"Masukkan banyaknya Data ( n ) : ";
    cin>>n;
    cout<<endl;
    
    //looping input
    cout<<"Masukkkan nilai data : \n";
    for(i=0;i<n;i++)
    {	
        cin>>a[i];
    }
    
	//proses
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                loc=j;
            }
        }
 
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }
 	
	//output
    cout<<"\nHasil Dari Selection Search : \n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
 
    return 0;
}
