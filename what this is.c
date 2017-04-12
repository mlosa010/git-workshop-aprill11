#include <stdio.h>
#include <string.h>



int main(void) {

  char staticArray[20];
  char *dynamicArray = malloc(20*sizeof(char));

  *dynamicArray  = strcpy(dynamicArray,"hello Manny");

  printf("adress %p stores value %s\n", dynamicArray, *dynamicArray );

  dynamicArray[1]="hello Manny";
  printf("dynamicArray[1] stores %d\n",dynamicArray[1] );
  printf("the size of array is %d\n",sizeof(dynamicArray) );
  free(dynamicArray);
  return 0;
}
