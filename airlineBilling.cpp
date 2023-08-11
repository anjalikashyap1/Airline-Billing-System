#include<iostream>
#include<fstream>
#include<iomanip>
#include<string.h>

using namespace std;

void mainMenu();

class Management
{
    public:
      Management()
      {
        mainMenu();
      }
};

class Details
{
    public:
      static string name,gender;
     static long long phoneNo;
     static int age;
      static string addr;
      static int cId;

      void information()
      {
        cout<<"\n\n\t\t\tEnter the customer Id: ";
        cin>>cId;
        cout<<"\n\n\t\t\tEnter your name: ";
        cin>>name;
        cout<<"\n\n\t\t\tEnter your age: ";
        cin>>age;
        cout<<"\n\n\t\t\tEnter your address: ";
        cin>>addr;
        cout<<"\n\n\t\t\tEnter your phone number: ";
        cin>>phoneNo;
        cout<<"\n\n\t\t\tEnter your gender: ";
        cin>>gender;
        cout<<"\n\n\t\t\t------------------------------Your details are saved with us--------------------------------------------- ";
        
      }
};

int Details::cId;
string Details::name;
string Details::gender;
long long Details::phoneNo;
int Details::age;
string Details::addr;


class registration
{
  public:
      static int choice;
      int fchoice;
      static float charges;
      char back;

     void flights()
     {
       string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};
       for(int i=0;i<6;i++)
       {
         cout<<"\n\n\t\t\t"<<i+1<<". Flight to "<<flightN[i];
       }
       cout<<"\n\n\t\t\t--------------------WELCOME TO AIRLINES-----------------------------------";
       cout<<"\n\n\t\t\tPress the Country which you want to book the flight  ";
       cin>>choice;

