#include <stdio.h>

// 1. Function to calculate the total cost before any discounts
double calculateFuelCost(int fuelType, double litres) {
    double pricePerLitre = 0.0;

    switch (fuelType) {
        case 1:
            pricePerLitre = 4850.0; // Petrol
            break;
        case 2:
            pricePerLitre = 4650.0; // Diesel
            break;
        case 3:
            pricePerLitre = 5200.0; // Premium
            break;
        default:
            pricePerLitre = 0.0;    // Invalid type
            break;
    }

    return pricePerLitre * litres;
}

// 2. Function to apply a 5% loyalty discount if the total exceeds UGX 100,000
double applyDiscount(double totalCost) {
    if (totalCost > 100000.0) {
        return totalCost * 0.95; // Applies a 5% discount
    }
    return totalCost; // No discount applied
}

// 3. Main function coordinating inputs, function calls, and receipt output
int main() {
    int fuelType;
    double litres, originalCost, finalAmount, discountAmount;

    printf("=== FUEL STATION PUMP INTERFACE ===\n");
    printf("1. Petrol  (UGX 4,850/litre)\n");
    printf("2. Diesel  (UGX 4,650/litre)\n");
    printf("3. Premium (UGX 5,200/litre)\n");
    printf("Select fuel type (1-3): ");
    scanf("%d", &fuelType);

    // Basic validation check
    if (fuelType < 1 || fuelType > 3) {
        printf("Error: Invalid fuel type selected. Aborting transaction.\n");
        return 1; 
    }

    printf("Enter amount of fuel in litres: ");
    scanf("%lf", &litres);

    if (litres <= 0) {
        printf("Error: Litres must be greater than zero.\n");
        return 1;
    }

    // Processing using the declared functions
    originalCost = calculateFuelCost(fuelType, litres);
    finalAmount = applyDiscount(originalCost);
    discountAmount = originalCost - finalAmount;

    // Displaying the Receipt
    printf("\n===================================\n");
    printf("          FUEL RECEIPT             \n");
    printf("===================================\n");
    
    printf("Fuel Type:        ");
    if (fuelType == 1)      printf("Petrol\n");
    else if (fuelType == 2) printf("Diesel\n");
    else                    printf("Premium\n");

    printf("Litres Purchased: %.2f L\n", litres);
    printf("Original Cost:    UGX %.2f\n", originalCost);
    printf("Discount Applied: UGX %.2f\n", discountAmount);
    printf("-----------------------------------\n");
    printf("FINAL PAYABLE:    UGX %.2f\n", finalAmount);
    printf("===================================\n");

    return 0;
}