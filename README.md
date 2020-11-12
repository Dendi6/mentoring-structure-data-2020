## Mentoring_SD_2020
Mentoring Struktur Data 2020. © Universitas Maritim Raja Ali Haji.

## Penjelasan
Structure merupakan kumpulan elemen data yang digabungkan menjadi satu
kesatuan data. Masing-masing elemen data tersebut dinamakan field atau elemen
struktur. Field tersebut bisa memiliki tipe data yang ataupun berbeda, meskipun field
tersebut dalam satu kesatuan tetapi tetap bisa siakses secara individu.

## Soal dan penyelesainan
source code dapat di akses di folder `src/`<br>
***soal***<br>
```
  Buatlah program untuk membaca dan mencetak biodata pegawai yang terdiri
  dari NIK, nama, jabatan, tanggal lahir, alamat Gaji kotor. Struktur tanggal lahir
  terdiri dari field-field tanggal, bulan, tahun. Struktur alamat terdiri dari nama
  jalan, kelurahan, kecamatan, kota, kode pos (struct dalam struct)!
  Carilah gaji bersih dimana diperoleh dari gaji kotor dikurangi pajak. Adapun
  peraturan pajak sbb:
  • Gaji kotor < Rp.2.000.000 maka pajak = 1% dari gaji kotor.
  • Gaji kotor antara Rp.2.000.000 - Rp. 5.000.000 maka pajak = 2% dari gaji kotor.
  • Gaji kotor antara Rp. 5.000.000 – Rp. 10.000.000,- maka pajak = 3% dari gajikotor.
  • Gaji kotor > Rp.10.000.000 maka pajak = 5% dari gaji kotor
  
  Buatlah program untuk 3 orang pegawai, gunakan array of struct !
    Misalkan untuk perhitungan gaji bersih:
    Input:
    Gaji kotor perbulan = Rp. 6.000.000,-
    Maka:
    Gaji bersih perbulan = Rp. 5.820.000,-
```

***Algoritma penyelesaian !***<br>
1. Deklarasikan nilai yang ingin di ketahui.<br>   
   nilai tanggal lahir
   ```
      struct data_tanggal{
        int tanggal;
        int bulan;
        int tahun;
      } lahir;
   ```
   nilai Alamat 
   ```
      struct data_alamat {
        char nama_jalan[100];
        char nama_kelurahan[100];
        char nama_kecamatan[100];
        char nama_kota[100];
        char kode_pos[10];
      }alamat;
   ```
   nilai biodata pegawai
   ```
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
    ```
   nilai biodata pegawai memanggil nilai tanggal dan nilai alamat.
 
2. Deklarasikan data pegawai dengan panjang nilai sebanyak 3, di fungsi main.
3. Lakukan Looping sebanyak 3 kali untuk digunakan inputan, data pegawai.
4. Lakukan perhitungan di dalam looping dengan target nilai pajak.
   ```
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
   ```
5. Lakukan penguranangan, nilai dari gaji_kotor dan pajak, yang akan menghasilkan nilai gaji_bersih.
6. Lakukan perulangan kembali dengan tujuan menampilkan.
7. Santuy jika ada error, jangan lupa tanya mentor :v

## Refrensi Materi
<a href="https://drive.google.com/file/d/1zTwyPuk3NkuxZvzoRBqQHWsWo3I-fby7/view?usp=sharing">Panduan</a>

---
keep calm and say bismillah
