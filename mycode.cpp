#include <iostream>
#include <string>
#define taxRate_defined 2.34;
using namespace std;
int main()
{
  cout<<"The purpose of this program is to analyze product sales and inventory for a store"<<endl;
  cout<<"Also, please don't forget that c++ is a compiled language."<<endl;
 
 
  string name;
  int category;
  int inventoryQuantity;
  float price;
  int soldItems;
  
  const double taxRate_const = 1.5;
  
  
  
  cout<<"Enter a product name: ";
  cin>>name;
  cout<<"Enter a product category: ";
  cin>>category;
  cout<<"Enter the initial inventory quantity: ";
  cin>>inventoryQuantity;
  cout<<"Enter a product price: ";
  cin>>price;
  cout<<"Enter the number of sold items: ";
  cin>> soldItems;
  
  
  
  int newInventory = inventoryQuantity; // assignment after declaration
  newInventory-=soldItems;
  float totalSales =  soldItems * price;//direct Initialization
   
  string status = (newInventory<10) ? "Low Inventory" : "Sufficient Inventory";
  auto tempSales = totalSales;
  decltype(inventoryQuantity) tempInventory = 20;
  
  
  if (category<=5 and category>=1)
    cout<<"The product is within a valid category range"<<endl;
  else
    cout<<"The product is not witin a valid category range"<<endl;
  
  
  
  
  switch (category){
    case 1:
      cout<<"Category 1: Electronics"<<endl;
      break;
    case 2:
      cout<<"Category 2: Groceries"<<endl;
      break;
    case 3:
      cout<<"Category 3: Clothing"<<endl;
      break;
    case 4:
      cout<<"Category 4: Stationery"<<endl;
      break;
    case 5:
      cout<<"Category 5: Miscellaneous"<<endl;
      break;

  }  
    tempSales=0;
  for (int i=1; i<=soldItems; i++){
    tempSales+=price;
    cout << price<<" is the price of your S" << i<<"th product "<<endl;
  }
cout<<tempSales<<" is the total price"<<endl;
cout<<"The following will be your receipt"<<endl;

cout<<"Your product name is: "<<name<<endl;
cout<<"Your initial inventory is: "<<inventoryQuantity<<endl;
cout<<"Your sold items are: "<<soldItems<<endl;
cout<<"Your newInventory is: "<<newInventory<<endl;
cout<<"Your product price is: "<<price<<endl;
cout<<"Your total sales is: "<<totalSales<<endl;
cout<<"Your Invantory status is: "<<status<<endl;

cout<<"Your Tax rate (const) is: "<<taxRate_const<<endl;
cout<<"Your Auto helper is: "<<tempSales<<endl;
cout<<"Your decltype helper is: "<<tempInventory<<endl;
  return 0;
  
}