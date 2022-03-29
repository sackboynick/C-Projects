#pragma once
#include <stdint.h>

typedef struct customer* customer_t; 


customer_t customer_create(char* name);
//void customer_makeOrder(t_order order);
void customer_pay(int* cash, int moneyPayed);
char* customer_getName();