#include <iostream>
#include <vector>

using namespace std;

enum MealType {NO_PREF, REGULAR, LOW_FAT,VEGETARIAN};
struct Passenger{
    string name;
    MealType mealType;
    bool isFreqFlyer;
    string freqFlyerNo;
};


bool evenSum(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += a[i];
    cout << sum << endl;
    return (sum % 2) == 0;
}

void f(int value, int& ref){
    value++;
    ref++;
    cout << value << endl;
    cout << ref << endl;
}


int main() {
    char c = 'a';
    char* p = &c;
    int* pi;
    char** ppc;
    int ap[15];
    int (*fp) (char*);
    int* f(char*);

    cout << *p << endl;

    //Pointers into Arrays
    int v[] = {1,2,3,4,5,6};
    int* p1 = v;
    int* p2 = &v[1];
    int* p3 = &v[4];
    cout << *p1 << endl;
    cout << *p2 << endl;
    cout << *p3 << endl;


  Passenger passenger = {"John Smith",VEGETARIAN, true,"293145"};
  passenger.name = "Pocahontas";
  passenger.mealType = REGULAR;
  cout << passenger.name << endl;
  cout << passenger.mealType << endl;


  Passenger *k;
  k = new Passenger;
  k->name = "Pocahontas";
    cout << k->name << endl;
  k->mealType = REGULAR;
    cout << k->mealType << endl;
  k->isFreqFlyer = false;
    cout << k->isFreqFlyer << endl;
  k->freqFlyerNo = "NONE";
    cout << k->freqFlyerNo << endl;


  delete k;

  int list[] = {4,2,7,8,5,1,1};
  bool result = evenSum(list,7);
  if(result)
     cout << "the sum is even\n";
  else
      cout << "the sum is odd\n";
  return EXIT_SUCCESS;

  int cat = 3;
  int dog = 5;
  f(cat,dog);
  cout << cat << endl;
  cout << dog <<endl;

    return 0;
}
