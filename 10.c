#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n <= 1){
        printf("Not Prime\n");
        return 0;
    }
    int is_prime = 1;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            is_prime = 0;
            break;
        }
    }
    if(is_prime == 1)
        printf("Prime\n");
    else
        printf("Composite\n");

    return 0;
}
