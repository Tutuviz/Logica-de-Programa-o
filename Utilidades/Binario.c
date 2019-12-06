#include <stdio.h>

int count = 0;
int loop;

main(){
    int binary[count];
    int inputValue;
    
    printf ("Digite um numero: ");
    scanf ("%d", &inputValue);

    for (loop = -1; loop < count; loop++){
        if (inputValue == 1)  {
            binary[count] = 1;
        }
        else
        {
            if (inputValue % 2 == 1 ){
                binary[count] = 1;
            }
            if (inputValue % 2 == 0){
                binary[count] = 0;
            }
            count++;
            inputValue = inputValue/2;
        }
    }
    
    for (loop = count; loop > -1; loop--){
        printf("%d", binary[loop]);  
    }
}
