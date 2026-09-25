// #include <stdio.h>

// int main(void){



  

//   FILE *fayl = fopen("hello.txt", "w");
//    if (fayl == NULL)
//    {
//    printf("Faylni ochib bo'lmadi\n");
//    return 1;
//    }

//     fprintf(fayl,"salom dunyo\n");
//     fprintf(fayl,"hush kelding\n");
//     fprintf(fayl,"hayr dunyo\n");


//    fclose(fayl);
   

//     return 0;


// }














// #include <stdio.h>

// int main(void){

//     FILE *fayl = fopen("hello.txt", "r");

//     if (fayl == NULL)
//     {
//         printf("faylni ochib bolmadi\n");

//         return 1;
//     }

//     char qator[100];
//     while (fgets(qator, 100, fayl) != NULL)
//     {
//        printf("%s", qator);
//     }
    

//     fclose(fayl);

//     return 0;
    
// }










// #include <stdio.h>

// int main(void){

//     FILE *fayl = fopen("students.txt","r");

//     if (fayl == NULL)
//     {
//        printf("fayl ni ochib bolmadi\n");

//        return 1;

//     }

//     fprintf(fayl, "Shukurjon 100\n");
//     fprintf(fayl, "Vali 85\n");
//     fprintf(fayl, "Olim 76\n");
//     fprintf(fayl, "Alovudin 65\n");
//     fprintf(fayl, "Alibek 55\n");

//     char qator[100];
//     while (fgets(qator, 100,fayl) != NULL)
//     {
//         printf("%s", qator);
//     }
    
    

//     fclose(fayl);
// }