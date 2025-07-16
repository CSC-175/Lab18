# Exchange Sort Function for Array

## Background
The exchange sort is a simple algorithm that can be implemented to iterate through all unique pairs of array indexes and exchange the values in those position if the value 
in the first index (alpha) is less than the second index (beta) until all elements are sorted in descending order.

<img src="Sort.gif" alt="Exchange Sort" width="550">

### Exchange Sort Algorithm:
<pre>Set ALPHA to point at first element
Set BETA to point at next element
If ALPHA element is less than BETA element swap BETA element and ALPHA element
If there is an element following BETA set BETA to point at it and go to step 3; else continue
If there is an element following ALPHA set ALPHA to point at it and set BETA to point at next element then go to step 3; else stop</pre>

## Directions
Complete the given template file <b>lab18.cpp</b> by defining the following functions. A function named <b>printArray</b> that is designed to accept an array reference pointer, 
and value paramter for the size and print the array passed to the function. A second function named <b>sortDn</b> that is designed to accept an array reference pointer, 
and value paramter for the size and then implements the Exchange Sort algorithm to sort the array in descending order.  Note: You will need to create a template function to handle char arrays, string arrays, integer arrays, and double arrays. 

## Example Arrays to be Processed
<pre>int setA[] = {35, 45, 55, 20, 30, 50};
double setB[] = {76.25, 85.45, -45.90, 99.34,-44.12, 45.75, 57.77, 108.45, 65.64, 77.21, -24, 62};
string setC[] = {"Apple", "apple1", "apple10", "apples", "apple", "1apple"};
char setD[] = {'e', 'a', '3', 'K', 'z', '*', ';', 'Z' };</pre>

## Interface Prototype Example

### Test Case Output
<pre><b>Set A original order: 10 40 20 15 35 30 
Descending order: 40 35 30 20 15 10 

Set B original order: 76.25 85.45 -45.9 99.34 -44.12 45.75 57.77 108.45 65.64 77.21 -24 62 
Descending order: 108.45 99.34 85.45 77.21 76.25 65.64 62 57.77 45.75 -24 -44.12 -45.9 

Set C original order: Apple apple1 apple10 apples apple 1apple 
Descending order: apples apple10 apple1 apple Apple 1apple 

Set D original order: e a 3 K z * ; Z 
Descending order: z e a Z K ; 3 *</b></pre>




