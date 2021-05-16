# myfirstprogram in C++

## #include < iostream >

prints hello world

#header file library

< iostream > cout input output

# using namespace std;

means we can use names for objects and variables

std::cout << "Hello World!"

# int main() {

is a function the main function


# cout << "Hello World!";

is an object used with the << insertion operator

output "Hello World!"

output witn new line \n 

cout << "Hello World! \n";
cout << "I am learning C++";

# everything ends in a ; semi colon

;

# return 0;

return 0; ends the main function

# }

{}, don't forget to end with a closing } brace

# std::cout << "Hello World!";

the using namespace std can be omitted and replaced with the std keyword followed by the :: operator for some objects

# another way to insert a new line is

end1

cout << "Hello World!" << end1;

cout << "I am leraning C++"; 

return 0

# comments in C++

// 

or 

/* */

## variables types

int

double

char

string

bool

### declaring, creating variables

type variable = value;

```
int myNum = 15;
cout << myNum;
```

or 

```
int myNum;
myNum = 15;
cout << myNum;
```

# cout

input output

```
int myAge = 23;
cout << "I am" << myAge << " years old.";
```

# to declare more than one var with the same type

``` 
int x = 5, y = 6, z = 50;
cout << x + y + z;
```

# variable names

```
int minutesPerHour = 60;
```
1. names can contain letters, digits and underscores
2. names must begin with a letter or underscore _
3. names are case sensitive: myVar and myvar are different
4. names cannot contain white space or special chars liek !, #, %, etc..
5. reserved words like int cannot be used as names


# const

const keyword

when you do not want others to override existing variables use const keyword

it means unchangeable and read-only

```
const int minutesPerHour = 60;
const float PI = 3.14;
```

# cin 

is to read data from the keyboard with ``` >> ```

```
int x;
cout << "Type a number: ";
// get user input
cin >> x;
cout << "Your number is: " << x;
````

## user input

```
int x, y;
int sum;
cout << "Type a number: ";
cin >> x;
cout << "Type another number: ";
cin >> y;
sun = x + y;
cout << "Sum is: " << sum
```

## data types

int 4 bytes

float 4 bytes ( 6 or 7 decimal digits) (35e3)

double 8 bytes ( 15 decimal digits ) (12E4)

boolean 1 byte ( true = 1, false = 0 )

char 1 byte

# strings

must be double quotes ""

``` 
#include <string>
string greeting = "Hello";
cout << greeting;
```

include header <string>

# operators

%=

# &=

bitwise AND 

# |=

bitwise OR

# ^=
bitwise XOR

# >>=

bitwise right shift

# <<=

bitwise left shift

## *a 

"object pointed to by a"

## &a

address of a

# logical operators 

&& and

|| or

! not

# strings


# while (true)

if ( end of file )

!= EOF

long n

n = 0

++n

break;

count bytes using fgetc

then fprintf print bytes

%l 

# fgetc 

get a byte from a stream

```
#include <stdio.h>

int fgetc(FILE *stream);
```

obtain the next byte as an unsigned char converted to an int

fgetc() shall return EOF.



%lu print unsigned long
%llu long long unsigned integer

