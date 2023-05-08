#include <iostream>
#include <cstdlib>
#include <map>
using namespace std; 
class users {
    private:
        map <string, string> userInfo; 
    public: 
        void getUserInfo(){ 
            cout << "Enter user name: " << "\n"; 
            cin >> userInfo["userName"];
            cout << "Enter Father's name: " << "\n"; 
            cin >> userInfo["fatherName"] ; 
            cout << "Enter Mother's name: " << "\n";
            cin >> userInfo["motherName"];
            cout << "Enter phone Number: " << "\n";
            cin >> userInfo["phoneNumber"]; 
            cout << "Enter your address: " << "\n";
            cin >> userInfo["address"] ;
            cout << "Enter your password: " << "\n";
            cin >> userInfo["password"] ;
            cout << "Enter your E-Mail ID: " << "\n";
            cin >> userInfo["emailId"] ;
            }



        void printUserInfo(){
            cout << "\n\n\n"; 
            cout << "Username: " << userInfo["userName"] << "\n";
            cout << "Father's Name: " << userInfo["fatherName"] << "\n";  
            cout << "Mothers's Name: " << userInfo["motherName"] << "\n"; 
            cout << "Phone number: " << userInfo["phoneNumber"] << "\n"; 
            cout << "Address: " << userInfo["address"] << "\n"; 
        }



        void splashScreen(){
            cout <<" ____________________ ToGo: ____________________ " << "\n"; 
            cout << "------your online ticket booking partner.--------"; 
        }



        void checkAvailablity(){
            cout << "Available trains: From Chennai." << "\n"; 
            cout << "Choose your destination." << "\n\n";
            string destinations[20] = {"ABU ROAD (1)", "AHMEDABAD (2)", "ALAPPUZHA (3)", "ALLAHABAD (4)", "ASANSOL (5)", "BENGALURU (6)",
                                        "BARAUNI (7)", "BHOPAL (8)", "BHUBHANESWAR (9)", "BIKANER (10)", "BILASPUR (11)", "BOKARO (12)", "CHANDIGARH (13)", "CHAAPRA (14)",
                                        "COIMBATORE (15)", "DARBHANGA (16)", "DARJEELING (17)", "DEHRADUN (18)", "ERODE (19)", "ERNAKULAM (20)" }; 
            for (int index = 0; index < 20; index++){
                cout << destinations[index] << " | " ;
            }
            cout << "\n" << "Enter the code to check availability:" << "\n";
            int destination; 
            cin >> destination;
            map<int, string> availableTrains; 
            availableTrains = {
                {1, "22663"}, 
                {2, "12656, 22663, 19419, 19423, 22919"}, 
                {3, "13351, 22642, 22645, 22639, 12511,22207"},
                {4, "12669, 12578, 12295, 15119, 16793"},
                {5, " 13575, 15929, 22643, 15629, 22611, 12551"},
                {6, "12007, 12027, 12607, 12639, 12657, 15228,12577"},
                {7, " 12522, 15227, 12578"},
                {8, "12433, 12621, 12615, 12641, 12967, 12592"},
                {9, "12842, 15227, 12507, 12509, 12515, 12840, 22641"},
                {10, "12507, 12509, 12515, 15629, 15929"},
                {11, "12511, 12521, 22645, 13351, 22647"},
                {12, "22642,12508, 22644, 12516, 12623"},
                {13, "12631, 12633, 12642, 16723, 16127"},
                {14, "12077, 12433, 12507, 12509, 12512"},
                {15, "12522,17643, 12611, 12615, 12621, 12641"},
                {16, " 12656,12664, 12669, 12687, 12712"},
                {17, "12759, 12829,12842, 12852, 12897"},
                {18, "12967, 12969, 13352,15227, 12578"},
                {19, "12515, 15629, 15929, 12840,16031"},
                {20, "22403, 16093, 22663, 22643, 22641"},
            }; 
            cout << "\n\n" <<"Avaiable trains from Chennai to " << destinations[destination - 1] << " are " << availableTrains[destination] << "\n"; 
        }



        void signUp(){
            getUserInfo(); 
        }



        void exit(){
            string options; 
            options = "y"; 
        }


