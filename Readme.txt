This project is to Rank the student.
First approach was to use the array for simple sorting.

Second thinking was Pair approach which binds the Marks and Student-name together.
This code reads a list of students' names and their corresponding marks, storing each as a pair<string, int> in a vector called students. 
It then sorts this vector in descending order by marks using std::sort with a lambda function as a custom comparator. 
The comparator compares the second element of each pair (the marks), arranging pairs so that students with higher marks appear first. 
Finally, it prints the sorted list, showing each student's name alongside their marks. This approach leverages std::sort for an efficient 𝑂(𝑛log𝑛).
O(nlogn) sorting based on marks.

