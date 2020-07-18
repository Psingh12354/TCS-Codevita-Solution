# TCS-Codevita-Solution
Here i have uploaded TCS Codevita Solutiom


Digit Pair
Given N three-digit numbers, your task is to find bit score of all N numbers and then print the number of pairs possible based on these calculated bit score. 1. Rule for calculating bit score from three digit number: From the 3-digit number, · extract largest digit and multiply by 11 then · extract smallest digit multiply by 7 then · add both the result for getting bit pairs. Note: - Bit score should be of 2-digits, if above results in a 3-digit bit score, simply ignore most significant digit. Consider following examples: Say, number is 286 Largest digit is 8 and smallest digit is 2 So, 8*11+2*7 =102 so ignore most significant bit , So bit score = 02. Say, Number is 123 Largest digit is 3 and smallest digit is 1 So, 3*11+7*1=40, so bit score is 40. 2. Rules for making pairs from above calculated bit scores Condition for making pairs are · Both bit scores should be in either odd position or even position to be eligible to form a pair. · Pairs can be only made if most significant digit are same and at most two pair can be made for a given significant digit. Constraints N<=500 Input Format First line contains an integer N, denoting the count of numbers. Second line contains N 3-digit integers delimited by space Output One integer value denoting the number of bit pairs. Timeout 1 Explanation Example 1 Input 8 234 567 321 345 123 110 767 111 Output 3 Explanation After getting the most and least significant digits of the numbers and applying the formula given in Rule 1 we get the bit scores of the numbers as: 58 12 40 76 40 11 19 18 No. of pair possible are 3: 40 appears twice at odd-indices 3 and 5 respectively. Hence, this is one pair. 12, 11, 18 are at even-indices. Hence, two pairs are possible from these three-bit scores. Hence total pairs possible is 3

Link : https://github.com/Psingh12354/TCS-Codevita-Solution/blob/master/Digit%20Pairs.c

A big group of students, starting a long journey on different set of vehicles need to fill petrol in their vehicles. As group leader you are required to minimize the time they spend at the petrol pump to start the journey at the earliest. You will be given the quantity of petrol (in litres) that can be filled in each vehicle. There are two petrol vending machines at the petrol pump. You need to arrange the vehicles in such a way that they take shortest possible time to fill all the vehicles and provide the time taken in seconds as output. Machine vends petrol @ 1litre/second. Assume that there is no time lost between switching vehicles to start filling petrol.

Link : https://github.com/Psingh12354/TCS-Codevita-Solution/blob/master/Petrol%20Pump.cpp

Grooving Monkeys

N monkeys are invited to a party where they start dancing. They dance in a circular formation, very similar to a Gujarati Garba or a Drum Circle. The dance requires the monkeys to constantly change positions after every 1 second.


The change of position is not random & you, in the audience, observe a pattern. Monkeys are very disciplined & follow a specific pattern while dancing.

Consider N = 6, and an array monkeys = {3,6,5,4,1,2}.

This array (1-indexed) is the dancing pattern. The value at monkeys[i], indicates the new of position of the monkey who is standing at the ith position.

Given N & the array monkeys[ ], find the time after which all monkeys are in the initial positions for the 1st time.

Constraints

1<=t<=10 (test cases)

1<=N<=10000 (Number of monkeys)

Input Format

First line contains single integer t, denoting the number of test cases.

Each test case is as follows -

Integer N denoting the number of monkeys.

Next line contains N integer denoting the dancing pattern array, monkeys[].

Output

t lines,

Each line must contain a single integer T, where T is the minimum number of seconds after which all the monkeys are in their initial position.

Test Case

Explanation

Example 1

Input

1 

6 

3 6 5 4 1 2

Output

6 

Explanation

Consider N = 6, and an array monkeys = {3,6,5,4,1,2}.

Suppose monkeys are a,b,c,d,e,f, & Initial position (at t = 0) -> a,b,c,d,e,f

At t = 1 -> e,f,a,d,c,b

a will move to 3rd position, b will move to 6th position, c will move to 5th position, d will move to 4th position, e will move to 1st position and f will move to 2nd position. Thus from a,b,c,d,e,f at t =0, we get e,f,a,d,c,b at t =1. Recursively applying same transpositions, we get following positions for different values of t.

At t = 2 -> c,b,e,d,a,f

At t = 3 -> a,f,c,d,e,b

At t = 4 -> e,b,a,d,c,f

At t = 5 -> c,f,e,d,a,b

At t = 6 -> a,b,c,d,e,f

Since at t = 6, we got the original position, therefore the answer is 6.
