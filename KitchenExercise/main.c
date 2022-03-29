#include "customer.h"
#include <stdio.h>

int main(void){
customer_t customer;
customer=customer_create("Nicola");

printf("%s",customer_getName());
    return 0;
}