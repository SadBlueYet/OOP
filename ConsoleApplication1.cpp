
#include <iostream>
#include <string>
enum gender { M, W };
class Person {

public: 
    
    int age, heigth, weigth;
    std::string sex, nationality, countOne, countTwo;
    Person(int age, int heigth, int weigth, gender sex, std::string nationality, std::string countOne) {
        this->age = age;
        this->heigth = heigth;
        this->weigth = weigth;
        this->sex = sex;
        this->nationality = nationality;
        this->countOne = countOne;
    }
    void genderChange(std::string sex) {
        this->sex = sex;
        std::cout << sex << '\n';
    }
    void ageChange(int age) {
        const int daysPerDay = 365;
        std::cout << age / daysPerDay << '\n';
        this->age += age / daysPerDay;
        std::cout << this->age << '\n';
    }
    void say(Person* name) {
        std::cout << this->countOne << " adressed -> " << name->countOne << '\n';
    }
    ~Person() {
        std::cerr << "s";
    }
};
int main(){
    gender a = M;
    Person* person;

    person = new Person(18, 60, 185, a , "Russian", "first");
    Person* name;
    name = new Person(18, 60, 185, a, "Russian", " second");
    person->say(name);
    delete(person);
    delete(name);
}
