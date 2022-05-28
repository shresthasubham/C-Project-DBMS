#include <stdio.h> 
#include <string.h>
 int cont; 
int compare(char word1[], char word2[]) 
{     int i = 0; 
    while (word1[i] != '\0' && word2[2] != '\0') 
    { 
        if (word1[i] != word2[i]) 
        {             return 0;             break;         }         i++;     }     return 1; }; int addUser() {     printf("\n");     FILE *fp;     fp = fopen("address.txt", "a"); 
 
    char firstname[20];     char lastname[20];     char address[40];     long int phonenumber;     char gender[20];     char grade[40];     char section[20];     int age;     long int registrationNumber;     char email[100]; 
     printf("\t\t\t");     printf("Enter the firstname.\n");     printf("\t\t\t");     scanf("%s", firstname);     printf("\t\t\t");     printf("Enter the lastname.\n");     printf("\t\t\t");     scanf("%s", lastname);     printf("\t\t\t");     printf("Enter the address.\n");     printf("\t\t\t");     scanf("%s", address);     printf("\t\t\t");     printf("Enter the phonenumber.\n");     printf("\t\t\t"); 
    scanf("%ld", &phonenumber); 
    printf("\t\t\t"); 
    printf("Enter the gender (Male/Female/Other).\n");     printf("\t\t\t"); 
    scanf("%s", gender);     printf("\t\t\t"); 
    printf("Enter the grade.\n");     printf("\t\t\t");     scanf("%s", grade);     printf("\t\t\t"); 
    printf("Enter the section.\n");     printf("\t\t\t");     scanf("%s", section);     printf("\t\t\t");     printf("Enter the age.\n");     printf("\t\t\t"); 
    scanf("%d", &age); 
    printf("\t\t\t"); 
    printf("Enter the registrationnumber.\n");     printf("\t\t\t"); 
    scanf("%ld", &registrationNumber); 
    printf("\t\t\t"); 
    printf("Enter the email.\n");     printf("\t\t\t");     scanf("%s", email); 
 
    fprintf(fp, "Firstname:%s Lastname:%s Address:%s Phonenumber:%ld Gender:%s Grade:%s Section:%s Age:%d Registrationnumber:%ld Email:%s\n", 
            firstname, lastname, address, phonenumber, gender, grade, section, age, registrationNumber, email);     fclose(fp); 
    printf("\n Successfully created new record! \n");     return 0; 
} int listUser() { 
    FILE *fp; 
    fp = fopen("address.txt", "r"); 
 
    char firstname[20];     char lastname[20];     char address[40];     long int phonenumber;     char gender[20];     char grade[40];     char section[20];     int age; 
    long int registrationNumber;     char email[100]; 
 
    while (fscanf(fp, "Firstname:%s Lastname:%s Address:%s Phonenumber:%ld Gender:%s Grade:%s Section:%s Age:%d Registrationnumber:%ld Email:%s\n", 
                  firstname, lastname, address, &phonenumber, gender, grade, section, &age, &registrationNumber, email) != EOF) 
    { 
        printf("\t\t\t"); 
        printf("---------------------------");         printf("\n\n");         printf("\t\t\t"); 
        printf("Firstname:%s \n\t\t\tLastname:%s \n\t\t\tAddress:%s \n\t\t\tPhonenumber:%ld 
\n\t\t\tGender:%s \n\t\t\tGrade:%s \n\t\t\tSection:%s \n\t\t\tAge:%d 
\n\t\t\tRegistrationnumber:%ld \n\t\t\tEmail:%s", 
               firstname, lastname, address, phonenumber, gender, grade, section, age, registrationNumber, email);         printf("\n\n"); 
    }     return 0; } 
