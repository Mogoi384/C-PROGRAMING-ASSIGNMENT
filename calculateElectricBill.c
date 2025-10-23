//A C PROGRAM FOR ELECTRIC BILL CALULATOR
/*NAME:MOGOI IGNATIUS
REG NO:PA106/G/28834/25
DESCRIPTION:A C program that calculates electric bill
*/
#include <stdio.h>
float calculateElectricBill(int units) {
    float total = 0.0;
    
    if (units <= 100) {
        total = units * 10.0;
    } else if (units <= 200) {
        total = (100 * 10.0) + ((units - 100) * 15.0);
    } else {
        total = (100 * 10.0) + (100 * 15.0) + ((units - 200) * 20.0);
    }
    
    return total;
}
int main() {
    
    printf("=== Electric Bill Calculation ===\n");
    int units1 = 80;
    int units2 = 150;
    int units3 = 250;
    
    printf("Units: %d, Bill: KSh. %.2f\n", units1, calculateElectricBill(units1));
    printf("Units: %d, Bill: KSh. %.2f\n", units2, calculateElectricBill(units2));
    printf("Units: %d, Bill: KSh. %.2f\n", units3, calculateElectricBill(units3));
    
    return 0;
}