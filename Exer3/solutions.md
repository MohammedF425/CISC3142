**Exercise 2.1** : What are the What are the differences between int, long, long long,and short? Between an unsigned and a signed type? Between a float and
a double?<br>
**Answer** : *The difference between int, long, long long and short is the minimum size of the data values held by them. For short being to 2 bytes, int being  4 bytes, long being 4 bytes, and long long being 8 bytes. Unsigned types represent only positive values, while signed types represent both negative and positive values. The difference between float and double is that double has more precision than float since it is able to hold up to 8 bytes in memory while float is limited to 4 bytes.*<br><br>

**Exercise 2.2** : To calculate a mortgage payment, what types would you use
for the rate, principal, and payment? Explain why you selected each type.<br>
**Answer** : *For a mortgage payment, I would use float to represent rate, principle and payment because a float represents decimal numbers. Also it is enough to represent the values of rate, principle and payment while taking less memory than double.* <br><br>

**Exercise 2.3** : What output will the following code produce?
```
unsigned u = 10, u2 = 42;
std::cout << u2 - u << std::endl;
std::cout << u - u2 << std::endl;
int i = 10, i2 = 42;
std::cout << i2 - i << std::endl;
std::cout << i - i2 << std::endl;
std::cout << i - u << std::endl;
std::cout << u - i << std::endl;
```

<br>
**Answer** :
<br>
```
32
4294967264
32
-32
0
0
```
<br>

**Exercise 2.10** : What are the initial values, if any, of each of the following variables? <br>
```
std::string global_str;
int global_int;
int main()
	{
	int local_int; std::string local_str;
	}
```

<br>

**Answer** : * The initial values of global_str, global_int, local_int, local_str are ""/empty string, 0, random integer, and  ""/empty string, respectively. * <br><br>
**Exercise 2.12**: Which, if any, of the following names are invalid?<br>
```
(a) int double = 3.14;
(b) int _; 
(c) int catch-22; 
(d) int 1_or_2 = 1; 
(e) double Double = 3.14; 
```
**Answer** : *The invalid ones are a, c, and d*<br><br>

**Exercise 2.13** : What is the value of j in the following program? <br>
```
int i = 42;
int main()
{
	int i = 100; 
	int j = i;
}
```
**Answer** : *The value of j is 100.* <br><br>

**Exercise 2.14** : Is the following program legal? If so, what values are printed?
```
int i = 100, sum = 0;
for (int i = 0; i != 10; ++i)
sum += i;
std::cout << i << " " << sum << std::endl;
```

**Answer** : *The program is legal. The printed values are “100 45”.* <br><br>

**Exercise 2.17** : What does the following code print?<br><br>
```
int i, &ri = i;
i = 5; ri = 10;
std::cout << i << " " << ri << std::endl;
```
**Answer** : *The following code prints 10 10.* <br><br>

**Exercise 2.27** : Which of the following initializations are legal? Explain why.<br>
```
(a) int i = -1, &r = 0; 
(b) int *const p2 = &i2;
(c) const int i = -1, &r = 0;
(d) const int *const p3 = &i2;
(e) const int *p1 = &i2;
(f) const int &const r2; 
(g) const int i2 = i, &r = i;
```

**Answer** : 
```
(a) *Not legal since r must equal to an object and not a integer value.
(b) *Legal since it follows proper C++ grammar. *
(c) *Legal since it follows proper C++ grammar. *
(d) *Legal since it follows proper C++ grammar. *
(e) *Legal since it follows proper C++ grammar. *
(f) *Not legal since r must point to a constant int. *
(g)*Legal since it follows proper C++ grammar. *
```

<br>

**Exercise 2.28** : Explain the following definitions. Identify any that are illegal.<br>
```
(a) int i, *const cp;
(b) int *p1, *const p2;
(c) const int ic, &r = ic;
(d) const int *const p3;
(e) const int *p;
```
**Answer** :
```
(a) *Illegal, since cp is a const pointer and must be initialized. *
(b) *Illegal, since p2 is a const pointer and must be initialized. *
(c) *Illegal, since ic is a const int and must be initialized.  *
(d) *Illegal, since p3 is a const pointer and must be initialized. *
(e) *legal since p is a pointer to const int and does not need to be initialized *
```










