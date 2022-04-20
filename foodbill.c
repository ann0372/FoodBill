#include <stdio.h>
int main() {
    int billamt,amtgiven;
    scanf("%d",&amtgiven);
    scanf("%d",&billamt);
    printf("Quotient:%d\n",amtgiven/billamt);
    printf("Remainder:%d",amtgiven%billamt);
    return 0;
}
