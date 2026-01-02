#include <stdio.h>
#include <string.h>

void aes_mock_encrypt(const char *input, char *output, const char *key) {
    int len = strlen(input);
    int key_len = strlen(key);
    for (int i = 0; i < len; i++) {
        output[i] = input[i] ^ key[i % key_len];
    }
    output[len] = '\0';
}

int main() {
    const char *text = "AeroQGeoSecure_Payload";
    const char *key = "Quantum_Key_2026";
    char encrypted[64];
    char decrypted[64];

    printf("Original: %s\n", text);
    aes_mock_encrypt(text, encrypted, key);
    printf("Encrypted (XOR): %s\n", encrypted);
    aes_mock_encrypt(encrypted, decrypted, key);
    printf("Decrypted: %s\n", decrypted);

    return 0;
}
