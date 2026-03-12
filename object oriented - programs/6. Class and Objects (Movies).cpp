
// 6. Class and Objects - Movies- name, year, actor, actress.

#include<iostream>

using namespace std;

class movie
{
    public: 
    string name;
    int year;
    string actor;
    string actress;
};
int main()
{
    movie m1, m2;

    cout << " List various types of movies :- "<< endl;
    cin >> m1.name >> m1.year >> m1.actor >> m1.actress;
    cin >> m2.name >> m2.year >> m2.actor >> m2.actress;

    cout << " Movie 1 :- " << endl;
    cout << " Name of the Movie : " << m1.name << endl;
    cout << " Released year of the movie : " << m1.year << endl;
    cout << " Name of the Actor : " << m1.actor << endl;
    cout << " Name of the Actress : " << m1.actress << endl;

    cout << " \nMovie 2 :- " << endl;
    cout << " Name of the Movie : " << m2.name << endl;
    cout << " Released year of the movie: " << m2.year << endl;
    cout << " Name of the Actor : " << m2.actor << endl;
    cout << " Name of the Actress : " << m2.actress << endl;

    return 0;
}