**The Question : **

**Algorithms’ Measurement/Profiling**

You are to implement 3 sorting algorithms, namely, Insertion Sort, Merge Sort, and Quick Sort. Generate and store sets of random data (at least 10 different input sizes- the larger the better) in a temporary array. Copy the temporary into the array to be sorted before calling each algorithm. Use the sorting algorithms to sort sample sets of randomly generated data. Find the running time for each algorithm with each input size. Record these times in a table. Plot the times for each sorting algorithm with all input sizes on the same graph. Finally, write a discussion regarding the times and/or the graph obtained in comparison with the known theoretical bounds.

Submissions/Deliverables:

- A compressed folder containing code, table, and the graph to be submitted using classroom

Hint: A sample C/C++ program that computes times:

*#include <iostream>*

*#include <ctime>*

*using namespace std;*

*int main()*

*{*

`	`*time\_t start, finish;*

`	`*time(&start);*

`	`*//you can call your algorithm here by replacing the loop below*

`	`*for(double i=0; i<10000000; i=i+0.01);*
\*


`	`*time(&finish);*

`	`*cout << "Time required = " << difftime(finish, start) << " seconds";*

`	`*return 0;*

*}*


