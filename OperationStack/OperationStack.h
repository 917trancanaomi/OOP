#pragma once
#include "../DynamicArray/DynamicArray.h"
#include "../Operation/Operation.h"

typedef struct {
	DynamicArray* operations;
} OperationStack;

OperationStack* create_operation_stack();

void destroy_operation_stack(OperationStack*);

void push(OperationStack*, Operation*);

Operation* pop(OperationStack*);

int is_empty(OperationStack*);