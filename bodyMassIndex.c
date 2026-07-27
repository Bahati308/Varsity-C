#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to validate that a string contains only alphabetic characters
int isOnlyCharacters(const char *str) {
    if (strlen(str) == 0) return 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isalpha(str[i])) {
            return 0; // Contains non-alphabetic characters
        }
    }
    return 1;
}

int main() {
    char firstName[50];
    char lastName[50];
    char gender;
    float height, weight, bmi;

    printf("=== Body Mass Index (BMI) Calculator ===\n\n");

    // 1. Capture and validate First Name
    do {
        printf("First Name (Characters only): ");
        scanf("%49s", firstName);
        if (!isOnlyCharacters(firstName)) {
            printf("Invalid input! Please use letters only.\n");
        }
    } while (!isOnlyCharacters(firstName));

    // 2. Capture and validate Last Name
    do {
        printf("Last Name (Characters only): ");
        scanf("%49s", lastName);
        if (!isOnlyCharacters(lastName)) {
            printf("Invalid input! Please use letters only.\n");
        }
    } while (!isOnlyCharacters(lastName));

    // 3. Capture and validate Gender
    do {
        printf("Gender (M for Male, F for Female): ");
        scanf(" %c", &gender); // The space before %c consumes any leftover newline
        gender = toupper(gender);
        if (gender != 'M' && gender != 'F') {
            printf("Invalid input! Please enter only M or F.\n");
        }
    } while (gender != 'M' && gender != 'F');

    // 4. Capture Height
    printf("Height in metres (e.g., 1.75): ");
    while (scanf("%f", &height) != 1 || height <= 0) {
        printf("Invalid input! Please enter a valid decimal number for height: ");
        while (getchar() != '\n'); // Clear input buffer
    }

    // 5. Capture Weight
    printf("Weight in kgs (e.g., 70.5): ");
    while (scanf("%f", &weight) != 1 || weight <= 0) {
        printf("Invalid input! Please enter a valid decimal number for weight: ");
        while (getchar() != '\n'); // Clear input buffer
    }

    // Calculate BMI
    bmi = weight / (height * height);

    printf("\n-----------------------------------------\n");
    
    // Evaluate BMI and print output message along with special notes
    if (bmi < 18.5) {
        printf("Hello %s, your BMI is Underweight.\n", firstName);
        printf("Eat nutrient-rich foods and consider consulting a nutritionist.\n");
    } 
    else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("Hello %s, your BMI is Normal weight.\n", firstName);
        printf("Maintain your healthy lifestyle and balanced diet.\n");
    } 
    else if (bmi >= 25.0 && bmi <= 29.9) {
        printf("Hello %s, your BMI is Overweight.\n", firstName);
        printf("Try regular exercise and watch your calorie intake.\n");
    } 
    else { // 30.0 or higher
        printf("Hello %s, your BMI is Obese.\n", firstName);
        printf("Seek medical guidance for a healthy weight-loss plan.\n");
    }

    printf("Calculated BMI value: %.1f\n", bmi);
    printf("-----------------------------------------\n");

    return 0;
}