       switch(choice)
       {
         case 1:
             {
              cout<<"\n\n\t\t--------------------------------WELCOME TO DUBAI EMIRATES--------------------------------------";
              cout<<"\n\n\t\tYour Comfort is Our Priority, Enjoy The Journey !";
              cout<<"\n\n\t\tFollowing are the flights: ";
              cout<<"\n\n\t\t1. DUB-498";
              cout<<"\n\n\t\t08-01-2023  8:00AM 10hrs  Rs.14,000";
              cout<<"\n\n\t\t_______________________________________________________________________________________________";
              cout<<"\n\n\t\t2. DUB-658";
              cout<<"\n\n\t\t09-01-2023  4:00AM 12hrs  Rs.10,000";
              cout<<"\n\n\t\t_______________________________________________________________________________________________";
              cout<<"\n\n\t\t3. DUB-508";
              cout<<"\n\n\t\t11-01-2023  11:00AM 11hrs  Rs.9000";
              cout<<"\n\n\t\t-----------------------------------------------------------------------------------------------";
              cout<<"\n\n\t\tSelect the Flight you want to Book: ";
              cin>>fchoice;
              
              if(fchoice==1)
              {
                charges=14000;
                
                cout<<"\n\n\t\t\t______________________________________________________________________________";
                cout<<"\n\t\t\t|       You have successfully booked the flight DUB-498                        |";                                           
                cout<<"\n\t\t\t|______________________________________________________________________________|";

              }
              else if(fchoice==2)
              {
                 charges=10000;
                
                cout<<"\n\n\t\t\t______________________________________________________________________________";
                cout<<"\n\t\t\t|       You have successfully booked the flight DUB-658                        |";                                           
                cout<<"\n\t\t\t|______________________________________________________________________________|";

              }
               else if(fchoice==3)
              {
                 charges=9000;
               
                cout<<"\n\n\t\t\t______________________________________________________________________________";
                cout<<"\n\t\t\t|       You have successfully booked the flight DUB-508                        |";                                           
                cout<<"\n\t\t\t|______________________________________________________________________________|";

              }
              else{
                 cout<<"\n\n\t\tInvalid Input, shifting to the previous menu:";
                 flights();

              }
                cout<<"\n\n\t\tPress any key to go back to main menu ";
             
                 cin>>back;
            
                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
                break;
             }

          case 2:
              {
              cout<<"\n\n\t\t--------------------------------WELCOME TO CANADA AIRLINES------------------------------------";
              cout<<"\n\n\t\tYour Comfort is Our Priority, Enjoy The Journey !";
              cout<<"\n\n\t\tFollowing are the flights: ";
              cout<<"\n\n\t\t1. CA-498";
              cout<<"\n\n\t\t09-01-2023  2:00PM 20hrs  Rs.40,000";
              cout<<"\n\n\t\t_______________________________________________________________________________________________";
              cout<<"\n\n\t\t2. CA-658";
              cout<<"\n\n\t\t11-01-2023  6:00AM 23hrs  Rs.30,000";
              cout<<"\n\n\t\t_______________________________________________________________________________________________";
              cout<<"\n\n\t\t3. CA-508";
              cout<<"\n\n\t\t14-01-2023  12:00AM 21hrs  Rs.45,000";
              cout<<"\n\n\t\t-----------------------------------------------------------------------------------------------";
              cout<<"\n\n\t\tSelect the Flight you want to Book: ";
              cin>>fchoice;
              
              if(fchoice==1)
              {
                charges=40000;
               
                cout<<"\n\n\t\t\t______________________________________________________________________________";
                cout<<"\n\t\t\t|       You have successfully booked the flight CA-498                         |";                                           
                cout<<"\n\t\t\t|______________________________________________________________________________|";

              }
              else if(fchoice==2)
              {
                 charges=30000;
                
                cout<<"\n\n\t\t\t______________________________________________________________________________";
                cout<<"\n\t\t\t|       You have successfully booked the flight CA-658                         |";                                           
                cout<<"\n\t\t\t|______________________________________________________________________________|";

              }
               else if(fchoice==3)
              {
                 charges=45000;
               
                cout<<"\n\n\t\t\t______________________________________________________________________________";
                cout<<"\n\t\t\t|       You have successfully booked the flight CA-508                         |";                                           
                cout<<"\n\t\t\t|______________________________________________________________________________|";

              }
              else{
                 cout<<"\n\n\t\tInvalid Input, shifting to the previous menu:";
                 flights();

              }
                cout<<"\n\n\t\tPress any key to go back to main menu ";
             
                 cin>>back;
            
                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
                break;
             }

              case 3:
              {
              cout<<"\n\n\t\t----------------------------------WELCOME TO UK AIRWAYS-----------------------------------";
              cout<<"\n\n\t\tYour Comfort is Our Priority, Enjoy The Journey !";
              cout<<"\n\n\t\t\t\tFollowing are the flights: ";
              cout<<"\n\n\t\t1. UK-789";
              cout<<"\n\n\t\t11-01-2023  10:00AM 14hrs  Rs.40,000";
              cout<<"\n\n\t\t___________________________________________________________________________________________";
              cout<<"\n\n\t\t-------------------------------------------------------------------------------------------";
              cout<<"\n\n\t\tSelect the Flight you want to Book: ";
              cin>>fchoice;
              
              if(fchoice==1)
              {
                charges=40000;
                
                cout<<"\n\n\t\t\t______________________________________________________________________________";
                cout<<"\n\t\t\t|       You have successfully booked the flight UK-789                         |";                                           
                cout<<"\n\t\t\t|______________________________________________________________________________|";

              }
            
              else{
                 cout<<"\n\n\t\tInvalid Input, shifting to the previous menu:";
                 flights();

              }
                cout<<"\n\n\t\tPress any key to go back to main menu ";
             
                 cin>>back;
            
                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
                break;
             }

              case 4:
              {
              cout<<"\n\n\t\t--------------------------------WELCOME TO US AIRLINES------------------------------------";
              cout<<"\n\n\t\t\tYour Comfort is Our Priority, Enjoy The Journey !";
              cout<<"\n\n\t\t\t\tFollowing are the flights: ";
              cout<<"\n\n\t\t1. US-498";
              cout<<"\n\n\t\t10-01-2023  9:00AM 20hrs  Rs.41,000";
              cout<<"\n\n\t\t___________________________________________________________________________________________";
              cout<<"\n\n\t\t2. US-658";
              cout<<"\n\n\t\t9-01-2023  6:00AM 22hrs  Rs.38,000";
               cout<<"\n\n\t\t___________________________________________________________________________________________";
              cout<<"\n\n\t\t3. US-508";
              cout<<"\n\n\t\t11-01-2023  2:00PM 21hrs  Rs.40,000";
              cout<<"\n\n\t\t--------------------------------------------------------------------------------------------";
              cout<<"\n\n\t\tSelect the Flight you want to Book: ";
              cin>>fchoice;
              
              if(fchoice==1)
              {
                charges=41000;
                
                cout<<"\n\n\t\t\t______________________________________________________________________________";
                cout<<"\n\t\t\t|       You have successfully booked the flight US-498                         |";                                           
                cout<<"\n\t\t\t|______________________________________________________________________________|";

              }
              else if(fchoice==2)
              {
                 charges=38000;
               
                cout<<"\n\n\t\t\t______________________________________________________________________________";
                cout<<"\n\t\t\t|       You have successfully booked the flight US-658                         |";                                           
                cout<<"\n\t\t\t|______________________________________________________________________________|";

              }
               else if(fchoice==3)
              {
                 charges=40000;
                
                cout<<"\n\n\t\t\t______________________________________________________________________________";
                cout<<"\n\t\t\t|       You have successfully booked the flight US-508                         |";                                           
                cout<<"\n\t\t\t|______________________________________________________________________________|";

              }
              else{
                 cout<<"\n\n\t\tInvalid Input, shifting to the previous menu:";
                 flights();

              }
                cout<<"\n\n\t\tPress any key to go back to main menu ";
             
                 cin>>back;
            
                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
                break;
             }

              case 5:
              {
              cout<<"\n\n\t\t-----------------------------WELCOME TO AUSTRALIAN AIRLINES------------------------------------";
              cout<<"\n\n\t\t\tYour Comfort is Our Priority, Enjoy The Journey !";
              cout<<"\n\n\t\tFollowing are the flights: ";
              cout<<"\n\n\t\t1) AUS-498";
              cout<<"\n\n\t\t012-01-2023  2:00PM 20hrs  Rs.45,000";
              cout<<"\n\n\t\t_______________________________________________________________________________________________";
              cout<<"\n\n\t\t2) AUS-658";
              cout<<"\n\n\t\t11-01-2023  6:00AM 23hrs  Rs.50,000";
              cout<<"\n\n\t\t_______________________________________________________________________________________________";
              cout<<"\n\n\t\t3) AUS-508";
              cout<<"\n\n\t\t14-01-2023  12:00AM 21hrs  Rs.42,000";
               cout<<"\n\n\t\t_______________________________________________________________________________________________";
              cout<<"\n\n\t\tSelect the Flight you want to Book: ";
              cin>>fchoice;
              
              if(fchoice==1)
              {
                charges=45000;
                
                cout<<"\n\n\t\t\t______________________________________________________________________________";
                cout<<"\n\t\t\t|       You have successfully booked the flight AUS-498                        |";                                           
                cout<<"\n\t\t\t|______________________________________________________________________________|";


              }
              else if(fchoice==2)
              {
              
                cout<<"\n\n\t\t\t______________________________________________________________________________";
                cout<<"\n\t\t\t|       You have successfully booked the flight AUS-658                        |";                                           
                cout<<"\n\t\t\t|______________________________________________________________________________|";


              }
               else if(fchoice==3)
              {
                 charges=42000;
               
                cout<<"\n\n\t\t\t______________________________________________________________________________";
                cout<<"\n\t\t\t|       You have successfully booked the flight AUS-508                        |";                                           
                cout<<"\n\t\t\t|______________________________________________________________________________|";

              }
              else{
                 cout<<"\n\n\t\tInvalid Input, shifting to the previous menu: ";
                 flights();

              }
                cout<<"\n\n\t\tPress any key to go back to main menu ";
             
                 cin>>back;
            
                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
                break;
             }

              case 6:
              {
              cout<<"\n\n\t\t--------------------------------WELCOME TO EUROPEANS AIRLINES------------------------------------";
              cout<<"\n\n\t\tYour Comfort is Our Priority, Enjoy The Journey !";
              cout<<"\n\n\t\tFollowing are the flights: ";
              cout<<"\n\n\t\t1. EU-498";
              cout<<"\n\n\t\t11-01-2023  2:00PM 20hrs  Rs.48,000";
              cout<<"\n\n\t\t2. EU-658";
              cout<<"\n\n\t\t12-01-2023  6:00AM 23hrs  Rs.39,000";
              cout<<"\n\n\t\t3. EU-508";
              cout<<"\n\n\t\t13-01-2023  12:00AM 21hrs  Rs.46,000";
              cout<<"\n\n\t\t-----------------------------------------------------------------------------------------------";
              cout<<"\n\n\t\tSelect the Flight you want to Book: ";
              cin>>fchoice;
              
              if(fchoice==1)
              {
                charges=48000;
              
                cout<<"\n\n\t\t\t______________________________________________________________________________";
                cout<<"\n\t\t\t|       You have successfully booked the flight EU-498                         |";                                           
                cout<<"\n\t\t\t|______________________________________________________________________________|";

              }
              else if(fchoice==2)
              {
                 charges=39000;
                
                cout<<"\n\n\t\t\t______________________________________________________________________________";
                cout<<"\n\t\t\t|       You have successfully booked the flight EU-658                         |";                                           
                cout<<"\n\t\t\t|______________________________________________________________________________|";


              }
               else if(fchoice==3)
              {
                charges=46000;
                cout<<"\n\n\t\t\t______________________________________________________________________________";
                cout<<"\n\t\t\t|       You have successfully booked the flight EU-508                         |";                                           
                cout<<"\n\t\t\t|______________________________________________________________________________|";

              }
              else{
                 cout<<"\n\n\t\tInvalid Input, shifting to the previous menu:";
                 flights();

              }
                cout<<"\n\n\t\tPress any key to go back to main menu ";
             
                 cin>>back;
            
                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
                break;
             }
             default:
             {
               cout<<"\n\n\t\tInvalid input, Shifting you to the main menu";
               mainMenu();
               break;
             }
       }
     }
};

