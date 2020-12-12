# AK2_Lab5
Lab 5 Виконав: студент групи ІО-83, Тимочко Дмитро

Тема: збірка та запуск модулів.

Хід роботи:

1. Ознайомився з параметрами модуля, описаними в додатку.
2. Модифікував модуль, додавши до нього параметри типу uint, що визначає кількість разів друку рядку. 
3. Додав опис параметра, подивився команду modinfo.
4. Виконав insmod/rmmod модуля на платі BBB з різними параметрами.
5. Розділив проект на 2 модулі.
6. Виніс заголовковий файл hello1.h у підкаталог inc, здійснив заміну команди printk.
7. Виконав insmod для обох файлів, з різними значеннями.

## Basic ##

### modinfo модуля hello ###

![Image alt](https://github.com/Dima2057/AK2_Lab5/blob/main/images/Screenshot_1.png)

### запуск та параметри модуля hello ###

![Image alt](https://github.com/Dima2057/AK2_Lab5/blob/main/images/Screenshot_2.png)

## Advanced ##

### modinfo модуля hello1 ###

![Image alt](https://github.com/Dima2057/AK2_Lab5/blob/main/images/Screenshot_3.png)

### modinfo модуля hello2 ###

![Image alt](https://github.com/Dima2057/AK2_Lab5/blob/main/images/Screenshot_4.png)

### запуск модуля hello2 без параметрів ###

![Image alt](https://github.com/Dima2057/AK2_Lab5/blob/main/images/Screenshot_5.png)

### запуск модуля hello2 з параметром 20 ###

![Image alt](https://github.com/Dima2057/AK2_Lab5/blob/main/images/Screenshot_6.png)

### dmesg ###

![Image alt](https://github.com/Dima2057/AK2_Lab5/blob/main/images/Screenshot_7.png)
