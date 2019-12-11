#include <stdio.h>

main(){
    int count = 0, loop, binary[count], inputValue;
    printf ("Digite um numero: ");
    scanf ("%d", &inputValue);

    for (loop = -1; loop < count; loop++){
        if (inputValue > 7){
            binary[count] = inputValue % 8; 
            inputValue = inputValue/8; 
            count++;
        }
        else {
            binary[count] = inputValue;
        }
    }

    for (loop = count; loop > -1; loop--){
        printf("%d", binary[loop]);  
    }
}
