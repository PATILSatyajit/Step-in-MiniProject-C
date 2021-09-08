/**
 * @file test.c
 * @author Satyajit Rajesh Patil
 * @brief test program to test library management system
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include"library.h"
#include"unity_internals.h"
#include"unity.h"

void setUp(){}

void tearDown(){}

/**
 * @brief testing enter_new_book function
 * 
 */
void test_enter_new_record(void){
    TEST_ASSERT_EQUAL(pass,enter_new_book(7475, "Iluminati"));
    printf("\n");
}

/**
 * @brief testing view_all_books function
 * 
 */
void test_view_all_records(void){
    TEST_ASSERT_EQUAL(pass,view_all_books());
}

/**
 * @brief testing view_a_book function
 * 
 */
void test_view_a_record(void){
    TEST_ASSERT_EQUAL(fail,view_a_book(-2));
    TEST_ASSERT_EQUAL(pass,view_a_book(7475));
}

/**
 * @brief testing update_book function
 * 
 */
void test_update_record(void){
    TEST_ASSERT_EQUAL(pass,update_book(7475, "issued", "08/09/21", "18/08/21", "Satyajit","Patil", 12345));
}

/**
 * @brief testing delete_book function
 * 
 */
void test_delete_record(void){
    TEST_ASSERT_EQUAL(pass,delete_book(7475));
}

int main(){
    UNITY_BEGIN();

    RUN_TEST(test_enter_new_record);
    RUN_TEST(test_view_a_record);
    RUN_TEST(test_update_record);
    RUN_TEST(test_delete_record);
    RUN_TEST(test_view_all_records);
    
    return UNITY_END();
}