int searchWithFirstname() 
{ 
    char fname[20];     printf("\t\t\t"); 
 
    printf("Enter the firstname.\n");     printf("\t\t\t"); 
 
    scanf("%s", fname); 
 
    FILE *fp; 
    fp = fopen("address.txt", "r"); 
 
    char firstname[20];     char lastname[20];     char address[40];     long int phonenumber;     char gender[20];     char grade[40];     char section[20];     int age; 
    long int registrationNumber;     char email[100]; 
    int results = 0; 
 
    while (fscanf(fp, "Firstname:%s Lastname:%s Address:%s Phonenumber:%ld Gender:%s Grade:%s Section:%s Age:%d Registrationnumber:%ld Email:%s\n", 
                  firstname, lastname, address, &phonenumber, gender, grade, section, &age, &registrationNumber, email) != EOF) 
    { 
        // printf("%d",compare(fname,firstname));         if (compare(fname, firstname) == 1) 
        { 
            printf("\t\t\t"); 
            printf("---------------------------");             printf("\n\n");             printf("\t\t\t"); 
            printf("Firstname:%s \n\t\t\tLastname:%s \n\t\t\tAddress:%s \n\t\t\tPhonenumber:%ld 
\n\t\t\tGender:%s \n\t\t\tGrade:%s \n\t\t\tSection:%s \n\t\t\tAge:%d 
\n\t\t\tRegistrationnumber:%ld \n\t\t\tEmail:%s", 
                   firstname, lastname, address, phonenumber, gender, grade, section, age, registrationNumber, email); 
            printf("\n\n");             results++; 
        } 
    } 
 
    if (results == 0) 
    { 
        printf("\t\t\t"); 
 
        printf("User with this firstname doesnot exit.\n"); 
    } 
    return 0; 
} 
int searchWithLastname() 
{ 
    char lname[20];     printf("\t\t\t"); 
 
    printf("Enter the lastname.\n");     printf("\t\t\t"); 
 
    scanf("%s", lname); 
 
    FILE *fp; 
    fp = fopen("address.txt", "r"); 
 
    char firstname[20];     char lastname[20];     char address[40];     long int phonenumber;     char gender[20];     char grade[40];     char section[20];     int age; 
    long int registrationNumber;     char email[100];     int results = 0; 
 
    while (fscanf(fp, "Firstname:%s Lastname:%s Address:%s Phonenumber:%ld Gender:%s 
Grade:%s Section:%s Age:%d Registrationnumber:%ld Email:%s\n", 
                  firstname, lastname, address, &phonenumber, gender, grade, section, &age, &registrationNumber, email) != EOF) 
    { 
        // printf("%d",compare(fname,firstname));         if (compare(lname, lastname) == 1) 
        { 
            printf("\t\t"); 
            printf("---------------------------");             printf("\n\n");             printf("\t\t"); 
            printf("Firstname:%s \n\t\t\tLastname:%s \n\t\t\tAddress:%s \n\t\t\tPhonenumber:%ld 
\n\t\t\tGender:%s \n\t\t\tGrade:%s \n\t\t\tSection:%s \n\t\t\tAge:%d 
\n\t\t\tRegistrationnumber:%ld \n\t\t\tEmail:%s", 
                   firstname, lastname, address, phonenumber, gender, grade, section, age, registrationNumber, email); 
            printf("\n\n");             results++; 
        }     } 
    if (results == 0) 
    { 
        printf("\t\t\t"); 
        printf("User with this lastname doesnot exit.\n"); 
    }     return 0; 
} 
int searchWithReg() 
{ 
    long int regis;     printf("\t\t\t");     printf("Enter the registration number.\n");     printf("\t\t\t"); 
 
    scanf("%ld", &regis); 
 
    FILE *fp; 
    fp = fopen("address.txt", "r"); 
 
    char firstname[20];     char lastname[20];     char address[40];     long int phonenumber;     char gender[20];     char grade[40];     char section[20];     int age; 
    long int registrationNumber;     char email[100];     int results = 0; 
 
    while (fscanf(fp, "Firstname:%s Lastname:%s Address:%s Phonenumber:%ld Gender:%s Grade:%s Section:%s Age:%d Registrationnumber:%ld Email:%s\n", 
                  firstname, lastname, address, &phonenumber, gender, grade, section, &age, &registrationNumber, email) != EOF) 
    { 
        if (regis == registrationNumber) 
        { 
            printf("\t\t\t"); 
printf("---------------------------"); printf("\n\n"); 
            printf("\t\t\t"); 
            printf("Firstname:%s \n\t\t\tLastname:%s \n\t\t\tAddress:%s \n\t\t\tPhonenumber:%ld 
\n\t\t\tGender:%s \n\t\t\tGrade:%s \n\t\t\tSection:%s \n\t\t\tAge:%d 
\n\t\t\tRegistrationnumber:%ld \n\t\t\tEmail:%s", 
                   firstname, lastname, address, phonenumber, gender, grade, section, age, registrationNumber, email); 
            printf("\n\n");             results++; 
        }     } 
    if (results == 0) 
    { 
        printf("\t\t\t"); 
 
        printf("User with this registration number doesnot exit.\n"); 
    }     return 0; 
} 
 
