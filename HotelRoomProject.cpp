#include <iostream>
using namespace std;

int main() {
    cout<<"     Welcome To Hotel Brijwasi   "<<endl;
	int quant;
	int choice;
	//initializing the total availavble values of all items  
	int Trooms=40, Tpasta=120, Tcoffee=200, Tshake=80;
	
	//initializing the total sold values of all items as 0
	int Srooms=0, Spasta=0, Scoffee=0, Sshake=0;
	
	//initializing the total price values of all items as 0
	int Prooms=0, Ppasta=0, Pcoffee=0, Pshake=0;
	
	cout<<"\n\t Quantities of items we have: ";
	cout<<"\n Rooms availavble: ";
	cin>>Trooms;
	cout<<"\n Quantity of Pasta: ";
	cin>>Tpasta;
	cout<<"\n Quantity of Coffee: ";
	cin>>Tcoffee;
	cout<<"\n Quantity of Shake: ";
	cin>>Tshake;
	
	m:
	cout<<"\n\t\t Please Select From The Above Menu ";
	
	cout<<"\nn1) Rooms:";
	cout<<"\nn2) Pasta:";
	cout<<"\nn3) Coffee:";
	cout<<"\nn4) Shake:";
	cout<<"\nn5) Exit:";
	
	cout<<"\n\nPlease Enter Your Choice ";
	cin>>choice;
	
	switch(choice){
	    case 1:
	      cout<<"\n\nHow many rooms do you want? ";
	      cin>>quant;
	      
	      if(Trooms-Srooms >=quant){
	          Srooms+=quant;
	          Prooms=Prooms+(quant*1500);
	          cout<<"\n\n\t\t"<<quant<<" Rooms Have Been Allotted To You";
	      }
	      else{
	          cout<<"\n\tOnly"<<Trooms-Srooms<<" Rooms are left in the hotel";
	          break;
	      }
	      
	      case 2:
	       cout<<"\n\nEnter Pasta Quantity: ";
	       cin>>quant;
	       if(Tpasta-Spasta >=quant){
	          Spasta+=quant;
	          Ppasta=Ppasta+(quant*250);
	          cout<<"\n\n\t\t"<<quant<<" Pasta is the order";
	      }
	      else{
	          cout<<"\n\tOnly"<<Tpasta-Spasta<<" Pasta Remaining in the hotel";
	          break;
	      }
	      
	      case 3:
	      cout<<"\n\nHow many nos. coffee do you want? ";
	      cin>>quant;
	      
	      if(Tcoffee-Scoffee >=quant){
	          Scoffee+=quant;
	          Pcoffee=Pcoffee+(quant*70);
	          cout<<"\n\n\t\t"<<quant<<" Coffee is the order";
	      }
	      else{
	          cout<<"\n\tOnly"<<Tcoffee-Scoffee<<" Coffee Remaining in the hotel";
	          break;
	      }
	      
	      
	      case 4:
	      cout<<"\n\nHow many Shakes do you want? ";
	      cin>>quant;
	      
	      if(Tshake-Sshake >=quant){
	          Sshake+=quant;
	          Pshake=Pshake+(quant*150);
	          cout<<"\n\n\t\t"<<quant<<" Shakes is the order";
	      }
	      else{
	          cout<<"\n\tOnly"<<Tshake-Sshake<<"Shakes Remaining in the hotel";
	          break;
	      }
	      case 6:
	       cout<<"\n\nYour Total bill is "<<Prooms+Ppasta+Pcoffee+Pshake<<endl;
	      case 5:
	       exit(0);
	       
	       default:
	       cout<<"Kindly Select From The Number Above";
	       
	}
	goto m;
	
	return 0;
}
