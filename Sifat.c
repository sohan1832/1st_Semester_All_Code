#include <stdio.h>
#include <string.h>

// Structure to represent a city
struct City
{
    char name[20];
    char attractions[200];
};

// Function to display the distance map
void displayDistanceMap(struct City cities[], int numCities, int distances[][5])
{
    printf("Distance Map:\n");
    printf("%-10s%-10s%-10s%-10s%-10s%-10s\n", "From", "To", "Dhaka", "Sylhet", "Khulna", "Chittagong", "Cumilla");
    for (int i = 0; i < numCities; i++)
    {
        printf("%-10s", cities[i].name);
        for (int j = 0; j < numCities; j++)
        {
            printf("%-10d", distances[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    // Define the cities
    struct City cities[] = {
        {"Dhaka", "Lalbagh Fort, Ahsan Manzil, National Museum"},
        {"Sylhet", "Ratargul Swamp Forest, Jaflong, Srimangal Tea Gardens"},
        {"Khulna", "Sundarbans, Sixty Dome Mosque, Shat Gombuj Mosque"},
        {"Chittagong", "Patenga Beach, Foy's Lake, Ethnological Museum"},
        {"Cumilla", "Mainamati Shalban Vihara, Lalmai Hills, Chandimura Mandir"}};

    // Define the distances between cities
    int distances[5][5] = {
        {0, 282, 333, 243, 103},
        {282, 0, 333, 341, 268},
        {333, 333, 0, 170, 140},
        {243, 341, 170, 0, 131},
        {103, 268, 140, 131, 0}};

    // Display the distance map
    displayDistanceMap(cities, 5, distances);

    // Display attractions in each city
    printf("\nAttractions:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s: %s\n", cities[i].name, cities[i].attractions);
    }

    return 0;
}
