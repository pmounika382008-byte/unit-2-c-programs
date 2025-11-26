//C Program to search an element using Linear Search
#include <stdio.h>
int main()
{
int arr[5] = {10, 20, 30, 40, 50};
int n = 30;
int i, found = 0;
for(i = 0; i < 5; i++)
{
if(arr[i] == n)
{ found = 1; break; }
}
if(found)
printf("Element found at index %d", i);
else
printf("Element not found"); 
return 0; }