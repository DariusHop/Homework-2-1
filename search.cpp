/****
* PSEUDOCODE:
call linearsearch function
for loop, intialize i & set less than array
nested if number equals list sub i
return i then return 1

call Binarysearch function
intialize low, hgh and mid variables
while low is less than or equal to high
if number equals list at mid position
return midelse if number is less than mid 
return low
else high value equals mid minus 1
end with return negative 1
*/
#include "search.h"
int LinearSearch(int list[], int array_length, int number) {

    for (int i = 0; i < array_length;i++)
	{
		if (number == list[i])
		{
			return i;
		}
	}
   return 1;
}

int BinarySearch(int list[], int array_length, int number) {
  
  int low = 0;
	int high = array_length - 1;
	int mid = (low + high) / 2;

	while (low <= high)
	{

		if (number == list[mid])
		{
			return mid;
		}
		else if (number > list[mid])
		{
			return low;
		}
		else
		{
			high = mid - 1;
		}

	}
	return -1;
     
}
