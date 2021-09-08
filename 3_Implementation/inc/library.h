/**
 * @file library.h
 * @author Satyajit Rajesh Patil
 * @brief library.h header file
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __LIBRARY_H__
#define __LIBRARY_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * @brief book structure user defined data type
 * 
 */
typedef struct book {
    int member_id;
    char date_of_issue[10];
    char due_date[10];
    int book_id;
    char book_title[20];
    char status[10];
    char member_first_name[10];
    char member_last_name[10];
}book;

typedef enum values {
    pass = 1,
    fail = 0
}values;

/**
 * @brief function to view all available books 
 * 
 * @return pass=1 / fail=0
 */
values view_all_books();

/**
 * @brief function to view a particular book
 * 
 * @param id 
 * @return pass=1 / fail=0
 */
values view_a_book(int id);

/**
 * @brief function to add a new book
 * 
 * @param id - book id
 * @param title - book heading
 * @return pass=1 / fail=0
 */
values enter_new_book(int id, char title[]);

/**
 * @brief function to delete a book
 * 
 * @param id - book id
 * @return pass=1 / fail=0
 */
values delete_book(int id);

/**
 * @brief function to update book record
 * 
 * @param id - book record
 * @param new_status - status of book 
 * @param new_date_of_issue - date of issuing book
 * @param new_due_date - due date of book
 * @param new_member_first_name - reader's first name
 * @param new_member_last_name - reader's last name
 * @param new_member_id - id of reader
 * @return pass=1 / fail=0
 */
values update_book(int id, char new_status[], char new_date_of_issue[], char new_due_date[], char new_member_first_name[],char new_member_last_name[], int new_member_id);

#endif

