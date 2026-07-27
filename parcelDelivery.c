#include <stdio.h>
#include <ctype.h>

// ============================================================================
// (a) C FUNCTION USING POINTERS TO UPDATE THE COST DIRECTLY (12 Marks)
// ============================================================================
void computeDeliveryCost(double weight, char zone, double *costPointer) {
    double pricePerKg = 0.0;
    
    // Convert character zone to uppercase to support lower/uppercase inputs gracefully
    zone = toupper(zone);

    // Determine the base rate per kg based on the destination zone
    switch (zone) {
        case 'A':
            pricePerKg = 3000.0;
            break;
        case 'B':
            pricePerKg = 5500.0;
            break;
        case 'C':
            pricePerKg = 8000.0;
            break;
        default:
            pricePerKg = 0.0;
            printf("Warning: Invalid Zone entered. Cost evaluation skipped.\n");
            return;
    }

    // Dereference the pointer (*costPointer) to modify the actual main variable
    *costPointer = pricePerKg * weight;

    // Apply the heavy-weight surcharge if the condition is met
    if (weight > 20.0) {
        *costPointer += 10000.0;
        printf(">> Notice: A heavy parcel surcharge of UGX 10,000 has been added.\n");
    }
}

// ============================================================================
// (b) MAIN FUNCTION TO HANDLE IO AND ADDR PASSING (8 Marks)
// ============================================================================
int main() {
    double parcelWeight;
    char destinationZone;
    double finalCost = 0.0; // The actual variable to be modified via its address

    // FIXED: Swapped out the C++ 'cout' line for standard C 'printf'
    printf("=== Logistics Parcel Delivery Cost Calculator ===\n");
    
    printf("Enter parcel weight (in kg): ");
    scanf("%lf", &parcelWeight);

    if (parcelWeight <= 0) {
        printf("Error: Weight must be greater than zero.\n");
        return 1;
    }

    printf("Enter destination zone (A, B, or C): ");
    // The space before %c discards any trailing newline characters from previous inputs
    scanf(" %c", &destinationZone); 

    // Passing the address of finalCost using the address-of (&) operator
    computeDeliveryCost(parcelWeight, destinationZone, &finalCost);

    // Displaying the updated value
    if (finalCost > 0.0) {
        printf("\n===================================\n");
        printf("        DELIVERY QUOTATION         \n");
        printf("===================================\n");
        printf("Parcel Weight:    %.2f kg\n", parcelWeight);
        printf("Target Zone:      Zone %c\n", toupper(destinationZone));
        printf("-----------------------------------\n");
        printf("TOTAL COST:       UGX %.2f\n", finalCost);
        printf("===================================\n");
    }

    return 0;
}