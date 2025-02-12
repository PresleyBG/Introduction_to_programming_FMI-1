


<h1>0. Увод.</h1>


 1. Програмиране със c++
 2. Защо c++ ?
 3. Вход и изход от конзолата (**cout** и **cin**).
 

<h1 id="finite-state-automation">1. Променливи и примитивни типове (част 1)</h1>
Деклрация на променлива:

```c++
<тип> <име> = (<стойност>)
```
Примитивни типове (част 1):

 - Целочислен тип (**int, short, long** ..)
  - Числа с плаваща запетая (**double, float** ..)
   - Булев тип (**bool**)
   - Символен тип (**char**)
   
Същестуват и други примитвни типове, които ще се разгледат по-напред в курса.

<h1>2. Преобразуване между типовете.</h1>
Преобразуването може да се извърши:

 - Без загуба на информация.
 ```c++
	bool b = true; //1
	int a = b; // 
```
 ```c++
	int n = 4; 
	double m = n; //4.0 
```
 - Със загуба на информация
  ```c++
	int a = 10;
	bool b = a; //1 
```
 ```c++
	double PI = 3.14;
	int a = PI; //3
```
<h1>3. Оператори.</h1>

![enter image description here](https://i.ibb.co/6BDQwMJ/op.png)

1. **Аритметични оператори**:
+, -, *, /, %, ++, - -,
2. **Оператори за сравнение** (винаги връщат истина/лъжа(bool)):
==, <, >, <=, >=, !=
3. **Логически оператори**
	&&, ||, !  
4. **Оператори за присвояване**:
=, +=, -=, /=, *=, %=, &=, |= 

Всеки оператор има:
-   Приоритет
-   Асоциативност
-   Позиция на оператора спярмо аргумента -  _префиксен_,  _инфиксен_  и  _суфиксен_

Таблица с всички оператори в c++:

![enter image description here](https://i.stack.imgur.com/u3q2E.png)

<h3>Задачи</h3>

**Задача 1:** Въвежда се цяло число. Отпечатайте 1, ако числото е четно и 0, ако е нечетно.

*Вход: 265, Изход: 0*

*Вход: 290, Изход: 1*

**Задача 2:** Въвежда се трицифрено цяло число n. Да се отпечата обърнатото число събрано с единица.

*Вход: 265, Изход: 563*

*Вход: 289, Изход: 983*

**Задача 3:**  Въвежа се символ. Да се отпечата 1, ако е английска гласна буква, и 0, ако не е.

*Вход: а, Изход: 1*

*Вход: Е, Изход: 1*

*Вход: В, Изход: 0*

**Задача 4:**  Въвежа се цяло число. Да се отпечата 1, ако числото е валидна оценка от училище, и 0, ако не е валидна.

*Вход: 5, Изход: 1*

*Вход: 3, Изход: 1*

*Вход: 9, Изход: 0*

**Задача 5:**  Въвежа се цяло число. Да се отпечата без последната цифра.

*Вход: 513, Изход: 51*

*Вход: 1234, Изход: 123*


**Задача 6:**  Напишете програма, която въвежда две числа - a и b и извежда като резултат (a + b)^4 - (a-b)^2


*Вход: 5 7, Изход: 20732*

**Задача 7:** 
Въвежда се цяло число n - n лева. Да се изведе на конзолата как може да се разпределят по банкноти, така че да имаме минимален брой банкноти.
В условието приемаме, че имаме банкноти от 1 и 2 лева.


*Вход: 78, Изход: 50 20 5 2 1*

