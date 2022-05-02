#include <stdio.h>

enum nikosLtd {Ivan, Stoyan, Peter, Milen, Ognyan};

int main ()
{
enum nikosLtd firstEmployee;
enum nikosLtd secondEmployee;
enum nikosLtd thirdEmployee;
enum nikosLtd forthEmployee;
enum nikosLtd fifthEmployee;

firstEmployee = Ivan; 
secondEmployee = Stoyan;
thirdEmployee = Peter;
forthEmployee = Milen;
fifthEmployee = Ognyan;

printf("The values for employees are:\t%d\t%d\t%d\t%d\t%d\t", firstEmployee, secondEmployee,thirdEmployee, forthEmployee, fifthEmployee);

return 0;
    
}