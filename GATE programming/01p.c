// #include<stdio.h>
// int ace(int y){
//     static int a,b=5;
//     a=10;
//     b++;a++;
//     return(y*b+a);
// }
// int main() {
//     // int x=5,z;
//     // z=ace(x);
//     // printf("%d\n",z);
//     // z=ace(x);
//     // printf("%d\n",z);
// }


//array and string
// #include<stdio.h>
// int main (){
//     // int arr[3]={11,22,33,44,55,66};
//     // arr[5]=99;
//     // printf("%d",arr[9]);

//     // char p[5]="Ace Academy";
//     // int i=0;
//     // while(p!='\0'){
//     // printf("%c\n",p[i]);
//     // i++;
//     // }


//     char s[]="ace";
//     char *p="ace";
//     // s="academy";
//     p="academy";
//     // printf("%s\n",s);
//     printf("%s\n",p);
// }

//struct

// #include <stdio.h>
// struct book
// { int id; 
// float price;
// char name[10]; 
// };
// int main(void) {
// struct book x={121,282.50,"Ace book" };
// printf("%d %f %s",x.id,x.price,x.name);
// printf("\n%u %u %u",&x.id,&x.price,&x.name);
// printf("\nsize of struct id=%d",sizeof(x.id));
// printf("\nsize of struct price=%d",sizeof(x.price));
// printf("\nsize of struct name=%d",sizeof(x.name));

// printf("\nsize of struct var=%d",sizeof(x));  //18byte for members + 2 bytes for padding 
// //compiler add some padding to align the members in memory. Memory alignment is done to improve memory access performance, as some architecture require data to be aligned at specific memory addresses for efficient fetching.
// printf("\nsize of struct var=%d",sizeof(struct book));

// return 0;
// }



//union
// #include<stdio.h>
// union book {
//     int id; 
//     float price; 
//     char name; 
// };
// int main(){
//     union book b;
//     printf("%d",sizeof(b));
//     b.id=12;
//     b.price=100.2;
//     b.name='S';
//     printf("%d %f %c",b.id,b.price,b.name); //the value of id & prices gets corrupted. only variable name prints the expected result. It is bcz, in union the memory location is shared among all member data types.
// }


//enum

#include<stdio.h>
enum flag{false,true};
enum status{failed=4,working,under_process};
// enum grain{oats,wheat,barley,corn,rice};  //by default starts from 0 
// enum grain{oats=1,wheat,barley,corn,rice};
// enum grain{oats,wheat=10,barley,corn=20,rice};
// enum grain{oats,wheat=10,barley,corn=10,rice};
// enum grain{oats,wheat=-10,barley,corn,rice};
enum grain{oats,wheat,barley,corn,rice};
int main(void){
    enum flag a,b;
    a=false;
    b=true;
    printf("The value of false = %d & true = %d\n",a,b);

    enum status f;
    f=under_process;
    printf("The value of under_process = %d & size= %d",f,sizeof(f));

    enum grain g1=oats;
    enum grain g2=wheat;
    enum grain g3=barley;
    enum grain g4=corn;
    enum grain g5=rice;

    printf("\nThe value of g1 = %d , g2 = %d , g3 = %d , g4 = %d , g5 = %d",g1,g2,g3,g4,g5);
}