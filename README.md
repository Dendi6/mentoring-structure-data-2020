## ⛵ Mentoring_SD_2020
Mentoring Struktur Data 2020. © Universitas Maritim Raja Ali Haji.

## 🧧 Penjelasan
Selection sort merupakan sebuah teknik pengurutan dengan cara mencari nilai tertinggi / terendah di dalam array kemudian menempatkan nilai tersebut di tempat semestinya. 
Algorithma ini dapat mengurutkan data dari besar ke kecil (Ascending) dan kecil ke besar (Descending). 
Algoritma ini tidak cocok untuk set data dengan jumlah besar karena kompleksitas dari algorithma ini adalah Ο(x2) di mana n adalah jumlah item.

Berikut gambaran dari implementasi SelectionSort:

1st Cycle:
```
(70, 60, 30, 50, 40,20) ->min 60
(70, 60, 30, 50, 40, 20)->min 30
(70, 60, 30, 50, 40, 20)->min 30
(70, 60, 30, 50, 40, 20)->min 30
(70, 60, 30, 50, 40, 20)->min 20
(20, 60, 30, 50, 40, 70) -> swap (70,20)
```

2nd Cycle:
```
(20, 60, 30, 50, 40, 70) ->min 30
(20, 60, 30, 50, 40, 70) ->min 30
(20, 60, 30, 50, 40, 70) ->min 30
(20, 60, 30, 50, 40, 70) ->min 30
(20, 30, 60, 50, 40, 70) ->swap (60,30)
```

3rd Cycle:
```
(20, 30, 60, 50, 40, 70) -> min 50
(20, 30, 60, 50, 40, 70) -> min 40
(20, 30, 60, 50, 40, 70) -> min 40
(20, 30, 40, 50, 60, 70) -> swap(60,40)
```

4th Cycle:
```
(20, 30, 40, 50, 60, 70) -> min 50
(20, 30, 40, 50, 60, 70) -> min 50
(20, 30, 40, 50, 60, 70)
```

5th Cycle:
```
(20, 30, 40, 50, 60, 70) -> min 60
(20, 30, 40, 50, 60, 70)
```

## 💒 Refrensi Materi
<a href="https://socs.binus.ac.id/2019/12/26/selection-sort/">https://socs.binus.ac.id/2019/12/26/selection-sort/<a>

---
keep calm and say bismillah
