/* kadai4 */
#include <iostream>
using namespace std;

class person{
public:
  string address;
  string name;
};

class addressbook{
  //person friends[100];
  person* friends;
  int numberOfFriends;
public:
  addressbook();
  ~addressbook();
  void listFriends();
  void addFriend(string n, string a);
  person find(string query);
};

// constructor
addressbook::addressbook(){
  numberOfFriends = 0;
  friends = new person[100];
}

addressbook::~addressbook(){
  delete[] friends;
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

  cout << "\n名前リスト:\n";
  abook.listFriends();
}
