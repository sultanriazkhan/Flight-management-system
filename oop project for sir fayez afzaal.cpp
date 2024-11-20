  //OOP PROJECT SP23-BCS-179
   // FLIGHT  MANAGEMENT  SYSTEM
   #include <iostream>
   #include <string>
   

   using namespace std;
   class flight{
    private :
    int LtM,MtL,KtL,LtK,DtK,KtD,StL,LtS,CtL,LtC;
    int seats;
    int select;
    char choice;
    public:
    flight(){
    LtM=5;
    MtL=5;
    KtL=5;
    LtK=5;
    DtK=7;
    KtD=7;
    StL=8;
    LtS=6;
    CtL=3;
    LtC=5;
    seats=0;
  }
  flight(int a, int b, int c, int d, int e, int f, int g,int h, int i, int j , int s){
  LtM=a;
    MtL=b;
    KtL=c;
    LtK=d;
    DtK=e;
    KtD=f;
    StL=g;
    LtS=h;
    CtL=i;
    LtC=j;
    seats=s;
  }
  void avail(){
  cout<<" Dear customer select your desirable destination :"<<endl;
  cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ :"<<endl;
  cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ :"<<endl;
  cout<<" The possible available flights are listed as :"<<endl;
  cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ :"<<endl;
  cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ :"<<endl;
                    cout << "PRESS a :Lahore to Multan: 5 flights today " << endl;
                    cout << "PRESS b :Multan to Lahore: 5 flights today " << endl;
                    cout << "PRESS c :Karachi to Lahore: 5 flights today " << endl;
                    cout << "PRESS d :Lahore to Karachi: 5 flights today " << endl;
                    cout << "PRESS e :Dubai to Karachi: 7 flights today " << endl;
                    cout << "PRESS f :Karachi to Dubai: 7 flights today " << endl;
                    cout << "PRESS g :Saudi Arabia to Lahore: 3 flights today " << endl;
                    cout << "PRESS h :Lahore to Saudi Arabia: 3 flights today " << endl;
                    cout << "PRESS i :China to Lahore: 3 flights today " << endl;
                    cout << "PRESS j :Lahore to China: 2 flights today " << endl;
                    cout<<" ********************************************** "<<endl;
                    cout<<" .............................................. "<<endl;
                    
                    cout<<" ********************************************** "<<endl;
                   
                    cin>>choice;
                   
 
  switch (choice){
 
  case 'a':
  cout<<" Dear customer their are 5 times for Lahore to Multan today :"<<endl;
  cout<<" :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
  cout<<" Enter 1 for : 6:00 am to 7:45 am "<<endl;
  cout<<" Enter 2 for : 10:00 am to 11:45 am "<<endl;
  cout<<" Enter 3 for : 13:00 pm to 14:45 pm "<<endl;
  cout<<" Enter 4 for : 15:00 pm to 16:45 pm "<<endl;
  cout<<" Enter 5 for : 20:00 pm to 21:45 pm "<<endl;
  cout<<" Enter your choice : PLZ ";
  cin>>select;
  if (select==1){
  cout<<" You have selected :6:00 am to 7:45 am : Time "<<endl;
  cout<<" 28 seats Available for this flight :"<<endl;
  cout<<" Enter your number of seats : PLZ "<<endl;
  cin>>seats;
  if (seats<=28){
  cout<<" Congratulation : You have reserved :"<<seats<<" Seats "<<endl;
  cout<<" Move on to confirmation section : plz "<<endl;
  }
  else
  cout<<" Not available enough seats SORRY "<<endl;
  }
  else if (select==2){
  cout<<" You have selected :10:00 am to 11:45 am : Time "<<endl;
  cout<<" 34 seats Available for this flight :"<<endl;
  cout<<" Enter your number of seats : PLZ "<<endl;
  cin>>seats;
  if (seats<=34){
  cout<<" Congratulation : You have reserved :"<<seats<<" Seats "<<endl;
  cout<<" Move on to confirmation section : plz "<<endl;
  }
  else
  cout<<" Not available enough seats SORRY "<<endl;
  }
  else if (select==3){
  cout<<" You have selected :13:00 pm to 14:45 pm : Time "<<endl;
  cout<<" 56 seats Available for this flight :"<<endl;
  cout<<" Enter your number of seats : PLZ "<<endl;
  cin>>seats;
  if (seats<=56){
  cout<<" Congratulation : You have reserved :"<<seats<<" Seats "<<endl;
  cout<<" Move on to confirmation section : plz "<<endl;
  }
  else
  cout<<" Not available enough seats SORRY "<<endl;
  }
  else if (select==4){
  cout<<" You have selected :15:00 pm to 16:45 pm : Time "<<endl;
  cout<<" 9 seats Available for this flight :"<<endl;
  cout<<" Enter your number of seats : PLZ "<<endl;
  cin>>seats;
  if (seats<=9){
  cout<<" Congratulation : You have reserved :"<<seats<<" Seats "<<endl;
  cout<<" Move on to confirmation section : plz "<<endl;
  }
  else
  cout<<" Not available enough seats SORRY "<<endl;
  }
 
  else if (select==5){
  cout<<" You have selected :20:00 pm to 21:45 pm : Time "<<endl;
  cout<<" 43 seats Available for this flight :"<<endl;
  cout<<" Enter your number of seats : PLZ "<<endl;
  cin>>seats;
  if (seats<=43){
  cout<<" Congratulation : You have reserved :"<<seats<<" Seats "<<endl;
  cout<<" Move on to confirmation section : plz "<<endl;
  }
  else
  cout<<" Not available enough seats SORRY "<<endl;
  }
  else
  cout<<" Wrong Selection!! "<<endl;
  break;
  case 'b':
  cout << "Dear customer, there are 5 times for MULTAN to LAHORE today:" << endl;
                        cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
                        cout << "Enter 1 for: 07:30 am to 09:15 am " << endl;
                        cout << "Enter 2 for: 11:30 am to 01:15 pm " << endl;
                        cout << "Enter 3 for: 13:45 pm to 15:30 pm " << endl;
                        cout << "Enter 4 for: 16:15 pm to 18:00 pm " << endl;
                        cout << "Enter 5 for: 19:30 pm to 21:15 pm " << endl;
                        cin >> select;
if (select == 1) {
                        cout << "You have selected: 07:30 am to 09:15 am: Time" << endl;
                        cout << "18 seats available for this flight:" << endl;
                        cout << "Enter your number of seats: Please " << endl;
                            cin >> seats;
                            if (seats <= 18) {
                            cout << "Congratulations: You have reserved: " << seats << " Seats" << endl;
                            cout << "Move on to confirmation section: Please" << endl;
                            } else
                                cout << "Not enough available seats. SORRY" << endl;
                              }
  else if (select == 2) {
                               cout << "You have selected: 11:30 am to 01:15 pm: Time" << endl;
                               cout << "22 seats available for this flight:" << endl;
                               cout << "Enter your number of seats: Please " << endl;
                               cin >> seats;
                               if (seats <= 22) {
                               cout << "Congratulations: You have reserved: " << seats << " Seats" << endl;
                               cout << "Move on to confirmation section: Please" << endl;
                            }
                       else
                             cout << "Not enough available seats. SORRY" << endl;
                            }
                             else if
                             (select == 3) {
                              cout << "You have selected: 13:45 pm to 15:30 pm: Time" << endl;
                              cout << "35 seats available for this flight:" << endl;
                              cout << "Enter your number of seats: Please " << endl;
                              cin >> seats;
                              if (seats <= 35) {
                              cout << "Congratulations: You have reserved: " << seats << " Seats" << endl;
                              cout << "Move on to confirmation section: Please" << endl;
                              }
                        else
                              cout << "Not enough available seats. SORRY" << endl;
                             }
                             else if (select == 4) {
                             cout << "You have selected: 16:15 pm to 18:00 pm: Time" << endl;
                             cout << "12 seats available for this flight:" << endl;
                             cout << "Enter your number of seats: Please " << endl;
                                  cin >> seats;
                                  if (seats <= 12) {
                                  cout << "Congratulations: You have reserved: " << seats << " Seats" << endl;
                                  cout << "Move on to confirmation section: Please" << endl;
                              }
                          else
                              cout << "Not enough available seats. SORRY" << endl;
  }
             
           else if (select == 5) {
                             cout << "You have selected: 19:30 pm to 21:15 pm: Time" << endl;
                             cout << "28 seats available for this flight:" << endl;
                             cout << "Enter your number of seats: Please " << endl;
                             cin >> seats;
                             if (seats <= 28) {
                             cout << "Congratulations: You have reserved: " << seats << " Seats" << endl;
                             cout << "Move on to confirmation section: Please" << endl;
                               }  
                                else
                              cout << "Not enough available seats. SORRY" << endl;
             
       }
       else
        cout<<" Wrong Selection!! "<<endl;
    break;            
       case 'c':
       cout<<" Dear customer their are 5 times for Karachi to Lahore  :"<<endl;
  cout<<" :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
  cout<<" Enter 1 for : 7:00 am to 8:45 am "<<endl;
  cout<<" Enter 2 for : 10:00 am to 11:45 am "<<endl;
  cout<<" Enter 3 for : 13:00 pm to 14:45 pm "<<endl;
  cout<<" Enter 4 for : 15:00 pm to 16:45 pm "<<endl;
  cout<<" Enter 5 for : 20:00 pm to 21:45 pm "<<endl;
  cout<<" Enter your choice : PLZ ";
  cin>>select;
  if (select==1){
  cout<<" You have selected :7:00 am to 8:45 am : Time "<<endl;
  cout<<" 74 seats Available for this flight :"<<endl;
  cout<<" Enter your number of seats : PLZ "<<endl;
  cin>>seats;
  if (seats<=74){
  cout<<" Congratulation : You have reserved :"<<seats<<" Seats "<<endl;
  cout<<" Move on to confirmation section : plz "<<endl;
  }
  else
  cout<<" Not available enough seats SORRY "<<endl;
  }
  else if (select==2){
  cout<<" You have selected :10:00 am to 11:45 am : Time "<<endl;
  cout<<" 113 seats Available for this flight :"<<endl;
  cout<<" Enter your number of seats : PLZ "<<endl;
  cin>>seats;
  if (seats<=113){
  cout<<" Congratulation : You have reserved :"<<seats<<" Seats "<<endl;
  cout<<" Move on to confirmation section : plz "<<endl;
  }
  else
  cout<<" Not available enough seats SORRY "<<endl;
  }
  else if (select==3){
  cout<<" You have selected :13:00 pm to 14:45 pm : Time "<<endl;
  cout<<" 46 seats Available for this flight :"<<endl;
  cout<<" Enter your number of seats : PLZ "<<endl;
  cin>>seats;
  if (seats<=46){
  cout<<" Congratulation : You have reserved :"<<seats<<" Seats "<<endl;
  cout<<" Move on to confirmation section : plz "<<endl;
  }
  else
  cout<<" Not available enough seats SORRY "<<endl;
  }
  else if (select==4){
  cout<<" You have selected :15:00 pm to 16:45 pm : Time "<<endl;
  cout<<" 55 seats Available for this flight :"<<endl;
  cout<<" Enter your number of seats : PLZ "<<endl;
  cin>>seats;
  if (seats<=55){
  cout<<" Congratulation : You have reserved :"<<seats<<" Seats "<<endl;
  cout<<" Move on to confirmation section : plz "<<endl;
  }
  else
  cout<<" Not available enough seats SORRY "<<endl;
  }
  else if (select==5){
  cout<<" You have selected :20:00 pm to 21:45 pm : Time "<<endl;
  cout<<" 43 seats Available for this flight :"<<endl;
  cout<<" Enter your number of seats : PLZ "<<endl;
  cin>>seats;
  if (seats<=43){
  cout<<" Congratulation : You have reserved :"<<seats<<" Seats "<<endl;
  cout<<" Move on to confirmation section : plz "<<endl;
  }
  else
  cout<<" Not available enough seats SORRY "<<endl;
  }
  else
  cout<<" Wrong Selection!! "<<endl;
  break;
  case 'd':
  cout<<" Dear customer their are 5 times for Lahore to karachi  :"<<endl;
  cout<<" :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
  cout << "Enter 1 for: 07:30 am to 09:15 am " << endl;
                        cout << "Enter 2 for: 10:30 am to 12:15 pm " << endl;
                        cout << "Enter 3 for: 13:45 pm to 15:30 pm " << endl;
                        cout << "Enter 4 for: 15:00 pm to 16:45 pm " << endl;
                        cout << "Enter 5 for: 19:00 pm to 20:45 pm " << endl;

  cout<<" Enter your choice : PLZ ";
  cin>>select;
  if (select==1){
  cout<<" You have selected :07:30 am to 09:15 am : Time "<<endl;
  cout<<" 83 seats Available for this flight :"<<endl;
  cout<<" Enter your number of seats : PLZ "<<endl;
  cin>>seats;
  if (seats<=83){
  cout<<" Congratulation : You have reserved :"<<seats<<" Seats "<<endl;
  cout<<" Move on to confirmation section : plz "<<endl;
  }
  else
  cout<<" Not available enough seats SORRY "<<endl;
  }
   else if (select==2){
  cout<<" You have selected :10:30 am to 12:15 pm : Time "<<endl;
  cout<<" 190 seats Available for this flight :"<<endl;
  cout<<" Enter your number of seats : PLZ "<<endl;
  cin>>seats;
  if (seats<=190){
  cout<<" Congratulation : You have reserved :"<<seats<<" Seats "<<endl;
  cout<<" Move on to confirmation section : plz "<<endl;
  }
  else
  cout<<" Not available enough seats SORRY "<<endl;
  }
   else if (select==3){
  cout<<" You have selected :13:45 to 15:45 pm : Time "<<endl;
  cout<<" 19 seats Available for this flight :"<<endl;
  cout<<" Enter your number of seats : PLZ "<<endl;
  cin>>seats;
  if (seats<=19){
  cout<<" Congratulation : You have reserved :"<<seats<<" Seats "<<endl;
  cout<<" Move on to confirmation section : plz "<<endl;
  }
  else
  cout<<" Not available enough seats SORRY "<<endl;
  }
   else if (select==4){
  cout<<" You have selected :15:00 pm to 16:45 pm : Time "<<endl;
  cout<<" 37 seats Available for this flight :"<<endl;
  cout<<" Enter your number of seats : PLZ "<<endl;
  cin>>seats;
  if (seats<=37){
  cout<<" Congratulation : You have reserved :"<<seats<<" Seats "<<endl;
  cout<<" Move on to confirmation section : plz "<<endl;
  }
  else
  cout<<" Not available enough seats SORRY "<<endl;
  }
   else if (select==5){
  cout<<" You have selected :19:00 to 20:45 pm : Time "<<endl;
  cout<<" 47 seats Available for this flight :"<<endl;
  cout<<" Enter your number of seats : PLZ "<<endl;
  cin>>seats;
  if (seats<=47){
  cout<<" Congratulation : You have reserved :"<<seats<<" Seats "<<endl;
  cout<<" Move on to confirmation section : plz "<<endl;
  }
  else
  cout<<" Not available enough seats SORRY "<<endl;
  }
  else
      cout<<" Wrong Selection!! "<<endl;
      break;
     
     
      //done till case d start from e,,, 18/05/24
  case 'e':
cout<<" Dear customer their are 7 times for dubai to karachi  :"<<endl;
  cout<<" :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
  cout << "Enter 1 for: 07:30 am to 09:15 am " << endl;
                        cout << "Enter 2 for: 10:45 am to 12:25 pm " << endl;
                        cout << "Enter 3 for: 13:45 pm to 15:30 pm " << endl;
                        cout << "Enter 4 for: 15:00 pm to 16:45 pm " << endl;
                        cout << "Enter 5 for: 19:00 pm to 20:45 pm " << endl;
cout << "Enter 6 for: 22:00 pm to 23:45 pm " << endl;
cout << "Enter 7 for: 01:00 am to 02:45 am " << endl;  
   cout<<" Enter your choice : PLZ ";
  cin>>select;
  if (select==1){
  cout<<" You have selected :07:30 am to 09:15 am : Time "<<endl;
  cout<<" 345 seats Available for this flight :"<<endl;
  cout<<" Enter your number of seats : PLZ "<<endl;
  cin>>seats;
  if (seats<=345){
  cout<<" Congratulation : You have reserved :"<<seats<<" Seats "<<endl;
  cout<<" Move on to confirmation section : plz "<<endl;
  }
  else
  cout<<" Not available enough seats SORRY "<<endl;
  }
  else if (select==2){
  cout<<" You have selected 10:45 am to 12:45 pm : Time "<<endl;
  cout<<" 257 seats Available for this flight :"<<endl;
  cout<<" Enter your number of seats : PLZ "<<endl;
  cin>>seats;
  if (seats<=257){
  cout<<" Congratulation : You have reserved :"<<seats<<" Seats "<<endl;
  cout<<" Move on to confirmation section : plz "<<endl;
  }
  else
  cout<<" Not available enough seats SORRY "<<endl;
  }
  else if (select==3){
 
  cout<<" You have selected 13:45 am to 15:30 pm : Time "<<endl;
  cout<<" 76 seats Available for this flight :"<<endl;
  cout<<" Enter your number of seats : PLZ "<<endl;
  cin>>seats;
  if (seats<=76){
  cout<<" Congratulation : You have reserved :"<<seats<<" Seats "<<endl;
  cout<<" Move on to confirmation section : plz "<<endl;
  }
  else
  cout<<" Not available enough seats SORRY "<<endl;
 
  }
  else if (select==4){
 
  cout<<" You have selected 15:00 pm to 16:45 pm : Time "<<endl;
  cout<<" 321 seats Available for this flight :"<<endl;
  cout<<" Enter your number of seats : PLZ "<<endl;
  cin>>seats;
  if (seats<=321){
  cout<<" Congratulation : You have reserved :"<<seats<<" Seats "<<endl;
  cout<<" Move on to confirmation section : plz "<<endl;
  }
  else
  cout<<" Not available enough seats SORRY "<<endl;
               }
               else if (select==5){
 
  cout<<" You have selected 19:00 pm to 20:45 pm : Time "<<endl;
  cout<<" only 3 seats Available for this flight :"<<endl;
  cout<<" Enter your number of seats : PLZ "<<endl;
  cin>>seats;
  if (seats<=3){
  cout<<" Congratulation : You have reserved :"<<seats<<" Seats "<<endl;
  cout<<" Move on to confirmation section : plz "<<endl;
  }
  else
  cout<<" Not available enough seats SORRY "<<endl;
  }
  else if (select==6){
 
  cout<<" You have selected 22:00 pm to 23:45 pm : Time "<<endl;
  cout<<" 76 seats Available for this flight :"<<endl;
  cout<<" Enter your number of seats : PLZ "<<endl;
  cin>>seats;
  if (seats<=76){
  cout<<" Congratulation : You have reserved :"<<seats<<" Seats "<<endl;
  cout<<" Move on to confirmation section : plz "<<endl;
  }
  else
  cout<<" Not available enough seats SORRY "<<endl;
  }
  else if (select==7){
 
  cout<<" You have selected 01:00 am to 02:45 am : Time "<<endl;
  cout<<" 21 seats Available for this flight :"<<endl;
  cout<<" Enter your number of seats : PLZ "<<endl;
  cin>>seats;
  if (seats<=21){
  cout<<" Congratulation : You have reserved :"<<seats<<" Seats "<<endl;
  cout<<" Move on to confirmation section : plz "<<endl;
  }
  else
  cout<<" Not available enough seats SORRY "<<endl;
  }
  else
  cout<<" Wrong selection !!"<<endl;
  break;
 


            case 'f':
        cout << "Dear customer, there are 7 times for Dubai to Karachi:" << endl;
        cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
        cout << "Enter 1 for: 09:30 am to 11:15 am " << endl;
        cout << "Enter 2 for: 10:45 am to 12:25 pm " << endl;
        cout << "Enter 3 for: 13:45 pm to 15:30 pm " << endl;
        cout << "Enter 4 for: 16:00 pm to 17:45 pm " << endl;
        cout << "Enter 5 for: 19:00 pm to 20:45 pm " << endl;
        cout << "Enter 6 for: 22:00 pm to 23:45 pm " << endl;
        cout << "Enter 7 for: 01:00 am to 02:45 am " << endl;  
        cout << "Enter your choice : PLZ ";
        cin >> select;

        if (select == 1) {
            cout << "You have selected :09:30 am to 11:15 am : Time" << endl;
            cout << "59 seats Available for this flight:" << endl;
            cout << "Enter your number of seats : PLZ ";
            cin >> seats;
            if (seats <= 59) {
                cout << "Congratulation : You have reserved :" << seats << " Seats" << endl;
                cout << "Move on to confirmation section : plz" << endl;
            } else
{
                cout << "Not available enough seats SORRY" << endl;
            }
        }
else if (select == 2) {
            cout << "You have selected 10:45 am to 12:25 pm : Time" << endl;
            cout << "87 seats Available for this flight:" << endl;
            cout << "Enter your number of seats : PLZ ";
            cin >> seats;
            if (seats <= 87) {
                cout << "Congratulation : You have reserved :" << seats << " Seats" << endl;
                cout << "Move on to confirmation section : plz" << endl;
            } else
{
                cout << "Not available enough seats SORRY" << endl;
            }
        }
else if (select == 3) {
            cout << "You have selected 13:45 pm to 15:30 pm : Time" << endl;
            cout << "105 seats Available for this flight:" << endl;
            cout << "Enter your number of seats : PLZ ";
            cin >> seats;
            if (seats <= 105) {
                cout << "Congratulation : You have reserved :" << seats << " Seats" << endl;
                cout << "Move on to confirmation section : plz" << endl;
            } else {
                cout << "Not available enough seats SORRY" << endl;
            }
        }
else if (select == 4) {
            cout << "You have selected 16:00 pm to 17:45 pm : Time" << endl;
            cout << "212 seats Available for this flight:" << endl;
            cout << "Enter your number of seats : PLZ ";
            cin >> seats;
            if (seats <= 212) {
                cout << "Congratulation : You have reserved :" << seats << " Seats" << endl;
                cout << "Move on to confirmation section : plz "<<endl;
                } else {
            cout << "Not available enough seats SORRY" << endl;
        }
    }
else if (select == 5) {
        cout << "You have selected 19:00 pm to 20:45 pm : Time" << endl;
        cout << "Only 7 seats Available for this flight:" << endl;
        cout << "Enter your number of seats : PLZ ";
        cin >> seats;
        if (seats <= 7) {
            cout << "Congratulation : You have reserved :" << seats << " Seats" << endl;
            cout << "Move on to confirmation section : plz" << endl;
        } else {
            cout << "Not available enough seats SORRY" << endl;
        }
    }
else if (select == 6) {
        cout << "You have selected 22:00 pm to 23:45 pm : Time" << endl;
        cout << "30 seats Available for this flight:" << endl;
        cout << "Enter your number of seats : PLZ ";
        cin >> seats;
        if (seats <= 30) {
            cout << "Congratulation : You have reserved :" << seats << " Seats" << endl;
            cout << "Move on to confirmation section : plz" << endl;
        } else {
            cout << "Not available enough seats SORRY" << endl;
        }
    }
else if (select == 7) {
        cout << "You have selected 01:00 am to 02:45 am : Time" << endl;
        cout << "91 seats Available for this flight:" << endl;
        cout << "Enter your number of seats : PLZ ";
        cin >> seats;
        if (seats <= 91) {
            cout << "Congratulation : You have reserved :" << seats << " Seats" << endl;
            cout << "Move on to confirmation section : plz" << endl;
        } else {
            cout << "Not available enough seats SORRY" << endl;
        }
       
    }
else
{
        cout << "Invalid choice" << endl;
       
    }
            break;
                    case 'g':
               cout<<" Dear customer their are 3 times for saudia arabia to lahore today :"<<endl;
  cout<<" :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
  cout<<" Enter 1 for : 6:00 am to 7:45 am "<<endl;
  cout<<" Enter 2 for : 12:00 pm to 13:45 pm "<<endl;
  cout<<" Enter 3 for : 21:00 pm to 22:45 pm "<<endl;
                   cin>>select;
                   if (select==1){
                    cout<<" You have selected the 6:00 am to 7:45 am : Time "<<endl;
                    cout<<" 323 Available for this time \n PLz enter your desired number of seats "<<endl;
                    cin>>seats;
                    if(seats<=323){
                    cout<<" Congratulation you have reserved "<<seats<<" seats "<<endl;
                    cout<<" PLZ move on to confirmation section "<<endl;
}
else
cout<<" Not enough seats available :SORRY"<<endl;
}
else if (select==2){
                    cout<<" You have selected the 12:00 pm to 13:45 pm : Time "<<endl;
                    cout<<" 238 Available for this time \n PLz enter your desired number of seats "<<endl;
                    cin>>seats;
                    if(seats<=238){
                    cout<<" Congratulation you have reserved "<<seats<<" seats "<<endl;
                    cout<<" PLZ move on to confirmation section "<<endl;
}
else
cout<<" Not enough seats available :SORRY"<<endl;
}
else if (select==3){
                    cout<<" You have selected the 21:00 pm to 22:45 pm : Time "<<endl;
                    cout<<" 420 Available for this time \n PLz enter your desired number of seats "<<endl;
                    cin>>seats;
                    if(seats<=420){
                    cout<<" Congratulation you have reserved "<<seats<<" seats "<<endl;
                    cout<<" PLZ move on to confirmation section "<<endl;
}
else
cout<<" Not enough seats available :SORRY"<<endl;
}
else
cout<<" INVALID SELECTION !!"<<endl;
break;
case 'h':
cout<<" Dear customer their are 3 times for lahore to saudi arabia today :"<<endl;
  cout<<" :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
  cout<<" Enter 1 for : 10:00 am to 12:45 pm "<<endl;
  cout<<" Enter 2 for : 12:00 pm to 14:45 pm "<<endl;
  cout<<" Enter 3 for : 21:00 pm to 22:45 pm "<<endl;
                   cin>>select;
                   if (select==1){
                    cout<<" You have selected the 10:00 am to 12:45 pm : Time "<<endl;
                    cout<<" 96 Available for this time \n PLz enter your desired number of seats "<<endl;
                    cin>>seats;
                    if(seats<=96){
                    cout<<" Congratulation you have reserved "<<seats<<" seats "<<endl;
                    cout<<" PLZ move on to confirmation section "<<endl;
}
else
cout<<" Not enough seats available :SORRY"<<endl;
}
else if (select==2){
                    cout<<" You have selected the 12:00 pm to 14:45 pm : Time "<<endl;
                    cout<<" 143 Available for this time \n PLz enter your desired number of seats "<<endl;
                    cin>>seats;
                    if(seats<=143){
                    cout<<" Congratulation you have reserved "<<seats<<" seats "<<endl;
                    cout<<" PLZ move on to confirmation section "<<endl;
}
else
cout<<" Not enough seats available :SORRY"<<endl;
}
else if (select==3){
                    cout<<" You have selected the 21:00 pm to 22:45 pm : Time "<<endl;
                    cout<<" 101 Available for this time \n PLz enter your desired number of seats "<<endl;
                    cin>>seats;
                    if(seats<=101){
                    cout<<" Congratulation you have reserved "<<seats<<" seats "<<endl;
                    cout<<" PLZ move on to confirmation section "<<endl;
}
else
cout<<" Not enough seats available :SORRY"<<endl;
}
else
cout<<" INVALID SELECTION !!"<<endl;
break;
case 'i':
cout<<" Dear customer their are 3 times for lahore to china Today "<<endl;
cout<<" :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
  cout<<" Enter 1 for : 10:00 am to 12:45 pm "<<endl;
  cout<<" Enter 2 for : 12:00 pm to 14:45 pm "<<endl;
  cout<<" Enter 3 for : 21:00 pm to 22:45 pm "<<endl;
                   cin>>select;
                   if (select==1){
                    cout<<" You have selected the 10:00 am to 12:45 pm : Time "<<endl;
                    cout<<" 382 Available for this time \n PLz enter your desired number of seats "<<endl;
                    cin>>seats;
                    if(seats<=382){
                    cout<<" Congratulation you have reserved "<<seats<<" seats "<<endl;
                    cout<<" PLZ move on to confirmation section "<<endl;
}
else
cout<<" Not enough seats available :SORRY"<<endl;
}
else if (select==2){
                    cout<<" You have selected the 12:00 pm to 14:45 pm : Time "<<endl;
                    cout<<" 463 Available for this time \n PLz enter your desired number of seats "<<endl;
                    cin>>seats;
                    if(seats<=463){
                    cout<<" Congratulation you have reserved "<<seats<<" seats "<<endl;
                    cout<<" PLZ move on to confirmation section "<<endl;
}
else
cout<<" Not enough seats available :SORRY"<<endl;
}
else if (select==3){
                    cout<<" You have selected the 21:00 pm to 22:45 pm : Time "<<endl;
                    cout<<" 19 Available for this time \n PLz enter your desired number of seats "<<endl;
                    cin>>seats;
                    if(seats<=19){
                    cout<<" Congratulation you have reserved "<<seats<<" seats "<<endl;
                    cout<<" PLZ move on to confirmation section "<<endl;
}
else
cout<<" Not enough seats available :SORRY"<<endl;
}
else
cout<<" INVALID SELECTION !!"<<endl;
break;

case 'j':
cout<<" Their are 2 flight from china to lahore today "<<endl;
cout<<" :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
  cout<<" Enter 1 for : 10:00 am to 12:45 pm "<<endl;
  cout<<" Enter 2 for : 12:00 pm to 14:45 pm "<<endl;
 
                   cin>>select;
                   if (select==1){
                    cout<<" You have selected the 10:00 am to 12:45 pm : Time "<<endl;
                    cout<<" 96 Available for this time \n PLz enter your desired number of seats "<<endl;
                    cin>>seats;
                    if(seats<=96){
                    cout<<" Congratulation you have reserved "<<seats<<" seats "<<endl;
                    cout<<" PLZ move on to confirmation section "<<endl;
}
else
cout<<" Not enough seats available :SORRY"<<endl;
}
else if (select==2){
                    cout<<" You have selected the 12:00 pm to 14:45 pm : Time "<<endl;
                    cout<<" 143 Available for this time \n PLz enter your desired number of seats "<<endl;
                    cin>>seats;
                    if(seats<=143){
                    cout<<" Congratulation you have reserved "<<seats<<" seats "<<endl;
                    cout<<" PLZ move on to confirmation section "<<endl;
}
else
cout<<" Not enough seats available :SORRY"<<endl;
}

else
cout<<" INVALID SELECTION !!"<<endl;
break;
    }
}
 
   
   
   };
   class passenger{
    private:
    int age;
    string name1;
    string name2;
    int long id;
    int long long passport_no;
    public:
    void get_detail(){
    cout<<" Dear customer: PLZ enter your detail "<<endl;
    cout<<" Your age "<<endl;
    cin>>age;
    cout<<" Enter your first name "<<endl;
    cin>>name1;
    cout<<" Enter your last name "<<endl;
    cin>>name2;
    cout<<" Enter your id PLZ "<<endl;
    cin>>id;
    cout<<" Your passport no PLZ "<<endl;
    cin>>passport_no;
   
   
  }
  void show_detail(){
  cout<<" Your info is given as :"<<endl;
  cout<<" Age :"<<age<<endl;
  cout<<" Full name is  :"<<name1<<" "<<name2<<endl;
  cout<<" Id is :"<<id<<endl;
  cout<<" Passport no is :"<<passport_no<<endl;
  }
   
   };
   
   
   class pricing {
   
    private :
   
    int digitCount = 0;
    int cvv_count=0;
    int pmtl,pltm,pktl,pltk,pdtk,pktd,pstl,plts,pctl,pltc;
    int long long card_number;
    int cvv;
    int MM,DD,YY;
   
    public:
    
    pricing(){
    pltm=28000;
    pmtl=28000;
    pktl=33000;
    pltk=33000;
    pdtk=86000;
    pktd=86000;
    pstl=155000;
    plts=155000;
    pctl=425000;
    pltc=425000;
}
void show_pricing(){
cout<<" Per head ticket of different destinations is listed below :"<<endl;
cout<<" From Lahore to Multan 28000 PKR :"
<<" \n  From Multan to Lahore 28000 PKR :"
<<" \n  Between Karachi and Lahore 33000 PKR :"
<<" \n  Between Karachi and Dubai 86000 PKR  :"
<<" \n  Between Saudia and Lahore 155000 PKR :"
<<" \n  Between China and Lahore 425000 PKR  :"<<endl;
}
void get_card_detail() {
        string card_number;
        string cvv;
        string expiry_date;
        int digitCount = 0;
        int cvv_count = 0;
        int MM, DD, YY;

        cout << "Enter 16 digit card number: ";
        cin >> card_number;
        
        if (card_number.length() != 16 ) {
            cout << "Wrong card entry.\n";
            return;
        }

        cout << "Enter the 3 digit CVV number of your card: ";
        cin >> cvv;

        if (cvv.length() != 3 ) {
            cout << "Wrong CVV entry.\n";
            return;
        }

        cout << "Enter the card expiry date (MM/DD/YY): ";
        cin >> MM >> DD >> YY;

        if (YY < 25 || YY == 25  ) { 
            cout << "Sorry, your card is expired.\n";
            return;
        }

        cout << "Congratulations, your ticket has been confirmed.\n";
        cout << "You must check the rules by pressing 6 and then 7 in the Main menu.\n";
        cout << "THANKS.\n";
    }
   };
   class Rules  {
    public:
    void BookRules() {
        cout << "Flight Booking Rules and Regulations:" << endl;
        cout << "1. All bookings must be made at least 24 hours before the flight departure time." << endl;
        cout << "2. Passengers must provide a valid government-issued ID at the time of booking." << endl;
        cout << "3. Any changes to the booking must be made at least 12 hours before the scheduled departure." << endl;
        cout << "4. Cancellations made within 24 hours of booking are eligible for a full refund." << endl;
        cout << "5. No-show passengers will not be eligible for a refund." << endl;
        cout << endl;
    }

    void PayRules() {
        cout << "Payment Rules and Regulations:" << endl;
        cout << "1. Payment must be made in full at the time of booking." << endl;
        cout << "2. Accepted payment methods include credit card, debit card, and PayPal." << endl;
        cout << "3. Ensure that the payment method has sufficient funds to cover the cost of the booking." << endl;
        cout << "4. Any payment disputes must be reported within 30 days of the transaction." << endl;
        cout << "5. All payments are processed through a secure payment gateway to ensure customer data protection." << endl;
        cout << endl;
    }
};

