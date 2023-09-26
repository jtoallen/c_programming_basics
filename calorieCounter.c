#include <stdio.h>

#define DAYS 7
#define MEALS_PER_DAY 5

int main()
{
    int calories[DAYS][MEALS_PER_DAY] = {0}; // Initialize calories for each day and meal to zero
    int dailyTotal[DAYS] = {0};              // Initialize daily total calories to zero
    char *dayNames[DAYS] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    puts("Calorie Counter");

    for (int day = 0; day < DAYS; day++)
    {
        printf("Enter calories for %s:\n", dayNames[day]);
        for (int meal = 0; meal < MEALS_PER_DAY; meal++)
        {
            printf("  Meal %d: ", meal + 1);
            scanf("%d", &calories[day][meal]);
            dailyTotal[day] += calories[day][meal]; // Update daily total
        }
    }

    // Open the CSV file for writing
    FILE *csvFile = fopen("calories.csv", "w");

    if (csvFile == NULL)
    {
        perror("Error opening the CSV file");
        return 1;
    }

    // Write the header to the CSV file
    fprintf(csvFile, "Day,Meal 1,Meal 2,Meal 3,Meal 4,Meal 5,Total Calories\n");

    // Write data for each day to the CSV file
    for (int day = 0; day < DAYS; day++)
    {
        fprintf(csvFile, "%s,", dayNames[day]);
        for (int meal = 0; meal < MEALS_PER_DAY; meal++)
        {
            fprintf(csvFile, "%d,", calories[day][meal]);
        }
        fprintf(csvFile, "%d\n", dailyTotal[day]); // Write the total calories for the day
    }

    // Close the CSV file
    fclose(csvFile);

    return 0;
}
