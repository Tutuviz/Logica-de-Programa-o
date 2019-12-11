#include <stdio.h>

main(){
    int count = 0, loop, binary[200], inputValue, x;
    
    printf ("Digite um numero: ");
    scanf ("%d", &inputValue);

    for (loop = -1; loop < count; loop++){
        if (inputValue > 1){
            x = inputValue % 2;
            binary[count] = x; 
            count++;
            inputValue = inputValue/2; 
        }
        else {
            binary[count] = inputValue;
        }
    }
    
    for (loop = count; loop > -1; loop--) {
        printf("%d", binary[loop]);  
    }
}