int editUser() 
{ 
    long int regis;     printf("\t\t\t"); 
 
    printf("Enter the registration number.\n");     printf("\t\t\t"); 
 
    scanf("%ld", &regis); 
 
    FILE *fp; 
    fp = fopen("address.txt", "r+"); 
 
    char firstname[20];     char lastname[20];     char address[40];     long int phonenumber;     char gender[20];     char grade[40];     char section[20];     int age; 
    long int registrationNumber;     char email[100];     int results = 0; 
 
    while (fscanf(fp, "Firstname:%s Lastname:%s Address:%s Phonenumber:%ld Gender:%s Grade:%s Section:%s Age:%d Registrationnumber:%ld Email:%s\n", 
                  firstname, lastname, address, &phonenumber, gender, grade, section, &age, &registrationNumber, email) != EOF) 
    { 
 
 
        if (regis == registrationNumber) 
        { 
            char fnameEdited[20]; 
 
            char lnameEdited[20]; 
char addressEdited[40]; long int phonenumberE; 
            char genderE[20];             char gradeE[40];             char sectionE[20];             int ageE; 
 
            char emailE[100];             printf("\t\t\t");             printf("Enter the firstname.\n");             printf("\t\t\t");             scanf("%s", fnameEdited);             printf("\t\t\t");             printf("Enter the lastname.\n");             printf("\t\t\t");             scanf("%s", lnameEdited);             printf("\t\t\t");             printf("Enter the address.\n");             printf("\t\t\t");             scanf("%s", addressEdited);             printf("\t\t\t"); 
            printf("Enter the phonenumber.\n");             printf("\t\t\t"); 
            scanf("%ld", &phonenumberE); 
            printf("\t\t\t"); 
            printf("Enter the gender (Male/Female/Other).\n");             printf("\t\t\t");             scanf("%s", genderE); 
printf("\t\t\t"); printf("Enter the grade.\n"); 
            printf("\t\t\t");             scanf("%s", gradeE);             printf("\t\t\t");             printf("Enter the section.\n");             printf("\t\t\t");             scanf("%s", sectionE);             printf("\t\t\t");             printf("Enter the age.\n");             printf("\t\t\t");             scanf("%d", &ageE);             printf("\t\t\t");             printf("Enter the email.\n");             printf("\t\t\t");             scanf("%s", emailE); 
 
            strcpy(firstname, fnameEdited);             strcpy(lastname, lnameEdited);             strcpy(address, addressEdited);             strcpy(gender, genderE);             strcpy(grade, gradeE);             strcpy(section, sectionE);             age=ageE;             strcpy(email, emailE); 
             printf("\t\t");             printf("---------------------------"); printf("\n\n"); printf("\t\t"); 
 
            printf("Firstname:%s \n\t\t\tLastname:%s \n\t\t\tAddress:%s \n\t\t\tPhonenumber:%ld 
\n\t\t\tGender:%s \n\t\t\tGrade:%s \n\t\t\tSection:%s \n\t\t\tAge:%d 
\n\t\t\tRegistrationnumber:%ld \n\t\t\tEmail:%s", 
                   firstname, lastname, address, phonenumber, gender, grade, section, age, registrationNumber, email); 
            printf("\n\n");             results++; 
        } 
    } 
printf("%d", results);     if (results == 0) 
    { 
        printf("\t\t\t"); 
        printf("User with this registration number doesnot exit.\n"); 
    }     else 
    {printf("Successfully edited!");} 
 
    return 0; 
} 
 
 
 
int main() 
{ 
 
    int choice, filteredchoice, pin; start: 
    printf("\n");     printf("\t\t\t"); 
    printf("--------------------------------------------\n");     printf("\t\t\t"); 
    printf("|     STUDENT DATABASE MANAGEMENT           |");     printf("\n");     printf("\t\t\t"); 
    printf("--------------------------------------------\n");     printf("\n\n"); 
 
    printf("enter the login pin to continue\t");     scanf("%d", &pin);     if (pin == 22) 
    { 
     label: 
        printf("\n");         printf("\t\t\t"); 
        printf("What do you want to do?.\n");         printf("\t\t\t"); 
        printf("1 --> to add a new user.\n");         printf("\t\t\t"); 
 
        printf("2 --> to list all users.\n");         printf("\t\t\t"); 
 
printf("3 --> to search the user with registration number.\n"); printf("\t\t\t"); 
 
        printf("4 --> to search the user with firstname.\n");         printf("\t\t\t"); 
 
        printf("5 --> to search the user with lastname.\n"); 
 
        printf("\t\t\t"); 
 
        printf("6 --> to edit the user name using registration number.\n"); 
 
        printf("\n\n\n\n"); 
 
        printf("\t\t\t"); 
 
        printf("Enter your choice\n");         scanf("%d", &choice); 
 
        if (choice == 1) 
 
        {             addUser(); 
        } 
 
        else if (choice == 2) 
        {             listUser(); } 
else if (choice == 3) 
        { 
            searchWithReg(); 
        } 
        else if (choice == 4) 
        { 
            searchWithFirstname(); 
        } 
        else if (choice == 5) 
        { 
            searchWithLastname(); 
        } 
        else if (choice == 6) 
        { 
            editUser(); 
        }         else         { 
            printf("\t\t\t"); 
            printf("Please choose the correct option.(You can only choose between 1,2 and 3.)\n");             goto label; 
        }  
        printf("\t\t\t"); 
        printf("Press any key to continue interacting or 0 to quit.\n");         printf("\t\t\t");         scanf("%d", &cont); 
if (cont == 0) 
{             return 0;         }         else         {             goto label; 
        }     }     else         printf("Wrong pin"); 
} 
 
