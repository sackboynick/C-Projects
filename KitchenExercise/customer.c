#include"customer.h"
#include <stdio.h>

static char _name[30] = {0};

typedef struct customer{
    char* name;
} customer;

customer_t customer_create(char* n){
    customer_t _newCustomer=calloc(1,sizeof(customer));

    if(NULL ==_newCustomer)
    {
        return NULL;
    }
    _newCustomer->name="";

    while (*n!='\0')
    {
        _newCustomer->name=*n;
        if(_newCustomer->name=='\0')
        break;
        
        _newCustomer->name++;
        n++;
    }

}

//void customer_makeOrder(t_order order){}

void customer_pay(int* cash, int moneyPayed){
    *cash+=moneyPayed;
}

char* customer_getName(void){
    return _name;
}
