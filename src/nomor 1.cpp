#include<iostream>  
using namespace std;  
int main ()
{    
	//Deklarasi Variable dan Input Data
    int n,d;
    
    //inputan
    cout<<"Masukkan banyak sapaan : ";
    cin>>n;
    cout<<endl;
    
    //proses
    //deskripsi => banyaknya baris akan di kalikan 2 untuk mendapakan banyaknya kolom
    cout<<"Hello, world !\n";
    for (int i=0; i<n ; i++){
		//perkalian
    	d = n*2;
    	for (int k=0; k<d; k++ ){
    		cout<<"o";
		}
		cout<<endl;
	}
	
	return 0;
}
