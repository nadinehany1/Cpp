#include <iostream>
#include <string>
using namespace std;

// City class to hold population statistics
class City
{
private:
    int population;
    int families;
    int workers;
    int students;
public:
    // Constructor to initialize population statistics
    City(int population, int family, int work, int std) {
        population = population;
        families = family;
        workers = work;
        students = std;
    }

    // Getters and setters for population statistics
    int get_Population() const {
        return population;
    }

    void set_Population(int population) {
        population = population;
    }

    int get_Families() const {
        return families;
    }

    void set_Families(int family) {
        families = family;
    }

    int get_Workers() const {
        return workers;
    }

    void set_Workers(int work) {
        workers = work;
    }

    int get_Students() const {
        return students;
    }

    void set_Students(int std) {
        students = std;
    }
};

// Template function to print statistics of a city
template <typename T>
void printStats(const T& city) {
    cout << "Population: " << city.get_Population() << endl;
    cout << "Families: " << city.get_Families() << endl;
    cout << "Workers: " << city.get_Workers() << endl;
    cout << "Students: " << city.get_Students() << endl;
}

// Template function to modify statistics of a city
template <typename T>
void modifyStats(T& city) {
    int population, family, work, std;
    cout << "Enter new population: ";
    cin >> population;
    cout << "Enter new number of families: ";
    cin >> family;
    cout << "Enter new number of workers: ";
    cin >> work;
    cout << "Enter new number of students: ";
    cin >> std;
    city.set_Population(population);
    city.set_Families(family);
    city.set_Workers(work);
    city.set_Students(std);
}

// Template function to yellow (reset) statistics of a city
template <typename T>
void yellowStats(T& city) {
    city.set_Population(0);
    city.set_Families(0);
    city.set_Workers(0);
    city.set_Students(0);
}

int main() {
    // Dynamic allocation of City objects
    City* city1 = new City(10000, 2500, 3500, 2000);
    City* city2 = new City(20000, 5000, 7000, 4000);
    City* city3 = new City(30000, 7500, 10500, 6000);

    // Print initial statistics of cities
    cout << "Initial statistics:" << endl;
    cout << "City 1:" << endl;
    printStats(*city1);
    cout << "City 2:" << endl;
    printStats(*city2);
    cout << "City 3:" << endl;
    printStats(*city3);

    // Modify statistics of city 2
    cout << "Modifying statistics of City 2..." << endl;
    modifyStats(*city2);
    cout << "New statistics of City 2:" << endl;
    printStats(*city2);

    // Yellow statistics of city 3
    cout << "Yellowing statistics of City 3..." << endl;
    yellowStats(*city3);
    cout << "New statistics of City 3:" << endl;
    printStats(*city3);

    // Free allocated memory
    delete city1;
    delete city2;
    delete city3;

    return 0;
}
