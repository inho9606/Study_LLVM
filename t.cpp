#include <iostream>
int main() {
int i, j, tmp, *arr = new int[10];
//arr[11] = 3;
for(i=0; i<=10; i++)
printf("%d ", arr[i]);
printf("\n");
for(i=0; i<10; i++) {
for(j=0; j<9; j++) {
if(arr[j+1] < arr[j]) {
tmp = arr[j+1];
arr[j+1] = arr[j];
arr[j] = tmp;
}
}
}
for(i=0; i<10; i++)
printf("%d ", arr[i]);
printf("\n");
delete[] arr;
return 0;
}