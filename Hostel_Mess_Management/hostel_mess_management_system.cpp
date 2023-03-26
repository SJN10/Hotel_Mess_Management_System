#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Boys_Girls_Hostel
{
    private:
    unordered_map<string, int> num= {{"BH1", 500}, {"BH2", 700}, {"BH3",900}, {"BH4", 400}, {"GH1", 300}, {"GH2", 300}};
    public:
    void  Total_Hostel(){
        cout<<"Number of Hostels"<<endl;
        int Hos;
        cout << "1.Girls Hostel              2.Boys Hostel "<<endl;
        cout << ">> ";
        cin >> Hos;
        if(Hos==1){
            cout<<"Number of Girls Hostel :: 2"<<endl<<endl;
        }
        if(Hos==2){
            cout<<"Number of Boys Hostel :: 4"<<endl<<endl;
        }
        int choose;
        cout<<"1. Hostel and Students"<<endl;
        cout<<"2. Food Timing"<<endl;
        cout << ">> ";
        cin>> choose;
        switch(choose){
            case 1:
            Number_of_Student();
            break;
            case 2:
            Food_Timing();
            break;
        }
    }
    void Number_of_Student(){
        for(auto i : num){
            cout<< i.first <<" Contains " << i.second << " Students"<<endl;
        }
        cout<<endl;
        cout<<"1. Vegetarian Students"<<endl;
        cout<<"2. Non-Vegetarian Students"<<endl;
        cout << ">> ";
        string k;
        cin>>k;
        if(k=="1"){
            cout<<"Veg-Students :: 500"<<endl<<endl;
        }
        if(k=="2"){
            cout<<"NonVeg-Students :: 2500"<<endl<<endl;
        }
    }
    void Food_Timing(){
        unordered_map<string,string> timer={{"Breakfast ","7:30-9:00 AM"},{"Lunch ","12:00-1:30 PM"},{"Dinner ","8:00-9:30 PM"}};
        for(auto j: timer){
            cout<<j.first<<j.second<<endl<<endl;
        }
    }
};
class Mess_Management_System : Boys_Girls_Hostel
{
public:
    unordered_map<string, string> wardens = {{"BH1", "Subh"}, {"BH2", "Felix"}, {"BH3", "Lution"}, {"BH4", "Baidik"}, {"GH1", "Soumya"}, {"GH2", "Dub"}};
    unordered_map<string, int> war_contact = {{"Subh", 123}, {"Felix", 012}, {"Lution", 456}, {"Baidik", 675}, {"Soumya", 568}, {"Dub", 900}};
    unordered_map<string, string> supervisor = {{"BH1", "Subh1"}, {"BH2", "Felix1"}, {"BH3", "Lution1"}, {"BH4", "Baidik1"}, {"GH1", "Soumya1"}, {"GH2", "Dub1"}};
    unordered_map<string, int> sup_contact = {{"Subh1", 234}, {"Felix1", 134}, {"Lution1", 467}, {"Baidik1", 674}, {"Soumya1", 564}, {"Dub1", 280}};
    unordered_map<string, string> prefect = {{"BH1", "Subh2"}, {"BH2", "Felix2"}, {"BH3", "Lution2"}, {"BH4", "Baidik2"}, {"GH1", "Soumya2"}, {"GH2", "Dub2"}};
    unordered_map<string, int> pre_contact = {{"Subh2", 124}, {"Felix2", 224}, {"Lution2", 447}, {"Baidik2", 672}, {"Soumya2", 584}, {"Dub2", 770}};
    void hostel_name()
    {
        cout << "Enter The Hostel Name : ";
        string hos_name;
        cin >> hos_name;
        warden_name(hos_name);
        supervisor_name(hos_name);
        prefect_name(hos_name);
    }
    void warden_name(string hos_name)
    {
        cout << hos_name << "'s"<< "warden : " << wardens[hos_name] << endl;
        cout << "Contact number :" << war_contact[wardens[hos_name]] << endl<<endl;
    }
    void supervisor_name(string hos_name)
    {
        cout << hos_name << "'s"<< "Supervisor : " << supervisor[hos_name] << endl;
        cout << "Contact number :" << sup_contact[supervisor[hos_name]]<<endl<<endl;
    }
    void prefect_name(string hos_name)
    {
        cout << hos_name << "'s"<< "prefect : " << prefect[hos_name] << endl;
        cout << "Contact number :" << pre_contact[wardens[hos_name]] << endl<<endl;
    }
    void num_worker(){
        unordered_map<string, int> worker = {{"BH1", 12}, {"BH2", 10}, {"BH3", 15}, {"BH4", 16}, {"GH1",18 }, {"GH2", 16}};
        for(auto i : worker){
            cout<< i.first << "-> number of workers in mess ->"<< i.second<<endl;
        }
        cout<<endl;
        cout<<"Want to visit Hostel Section? (Y/N) "<<endl;
        string decide;
        cout << ">> ";
        cin>>decide;
        if(decide=="Y"){
            Total_Hostel();
        }
    }

};
class Dean_office : Mess_Management_System
{
public:
    void others_Details()
    {
        string name;
        string gender;
        string place;
        cout << "Enter The First Letter Of the name in UpperCase::";
        cin >> name;
        cout << "Gender:: ";
        cin >> gender;
        cout << "Your Country:: ";
        cin >> place;
        alloted_hostel(name, gender, place);
    }
    void alloted_hostel(string name, string gender, string place)
    {
        if (place == "India" && gender == "Male")
        {
            if ((int)("A") <= int(name[0]) <= (int)("H"))
            {
                cout << "Your Hostel No. is BH1"<<endl;
            }
            else if ((int)("I") <= int(name[0]) <= (int)("Q"))
            {
                cout << "Your Hostel No. is BH2"<<endl;
            }
            else if ((int)("R") <= int(name[0]) <= (int)("Z"))
            {
                cout << "Your Hostel No. is BH3"<<endl;
            }
        }
        else if (place == "India" && gender == "Female")
        {
            cout << "Your Hostel No. is GH1"<<endl;
        }
        else if (place != "India" && gender == "Male")
        {
            cout << "Your Hostel No. is BH4"<<endl;
        }
        else if (place != "India" && gender == "Female")
        {
            cout << "Your Hostel No. is GH2"<<endl;
        }
    }
};
class Registration : Dean_office
{
public:
    string name;
    int sch_id;
    string place;
    string gender;
    void info()
    {
        cout << "Enter Your Name :: ";
        cin >> name;
        cout << "Your Scholar Id::";
        cin >> sch_id;
        cout << "Your Country :: ";
        cin >> place;
        cout << "Enter Your Gender :: ";
        cin >> gender;
        cout << endl;
        cout << "Well Done! Your Resigtration is completed" << endl<<endl;
    }
    void print_info()
    {
        cout << "Your name : " << name << endl;
        cout << "Your Scholar ID : " << sch_id << endl;
        cout << "Your Country : " << place << endl;
        cout << "Your Gender : " << gender << endl;
        alloted_hostel(name, gender, place);
    }
};



