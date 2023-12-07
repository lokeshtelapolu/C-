#include <iostream>
#include <string>
using namespace std;
class Animal {
protected:
    string name;
    string species;
    int age;

public:
    void setName(string n) {
        name = n;
    }

    void setSpecies(string s) {
        species = s;
    }

    void setAge(int a) {
        age = a;
    }

    string getName() const {
        return name;
    }

    string getSpecies() const {
        return species;
    }

    int getAge() const {
        return age;
    }
};

class Cat : public Animal {
private:
    string color;
    string breed;

public:
    void setColor(string c) {
        color = c;
    }

    void setBreed(string b) {
        breed = b;
    }

    string getColor() const {
        return color;
    }

    string getBreed() const {
        return breed;
    }
};

class Dog : public Animal {
private:
    int weight;
    string breed;

public:
    void setWeight(int w) {
        weight = w;
    }

    void setBreed(string b) {
        breed = b;
    }

    int getWeight() const {
        return weight;
    }

    string getBreed() const {
        return breed;
    }
};

int main() {
    // Example usage
    Cat myCat;
    myCat.setName("Whiskers");
    myCat.setSpecies("Felis catus");
    myCat.setAge(5);
    myCat.setColor("Tabby");
    myCat.setBreed("Persian");

    Dog myDog;
    myDog.setName("Rex");
    myDog.setSpecies("Canis lupus familiaris");
    myDog.setAge(3);
    myDog.setWeight(25);
    myDog.setBreed("Labrador");

    cout << "Cat Information:" <<endl;
    cout << "Name: " << myCat.getName() <<endl;
    cout << "Species: " << myCat.getSpecies() <<endl;
    cout << "Age: " << myCat.getAge() <<endl;
    cout << "Color: " << myCat.getColor() <<endl;
    cout << "Breed: " << myCat.getBreed() <<endl;

    cout << "\nDog Information:" <<endl;
    cout << "Name: " << myDog.getName() <<endl;
    cout << "Species: " << myDog.getSpecies() <<endl;
    cout << "Age: " << myDog.getAge() <<endl;
    cout << "Weight: " << myDog.getWeight() << " lbs" <<endl;
    cout << "Breed: " << myDog.getBreed() <<endl;
    return 0;
}

