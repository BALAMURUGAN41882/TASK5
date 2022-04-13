#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
namespace CUST_REL_APPICATION
{
  class Test;
}
class CUST_REL_APPICATION::Test {
    public:
    string *Item_Name1,*Item_Brand1;
    int *Item_Amount1;

Test()
{}

    Test(string,string,int);
    ~Test();

};

CUST_REL_APPICATION::Test::Test(string Item_Name,string Item_Brand,int Item_Amount)
{
    Item_Name1=new string(Item_Name) ;
    Item_Brand1=new string(Item_Brand) ;
    Item_Amount1=new int(Item_Amount) ;
}

CUST_REL_APPICATION::Test::~Test(){
    cout<<"Object destroyed.";
}
using namespace CUST_REL_APPICATION;
int main() {
    cout<<"PRODUCT DEATAILS VIEWING PLATFORM APPLICATION"<<endl;
string Item_Name,cust_item,Item_Brand;
int Item_Amount,no_of_product;
cout<<"ENTER NUM OF PRODUCT MOBILE SHOP HOLD: ";
cin>>no_of_product;
 Test *TestArray[no_of_product];
 cout<<endl<<"---USAGE FOR SHOP AUTHORISED PERSON--- "<<endl;
 for(int i=0;i<no_of_product;i++)
 {

     cout<<"Item_Name:";
     cin>>Item_Name;
     cout<<"Item_Brand: ";
     cin>>Item_Brand;
     cout<<"Item_Amount: ";
     cin>>Item_Amount;
   TestArray[i]=new Test(Item_Name,Item_Brand,Item_Amount);
   cout<<endl;

 }
 {

 int i=0;
 cout<<endl<<"---CUSTOMER USAGE---"<<endl;
  cout<<"Enter Product: ";
  cin>>cust_item;
 while(1)
 {
 if(cust_item==*(TestArray[i]->Item_Name1))
 {
    cout<<*(TestArray[i]->Item_Name1)<<" : Price :"<<*(TestArray[i]->Item_Amount1)<<endl;
    cout<<*(TestArray[i]->Item_Name1)<<" : Brand :"<<*(TestArray[i]->Item_Brand1)<<endl;
 }
 i++;

 }
 }

    for( int i = 0; i < no_of_product; i++ )
 {
     delete TestArray[i];
 }
 cout<<"----------THANKS FOR VISITING ZOHO APPLICATION----------";


 return 0;
}