class Bills_Refund : Mess_Management_System
{
    public:
    string name;
    int paid;
    void your_amount(){
        int req_amount=10000;
        cout<<"Required Amount : "<< req_amount<<endl;
        cout<<"Enter Your Name : ";
        cin >> name;
        cout<<"Amount You Paid : ";
        cin >> paid;
        if(paid==req_amount){
            cout<<"Required Money Paid"<<endl<<endl;
        }
        if(paid<req_amount){
            cout<<"You Need To Pay "<< req_amount-paid<<" more"<<endl<<endl;
        }
        if(paid>req_amount){
            cout<<"Your Refund of "<< paid-req_amount<<" will be send to your bank account within 10 days"<<endl<<endl;
        }
    }   
};
class Mess_menu : Mess_Management_System
{
    public:
    void Hostel_Menu(){
        cout<<"Monday"<<"::"<< " "<<"Breakfast:- Burger && Eggs/milk"<<" "<<"Lunch:- Pulaw"<<" "<<"Dinner:-Chicken/Paneer"<<endl<<endl;
        cout<<"Tuesday"<<"::"<< " "<<"Breakfast:-Puri-Sabji "<<" "<<"Lunch:- Rice-dal"<<" "<<"Dinner:-Chicken/Paneer"<<endl<<endl;
        cout<<"Wednesday"<<"::"<< " "<<"Breakfast:- Bhature"<<" "<<"Lunch:- Rice-dal-curd"<<" "<<"Dinner:-Chicken/Paneer"<<endl<<endl;
        cout<<"Thrusday"<<"::"<< " "<<"Breakfast:- Dosa"<<" "<<"Lunch:- Rice-dal"<<" "<<"Dinner:-Chicken/Paneer"<<endl<<endl;
        cout<<"Friday"<<"::"<< " "<<"Breakfast:- Bread"<<" "<<"Lunch:- Rice-chhole"<<" "<<"Dinner:-Chicken/Paneer"<<endl<<endl;
        cout<<"Saturday"<<"::"<< " "<<"Breakfast:- Bread"<<" "<<"Lunch:- kitchari"<<" "<<"Dinner:-Fish/Paneer"<<endl<<endl;
        cout<<"Sunday"<<"::"<< " "<<"Breakfast:- Bread"<<" "<<"Lunch:- Rice-dal-curd"<<" "<<"Dinner:-Chicken/Paneer/Frooti"<<endl<<endl;
        int check;
        cout<<"Press 1 :: Hygiene Maintanence & Service Timing"<<endl;
        cout << ">> ";
        cin>>check;
        switch(check){
            case 1:
                maintain_hygiene();
                break;
            case 2:
                break;
        }
        complain_box();
    }
    int maintain_hygiene(){
        int fine1=0;
        cout << "Is hygiene maintained in hostel ?? (Y/N)"<<endl;
        string check;
        cout << ">> ";
        cin >> check;
        if(check=="Y"){
            cout << "No Fine"<<endl;
        }
        if(check=="N"){
            fine1+=100;
            cout << "Your Fine will be ** "<< fine1 <<" ** for this week"<<endl<<endl;
        }
        late_service(fine1);
    }
    void late_service(int fine1){
        int fine2=0;
        cout<<"Is Food timing maintained properly?(Y/N)"<<endl;
        string check;
        cout << ">> ";
        cin>>check;
        if(check=="Y"){
            cout<<"Food Timing Maintained properly"<<endl<<endl;
        }
        if(check=="N"){
            fine2+=50;
            cout<<"Your Fine will be ** "<< fine2 <<" ** for this week due to late service"<<endl;
        }
        int Fine=fine1+fine2;
        cout<<"Your Total Fine is :: "<<Fine<<endl<<endl;
    }
    void complain_box(){
        cout<<"Want to make any Complain??(Y/N)"<<endl;
        string what;
        cout << ">> ";
        cin>>what;
        if(what=="Y" or what=="y"){
            cout<<"CHOSE"<<endl<<endl;
            cout<<"1. Foods are so Spicy"<<endl;
            cout<<"2. Food Timing is not good"<<endl;
            cout<<"3. Tables are not clean"<<endl;
            cout<<"4. Dishes are not clean"<<endl;
            cout<<"5. Routine isn't followed"<<endl;
            cout<<"6. Others"<<endl;
            int which;
            cout << ">> ";
            cin>>which;
            if(1<=which<=5){
                cout<<"Your Complain is Sent to Warden Office"<<endl<<endl;
            }
            if(which==6){
                cout<<"Write Your Complain ::"<<endl;
                string write;
                cout << ">> ";
                cin>>write;
                cout<<"Your Complain is Sent to Warden Office"<<endl<<endl;
            }
        }
    }   
};
int main()
{
    cout << " " << endl;
    cout << "**************Hostel Mess Management*****************" << endl;
    cout << " " << endl;
    cout << "Press 1 to go For Registration :: ";
    Dean_office a;
    Registration b;
    Mess_Management_System c;
    Bills_Refund d;
    Mess_menu e;
    Boys_Girls_Hostel f;
    int choice1;
    cout << ">> ";
    cin >> choice1;
    switch (choice1)
    {
    case 1:
        b.name;
        b.place;
        b.gender;
        b.info();
        break;
    }
    int TRY=0;
    while(TRY!=-1){
        cout << "Press 1 :: Show My Information" << endl;
        cout << "Press 2 :: To Know About Someone's Hostel Number" << endl;
        cout << "Press 3 :: Hostel Section (Workers)" << endl;
        cout << "Press 4 :: Total Hostels and Students "<<endl;
        cout << "Press 5 :: Amount Details"<<endl;
        cout << "Press 6 :: Weekly Menu "<<endl;
        cout << "Press 7 :: To Exit"<<endl<<endl;
        int option;
        cout << ">> ";
        cin >> option;
        switch (option)
        {
        case 1:
            b.print_info();
            cout<<endl;
            break;
        case 2:
            a.others_Details();
            cout<<endl;
            break;
        case 3:
            c.hostel_name();
            break;
        case 4:
            c.num_worker();
            break;
        case 5:
            d.your_amount();
            break;
        case 6:
            e.Hostel_Menu();
            break;
        case 7:
            TRY=-1;
            break;
        }
    }
    return 0;
}