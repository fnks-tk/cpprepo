/* kadai2 */
#include <iostream>
using namespace std;

class person{
public:
  string address;
  string name;
};

class addressbook{
  person friends[100];
  int numberOfFriends;
public:
  addressbook();
  void listFriends();
  void addFriend(string n, string a);
};

// constructor
addressbook::addressbook(){
  numberOfFriends = 0;
}

void addressbook::addFriend(string n, string a){
  friends[numberOfFriends].name = n;
  friends[numberOfFriends].address = a;
  numberOfFriends++;
}

void addressbook::listFriends(){
  for(int i = 0; i < numberOfFriends; i++){
    cout << friends[i].name << ":" << friends[i].address << "\n";
  }
}

int main()
{
  addressbook abook;
  string name, address;

  while(1){
    cout << "住所録に登録する名前を入力してください（終了するにはquitと入力してください）: ";
    cin >> name;
    //   cout << "name.length() = " << name.length() << "\n";
    if(name == "quit"){break;}
    cout << "住所録に登録する住所を入力してください:";
    cin >> address;
    abook.addFriend(name, address);
  }

  cout << "\n名前と住所のリスト:\n";
  abook.listFriends();
}
