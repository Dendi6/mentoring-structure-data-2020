#include <iostream>
using namespace std;

//penyimpanan tanggal lahir	
struct data_tanggal{
	int tanggal;
	int bulan;
	int tahun;
}lahir;

//penyimpanan alamat 
struct data_alamat {
	char nama_jalan[100];
	char nama_kelurahan[100];
	char nama_kecamatan[100];
	char nama_kota[100];
	char kode_pos[10];
}alamat;

//sturck data pegawai
struct data_pegawai {
	char nik[50];
	char nama[100];
	char jabatan[100];
	data_tanggal lahir;
	data_alamat alamat;
	long gaji_kotor;
	long pajak;
	long gaji_bersih;
};

int main (){
	
	data_pegawai pegawai[3];
	int pajak[3];
	
	//loping inputan;
	for (int i=0; i<3; i++){
		cout<<"NIK     = ";
		cin>>pegawai[i].nik;
		cout<<"Nama    = ";
		cin>>pegawai[i].nama;
		cout<<"Jabatan = ";
		cin>>pegawai[i].jabatan;
		
		cout<<" | Tanggal Lahir | ";cout<<endl;
		cout<<"Tanggal = "; 
		cin>>pegawai[i].lahir.tanggal;
		cout<<"Bulan   = ";
		cin>>pegawai[i].lahir.bulan;
		cout<<"Tahun   = ";
		cin>>pegawai[i].lahir.tahun;
		
		
		cout<<" | Alamat CUY | ";cout<<endl;
		cout<<"Jalan     = ";
		cin>>pegawai[i].alamat.nama_jalan;
		cout<<"Kelurahan = ";
		cin>>pegawai[i].alamat.nama_kelurahan;
		cout<<"kecamatan = ";
		cin>>pegawai[i].alamat.nama_kecamatan;
		cout<<"Kota      = ";
		cin>>pegawai[i].alamat.nama_kota;
		cout<<"Kode poss = ";
		cin>>pegawai[i].alamat.kode_pos;
		
		cout<<" | Gaji | ";cout<<endl;
		cout<<"Gaji Kotor = ";
		cin>>pegawai[i].gaji_kotor;
		
		//logika pajak
		if (pegawai[i].gaji_kotor<=2000000){
			//pajak 1 %
			pegawai[i].pajak = (pegawai[i].gaji_kotor/100);		
		} else if (pegawai[i].gaji_kotor>2000000 && pegawai[i].gaji_kotor<=5000000){
			//pajak 2 %
			pegawai[i].pajak = ((pegawai[i].gaji_kotor/100)*2);
		} else if (pegawai[i].gaji_kotor>5000000 && pegawai[i].gaji_kotor<=10000000){
			//pajak 3 %
			pegawai[i].pajak = ((pegawai[i].gaji_kotor/100)*3);
		} else if (pegawai[i].gaji_kotor>10000000){
			//pajak 5 %
			pegawai[i].pajak = ((pegawai[i].gaji_kotor/100)*5);
		}
		
		//pendapatan bersih dari kotor - pajak
		pegawai[i].gaji_bersih = (pegawai[i].gaji_kotor - pegawai[i].pajak);
		
		cout<<endl;
	}
	
	
	cout<<endl<<endl;
	
	//tampilan output
	cout<<"===================================================================================="<<endl;
	cout<<"No. |   NIK   |  Nama | Jabatan | Tanggal Lahir | Gaji Kotor | Gaji Bersih | Alamat "<<endl;
	cout<<"===================================================================================="<<endl;
		
		//loping untuk membaca
		for (int i=0;i<3;i++)
		{
			cout<<" "<< i+1 << "  | ";
			cout<<" "<<pegawai[i].nik<<" | ";
			cout<<" "<<pegawai[i].nama<<" | ";
			cout<<" "<<pegawai[i].jabatan<<" | ";
			
			//tanggal lahir view
			cout<<" "<<pegawai[i].lahir.tanggal<<"-"<<pegawai[i].lahir.bulan<<"-"<<pegawai[i].lahir.tahun<<" | ";
			
			//gaji view
			cout<<" Rp. "<<pegawai[i].gaji_kotor<<" | ";
			cout<<" Rp. "<<pegawai[i].gaji_bersih<<" | ";
			
			//alamat view;
			cout<<" "<<pegawai[i].alamat.nama_jalan<<",";
			cout<<pegawai[i].alamat.nama_kelurahan<<","<<pegawai[i].alamat.nama_kecamatan<<",";
			cout<<pegawai[i].alamat.nama_kota<<","<<pegawai[i].alamat.kode_pos;
			
			cout <<endl;
		}
	cout<<"======================================================================"<<endl;
	
	return 0;
}