float registration::charges;
int registration::choice;

/*class ticket     //: public registration,Details
{
  public:
    char arr[100];
   void bill()
   {
     string destination=" ";
     ofstream outf("recordss.txt");
      outf<<"__________________________XYZ AIRLINES___________________________"<<endl;
      outf<<"_____________________________TICKET______________________________"<<endl;
      outf<<"_________________________________________________________________"<<endl;

      outf<<"Customer ID: "<<Details::cId<<endl;
      outf<<"Customer Name: "<<Details::name<<endl;
      outf<<"Customer gender: "<<Details::gender<<endl;
      
      if(registration::choice==1)
      {
        destination="Dubai";
      }
     else if(registration::choice==2)
      {
        destination="Canada";
      }
     else if(registration::choice==3)
      {
        destination="UK";
      }
      else if(registration::choice==4)
      {
        destination="USA";
      }
     else if(registration::choice==5)
      {
        destination="Australia";
      }
     else if(registration::choice==6)
      {
        destination="Europe";
      }
      else{
          outf<<"Destination:\t"<<destination<<endl;
          outf<<"Charges :\t"<<registration::charges<<endl;
      }
     outf.close();

      
   }
     void dispbill()
     {
      ifstream ifs("recordss.txt",ios::in);
      
        if(!ifs)
        {
          cout<<"\n\t\t\tFile Error";
        }
          while(ifs.eof())
          {
            ifs.getline(arr,100);
            cout<<arr<<endl;
          }
       /* string line;
     while (getline(ifs, line))
      {
        cout << line << endl;
       }  
        
      ifs.close();
    }
   };  */
   
   class ticket: public registration,Details
{
public:
    

