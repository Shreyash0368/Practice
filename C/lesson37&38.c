#include <stdio.h>
/*this is the struct command which is used to create an array
 which has multiple data types in it.
 we also have the union command which does the same but 
 here each data type does not have its own memory but instead 
 the data type with the largest size is used as a common data storage 
 for all of them 
*/
struct books
{   
    float price;
    char name[60];
    char author[40];
    int pages;
};
int main(int argc, char const *argv[])
{
    struct books book1 = {150.00,"CPROGRAMMING FOR NOOBS","KANEKING",70};
    printf("The name of the book is %s\n",book1.name);
    printf("The price of the book is %f\n",book1.price);
    printf("The author of the book is %s\n",book1.author);
    printf("The number of pages in the book is %d\n",book1.pages);

    return 0;
}
