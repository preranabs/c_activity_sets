// 5. Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.
#include <stdio.h>
#include <stdbool.h>
int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int input_array_size() {
    int n;
    printf("Enter the upper limit (n): ");
    scanf("%d", &n);
    return n;
}

void init_array(int n, int a[n]) {
    for (int i = 2; i <= n; ++i) {
        a[i] = i;
    }
}

// Function to perform Eratosthenes Sieve algorithm
void eratosthenes_sieve(int n, int a[n]) {
    for (int i = 2; i * i <= n; ++i) {
        if (a[i] != 0) {
            for (int j = i * i; j <= n; j += i) {
                a[j] = 0;  // Mark multiples of prime numbers as 0
            }
        }
    }
}

// Function to display the prime numbers
void output(int n, int a[n]) {
    printf("Prime numbers between 2 and %d are:\n", n);
    for (int i = 2; i <= n; ++i) {
        if (a[i] != 0) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

// Main function
int main() {
    int n;
    
    // Take user input
    n = input_array_size();
    
    // Initialize array with consecutive integers
    int primes[n + 1];
    init_array(n, primes);
    
    // Find prime numbers using Eratosthenes Sieve
    eratosthenes_sieve(n, primes);
    
    // Display the result
    output(n, primes);

    return 0;
}