    void bill()
    {
        string destination = "";
        ofstream outf("recordss.txt");
        outf << "\n\n\t\t\t__________________________XYZ AIRLINES___________________________" << endl;
        outf << "\t\t\t_____________________________TICKET______________________________" << endl;
        outf << "\t\t\t_________________________________________________________________" << endl;

        outf << "\n\n\t\t\tCustomer ID:     " << Details::cId;
        outf << "\n\n\t\t\tCustomer Name:   " << Details::name;
        outf << "\n\n\t\t\tCustomer gender: " << Details::gender;
        outf << "\n\n\t\t\tCustomer Mobile No.: " << Details::phoneNo; 
        outf << "\n\n\t\t\tCustomer Address: " << Details::addr;
        outf << "\n\n\t\t\tCustomer Age: " << Details::age;

      /*  if (registration::choice != 0)
        {*/
            if (registration::choice == 1)
                destination = "Dubai";
            else if (registration::choice == 2)
                destination = "Canada";
            else if (registration::choice == 3)
                destination = "UK";
            else if (registration::choice == 4)
                destination = "USA";
            else if (registration::choice == 5)
                destination = "Australia";
            else if (registration::choice == 6)
                destination = "Europe";

         outf << "\n\n\t\t\tDestination: "<< destination;
         outf << "\n\n\t\t\tCharges : Rs."<< registration::charges;
     /* }
        else
        {
            outf << "Destination:\tN/A" << endl;
            outf << "Charges :\tN/A" << endl;
        }*/

        outf.close();
    }

