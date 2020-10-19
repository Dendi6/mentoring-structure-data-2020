## ⛵ Mentoring_SD_2020
Mentoring Struktur Data 2020. © Universitas Maritim Raja Ali Haji.

## Penjelasan
Insertion Sort merupakan sebuah teknik pengurutan dengan cara membandingkan dan mengurutkan dua data pertama pada array, kemudian membandingkan data para array berikutnya apakah sudah berada di tempat semestinya. Algorithma insertion sort seperti proses pengurutan kartu yang berada di tangan kita. Algorithma ini dapat mengurutkan data dari besar ke kecil (Ascending) dan kecil ke besar (Descending). Algoritma ini tidak cocok untuk set data dengan jumlah besar karena kompleksitas dari algorithma ini adalah Ο() di mana n adalah jumlah item.

Berikut gambaran dari implementasi Insertion Sort:

1st Cycle:
```
(70, 60, 30, 50, 40, 20) -> (60, 70, 30, 50, 40, 20)
(60, 70, 30, 50, 40, 20)
```
2nd Cycle:
```
(60, 70, 30, 50, 40, 20) -> (60, 30, 70, 50, 40, 20)
(60, 30, 70, 50, 40, 20) -> (30, 60, 70, 50, 40, 20)
(30, 60, 70, 50, 40, 20)
```
3rd Cycle:
```
(30, 60, 70, 50, 40, 20) -> (30, 60, 50, 70, 40, 20)
(30, 60, 50, 70, 40, 20) -> (30, 50, 60, 70, 40, 20)
(30, 50, 60, 70, 40, 20) -> (30, 50, 60, 70, 40, 20)
(30, 50, 60, 70, 40, 20)
```
4th Cycle:
```
(30, 50, 60, 70, 40, 20) -> (30, 50, 60, 40, 70, 20)
(30, 50, 60, 40, 70, 20) -> (30, 50, 40, 60, 70, 20)
(30, 50, 40, 60, 70, 20) -> (30, 40, 50, 60, 70, 20)
(30, 40, 50, 60, 70, 20) -> (30, 40, 50, 60, 70, 20)
(30, 40, 50, 60, 70, 20)
```
5th Cycle:
```
(30, 40, 50, 60, 70, 20) -> (30, 40, 50, 60, 20, 70)
(30, 40, 50, 60, 20, 70) -> (30, 40, 50, 20, 60, 70)
(30, 40, 50, 20, 60, 70) -> (30, 40,20, 50, 60, 70)
(30, 40, 20, 50, 60, 70) -> (30, 20, 40, 50, 60, 70)
(30, 20, 40, 50, 60, 70) -> (20, 30, 40, 50, 60, 70)
(20, 30, 40, 50, 60, 70)
```

## Refrensi Materi
<a href="https://drive.google.com/file/d/16jgzkEWazI1Zod_K5zbWlBs9r1ZJNpuf/view?usp=sharing">Panduan</a><br>
<a href="https://socs.binus.ac.id/2019/12/30/insertion-sort/">https://socs.binus.ac.id/2019/12/30/insertion-sort//<a>

---
keep calm and say bismillah