        void menu(){
        cout <<"Select an option to get started:" << "\n";
        cout << "| sign up (1) | - sign in (2) | - check availability (3) | - view Profile (4) | - Exit (5) |" << "\n\n";
        int menuOption;
        cin >> menuOption;
        switch (menuOption)
        {
        case 1:
            signUp(); 
            break;
        case 2: 
            signIn();
            break; 
        case 3: 
            checkAvailablity(); 
            break; 
        case 4: 
            printUserInfo(); 
        case 5:
            exit(); 
            break;
            }
        }


        void bookTicket(){
            cout <<"List of available trains: " << "\n";
            checkAvailablity(); 
            cout << "Enter your destination: " << "\n";
            string toDestination;
            cin >> toDestination; 
            cout << "Enter train number: " << "\n";
            int trainNumber;
            cin >> trainNumber; 
            cout << "Enter number of seats you wish to book: " << "\n";
            int seats;
            cin >> seats;
            cout << "Select your seat type: " << "\n";
            string seattypes[10] = {"Air-Conditioned Executive Chair Class (EC)",
                                    "Air-Conditioned First Class (1AC)",
                                    "Air-Conditioned Two-Tier Class (2AC)"
                                    "Air-Conditioned Three-Tier Class (3AC)",
                                    "First Class (FC)",
                                    "AC Chair Class (CC)",
                                    "Sleeper Class (SL)",
                                    "Second Class (2S)",
                                    "Unreserved/General Class (2S)"};
            for (int index = 0; index < 9; index++ ){
            cout << seattypes[index] << " | "; 
            }
            cout << "\n"; 
            string seatType;
            cin >> seatType; 
            cout << "\n" <<"Select your meal preference: ( veg / non-veg ) " << "\n";
            string mealPref; 
            cin >> mealPref; 
        
        cout << "\n\n" <<"Do you want to print your ticket receipt: yes:(y) / no:(n)";
        string toPrint; 
        cin >> toPrint;               
        if (toPrint == "y"){
            cout << "\n\n\n" <<"Receipt number: " << "IRS" << rand() << "\n"; 
            cout << "user Name: " << userInfo["userName"] << "\n";
            cout << "Mobile number: " << userInfo["phoneNumber"] << "\n";
            cout << "Destination: " << toDestination << "\n";
            cout << "Train number: " << trainNumber << "\n";
            cout << "Seat Type: " << seatType << "\n";
            cout << "Meal Preference: " << mealPref << "\n"; 
            }
        else {
            cout << "Your ticket booking has been confirmed, have a safe journey."; 
        }
        }



        void feedback(){
            cout << "\n\n\n" << "Enter subject: " << "\n";
            string subject;
            cin >> subject; 
            cout << "\n" << "Enter your message: " << "\n";
            string message;
            cin >> message;
            cout << "\n\n"; 
            cout << "subject: " << subject << "\n";
            cout << "Message: " << message; 
        }


