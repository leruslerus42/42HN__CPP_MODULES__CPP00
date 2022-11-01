# CPP MODULES: CPP00
The goal of the C++ modules 00 to 08 is to introduce the student to Object-Oriented Programming and the C++ programming language in general. 

## TOPICS
- Namespaces
- Classes
- Member functions
- Stdio streams
- Initialization Lists
- Keyword "static"
- Keyword "const"


## DESCRIPTIONS
- ex00: Write a short C++ program, that takes a/multiple string/s from the command line and displays them IN ALL CAPS on the standard out.
       (first intro to std::cin and std::cout)
- ex01: Write a programm that behaves like a Phonebook where you can  ADD and SEARCH for a contact and EXIT the program.


## EX01: PHONEBOOK APPROACH
 
1) PHONEBOOK
    - Create Array of Contacts(8)
    - If you add the 9th Contact, replace the oldest with the newest

2) Contact
    - Each Contact must be instanciated as an instance of the Contact Class.

3) METHODS
    1) ADD
        - add new contact one field at a time
        - after all fields are done, add the contact to the phonebook.
        - no empty fields.
    2) SEARCH
        - Display the Saved Contact as a list of 4 Columns: index, first name, last name, nickname
        - Each column 10 chars.
        - | separate the columns.
        - Text must be right-aligned.
        - If txt longer then column, must be truncated and the last displayable charachter will be replaced by a '.'
        - Then prompt User again for index to display. If Index is Out of Rane/wrong define a relevant behaviour
            Otherwise display the contact information, one field per line.
    EXIT
        - Exit and the contacts are lost.
    OTHERS INPUTS ARE DISCARDED
         


## RESULT 

<img width="1174" alt="Screenshot 2022-11-01 at 04 40 39" src="https://user-images.githubusercontent.com/85942176/199155353-83a44bb7-06a0-4704-b556-1ffed04a82ee.png">





