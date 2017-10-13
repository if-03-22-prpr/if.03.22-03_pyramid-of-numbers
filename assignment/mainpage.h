/** @file mainpage.h
* @brief Description of Pyramid of Numbers.
*/
/** @mainpage Pyramid of Numbers
*
* @author Peter Bauer
*
* @section intro Introduction
* This weeks assignment deals with an old fashioned primary school problem.
* Most of you will know the "Turmrechnen" as a pain of your former school
* days. How it works is shown in the following example
<pre>
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

</pre>
* To see more
* about it's internal structure browse through this documentation.
* A good starting point is, of course, the function main() and, furthermore, the
* struct BigInt.
*
* When browsing through this documentation you might stumble over the keyword
* const in the argument list of several functions. This shows you that the argument
* must not be altered by the function, i.e., you may be sure that, even if a pointer
* is passed to the function the content of the argument is not changed in the
* function.
*
* @section reading Reading a big number
* We have to read in the number via a string. Check, whether the entered number
* does exceed the maximum length of MAX_DIGITS. In this case print an error
* message and leave the program with error code -1.
*
* @section convert Converting to a BigInt
* The string has than to be converted into a BigInt. Implement a function
* strtobig_int() as specified. The conversion of one single character c
* containing a digit to an int can be done via c - '0'. Also think of the
* correct way to fill the array. Is for the number 123456 the array element
* a[0] == 1 or is a[0] == 6? Finally do not forget to set BigInt.digits to
* the right value. After calling
* strtobig_int() check whether the function was able to convert the entire
* string. If not an invalid character occured in your string and the program
* should give an error message and should return with error code -2.
*
* @section print Printing a BigInt
* Should be straight forward.
*
* @section calc Multiply and Divide BigInts
* Do a few multiplications and division by hand (yes as you learned this in
* primary school :-)). Write down the tiny steps and transform these then into
* C source code. Keep stuck to the interface multiply() and divide() as given
* in this documentation. An Engish word you might need for naming a variable:
* "Uebertrag": carry
*
* @section copy Copying a BigInt
* Take care that simply assigning a BigInt from one variable to another will
* fail, because the array BigInt.the_int won't be copied but only its pointer.
* Therefore, you have to write a function copy_big_int(), which copies the
* array element by element.
*/
