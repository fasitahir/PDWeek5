#include <iostream>
using namespace std;

int price(float itemprice , char type );
main()
{   while(true)
    { system ("cls");
      int itemprice;
      char type;
      char key;
      cout<<"Enter the Price of car: ";
      cin>>itemprice;

      cout<<"Type of car: ";
      cin>>type;

      int result =price( itemprice , type);
      cout<<"The final price on a vehicle of type "<<type<<" after adding tax is "<<result<<endl;
  
      cout<<"Press any key to move to next calculation....";
      cin>>key;
    }
}

int price(float itemprice , char type)
{
   int finalprice;
   float taxamount;
   if(type == 'M')
   {
    taxamount = itemprice *6/100 ;
    cout << taxamount;
    finalprice = taxamount + itemprice; 
    return finalprice;
   }

      if(type == 'E')
   {
    taxamount = itemprice *8/100 ;
    cout << taxamount;
    finalprice = taxamount + itemprice; 
    return finalprice;
   }

      if(type == 'S')
   {
    taxamount = itemprice *10/100 ;
    cout << taxamount;
    finalprice = taxamount + itemprice; 
    return finalprice;
   }

      if(type == 'V')
   {
    taxamount = itemprice *12/100 ;
    cout << taxamount;
    finalprice = taxamount + itemprice; 
    return finalprice;
   }

      if(type == 'T')
   {
    taxamount = itemprice *15/100 ;
    cout << taxamount;
    finalprice = taxamount + itemprice; 
    return finalprice;
   }

}