/**
 * @file main.c
 * @author Satyajit Rajesh Patil 
 * @brief main function of library management system
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include"library.h"  


int main()
{
    int A=1;
    do{
    int option, True, BOOK_ID, new_member_id;
    char STS[10], new_issue_tarikh[10], new_due_tarikh[10], reader_first_naav[10],reader_last_naav[10], HEAding[20];
    
    printf("\t\t 1 - TO View all books \n\t\t 2 - TO Delete a book \n\t\t 3 - TO Add new book \n\t\t 4 - TO Search a book \n\t\t 5 - TO Update book record \n");
    printf("CHOOSE CORRECT OPTION\n");
    scanf("%d",&option);
    
    if(option == 1)
    {
        True = view_all_books();

        if(True == pass){
            printf("\t\t DONE \t\t\n");}
        else{
            printf("\t\t FAIL \t\t\n");
            printf("press 1 to continue and 0 to exit\n");
            scanf("%d", &A);}
    }
    else if (option==2)
    {
        printf("Enter book id to delete\n");
        scanf("%d",&BOOK_ID);
        True=delete_book(BOOK_ID);

        if(True == pass){
            printf("\t\t DONE \t\t\n");}
        else{
            printf("\t\t FAIL \t\t\n");
            printf("press 1 to continue and 0 to exit\n");
            scanf("%d", &A);}
    }
    else if(option == 3)
    {
        printf("Enter the book id\n");
        scanf("%d",&BOOK_ID);
        fflush(stdin);
        printf("Enter book name\n");
        gets(HEAding);
        True = enter_new_book(BOOK_ID, HEAding);

        if(True == pass){
            printf("\t\t DONE \t\t\n");}
        else{
            printf("\t\t FAIL \t\t\n");
            printf("press 1 to continue and 0 to exit\n");
            scanf("%d", &A);}
    
    }
    else if(option == 4)
    {
        printf("Enter the book id to search\n");
        scanf("%d",&BOOK_ID);
        True = view_a_book(BOOK_ID);

        if(True == pass){
                printf("\t\t DONE \t\t\n");}
        else{
            printf("\t\t FAIL \t\t\n");
            printf("press 1 to continue and 0 to exit\n");
            scanf("%d", &A);}
    }
    else if(option == 5)
    {
        printf("Enter the book id to update\n");
        scanf("%d",&BOOK_ID);
        True = view_a_book(BOOK_ID);
        if(True == 1){
            printf("Enter new status\n");
            scanf("%s", STS);
            printf("Enter new date of issue\n");
            scanf("%s", new_issue_tarikh);
            printf("Enter new due date\n");
            scanf("%s", new_due_tarikh);
            printf("Enter first name of member\n");
            scanf("%s", reader_first_naav);
            printf("Enter last name of member\n");
            scanf("%s", reader_last_naav);
            printf("Enter member ID\n");
            scanf("%d", &new_member_id);
            True=update_book(BOOK_ID, STS, new_issue_tarikh, new_due_tarikh, reader_first_naav,reader_last_naav, new_member_id);}
        
            
            if(True == pass){
                printf("\t\t DONE \t\t\n");}
            else {
                printf("\t\t FAIL \t\t\n");
                printf("press 1 to continue and 0 to exit\n");
                scanf("%d", &A);}
    }
    else
    {
        printf("\t\t\t*******\n");
        printf("please enter a right choice\n");
    }
    
}while (A);

return 0;
}
