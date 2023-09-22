#include <stdio.h>
#include <string.h>

// int main()
// {
//     struct bank
//     {
//         int account;
//         float balance;
//     };
//     struct bank checking, savings; //declaring 2 instances of bank at same time

//     checking.account = 1234;
//     checking.balance = 865307.88;

//     savings.account = 5678;
//     savings.balance = 5000000.10;

//     printf("The checking account %d has a balance of %f and savings %d has %f\n",
//            checking.account, checking.balance, savings.account, savings.balance);
//     // printf("The savings account %d has a balance of %f\n",
//     //        savings.account,
//     //        savings.balance);

//     return (0);
// }

//Instance of person with a pre-defined string for char name.
// int main()
// {
//     struct person
//     {
//         char name[32];
//         int age;
//     };

//     struct person president = {
//         "George Washington",
//         67};
//     printf("%s was %d years old\n", president.name, president.age);

//     return (0);
// }

//when string char name is not pre-defined you must use fgets() input function
//or strcpy to assign a name.  CANNOT USE person.president = "George Washington"
// STRING ASSINGMENT LIKE THIS WILL NOT WORK

int main()
{
    struct date
    {
        int year;
        int month;
        int day;
    };

    struct person
    {
        char name[32];
        struct date birthday;     //structure birthday is member of date struct
        struct date inaguaration; //having structure for date allows reuse of
        struct date termEnd;      //code like use for birthday, inauguration, termEnd
    };

    struct person friend;

    strcpy(friend.name, "George Washington");
    friend.birthday.year = 1732;
    friend.birthday.month = 2;
    friend.birthday.day = 22;
    friend.inaguaration.year = 1789;
    friend.termEnd.year = 1797;

    printf("%s was born %d/%d/%d and served from %d to %d\n",
           friend.name, friend.birthday.month, friend.birthday.day,
           friend.birthday.year, friend.inaguaration.year, friend.termEnd.year);

    return (0);
}