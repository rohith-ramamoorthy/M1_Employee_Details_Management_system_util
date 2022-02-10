
#include "main.h"
void flush()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
    long int recsize; 
     FILE *fp, *ft; 
    char another, choice;
    struct emp{
        char name[40]; 
        int age; 
        float bs; 
    };
    struct emp e; 
 
 void  Add_Record(){
     fseek(fp,0,SEEK_END); 
                                        
                another = 'y';
                while(another == 'y'){ 
                    flush();
                    printf("\nEnter name: ");
                    fgets(e.name, 40, stdin);
                    printf("\nEnter age: ");
                    scanf("%d", &e.age);
                    printf("\nEnter basic salary: ");
                    scanf("%f", &e.bs);
 
                    fwrite(&e,recsize,1,fp); 
 
                    printf("\nAdd another record(y/n) ");
                    fflush(stdin);
                    scanf("\n%c", &another);
                }
 }
 