        void enquiry(){
            cout << "FAQ:" << "\n";
            cout << "Seat types and its features: " << "\n"; 
            string seattypes[10] = { "Air-Conditioned Executive Chair Class (1)",
                                     "Air-Conditioned First Class (2)",
                                     "Air-Conditioned Two-Tier Class (3)"
                                    "Air-Conditioned Three-Tier Class (4)",
                                     "First Class (5)",
                                     "AC Chair Class (6)" };
            for (int index = 0; index < 9; index++){
                cout << seattypes[index] << " | "; 
            }
            cout << "\n" <<"Select a seat type to view its features: " << "\n";
            int enquiryOption; 
            cin >> enquiryOption; 
            switch (enquiryOption){
                case 1 : 
                    cout << "The air-conditioned executive class is only available on a few types of express trains," 
                    "such as the Tejas Express, the Gatimaan Express and the Shatabdi Express. It is the most premium and"
                    "expensive class. The ticket fare is almost as expensive a domestic flight ticket fare." << "\n\n" <<
                    "In the AC executive class, seats are arranged as 2+2 across the carriage, providing enough space and"
                    "privacy. The whole carriage, including the toilet, is clean. A small foldable table and a screen are"
                    "attached to the back of every seat. Food and snacks are offered free of charge." << "\n\n" <<
                    "AC executive class is very popular among business travelers. It is a perfect choice for short train"
                    "journeys that are less than 5 hours." << "\n\n"; 
                    break;


                case 2: 
                    cout << "The air-conditioned first class consists of 2-berth or 4-berth sleeper compartments, with lockable doors. The" << "\n" <<
                    "compartments are spacious, clean and well-maintained. Each compartment has a washbasin. Toilets are available at the" << "\n" <<
                    "end of each carriage. A pillow, sheet, blanket and towel are provided for each berth." << "\n\n" <<
                    "The air-conditioned first class is the most expensive among all the sleeper classes, and it provides a high level of comfort"
                    "and privacy. It is cleaner and quieter than non-air-conditioned sleeper classes." << "\n\n"; 
                    break;


                case 3:
                    cout << "The air-conditioned 2-tier class is common on long-distance trains in India. There are 2 upper berths and 2 lower berths"
                    "in each compartment, and there are 2 side berths (one lower and one upper) on the other side of the aisle, across each"
                    "compartment. There are no doors for each compartment, but curtains are available to separate the compartments. A"
                    "pillow, sheet, blanket and towel are provided for each berth." << "\n\n" << 
                    "The ticket fare of the air-conditioned 2-tier class is almost half of the air-conditioned first class. So it is popular for India’s"
                    "upper class travelers. And it is a good choice for foreign travelers who like a good level of privacy, while not being able to"
                    "afford AC first class." << "\n\n"; 
                    break; 
                case 4: 
                    cout << "There are 6 berths in each open-plan compartment, 2 lower berths, 2 middle berths and 2 upper berths. There are also" << "\n" << 
                    "side berths (lower berth and upper berth) across the hall on the other side of the compartment. Unlike AC 2-tier class, AC" << "\n" << 
                    "3-tier class doesn\'t have curtains to separate the berths for privacy concern. A pillow, sheet and blanket are provided for" << "\n" <<
                    "each berth." << "\n\n"; 
                    break;  
                case 5: 
                    cout << "First class has the same layout as air-conditioned first class, but without air-conditioning." << "\n"<<
                    "There are 4 berths in a lockable compartment. Sheets and blankets are offered at extra charge. Nowadays, you " << "\n" <<
                    "can only find first class on a few Indian trains." << "\n\n";
                    break; 
                case 6: 
                    cout << "The air-conditioned seat class is arranged as 3+2 seats across the carriage. It can be found on daytime" <<"\n"<< 
                    "and short distance trains. It is an affordable and comfortable way for train journeys less than 5 hours." << "\n\n"; 
                    break; 
            }
        }



        void signInMenu(){
            cout << "\n\n\n" << "| Book Ticket (1) | - | Feedback (2) | - | Enquiry (3) | " << "\n";
            int signInOption; 
            cin >> signInOption; 
            switch (signInOption)
            {
            case 1:
                bookTicket(); 
                break;
            case 2: 
                feedback(); 
                break; 
            case 3: 
                enquiry();
            } 
        }



        void signIn(){
            cout << "Enter user Name: " << "\n";
            string signInUsername;
            cin >> signInUsername;
            cout << "Enter your password: " << "\n"; 
            string signInPassword;
            cin >> signInPassword; 
            if (signInPassword == userInfo["password"] && signInUsername == userInfo["userName"]){
                splashScreen();
                cout << "\n" <<"Welcome back " << userInfo["userName"] << "\n" ;
                signInMenu(); 
            }
            else if (signInPassword != userInfo["password"]){
                cout << "Forgot Password?" << "\n"; 
            }
            else {
                cout << "Create new user account: yes:(y)/no:(n)" << "\n";
                char otherOptions;
                cin >>  otherOptions; 
                if (otherOptions == 'y'){
                    getUserInfo(); 
                }
                else if (otherOptions == 'n'){
                    menu(); 
                }; 
            }
        }
        
        

}; 



int main(){
    string options;
    cout << "Type start to enter the application." << "\n" ; 
    users* user = new users(); 
    cin >> options; 
        while (options != "y"){
            user->splashScreen();
            user->menu();
            cout << " press | n | to continue, | y | to exit" << "\n"; 
            cin >> options;
            if (options == "y"){
                cout << "Thank you for using our application."<< "\n";
                cout << "Have a safe journey to your dream destination." << "\n"; 
            }
        }
        delete user; 
}


