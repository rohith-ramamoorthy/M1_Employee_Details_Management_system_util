
#include "main.h"

    char emname[40]; 
 
    long int recsize; 
    
     FILE *fp, *ft; 
    char another, choice;

 void List_Record(){
     rewind(fp); 
                while(fread(&e,recsize,1,fp)==1){
                    printf("\n%s %d %.2f\n",e.name,e.age,e.bs); 
                }
 }

 void Modify_Record(){
another = 'y';
                while(another == 'y'){
                    printf("Enter the employee name to modify: ");
                    scanf("%s", emname);
                    rewind(fp);
                    while(fread(&e,recsize,1,fp)==1){ 
                        if(strcmp(e.name,emname) == 0){ 
                            printf("\nEnter new name,age and bs: ");
                            scanf("%s%d%f",e.name,&e.age,&e.bs);
                            fseek(fp,-recsize,SEEK_CUR); 
                            fwrite(&e,recsize,1,fp); 
                            break;
                        }
                    }
                    printf("\nModify another record(y/n)");
                    fflush(stdin);
                    scanf("\n%c", &another);
                }

 }

 void Delete_Record(){
another = 'y';
                while(another == 'y'){
                    flush();
                    printf("\nEnter name of employee to delete: ");
                    fgets(emname,40, stdin);
                    ft = fopen("Temp.dat","wb");  
                    rewind(fp); 
                    while(fread(&e,recsize,1,fp) == 1){ 
                        if(strcmp(e.name,emname) != 0){ 
                            fwrite(&e,recsize,1,ft); 
                        }
                    }
                    fclose(fp);
                    fclose(ft);
                    remove("EMP.DAT"); 
                    rename("Temp.dat","EMP.DAT");
                    fp = fopen("EMP.DAT", "rb+");
                    printf("Delete another record(y/n)");
                    fflush(stdin);
                    scanf("\n%c", &another);
                }
 }

 void Exit(){
             fclose(fp);  
                exit(0); 
 }


int main(){

 
    recsize = sizeof(e);

   
    fp = fopen("EMP.DAT","rb+");
    if(fp == NULL){
        fp = fopen("EMP.DAT","wb+");
        if(fp == NULL){
            printf("Connot open file");
            exit(1);
        }
    }
 
    
    while(1){
        printf("1. Add Record\n");
        printf("2. List Records\n"); 
        printf("3. Modify Records\n"); 
        printf("4. Delete Records\n"); 
        printf("5. Exit\n"); 
        printf("Your Choice: "); 
        fflush(stdin); 
        scanf("\n%c", &choice); 
        switch(choice){
            case '1': 
                Add_Record();
                break;
            case '2':
                List_Record();
                break;
 
            case '3':  
                Modify_Record();
                break;
            case '4':
                Delete_Record();
                break;
            case '5':
                Exit();
        }
    }
    return 0;
}
