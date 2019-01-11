/*
        C++ ÉÏ»ú¿Î ¡¾Æß¡¿      2016.6.13
        P280 £¨4£©
*/

#include <cstring>
#include <iostream>
using namespace std;

class Teacher {
public:
  Teacher(string nam, int a, char s, string tit, string ad, string t);
  void display();

protected:
  string name;
  int age;
  char sex;
  string title;
  string addr;
  string tel;
};

Teacher::Teacher(string nam, int a, char s, string tit, string ad, string t)
    : name(nam), age(a), sex(s), title(tit), addr(ad), tel(t) {}
void Teacher::display() {
  cout << "name:" << name << endl;
  cout << "age:" << age << endl;
  cout << "sex:" << sex << endl;
  cout << "title:" << title << endl;
  cout << "address:" << addr << endl;
  cout << "tel:" << tel << endl;
}
class Cadre {
public:
  Cadre(string nam, int a, char s, string p, string ad, string t);
  void display();

protected:
  string name;
  int age;
  char sex;
  string post;
  string addr;
  string tel;
};

Cadre::Cadre(string nam, int a, char s, string p, string ad, string t)
    : name(nam), age(a), sex(s), post(p), addr(ad), tel(t) {}
void Cadre::display() {
  cout << "name:" << name << endl;
  cout << "age:" << age << endl;
  cout << "sex:" << sex << endl;
  cout << "post:" << post << endl;
  cout << "address:" << addr << endl;
  cout << "tel:" << tel << endl;
}

class Person : public Teacher, public Cadre {
public:
  Person(string nam, int a, char s, string tit, string p, string ad, string t,
         float w);
  void show();

private:
  float wage;
};

Person::Person(string nam, int a, char s, string t, string p, string ad,
               string tel, float w)
    : Teacher(nam, a, s, t, ad, tel), Cadre(nam, a, s, p, ad, tel), wage(w) {}

void Person::show() {
  Teacher::display();
  cout << "post:" << Cadre::post << endl;
  cout << "wage:" << wage << endl;
}

int main() {
  Person person1("Xujia", 20, 'm', "clssmate", "math", "NEUQ", "15570302960",
                 1534.5);

  person1.show();

  return 0;
}