int main() {
    flight a;
    passenger b;
    pricing c;
    Rules d;
    int choice;
    int currentStep = 1; 

    while (true) {
        cout << "Menu:" << endl;
        if (currentStep >= 1) cout << "1. Check availability / make reservation" << endl;
        if (currentStep >= 2) cout << "2. Enter Your Detail For Confirmation" << endl;
        if (currentStep >= 3) cout << "3. Show The detail of passenger" << endl;
        if (currentStep >= 4) cout << "4. Show pricing" << endl;
        if (currentStep >= 5) cout << "5. Enter card detail" << endl;
        if (currentStep >= 6) cout << "6. See Booking rules here" << endl;
        if (currentStep >= 7) cout << "7. See payment rules here" << endl;
        cout << "8. Exit the program PLZ!" << endl;
        cout << "#######################################" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (currentStep == 1) {
                    a.avail();
                    currentStep = 2; 
                } else {
                    cout << "You must complete the previous steps first.\n";
                }
                break;
            case 2:
                if (currentStep == 2) {
                    b.get_detail();
                    currentStep = 3;
                } else {
                    cout << "You must complete the previous steps first.\n";
                }
                break;
            case 3:
                if (currentStep == 3) {
                    b.show_detail();
                    currentStep = 4; 
                } else {
                    cout << "You must complete the previous steps first.\n";
                }
                break;
            case 4:
                if (currentStep == 4) {
                    c.show_pricing();
                    currentStep = 5; 
                } else {
                    cout << "You must complete the previous steps first.\n";
                }
                break;
            case 5:
                if (currentStep == 5) {
                    c.get_card_detail();
                    currentStep = 6; 
                } else {
                    cout << "You must complete the previous steps first.\n";
                }
                break;
            case 6:
                if (currentStep == 6) {
                    d.BookRules();
                    currentStep = 7; 
                } else {
                    cout << "You must complete the previous steps first.\n";
                }
                break;
            case 7:
                if (currentStep == 7) {
                    d.PayRules();
                    currentStep = 1; 
                } else {
                    cout << "You must complete the previous steps first.\n";
                }
                break;
            case 8:
                cout << "THANK YOU for choosing PIA!  Exiting the program. Thank you!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

