#include <stdio.h>

unsigned int binary_to_uint(const char *b) {
    if (b == NULL) {
        return 0;
    }
    
    unsigned int num = 0;
    
    for (int i = 0; b[i] != '\0'; i++) {
        if (b[i] != '0' && b[i] != '1') {
            return 0;
        }
        num = num * 2 + (b[i] - '0');
    }
    
    return num;
}

int main() {
    const char *binary_str1 = "1101";
    const char *binary_str2 = "10102"; // Invalid binary string
    const char *binary_str3 = NULL; // NULL string

    printf("Binary: %s -> Unsigned int: %u\n", binary_str1, binary_to_uint(binary_str1));
    printf("Binary: %s -> Unsigned int: %u\n", binary_str2, binary_to_uint(binary_str2));
    printf("Binary: (NULL) -> Unsigned int: %u\n", binary_to_uint(binary_str3));

    return 0;
}
