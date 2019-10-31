#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main (void)
{
    int rslt[10] ={0}; //array for the final output
    char arr[1001]; // our string
    int i;
    int sum = 0;
    
    scanf("%[^\n]%*c", arr);
    int j = 0;
    int z;
    for (i = 0; arr[i] ; i++) // creating a new array that hold only integers
    {
        if (arr[i] >= '0' && arr[i] <= '9')
        {
            arr[j] = arr[i];
            j++;
        }
    }
        arr[j] = '\0'; // now arr contain only integers

        for (j = 0; arr[j]; j++)
        {
            if (arr[j] == '0') // loop for number 0
            sum += 1;
            rslt[0] = sum;
            

        }
        printf("%d ", rslt[0]);
            
        sum = 0;
         for (j = 0; arr[j]; j++) // loop for number 1
        {
            if (arr[j] == '1')
            sum += 1;
            rslt[1] = sum;
            
        }
        printf("%d ", rslt[1]);
        sum = 0;
         for (j = 0; arr[j]; j++) // loop for number 2
        {
            if (arr[j] == '2')
            sum += 1;
            rslt[2] = sum;
            
        }
        printf("%d ", rslt[2]);
        sum = 0;
         for (j = 0; arr[j]; j++) // loop for number 3
        {
            if (arr[j] == '3')
            sum += 1;
            rslt[3] = sum;
            
        }
        printf("%d ", rslt[3]);
        sum = 0;
         for (j = 0; arr[j]; j++) // loop for number 4
        {
            if (arr[j] == '4')
            sum += 1;
            rslt[4] = sum;
            
        }
        printf("%d ", rslt[4]);
        sum = 0;
         for (j = 0; arr[j]; j++) // loop for number 5
        {
            if (arr[j] == '5')
            sum += 1;
            rslt[5] = sum;
            
        }
        printf("%d ", rslt[5]);
        sum = 0;
         for (j = 0; arr[j]; j++) // loop for number 6
        {
            if (arr[j] == '6')
            sum += 1;
            rslt[6] = sum;
            
        }
        printf("%d ", rslt[6]);
        sum = 0;
         for (j = 0; arr[j]; j++) // loop for number 7
        {
            if (arr[j] == '7')
            sum += 1;
            rslt[7] = sum;
            
        }
        printf("%d ", rslt[7]);
        sum = 0;
         for (j = 0; arr[j]; j++) // loop for number 8
        {
            if (arr[j] == '8')
            sum += 1;
            rslt[8] = sum;
            
        }
        printf("%d ", rslt[8]);
        sum = 0;
         for (j = 0; arr[j]; j++) // loop for number 9
        {
            if (arr[j] == '9')
            sum += 1;
            rslt[9] = sum;
            
        }
        printf("%d", rslt[9]);
       
        rslt[10] = '\0';
        
        


   


        return 0;

}
