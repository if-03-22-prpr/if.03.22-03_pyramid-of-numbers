# Coding Assignment: Pyramid of Numbers

## Objective
### Problem Description
This weeks assignment deals with an old fashioned primary school problem. Most of you will know the "Turmrechnen" as a pain of your former school days. How it works is shown in the following example:

```
Pyramid of Numbers

Please enter a number: 3453454359654646756757434
3453454359654646756757434 * 2 = 6906908719309293513514868
6906908719309293513514868 * 3 = 20720726157927880540544604
20720726157927880540544604 * 4 = 82882904631711522162178416
82882904631711522162178416 * 5 = 414414523158557610810892080
414414523158557610810892080 * 6 = 2486487138951345664865352480
2486487138951345664865352480 * 7 = 17405409972659419654057467360
17405409972659419654057467360 * 8 = 139243279781275357232459738880
139243279781275357232459738880 * 9 = 1253189518031478215092137649920
1253189518031478215092137649920 / 2 = 626594759015739107546068824960
626594759015739107546068824960 / 3 = 208864919671913035848689608320
208864919671913035848689608320 / 4 = 52216229917978258962172402080
52216229917978258962172402080 / 5 = 10443245983595651792434480416
10443245983595651792434480416 / 6 = 1740540997265941965405746736
1740540997265941965405746736 / 7 = 248648713895134566486535248
248648713895134566486535248 / 8 = 31081089236891820810816906
31081089236891820810816906 / 9 = 3453454359654646756757434
```
Since really big numbers cannot be handled by the typical number types like `int`, `long`, `double`, etc. we have to work around this shortcoming. The basic idea is to create a struct `BigInt` which  handles such big integers by storing every single digit of a number as elements of an array of integers. So the struct holds a member `digits` storing the digits of the big number and a member `digit_count` which stores the number of digits.

### Example of a BigInt
Consider the number `n = 4 345 978 349 843 534 984 529 235 492 457` with 31 digits which is definitely longer than the largest integer type possible (`long long`). This number would be represented in a `BigInt` where every digit of `n` is stored as an element of `digits`, i.e., `digits[0] == 7, digits[1] == 5, digits[2] == 4`, and so forth. Note that the digits are stored starting from the least significant digit. The member `digit_count` holds the number of digits, in our example 31.

### Overall Procedure
The procedure is then as follows:
1. Get the user input and store it in an array of `char`.
2. Call `str_to_big_int` which takes every character of the user input, converts it to an integer, and stores this into the `BigInt`.
3. Do the pyramid calculations and write the results as they come up. Since the standard multiplication and division operations will not work on `BigInt` you have to implement these procedures by yourself.

## Things to Learn
This assignment is related to the competency 3.1. In particular you will deepen your knowledge in
- Using aggregate data types (structs)
- Implementing functions
- Reading specifications
- Repeat a bit of algorithmic thinking

## Required Tasks
1. Implement a `struct BigInt` with the members
   - `digits` (array of integers of size 160)
   - `digit_count` (integer)

2. Implement the function `int str_to_big_int(char* input, int len, struct BigInt* big_int)`, where
   - `input` is the array of chars which holds the user input
   - `len` is the number of digits actually entered by the user
   - `big_int` is the address to a `BigInt` variable provided by the `main` function
   - the function returns the number of digits converted

   The function iterates over the content of `input`, checks every character whether it is a digit and if it is a digit it is converted to an int and then stored into the array of `big_int`. Note that if the user failed to enter only digits the conversion stops at the point where `str_to_big_int` runs against a non-digit.

   Finally the function returns the number of digits converted from the array of char to a `BigInt`. This is at most `len` but can be less if `input` contains non-digits.

3. Implement the function `void print_big_int(const struct BigInt* big_int)`, where
   - `big_int` is the big integer to be printed.

   The function prints the number `big_int` into the console.

   Furthermore, test the functions implemented so far by implementing the user input in the `main` function and by calling `str_to_big_int` and `print_big_int`. Try different scenarios (small numbers and really large numbers, erroneous input) and check whether your program behaves correctly.

4. Implement the function `void multiply(const struct BigInt* big_int, int factor, struct BigInt* big_result)`, where
   - `big_int` is the number to be multiplied
   - `factor` is the factor by which `big_int` shall be multiplied
   - `big_result` is the number getting the result of the multiplication.

   Again test your function throughly. In the meanwhile you should be able to show the increasing side of the pyramid.

5. Implement the function `void divide(const struct BigInt* big_int, int divisor, struct BigInt* big_result)`, where
- `big_int` is the number to be divided
- `divisor` is the divisor by which `big_int` shall be divided
- `big_result` is the number getting the result of the division.

Again test your function throughly. Your pyramid should be now complete.


## Hints
1. Use a symbolic constant to define the maximum size of a `BigInt`
1. Use the function `strlen` of `string.h` to get the number of actual characters in a string. The sequence is basically shown below.
```
   #include <string.h>
   ...
   char user_input[MAX_DIGITS];
   ...
   int len = strlen(user_input);
   ...
```
1. Conversion from char to int: `int x = '5' - '0' // x == 5`

2. Store the digits in reverse order to make the multiplication and division algorithm better understandable.

3. To get a feeling how to implement the multiplication and division, recall the procedures you learned in primary school for dividing and multiplying large numbers.

4. It might be of use to implement a function which copies a `BigInt` from one variable to another.

## Evaluation
All coding assignments will get checked. Most common reasons that your assignment is marked down are:

- Program does not build or builds with warnings
- One or more items in the *Required Tasks* section are not satisfied
- Submitted code is visually sloppy and hard to read


## Extra Credits
1. Enhance the implementation of the function `print_big_int` by doing a *pretty print*, i.e., that the number shall be separated by a blank at every third place.
2. The required pyramid calculator can only multiply with numbers being a unary digit integer.
Make the pyramid calculator ready to deal with pyramids being wider than 16, i.e., it shall be able to multiply not only by numbers 2 to 9 but 2 to any arbitrary big integer.
