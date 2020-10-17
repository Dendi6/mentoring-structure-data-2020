#include<iostream>  
using namespace std;  
int main ()
{    
	//Deklarasi Variable dan Input Data
    int temp, j;
	int a[10] = { 12,4,3,1,15,45,33,21,10,2};   
    
    //menampilkan nilai input
    cout<<"\nNilai yang di masukkan sebelum di urut \n";
    for(int i=0;i<10;i++)  
    {  
        cout <<a[i]<<" ";  
    }
    cout<<endl;
    
    //proses
    for(int k=1; k<10; k++)   
    {  
        temp = a[k];  
        j= k-1;
        
        while(j>=0 && temp <= a[j])  
        {  
            a[j+1] = a[j];   
            j = j-1;  
        }  
        a[j+1] = temp;  
    }
    
    //output
    cout<<"\nHasil Insertion List : \n";
    for(int i=0;i<10;i++)  
    {  
        cout <<a[i]<<" ";  
    }  
}
