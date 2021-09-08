/**
 * @file Delete_book.c
 * @author Satyajit Rajesh Patil
 * @brief function defination to delete a book
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"library.h"

values delete_book(int id){
    FILE *fptr1;
    FILE *fptr2;
    fptr1 = fopen("library_record.txt","rb");
    fptr2 = fopen("temporary.txt","wb");
    if(fptr1==NULL){
        printf("Unable to open the file\n");
        return fail;
    }else{
        book *discarded_book = (book*)malloc(sizeof(book));
        while(fread(discarded_book, sizeof(book), 1, fptr1)!='\0'){
            if(id==discarded_book->book_id){
               continue;
            }
            fwrite(discarded_book, sizeof(book), 1, fptr2);            
        }
        fclose(fptr1);
        fclose(fptr2);
        free(discarded_book);
        remove("library_record.txt");
        rename("temporary.txt", "library_record.txt");  
        return pass;
    }   
}