#include<iostream>  
using namespace std;  
int main ()
{    
	//Deklarasi Variable dan Input Data
    int n,d;
    
    //inputan
    cout<<"Masukkan tinggi segitiga : ";
    cin>>n;
    cout<<endl;
    
    //proses
    //deskripsi => setian peningkatan baris akan dilakukan penambahan baris sebelumnya + 2
    cout<<"Hello, world !\n";
	for (int a = 1; a <=n; a++) {
        //outerloop
        for (int b = (n-1); b >= a; b--) {
            //inner loop no 1
            cout<<" ";
            //Untuk memberikan spasi ke samping
        }    
        for (int  c = 1; c <=a; c++) {
            //inner loop no 2
            cout<<"*";
            //menampilkan bintang dari kanan ke kiri
        }
        for (int d = 1; d <= a-1; d++) {
            //inner loop no 3
            cout<<"*";  
            //menampilkan bintang dari kiri ke kanan
        }
        cout<<endl;
        //Memberikan baris baru atau enter pada 
    }
	
	return 0;
}
