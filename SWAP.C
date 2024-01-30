void swap(int *a, int *b ){
*a=*a+*b;
*b=*a-*b;
*a=*a-*b ;

}
int main(){

int a=30,b=20;
clrscr();
printf("Before swap of numbers a=%d,b=%d",a,b);
//swap(a,b);   //  call  by value
swap(&a,&b);    //  call byreference
printf("\nAfter swap a=%d,b=%d",a,b);
getch();
return 0;

}
