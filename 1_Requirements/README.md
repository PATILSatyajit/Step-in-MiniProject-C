# sp# Requirements

## Library management system

## Introduction
This library management system project is purely developed in c programming language on visual studio code. It enables librarian to use several utilities to track book record and reader's record as well.

## Cost and Features
This library management system is only one side utility to control and keep track of issued books. It enables librarian to save reader's credentials while lending a book along with due dates and as soon as reader returns the book ,  librarian can update the book record. Librarian can also check for availabality of books by just typing book id.

The main features of this system are:
* Add a books
* Delete a particular book
* Search a particular book's record
* View all available books
* Save readers record

## Defining Our System

A system is something formed of parts, each of which interacts with the other parts to achieve some common purpose. In the case of a library management system, the parts work together to support the management of library information resources: their acquisition, representation and circulation.

## SWOT ANALYSIS

## Strenghths
* Easy to handle
* Automated work
## Weaknesses
* limited features
* Poor UI Design
## Opportunities
* This can be improved by adding more features.
* Mobile application can be developed
## Threats
* User authenticaition

## 4W's and 1'H

### Who:

All librarians can use this utility.

### What:

This system can add a book, delete a book, issue a book, search book record, check availability, update book's record.

### When:

This utility can be used whenever a reader approaches to library.

### Where:

This utility can be used in schools, colleges, private libraries and in book stores as well after some modificaitions.

### How:

Reduces manual efforts of librarian by automating library funations such as adding a book, deleting a book, updating book record, search book record, etc.

## Detail requirements

### HIGH level Requirements:

|      ID          |Description                          |Status                         |
|----------------|-------------------------------|-----------------------------|
| HLR_1          | Add book                    |Implemented       |
| HLR_2          | View all available books        |Implemented       |
| HLR_3          | Search particular book        |Implemented       |
| HLR_4          | Update status of particular book   |Implemented       |
| HLR_5          | Delete a book        |Implemented       |


### LOW level Requirements:

|      ID          |Description                          |Status                         |
|----------------|-------------------------------|-----------------------------|
| HLR_1, HLR_3, HLR_5 -> LLR_01          | ASK BOOK ID                    |Implemented       |
| HLR_4 -> LLR_02          | ASK READER'S FIRST NAME       |Implemented       |
| HLR_4 -> LLR_03          | ASK READER's LAST NAME        |Implemented       |
| HLR_4 -> LLR_04          | ASK READER's ID   |Implemented       |
| HLR_4 -> LLR_05          | ASK DUE DATE       |Implemented       |



