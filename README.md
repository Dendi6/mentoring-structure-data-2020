## ⛵ Mentoring_SD_2020
Mentoring Struktur Data 2020. © Universitas Maritim Raja Ali Haji.

## 🧧 Penjelasan
Bubble sort merupakan sebuah teknik pengurutan data dengan cara menukar dua data yang bersebelahan jika urutan dari data tersebut salah. 
Algorithma ini dapat mengurutkan data dari besar ke kecil (Ascending) dan kecil ke besar (Descending). 
Algoritma ini tidak cocok untuk set data dengan jumlah besar karena kompleksitas dari algorithma ini adalah Ο() di mana n adalah jumlah item.

Berikut gambaran dari implementasi Bubble Sort:

1st Cycle:
```
(70, 60, 30, 50, 40, 20) -> (70, 60, 30, 50, 20, 40)
(70, 60, 30, 50, 20, 40) -> (70, 60, 30, 20, 50, 40)
(70, 60, 30, 20, 50, 40) -> (70, 60, 20, 30, 50, 40)
(70, 60, 20, 30, 50, 40) -> (70, 20, 60, 30, 50, 40)
(70, 20, 60, 30, 50, 40) -> (20, 70 , 60, 30, 50, 40)
(20, 70, 60, 30 , 50, 40)
```
2nd Cycle:
```
(20,70,60,30,50, 40) ->(20,70,60,30,40,50)
(20,70,60,30,40,50) -> (20,70,60,30,40,50)
(20,70,60,30,40,50) -> (20,70,30, 60,40,50)
(20,70,30,60,40,50) -> (20,30,70, 60,40,50)
(20,30,70, 60,40,50)
```
3rd Cycle:
```
(20,30,70, 60,40,50) -> (20,30,70, 60,40,50)
(20,30,70, 60,40,50) ->(20,30,70,40,60,50)
(20,30,70,40,60,50) -> (20,30,40, 70,60,50)
(20,30,40,70,60,50)
```
4th Cycle:
```
(20,30,40,70,60,50) -> (20,30,40,70,50,60)
(20,30,40,70,50,60) -> (20,30,40,50, 70,60)
(20,30,40,50,70,60)
```
5th Cycle:
```
(20,30,40,50,70,60) -> (20,30,40,50,60, 70)
(20,30,40,50,60,70)
```

## 💒 Refrensi Materi
<a href="https://drive.google.com/file/d/1657HyU-BrGryEeastGqjnF7UOMlnsyjU/view?usp=sharing"> Panduan</a>
<a href="https://socs.binus.ac.id/2019/12/26/bubble-sort/">https://socs.binus.ac.id/2019/12/26/bubble-sort/<a>

---
keep calm and say bismillah
