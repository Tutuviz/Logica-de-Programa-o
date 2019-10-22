#include <stdio.h>

main () {
    int sex, loop=1;
    float alt, m_alt_tr=0, md_alt_h=0, max_alt, qtd_h=0;
    while (loop<=50){
        printf ("Escolha seu sexo:\n 1 - Masculino\n 2 - Feminino\n");
        scanf ("%d",&sex);
        printf ("Digite sua altura\n");
        scanf ("%f",&alt);

        m_alt_tr = m_alt_tr + alt; 
        
        if (sex == 1) {
            md_alt_h = md_alt_h + alt;
            qtd_h++;
        }

        if (loop == 1) {
            max_alt = alt;
        }
        else
        {
            max_alt = max_alt;
        }

        if (alt > max_alt) {
            max_alt = alt;
        }
        else
        {
            max_alt = max_alt;
        }
   		loop++;
    }
    printf ("A maior da altura da turma eh: %.2f\n", max_alt);
    printf ("A media da altura dos homens eh: %.2f\n", md_alt_h/qtd_h);
    printf ("A media da altura da turma eh: %.2f\n", m_alt_tr/50);
}
