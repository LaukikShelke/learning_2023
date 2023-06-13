#include <stdio.h>

int bit_operations(int num, int oper_type) {
    int result = num;  // Initialize the result with the input number

    switch (oper_type) {
        case 1:
            result = result | (1 << 0);  // Set 1st bit
            break;
        case 2:
            result = result & (~(1 << 31));  // Clear 31st bit
            break;
        case 3:
            result = result ^ (1 << 15);  // Toggle 16th bit
            break;
        default:
            printf("Invalid operation type.\n");
            break;
    }

    return result;
}

int main() {
    int num, oper_type;
    
    printf("Enter an integer (32 bits): ");
    scanf("%d", &num);
    
    printf("Enter operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);
    
    int result = bit_operations(num, oper_type);
    printf("Result: %d\n", result);

    return 0;
}
