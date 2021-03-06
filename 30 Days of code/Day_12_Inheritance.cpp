#include <iostream>
#include <vector>

using namespace std;

class Person
{
protected:
    string firstName;
    string lastName;
    int id;

public:
    Person(string firstName, string lastName, int identification)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    void printPerson()
    {
        cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
    }
};

class Student : public Person
{
private:
    vector<int> testScores;

public:
    Student(string firstName, string lastName, int identification, vector<int> testScores) : Person(firstName, lastName, identification)
    {
        this->testScores = testScores;
    }
    char calculate()
    {
        int sum = 0;
        int avg = 0;
        for (int i = 0; i < testScores.size(); i++)
        {
            sum += testScores[i];
        }
        if (testScores.size() != 0)
        {
            avg = sum / testScores.size();
        }
        char grade = ' ';
        if (avg >= 90 && avg <= 100)
        {
            grade = 'O';
        }
        if (avg >= 80 && avg < 90)
        {
            grade = 'E';
        }
        if (avg >= 70 && avg < 80)
        {
            grade = 'A';
        }
        if (avg >= 55 && avg < 70)
        {
            grade = 'P';
        }
        if (avg >= 40 && avg < 55)
        {
            grade = 'D';
        }
        if (avg < 40)
        {
            grade = 'T';
        }
        return grade;
    }
};

int main()
{
    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for (int i = 0; i < numScores; i++)
    {
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student *s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}