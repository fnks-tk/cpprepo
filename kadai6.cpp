#include <iostream>
using namespace std;

class person{
protected:
  string name;
public:
  string email;
  void setName(string n){name = n;}
  string getName(){return name;}
};

int main()
{
  person friends[3];
  string inputName;

  for(int i=0; i<3; i++){ 
    cout << i + 1 << "番目の友達の名前は？";
    cin >> inputName;
    friends[i].setName(inputName);
    cout << "友達のメールアドレスは？";
    cin >> friends[i].email;
  }

  cout << "\n名前リスト:\n";
  for(int i=0; i<3; i++){ 
    cout << friends[i].getName() << ":" << friends[i].email << "\n";
    
  }
}



  