    void dispbill()
    {
        ifstream ifs("recordss.txt");
        if (!ifs)
        {
            cout << "\n\t\t\tFile Error";
            return;
        }

        string line;
        while (getline(ifs, line))
        {
            cout << line << endl;
        }

        ifs.close();
    }
};



void mainMenu()
{
    char lchoice;
    int schoice;
    char back;

    cout<<"\n\n\t\t\t ______________________________________________________________________________";
 cout<<"\n\t\t\t|                           XYZ Airlines                                       |";                    
 cout<<"\n\t\t\t|-----------------------------Main Menu----------------------------------------|";                            
 cout<<"\n\t\t\t|______________________________________________________________________________|";
 cout<<"\n\t\t\t|                                                                              |";
 cout<<"\n\t\t\t|  1) Add Customer Details                                                     |";
 cout<<"\n\t\t\t|  2) Flight Registration                                                      |";
 cout<<"\n\t\t\t|  3) Ticket And Charges                                                       |";
 cout<<"\n\t\t\t|  4) Exit                                                                     |";
 cout<<"\n\t\t\t|______________________________________________________________________________|";
 cout<<"\n\n\t\t\t Please Enter Your Choice  : ";
 cin>>lchoice;

 Details d;
 registration r;
 ticket t;

 switch(lchoice)
 {
    case '1':
       {
         cout<<"\n\n\t\t\t-------------------------------CUSTOMER----------------------------------------";
         d.information();
         cout<<"\n\n\t\t\tPress any to go back to Main Menu: ";
         cin>>back;
         if(back==1)
         {
            mainMenu();
         }
         else{
            mainMenu();
         }

         break;
       }
    case '2':
        {
            cout<<"\n\n\t\t\t------------------------------Book a Flight----------------------------------";
             r.flights();
            break;
        }   
    case '3':
        {
           /* cout<<"\n\n\t\t\t--------------------------------Get your Ticket-------------------------------";
            t.bill();
            cout<<"\n\n\t\t\tPress 1 to display your ticket: ";
             
             cin>>back;
             if(back==1)
                t.dispbill();
                /*cout<<"\n\n\t\tPress 1 to go back to main menu: ";
                cin>>back;
                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
             }
             else{
                mainMenu();
             }
             break;*/

        cout << "\n\n\t\t\t--------------------------------Get your Ticket-------------------------------";
        t.bill();
        cout << "\n\n\t\t\tPress any key to display your ticket: ";
        cin.ignore();
        cin.get();
        t.dispbill();
        cout << "\n\n\t\t\tPress any key to go back to Main Menu: ";
        cin.ignore();
        cin.get();
        mainMenu();
        break;
        }
     case '4':
        {
            cout<<"\n\n\t\t\t------------------------------Thank You----------------------------------";
            break;
        }   
       default:
       {
        cout<<"\n\n\t\t\tInvalid input please try again !";
        mainMenu();
        break;
       } 
     
 }

}


int main()
{
  Management m;
  return 0;
}