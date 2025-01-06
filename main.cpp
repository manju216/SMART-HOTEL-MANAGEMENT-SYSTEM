 #include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm> // for sort
#include <iomanip>
# include <unordered_map>
using namespace std;


struct Hotel
{

    string id;
    string name;
    string location;

    float ratings;

    string foodType;
    string email;

    string phoneNumber;
    string operationalHours;

};

struct Room
 {

    string hotelID;

    string roomID;

    string type;
    bool isAvailable;
    float pricePerNight;

};

struct Customer
{

    string hotelID;
    string id;

    string name;
    string email;
    string phoneNumber;

};

struct Booking
{

    string bookingID;

    string hotelID;

    string roomID;

    string customerID;
    string checkInDate;

    string checkOutDate;


};


struct Billing
{

    string hotelID;

    string roomID;

    string customerID;

    float roomCharge;

    float taxes;

    float totalAmount;

};



// Housekeeping Request Structure

struct HousekeepingRequest
{

    string hotelId;

    string requestId;

    string roomId;

    string description;

    string status; // Pending, In Progress, Completed

};

// Room structure to store security details of each room



struct Roomsecurity
{

    bool doorLocked;           // Indicates if the door is locked

    string digitalKey;         // Unique digital key for the room

    string biometricData;      // Biometric data for verification

};

// Structure to store booking details of a facility

struct Booking1
{

    string userName;


    string timeSlot;


};


// Structure to store event details in conference rooms

struct Event
{

    string organizerName;

    string date;

    vector<string> equipmentRequested;
};
struct Roomdetails
{
    float temperature;

    bool lightsOn;

    int curtainPosition;      // 0 (closed) to 100 (fully open)

    int energyUsage;          // Units of energy usage

    int tvVolume;             // TV volume level

    string streamingService;  // Current connected streaming service
};


// Structure to hold water conservation details

struct WaterConservation
{
    bool faucetOptimized;

    bool showerOptimized;

};



// Structure to hold green energy integration details

struct GreenEnergy
{

    bool solarPowerEnabled;

    bool energyEfficientElevators;

    bool energyEfficientAppliances;
};

// Structure to hold waste management details

struct WasteManagement
{

    bool smartTrashBins;

    bool compostingFoodWaste;

};





vector<Hotel> hotels;

vector<Room> rooms;

vector<Customer> customers;

vector<Booking> bookings;

vector<Billing> bills;

vector<HousekeepingRequest> requests;

unordered_map<int, Roomsecurity> rooms2;

vector<int> cameras; // List of CCTV camera IDs

unordered_map<string, vector<Booking1>> amenities = {
    {"Spa", {}}, {"Gym", {}}, {"Pool", {}}}; // Predefined facilities
unordered_map<string, vector<Event>> conferenceRooms = {
    {"Conference Room 1", {}}, {"Conference Room 2", {}}}; // Predefined rooms

vector<Roomdetails> rooms1(100); // Array to store details of up to 100 rooms



// Function declarations for each menu

void hotelManagementMenu();

void roomManagementMenu();

void customerManagementMenu();

void bookingManagementMenu();

void billingManagementMenu();

void operationsManagementMenu();
void securityManagementMenu();

void amenitiesManagementMenu();

void roomAutomationMenu();


void handleEcoFriendlyActions();

void healthWellnessMenu();

void entertainmentMenu();





void addHotel1()
{

    Hotel h;

    cout << "Enter Hotel ID: "; cin >> h.id;

    cout << "Enter Hotel Name: "; cin.ignore(); getline(cin, h.name);

    cout << "Enter Location: "; getline(cin, h.location);

    cout << "Enter Ratings: "; cin >> h.ratings;


    cout << "Enter Food Type: "; cin.ignore(); getline(cin, h.foodType);
    cout << "Enter Email: "; getline(cin, h.email);

    cout << "Enter Phone Number: "; getline(cin, h.phoneNumber);

    cout << "Enter Operational Hours: "; getline(cin, h.operationalHours);
    hotels.push_back(h);

    cout << "Hotel added successfully!\n";
}

void addHote2()
{
    Hotel h;

    cout << "Enter Hotel ID: "; cin >> h.id;

    cout << "Enter Hotel Name: "; cin.ignore(); getline(cin, h.name);

    cout << "Enter Location: "; getline(cin, h.location);

    cout << "Enter Ratings: "; cin >> h.ratings;

    cout << "Enter Food Type: "; cin.ignore(); getline(cin, h.foodType);

    cout << "Enter Email: "; getline(cin, h.email);

    cout << "Enter Phone Number: "; getline(cin, h.phoneNumber);

    cout << "Enter Operational Hours: "; getline(cin, h.operationalHours);

    hotels.push_back(h);

    cout << "Hotel added successfully!\n";
}

void addHotel3()
{
    Hotel h;

    cout << "Enter Hotel ID: "; cin >> h.id;

    cout << "Enter Hotel Name: "; cin.ignore(); getline(cin, h.name);

    cout << "Enter Location: "; getline(cin, h.location);

    cout << "Enter Ratings: "; cin >> h.ratings;

    cout << "Enter Food Type: "; cin.ignore(); getline(cin, h.foodType);

    cout << "Enter Email: "; getline(cin, h.email);

    cout << "Enter Phone Number: "; getline(cin, h.phoneNumber);

    cout << "Enter Operational Hours: "; getline(cin, h.operationalHours);

    hotels.push_back(h);

    cout << "Hotel added successfully!\n";
}
void addHotelq()
{
    Hotel h;
    cout << "Enter Hotel ID: "; cin >> h.id;

    cout << "Enter Hotel Name: "; cin.ignore(); getline(cin, h.name);

    cout << "Enter Location: "; getline(cin, h.location);
    cout << "Enter Ratings: "; cin >> h.ratings;

    cout << "Enter Food Type: "; cin.ignore(); getline(cin, h.foodType);

    cout << "Enter Email: "; getline(cin, h.email);

    cout << "Enter Phone Number: "; getline(cin, h.phoneNumber);

    cout << "Enter Operational Hours: "; getline(cin, h.operationalHours);

    hotels.push_back(h);

    cout << "Hotel added successfully!\n";
}
void addHotelw()
{
    Hotel h;

    cout << "Enter Hotel ID: "; cin >> h.id;

    cout << "Enter Hotel Name: "; cin.ignore(); getline(cin, h.name);

    cout << "Enter Location: "; getline(cin, h.location);


    cout << "Enter Ratings: "; cin >> h.ratings;

    cout << "Enter Food Type: "; cin.ignore(); getline(cin, h.foodType);

    cout << "Enter Email: "; getline(cin, h.email);

    cout << "Enter Phone Number: "; getline(cin, h.phoneNumber);

    cout << "Enter Operational Hours: "; getline(cin, h.operationalHours);

    hotels.push_back(h);

    cout << "Hotel added successfully!\n";
}

void viewHotel1()
{
    for (const auto& h : hotels)

        {

        cout << "ID: " << h.id << "\nName: " << h.name << "\nLocation: " << h.location

             << "\nRatings: " << h.ratings << "\nFood Type: " << h.foodType

             << "\nEmail: " << h.email << "\nPhone: " << h.phoneNumber

             << "\nOperational Hours: " << h.operationalHours << "\n\n";
    }
}

void saveHotelsToFile1()
 {

    ofstream outFile("hotels.txt");
    for (const auto& h : hotels)
        {

        outFile << h.id << "|" << h.name << "|" << h.location << "|" << h.ratings << "|"

                << h.foodType << "|" << h.email << "|" << h.phoneNumber << "|"

                << h.operationalHours << "\n";

    }

    outFile.close();
    cout << "Hotels saved to file.\n";
}


void saveHotelsToFile2()
{

    ofstream outFile("hotels.txt");

    for (const auto& h : hotels)
        {

        outFile << h.id << "|" << h.name << "|" << h.location << "|" << h.ratings << "|"

                << h.foodType << "|" << h.email << "|" << h.phoneNumber << "|"

                << h.operationalHours << "\n";

    }

    outFile.close();

    cout << "Hotels saved to file.\n";



}



void addHote3()
{

    Hotel h;

    cout << "Enter Hotel ID: "; cin >> h.id;

    cout << "Enter Hotel Name: "; cin.ignore(); getline(cin, h.name);

    cout << "Enter Location: "; getline(cin, h.location);

    cout << "Enter Ratings: "; cin >> h.ratings;

    cout << "Enter Food Type: "; cin.ignore(); getline(cin, h.foodType);

    cout << "Enter Email: "; getline(cin, h.email);

    cout << "Enter Phone Number: "; getline(cin, h.phoneNumber);

    cout << "Enter Operational Hours: "; getline(cin, h.operationalHours);

    hotels.push_back(h);

    cout << "Hotel added successfully!\n";

}



void saveHotelsToFile3()
{

    ofstream outFile("hotels.txt");

    for (const auto& h : hotels)
        {

        outFile << h.id << "|" << h.name << "|" << h.location << "|" << h.ratings << "|"

                << h.foodType << "|" << h.email << "|" << h.phoneNumber << "|"

                << h.operationalHours << "\n";

    }
    outFile.close();

    cout << "Hotels saved to file.\n";
}




void saveHotelsToFile4()
{

    ofstream outFile("hotels.txt");

    for (const auto& h : hotels)
        {
        outFile << h.id << "|" << h.name << "|" << h.location << "|" << h.ratings << "|"

                << h.foodType << "|" << h.email << "|" << h.phoneNumber << "|"

                << h.operationalHours << "\n";

    }

    outFile.close();

    cout << "Hotels saved to file.\n";

}




void saveHoteToFile()
{

    ofstream outFile("hotels.txt");

    for (const auto& h : hotels)
        {

        outFile << h.id << "|" << h.name << "|" << h.location << "|" << h.ratings << "|"

                << h.foodType << "|" << h.email << "|" << h.phoneNumber << "|"
                << h.operationalHours << "\n";

    }

    outFile.close();

    cout << "Hotels saved to file.\n";

}



void saveHotelsToFile5()
{

    ofstream outFile("hotels.txt");

    for (const auto& h : hotels)
        {

        outFile << h.id << "|" << h.name << "|" << h.location << "|" << h.ratings << "|"

                << h.foodType << "|" << h.email << "|" << h.phoneNumber << "|"

                << h.operationalHours << "\n";

    }

    outFile.close();

    cout << "Hotels saved to file.\n";

}

void saveHotelsToFile6()
 {

    ofstream outFile("hotels.txt");

    for (const auto& h : hotels)
        {


        outFile << h.id << "|" << h.name << "|" << h.location << "|" << h.ratings << "|"

                << h.foodType << "|" << h.email << "|" << h.phoneNumber << "|"

                << h.operationalHours << "\n";


    }

    outFile.close();

    cout << "Hotels saved to file.\n";

}


void saveHotelsToFile7()
{
    ofstream outFile("hotels.txt");

    for (const auto& h : hotels)
        {

        outFile << h.id << "|" << h.name << "|" << h.location << "|" << h.ratings << "|"

                << h.foodType << "|" << h.email << "|" << h.phoneNumber << "|"

                << h.operationalHours << "\n";

    }

    outFile.close();

    cout << "Hotels saved to file.\n";

}

void saveHotelsToFile8() {
    ofstream outFile("hotels.txt");
    for (const auto& h : hotels)
        {

        outFile << h.id << "|" << h.name << "|" << h.location << "|" << h.ratings << "|"

                << h.foodType << "|" << h.email << "|" << h.phoneNumber << "|"

                << h.operationalHours << "\n";

    }
    outFile.close();
    cout << "Hotels saved to file.\n";
}

void addHote9()
{
    Hotel h;
    cout << "Enter Hotel ID: "; cin >> h.id;

    cout << "Enter Hotel Name: "; cin.ignore(); getline(cin, h.name);

    cout << "Enter Location: "; getline(cin, h.location);

    cout << "Enter Ratings: "; cin >> h.ratings;

    cout << "Enter Food Type: "; cin.ignore(); getline(cin, h.foodType);

    cout << "Enter Email: "; getline(cin, h.email);

    cout << "Enter Phone Number: "; getline(cin, h.phoneNumber);

    cout << "Enter Operational Hours: "; getline(cin, h.operationalHours);

    hotels.push_back(h);
    cout << "Hotel added successfully!\n";
}

void addHote6()
{

    Hotel h;
    cout << "Enter Hotel ID: "; cin >> h.id;

    cout << "Enter Hotel Name: "; cin.ignore(); getline(cin, h.name);

    cout << "Enter Location: "; getline(cin, h.location);

    cout << "Enter Ratings: "; cin >> h.ratings;

    cout << "Enter Food Type: "; cin.ignore(); getline(cin, h.foodType);

    cout << "Enter Email: "; getline(cin, h.email);

    cout << "Enter Phone Number: "; getline(cin, h.phoneNumber);

    cout << "Enter Operational Hours: "; getline(cin, h.operationalHours);

    hotels.push_back(h);

    cout << "Hotel added successfully!\n";
}

void addHote7()
 {
    Hotel h;
    cout << "Enter Hotel ID: "; cin >> h.id;

    cout << "Enter Hotel Name: "; cin.ignore(); getline(cin, h.name);

    cout << "Enter Location: "; getline(cin, h.location);

    cout << "Enter Ratings: "; cin >> h.ratings;

    cout << "Enter Food Type: "; cin.ignore(); getline(cin, h.foodType);

    cout << "Enter Email: "; getline(cin, h.email);

    cout << "Enter Phone Number: "; getline(cin, h.phoneNumber);

    cout << "Enter Operational Hours: "; getline(cin, h.operationalHours);

    hotels.push_back(h);

    cout << "Hotel added successfully!\n";
}

void addHote10()
{
    Hotel h;
    cout << "Enter Hotel ID: "; cin >> h.id;
    cout << "Enter Hotel Name: "; cin.ignore(); getline(cin, h.name);
    cout << "Enter Location: "; getline(cin, h.location);
    cout << "Enter Ratings: "; cin >> h.ratings;
    cout << "Enter Food Type: "; cin.ignore(); getline(cin, h.foodType);
    cout << "Enter Email: "; getline(cin, h.email);
    cout << "Enter Phone Number: "; getline(cin, h.phoneNumber);
    cout << "Enter Operational Hours: "; getline(cin, h.operationalHours);
    hotels.push_back(h);
    cout << "Hotel added successfully!\n";
}

void addHot()

 {
    Hotel h;
    cout << "Enter Hotel ID: "; cin >> h.id;

    cout << "Enter Hotel Name: "; cin.ignore(); getline(cin, h.name);

    cout << "Enter Location: "; getline(cin, h.location);

    cout << "Enter Ratings: "; cin >> h.ratings;

    cout << "Enter Food Type: "; cin.ignore(); getline(cin, h.foodType);

    cout << "Enter Email: "; getline(cin, h.email);

    cout << "Enter Phone Number: "; getline(cin, h.phoneNumber);

    cout << "Enter Operational Hours: "; getline(cin, h.operationalHours);

    hotels.push_back(h);
    cout << "Hotel added successfully!\n";
}

void addHo()

{
    Hotel h;
    cout << "Enter Hotel ID: "; cin >> h.id;

    cout << "Enter Hotel Name: "; cin.ignore(); getline(cin, h.name);

    cout << "Enter Location: "; getline(cin, h.location);

    cout << "Enter Ratings: "; cin >> h.ratings;

    cout << "Enter Food Type: "; cin.ignore(); getline(cin, h.foodType);

    cout << "Enter Email: "; getline(cin, h.email);

    cout << "Enter Phone Number: "; getline(cin, h.phoneNumber);

    cout << "Enter Operational Hours: "; getline(cin, h.operationalHours);

    hotels.push_back(h);

    cout << "Hotel added successfully!\n";
}

void addHote12()

 {

    Hotel h;

    cout << "Enter Hotel ID: "; cin >> h.id;

    cout << "Enter Hotel Name: "; cin.ignore(); getline(cin, h.name);

    cout << "Enter Location: "; getline(cin, h.location);

    cout << "Enter Ratings: "; cin >> h.ratings;

    cout << "Enter Food Type: "; cin.ignore(); getline(cin, h.foodType);

    cout << "Enter Email: "; getline(cin, h.email);

    cout << "Enter Phone Number: "; getline(cin, h.phoneNumber);

    cout << "Enter Operational Hours: "; getline(cin, h.operationalHours);

    hotels.push_back(h);

    cout << "Hotel added successfully!\n";
}

void addHote13()

{
    Hotel h;

    cout << "Enter Hotel ID: "; cin >> h.id;

    cout << "Enter Hotel Name: "; cin.ignore(); getline(cin, h.name);

    cout << "Enter Location: "; getline(cin, h.location);

    cout << "Enter Ratings: "; cin >> h.ratings;

    cout << "Enter Food Type: "; cin.ignore(); getline(cin, h.foodType);

    cout << "Enter Email: "; getline(cin, h.email);

    cout << "Enter Phone Number: "; getline(cin, h.phoneNumber);

    cout << "Enter Operational Hours: "; getline(cin, h.operationalHours);

    hotels.push_back(h);


    cout << "Hotel added successfully!\n";
}

void addHote14()

 {
    Hotel h;
    cout << "Enter Hotel ID: "; cin >> h.id;

    cout << "Enter Hotel Name: "; cin.ignore(); getline(cin, h.name);

    cout << "Enter Location: "; getline(cin, h.location);

    cout << "Enter Ratings: "; cin >> h.ratings;

    cout << "Enter Food Type: "; cin.ignore(); getline(cin, h.foodType);

    cout << "Enter Email: "; getline(cin, h.email);

    cout << "Enter Phone Number: "; getline(cin, h.phoneNumber);

    cout << "Enter Operational Hours: "; getline(cin, h.operationalHours);

    hotels.push_back(h);

    cout << "Hotel added successfully!\n";
}

void addHote15()

{
    Hotel h;
    cout << "Enter Hotel ID: "; cin >> h.id;

    cout << "Enter Hotel Name: "; cin.ignore(); getline(cin, h.name);

    cout << "Enter Location: "; getline(cin, h.location);

    cout << "Enter Ratings: "; cin >> h.ratings;

    cout << "Enter Food Type: "; cin.ignore(); getline(cin, h.foodType);


    cout << "Enter Email: "; getline(cin, h.email);

    cout << "Enter Phone Number: "; getline(cin, h.phoneNumber);

    cout << "Enter Operational Hours: "; getline(cin, h.operationalHours);

    hotels.push_back(h);

    cout << "Hotel added successfully!\n";
}
void addHote8()
{
    Hotel h;

    cout << "Enter Hotel ID: "; cin >> h.id;

    cout << "Enter Hotel Name: "; cin.ignore(); getline(cin, h.name);

    cout << "Enter Location: "; getline(cin, h.location);

    cout << "Enter Ratings: "; cin >> h.ratings;

    cout << "Enter Food Type: "; cin.ignore(); getline(cin, h.foodType);

    cout << "Enter Email: "; getline(cin, h.email);

    cout << "Enter Phone Number: "; getline(cin, h.phoneNumber);

    cout << "Enter Operational Hours: "; getline(cin, h.operationalHours);

    hotels.push_back(h);

    cout << "Hotel added successfully!\n";
}



// Hotel management functions
void addHotel()
{
    Hotel h;

    cout << "Enter Hotel ID: "; cin >> h.id;

    cout << "Enter Hotel Name: "; cin.ignore(); getline(cin, h.name);

    cout << "Enter Location: "; getline(cin, h.location);

    cout << "Enter Ratings: "; cin >> h.ratings;

    cout << "Enter Food Type: "; cin.ignore(); getline(cin, h.foodType);

    cout << "Enter Email: "; getline(cin, h.email);

    cout << "Enter Phone Number: "; getline(cin, h.phoneNumber);

    cout << "Enter Operational Hours: "; getline(cin, h.operationalHours);

    hotels.push_back(h);

    cout << "Hotel added successfully!\n";
}

void viewHotels()
{
    for (const auto& h : hotels) {

        cout << "ID: " << h.id << "\nName: " << h.name << "\nLocation: " << h.location

             << "\nRatings: " << h.ratings << "\nFood Type: " << h.foodType

             << "\nEmail: " << h.email << "\nPhone: " << h.phoneNumber

             << "\nOperational Hours: " << h.operationalHours << "\n\n";
    }
}

void saveHotelsToFile()
 {
    ofstream outFile("hotels.txt");

    for (const auto& h : hotels) {

        outFile << h.id << "|" << h.name << "|" << h.location << "|" << h.ratings << "|"

                << h.foodType << "|" << h.email << "|" << h.phoneNumber << "|"

                << h.operationalHours << "\n";
    }
    outFile.close();

    cout << "Hotels saved to file.\n";
}

void loadHotelsFromFile()

{

    ifstream inFile("hotels.txt");

    if (!inFile) {


        cout << "No hotels file found.\n";

        return;

    }
    hotels.clear();

    Hotel h;

    string line;

    while (getline(inFile, line))


        {

        size_t pos = 0;

        h.id = line.substr(0, (pos = line.find('|')));

        line.erase(0, pos + 1);

        h.name = line.substr(0, (pos = line.find('|')));

        line.erase(0, pos + 1);

        h.location = line.substr(0, (pos = line.find('|')));

        line.erase(0, pos + 1);

        h.ratings = stof(line.substr(0, (pos = line.find('|'))));

        line.erase(0, pos + 1);

        h.foodType = line.substr(0, (pos = line.find('|')));

        line.erase(0, pos + 1);

        h.email = line.substr(0, (pos = line.find('|')));

        line.erase(0, pos + 1);

        h.phoneNumber = line.substr(0, (pos = line.find('|')));

        line.erase(0, pos + 1);

        h.operationalHours = line;

        hotels.push_back(h);

    }

    inFile.close();

    cout << "Hotels loaded from file.\n";
}

void addPredefinedHotels()
{
    hotels =

    {

{
    "H001", "Grand Plaza", "Belagavi", 4.5, "Continental", "contact@grandplaza.com", "123-456-7890", "24/7"
},
{
    "H002", "Hotel Royal", "Belagavi", 4.3, "Indian", "info@hotelroyal.com", "123-456-7891", "24/7"
},
{
    "H003", "The Heritage Inn", "Market Road, Belagavi", 4.6, "Multi-cuisine", "contact@heritageinn.com", "123-456-7892", "24/7"
},
{
    "H004", "Comfort Suites", "Khanapur Road, Belagavi", 4.2, "Continental", "book@comfortsuites.com", "123-456-7893", "24/7"
},
{
    "H005", "The Plaza", "Ramnagar, Belagavi", 4.7, "Indian", "plaza@hotel.com", "123-456-7894", "24/7"
},
{
    "H006", "Regal Inn", "Gokak Road, Belagavi", 4.1, "South Indian", "regalinn@hotel.com", "123-456-7895", "24/7"
},
{
    "H007", "Hotel Park View", "Cantonment Area, Belagavi", 4.4, "Multi-cuisine", "parkview@hotel.com", "123-456-7896", "24/7"
},
{
    "H008", "Belagavi Residency", "Shivaji Nagar, Belagavi", 4.0, "Indian", "residency@hotel.com", "123-456-7897", "24/7"
},
{
    "H009", "Hotel City Center", "Market Road, Belagavi", 4.2, "North Indian", "citycenter@hotel.com", "123-456-7898", "24/7"
},
{
    "H010", "Serenity Hotel", "Udyambag, Belagavi", 4.5, "Continental", "serenity@hotel.com", "123-456-7899", "24/7"
},
{
    "H011", "Sangam Hotel", "Shankar Nagar, Belagavi", 3.9, "Indian", "sangam@hotel.com", "123-456-7900", "24/7"
},
{
    "H012", "Hotel Fort View", "Belgaum Fort, Belagavi", 4.3, "South Indian", "fortview@hotel.com", "123-456-7901", "24/7"
},
{
    "H013", "The Urban Hotel", "R C Nagar, Belagavi", 4.6, "North Indian", "urban@hotel.com", "123-456-7902", "24/7"
},
{
    "H014", "Blue Horizon", "Sadar Bazar, Belagavi", 4.4, "Chinese", "bluehorizon@hotel.com", "123-456-7903", "24/7"
},
{
    "H015", "Hotel New Era", "Khasbag, Belagavi", 4.0, "Indian", "newera@hotel.com", "123-456-7904", "24/7"
},
{
    "H016", "Vishal Residency", "Vishal Nagar, Belagavi", 4.3, "Multi-cuisine", "vishal@hotel.com", "123-456-7905", "24/7"
},
{
    "H017", "Rajdhani Hotel", "Tilakwadi, Belagavi", 4.2, "Indian", "rajdhani@hotel.com", "123-456-7906", "24/7"
},
{
    "H018", "The Kamat", "College Road, Belagavi", 4.6, "Indian", "kamat@hotel.com", "123-456-7907", "24/7"
},
{
    "H019", "The Elite Hotel", "Nandini Nagar, Belagavi", 4.5, "Continental", "elite@hotel.com", "123-456-7908", "24/7"
},
{
    "H020", "Hotel Crown", "M G Road, Belagavi", 4.4, "South Indian", "crown@hotel.com", "123-456-7909", "24/7"
},
{
    "H021", "Sunshine Hotel", "Mahalaxmi Nagar, Belagavi", 4.0, "Multi-cuisine", "sunshine@hotel.com", "123-456-7910", "24/7"
},
{
    "H022", "Hotel Belgaum Grand", "R S No. 98, Belagavi", 4.3, "Indian", "belgaumgrand@hotel.com", "123-456-7911", "24/7"
},
{
    "H023", "Hotel Lotus", "Cantonment, Belagavi", 4.6, "Chinese", "lotus@hotel.com", "123-456-7912", "24/7"
},
{
    "H024", "Hotel Elite", "Nehru Nagar, Belagavi", 4.5, "Multi-cuisine", "elite@hotel.com", "123-456-7913", "24/7"
},
{
    "H025", "Silver Oak Resort", "Kittur, Belagavi", 4.2, "Indian", "silveroak@resort.com", "123-456-7914", "24/7"
},
{
    "H026", "Hotel Suryodaya", "Hukeri, Belagavi", 4.4, "South Indian", "suryodaya@hotel.com", "123-456-7915", "24/7"
},
{
    "H027", "Pearl International", "Gokak Road, Belagavi", 4.1, "North Indian", "pearl@hotel.com", "123-456-7916", "24/7"
},
{
    "H028", "Hotel Sai Paradise", "Gokak Bypass, Belagavi", 4.7, "Continental", "saiparadise@hotel.com", "123-456-7917", "24/7"
},
{
    "H029", "Saffron Resort", "Udyambag, Belagavi", 4.0, "Multi-cuisine", "saffron@resort.com", "123-456-7918", "24/7"
},
{
    "H030", "Amrutha Residency", "P B Road, Belagavi", 4.5, "Indian", "amrutha@hotel.com", "123-456-7919", "24/7"
},
{
    "H031", "Haritha Residency", "Kamat Galli, Belagavi", 4.3, "Indian", "haritha@residency.com", "123-456-7920", "24/7"
},
{
    "H032", "Sri Krishna Hotel", "Avali Galli, Belagavi", 4.1, "South Indian", "krishna@hotel.com", "123-456-7921", "24/7"
},
{
    "H033", "Hotel Shubham", "Khanapur Road, Belagavi", 4.2, "Continental", "shubham@hotel.com", "123-456-7922", "24/7"
},
{
    "H034", "Hotel City Light", "Bailhongal Road, Belagavi", 4.4, "Multi-cuisine", "citylight@hotel.com", "123-456-7923", "24/7"
},
{
    "H035", "Hotel Rainbow", "P B Road, Belagavi", 4.3, "South Indian", "rainbow@hotel.com", "123-456-7924", "24/7"
},
{
    "H036", "Lakeside Resort", "Nehru Nagar, Belagavi", 4.5, "Continental", "lakeside@resort.com", "123-456-7925", "24/7"
},
{
    "H037", "Hotel Green Valley", "Gokak, Belagavi", 4.0, "Indian", "greenvalley@hotel.com", "123-456-7926", "24/7"
},
{
    "H038", "Vasant Residency", "Tilakwadi, Belagavi", 4.2, "North Indian", "vasant@hotel.com", "123-456-7927", "24/7"
},
{
    "H039", "Swarna Bhavan", "Ramdev Galli, Belagavi", 4.4, "Indian", "swarna@hotel.com", "123-456-7928", "24/7"
},
{
    "H040", "Suhana Hotel", "Nadaprabhu Kempegowda Road, Belagavi", 4.3, "Multi-cuisine", "suhana@hotel.com", "123-456-7929", "24/7"
},
{
    "H041", "Hotel Regal", "Mahatma Gandhi Nagar, Belagavi", 4.5, "Indian", "regal@hotel.com", "123-456-7930", "24/7"
},
{
    "H042", "Balaji Residency", "R S No. 99, Belagavi", 4.4, "South Indian", "balaji@residency.com", "123-456-7931", "24/7"
},
{
    "H043", "Shree Krishna Residency", "Tilakwadi, Belagavi", 4.6, "Continental", "shreekrishna@hotel.com", "123-456-7932", "24/7"
},
{
    "H044", "Hotel Ajanta", "P K Road, Belagavi", 4.2, "Indian", "ajanta@hotel.com", "123-456-7933", "24/7"
},
{
    "H045", "The North Star", "Sadar Bazar, Belagavi", 4.3, "North Indian", "northstar@hotel.com", "123-456-7934", "24/7"
},
{
    "H046", "Green Valley Hotel", "Sadar Galli, Belagavi", 4.4, "Continental", "greenvalley@hotel.com", "123-456-7935", "24/7"
},
{
    "H047", "Nashik Residency", "Belgaum Fort, Belagavi", 4.0, "South Indian", "nashik@hotel.com", "123-456-7936", "24/7"
},
{
    "H048", "Shree Shakti", "Shivaji Nagar, Belagavi", 4.2, "Indian", "shreeshakti@hotel.com", "123-456-7937", "24/7"
},
{
    "H049", "Swasti Hotel", "R S No. 98, Belagavi", 4.3, "Multi-cuisine", "swasti@hotel.com", "123-456-7938", "24/7"
},
{
    "H050", "Rainbow Resort", "Belagavi Road, Belagavi", 4.6, "Continental", "rainbowresort@hotel.com", "123-456-7939", "24/7"
}
    };
    saveHotelsToFile();

    cout << "Predefined hotels added and saved to file.\n";

}


// New Functions for Searching and Sorting

void searchHotelByNamePrefix()
 {
    string prefix;

    cout << "Enter name prefix to search: ";

    cin.ignore(); // to clear the input buffer

    getline(cin, prefix);

    cout << "Hotels starting with '" << prefix << "':\n";

    bool found = false;

    for (const auto& h : hotels) {

        if (h.name.rfind(prefix, 0) == 0) {  // Checks if name starts with the prefix

            cout << h.name << " - " << h.location << " - " << h.ratings << "\n";

            found = true;
        }
    }
    if (!found)

        {

        cout << "No hotels found with the given prefix.\n";

    }
}

void searchHotelByLocation()

 {

    string partialLocation;

    cout << "Enter part of the location to search: ";

    cin.ignore();

    getline(cin, partialLocation);


    cout << "Hotels matching location '" << partialLocation << "':\n";

    bool found = false;

    for (const auto& h : hotels)

        {

        if (h.location.find(partialLocation) != string::npos) {

             // Check if partialLocation exists in h.location

            cout << h.name << " - " << h.location << " - " << h.ratings << "\n";

            found = true;


        }

    }

    if (!found)

    {
        cout << "No hotels found matching the given location.\n";
    }
}


void searchHotelByRatings()
{
    float rating;

    cout << "Enter minimum rating to search: ";

    cin >> rating;

    cout << "Hotels with rating >= " << rating << ":\n";

    bool found = false;

    for (const auto& h : hotels)

        {

        if (h.ratings >= rating)

         {
            cout << h.name << " - " << h.location << " - " << h.ratings << "\n";

            found = true;
        }
    }
    if (!found)

    {
        cout << "No hotels found with the given rating.\n";

    }

}

void sortHotelsByName()

 {

    sort(hotels.begin(), hotels.end(), [](const Hotel& a, const Hotel& b) {

        return a.name < b.name;

    });

    cout << "Hotels sorted by name.\n";

}

void sortHotelsByRatings()
{
    sort(hotels.begin(), hotels.end(), [](const Hotel& a, const Hotel& b) {

        return a.ratings > b.ratings;  // descending order

    });
    cout << "Hotels sorted by ratings.\n";
}

void sortHotelsById() {

    // Check if there are any hotels to sort

    if (hotels.empty()) {

        cout << "No hotels to sort. The list is empty.\n";

        return; // Return early if there are no hotels

    }

    cout << "Starting the sorting process...\n";

    // Display the hotel IDs before sorting

    cout << "\nHotel list before sorting by ID:\n";

    for (const auto& hotel : hotels) {

        cout << "Hotel ID: " << hotel.id << ", Name: " << hotel.name << "\n";

    }

    // Sort hotels using a lambda function to compare hotel IDs

    cout << "\nSorting hotels by ID in ascending order...\n";

    sort(hotels.begin(), hotels.end(), [](const Hotel& a, const Hotel& b) {

        return a.id < b.id; // Compare by ID (ascending order)

    });

    // Display the hotel IDs after sorting

    cout << "\nHotel list after sorting by ID:\n";

    for (const auto& hotel : hotels) {

        cout << "Hotel ID: " << hotel.id << ", Name: " << hotel.name << "\n";

    }

    // Confirm that the sorting was successful

    cout << "\nHotels sorted successfully by ID.\n";

    // Optionally, you could verify if the sorting has been done correctly by checking the order
    bool sortedCorrectly = true;

    for (size_t i = 1; i < hotels.size(); ++i) {

        if (hotels[i].id < hotels[i - 1].id) {

            sortedCorrectly = false;

            break;

        }
    }

    if (sortedCorrectly) {

        cout << "Sorting verified: Hotels are correctly sorted by ID.\n";

    }
    else
        {

        cout << "Sorting verification failed: Hotels are not in correct ID order.\n";
    }
}
// Function to select a hotel by ID and view its details
void selectHotel()
{
    string hotelId;

    cout << "Enter the Hotel ID to select: ";

    cin >> hotelId;

    bool found = false;

    for (const auto& h : hotels)

        {

        if (h.id == hotelId)
         {

            cout << "\nHotel Details:\n";

            cout << "ID: " << h.id << "\nName: " << h.name << "\nLocation: " << h.location

                 << "\nRatings: " << h.ratings << "\nFood Type: " << h.foodType

                 << "\nEmail: " << h.email << "\nPhone: " << h.phoneNumber


                 << "\nOperational Hours: " << h.operationalHours << "\n";

            found = true;

            break;
        }
    }

    if (!found)
        {
        cout << "Hotel with ID " << hotelId << " not found.\n";
    }
}


// Function to URL-encode the address string (simple version)

string urlEncode(const string& str) {

    string encoded;


    char hex[4];


    for (size_t i = 0; i < str.length(); ++i) {

        unsigned char c = str[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {

            encoded += c;

        }
        else

            {
            snprintf(hex, sizeof(hex), "%%%02X", c);

            encoded += hex;
        }
    }

    return encoded;
}

// Function to construct the Google Maps URL for the hotel location

void openGoogleMapWithHotel(const string& hotel, const string& apiKey) {

    string encodedHotel = urlEncode(hotel);

    string url = "https://www.google.com/maps/search/?q=" + encodedHotel + "&key=" + apiKey;

    #ifdef _WIN32

        system(("start " + url).c_str());

    #elif __APPLE__

        system(("open " + url).c_str());

    #else
        system(("xdg-open " + url).c_str());

    #endif
}

// Function to validate if the API key provided is valid (Simple check)

bool isValidApiKey(const string& apiKey) {

    return !apiKey.empty();
}


// Function to get a valid hotel address from the user

string getHotelAddress() {

    string hotel;

    cout << "Enter the name or address of the hotel: ";

    cin.ignore(); getline(cin, hotel);

    return hotel;
}

// Function to get a valid Google Maps API key from the user

string getApiKey() {

    string apiKey;

    cout << "Enter your Google Maps API Key: ";

    getline(cin, apiKey);

    return apiKey;
}

// Function to search hotel on Google Maps

void searchHotelOnGoogleMaps() {

    string hotel = getHotelAddress();

    string apiKey = getApiKey();


    if (!isValidApiKey(apiKey)) {

        cout << "Error: Invalid API Key!" << endl;

        return;
    }

    openGoogleMapWithHotel(hotel, apiKey);

    cout << "The location of the hotel is now being displayed in your browser." << endl;
}

bool updateHotelCustomerProfile(int hotelCustomerID, string hotelName) {
    cout << "Updating profile for customer ID " << hotelCustomerID << " with name " << hotelName << ". This is a hotel profile update." << endl;
    return true;
}

string updateHotelCleaningStatus(int hotelRoomID) {
    cout << "Updating cleaning status for room " << hotelRoomID << ". This is just a placeholder action." << endl;
    return "Cleaning Completed";
}
string collectHotelFeedback(int hotelGuestID) {
    cout << "Collecting hotel feedback for guest ID: " << hotelGuestID << ". This is just for testing purposes." << endl;
    return "Good service";
}
bool sendHotelEmail(string customerEmail, string message) {
    cout << "Sending hotel email to " << customerEmail << ": " << message << endl;
    return true;
}
bool confirmHotelBooking(int hotelBookingID) {
    cout << "Confirming hotel booking with ID: " << hotelBookingID << ". This doesn't affect the main booking system." << endl;
    return true;
}
void hotelLogEvent(string message) {
    cout << "Hotel event log: " << message << endl;
}
bool processHotelPayment(double hotelAmount) {
    cout << "Processing hotel payment of $" << hotelAmount << ". This is a placeholder and does not affect the actual payment system." << endl;
    return true;
}

// Add a new room

void addRoom() {

    Room r;

    cout << "Enter Hotel ID: "; cin >> r.hotelID;

    cout << "Enter Room ID: "; cin >> r.roomID;

    cout << "Enter Room Type: "; cin.ignore(); getline(cin, r.type);

    cout << "Is Room Available? (1 for Yes, 0 for No): "; cin >> r.isAvailable;

    cout << "Enter Price Per Night: "; cin >> r.pricePerNight;


    // Add the room to the rooms vector

    rooms.push_back(r);

    cout << "Room added successfully!\n";

}


void viewRooms1() {

    cout << "Displaying all rooms:\n";

    for (const auto& r : rooms) {

        cout << "Hotel ID: " << r.hotelID << "\nRoom ID: " << r.roomID << "\nType: " << r.type

             << "\nAvailable: " << (r.isAvailable ? "Yes" : "No")

             << "\nPrice Per Night: $" << r.pricePerNight << "\n-----------------------------\n";

    }
}
// View all rooms

void viewRooms() {

    cout << "Displaying all rooms:\n";

    for (const auto& r : rooms) {

        cout << "Hotel ID: " << r.hotelID << "\nRoom ID: " << r.roomID << "\nType: " << r.type

             << "\nAvailable: " << (r.isAvailable ? "Yes" : "No")

             << "\nPrice Per Night: $" << r.pricePerNight << "\n-----------------------------\n";

    }
}

// Update room price

// Update room price
void updateRoomPrice() {
    string roomID;

    float newPrice;

    cout << "Enter Room ID to update price: "; cin >> roomID;

    cout << "Enter New Price Per Night: "; cin >> newPrice;

    for (auto& r : rooms) {

        if (r.roomID == roomID) {

            r.pricePerNight = newPrice;

            cout << "Price updated successfully!\n";

            return;

        }
    }
    cout << "Room not found!\n";
}


// Update room price

void updateRoomPrice2() {

    string roomID;

    float newPrice;

    cout << "Enter Room ID to update price: "; cin >> roomID;

    cout << "Enter New Price Per Night: "; cin >> newPrice;

    bool roomFound = false;

    for (auto& r : rooms) {

        if (r.roomID == roomID) {

            r.pricePerNight = newPrice;

            roomFound = true;

            cout << "Price updated successfully!\n";

            break;

        }
    }
    if (!roomFound) {

        cout << "Room not found!\n";
    }
}

// Update room price

void updateRoomPrice3() {

    string roomID;

    float newPrice;

    cout << "Enter Room ID to update price: "; cin >> roomID;

    cout << "Enter New Price Per Night: "; cin >> newPrice;

    bool roomFound = false;

    for (auto& r : rooms) {

        if (r.roomID == roomID) {

            r.pricePerNight = newPrice;

            roomFound = true;


            cout << "Price updated successfully!\n";

            break;
        }
    }
    if (!roomFound) {

        cout << "Room not found!\n";
    }
}


// Update room availability

void updateRoomAvailability() {

    string roomID;

    bool availability;

    cout << "Enter Room ID to update availability: "; cin >> roomID;

    cout << "Enter Availability (1 for Yes, 0 for No): "; cin >> availability;

    bool roomFound = false;

    for (auto& r : rooms) {

        if (r.roomID == roomID) {

            r.isAvailable = availability;

            roomFound = true;

            cout << "Availability updated successfully!\n";

            break;
        }
    }
    if (!roomFound) {

        cout << "Room not found!\n";
    }
}


// Update room availability

void updateRoomAvailability2() {

    string roomID;

    bool availability;

    cout << "Enter Room ID to update availability: "; cin >> roomID;

    cout << "Enter Availability (1 for Yes, 0 for No): "; cin >> availability;


    bool roomFound = false;

    for (auto& r : rooms) {

        if (r.roomID == roomID) {

            r.isAvailable = availability;

            roomFound = true;

            cout << "Availability updated successfully!\n";

            break;
        }
    }
    if (!roomFound) {
        cout << "Room not found!\n";
    }
}


// Delete a room
void deleteRoom() {

    string roomID;

    cout << "Enter Room ID to delete: "; cin >> roomID;


    auto it = rooms.begin();

    while (it != rooms.end()) {

        if (it->roomID == roomID) {

            rooms.erase(it);

            cout << "Room deleted successfully!\n";

            return;
        }
        ++it;
    }
    cout << "Room not found!\n";
}


// List available rooms

void listAvailableRooms() {

    bool found = false;

    cout << "Available rooms:\n";

    for (const auto& r : rooms) {

        if (r.isAvailable) {

            cout << "Hotel ID: " << r.hotelID << "\nRoom ID: " << r.roomID << "\nType: " << r.type

                 << "\nPrice Per Night: $" << r.pricePerNight << "\n-----------------------------\n";

            found = true;
        }
    }
    if (!found) {

        cout << "No rooms available.\n";

    }
}


// Update room availability

void updateRoomAvailability3() {

    string roomID;

    bool availability;

    cout << "Enter Room ID to update availability: "; cin >> roomID;

    cout << "Enter Availability (1 for Yes, 0 for No): "; cin >> availability;


    bool roomFound = false;

    for (auto& r : rooms) {

        if (r.roomID == roomID) {

            r.isAvailable = availability;

            roomFound = true;

            cout << "Availability updated successfully!\n";

            break;
        }

    }
    if (!roomFound) {

        cout << "Room not found!\n";
    }
}

// List all rooms

void listAllRooms() {

    viewRooms();

}

// List rooms by hotel

void listRoomsByHotel() {

    string hotelID;

    cout << "Enter Hotel ID to list rooms: "; cin >> hotelID;


    bool found = false;

    for (const auto& r : rooms) {


        if (r.hotelID == hotelID) {

            cout << "Room ID: " << r.roomID << "\nType: " << r.type

                 << "\nAvailable: " << (r.isAvailable ? "Yes" : "No")

                 << "\nPrice Per Night: $" << r.pricePerNight << "\n-----------------------------\n";

            found = true;

        }
    }
    if (!found) {

        cout << "No rooms found for the given Hotel ID.\n";
    }
}


// Save rooms to file

void saveRoomsToFile() {

    ofstream outFile("rooms.txt");

    if (!outFile) {

        cout << "Error opening file for writing.\n";

        return;

    }
    for (const auto& r : rooms) {

        outFile << r.hotelID << "|" << r.roomID << "|" << r.type << "|"

                << r.isAvailable << "|" << r.pricePerNight << "\n";

    }
    outFile.close();

    cout << "Rooms saved to file.\n";

}


// Save rooms to file

void saveRoomsToFile2() {

    ofstream outFile("rooms.txt");

    if (!outFile) {

        cout << "Error opening file for writing.\n";

        return;
    }
    for (const auto& r : rooms) {

        outFile << r.hotelID << "|" << r.roomID << "|" << r.type << "|"

                << r.isAvailable << "|" << r.pricePerNight << "\n";
    }
    outFile.close();

    cout << "Rooms saved to file.\n";
}


// Load rooms from file

void loadRoomsFromFile() {

    ifstream inFile("rooms.txt");

    if (!inFile) {

        cout << "No rooms file found.\n";

        return;
    }
    rooms.clear();

    Room r;

    string line;

    while (getline(inFile, line)) {

        size_t pos = 0;

        r.hotelID = line.substr(0, (pos = line.find('|')));

        line.erase(0, pos + 1);

        r.roomID = line.substr(0, (pos = line.find('|')));

        line.erase(0, pos + 1);

        r.type = line.substr(0, (pos = line.find('|')));

        line.erase(0, pos + 1);

        r.isAvailable = stoi(line.substr(0, (pos = line.find('|'))));

        line.erase(0, pos + 1);

        r.pricePerNight = stof(line);

        rooms.push_back(r);

    }
    inFile.close();

    cout << "Rooms loaded from file.\n";
}


// Load rooms from file

void loadRoomsFromFile2() {

    ifstream inFile("rooms.txt");

    if (!inFile) {

        cout << "No rooms file found.\n";

        return;
    }
    rooms.clear();

    Room r;

    string line;

    while (getline(inFile, line)) {

        size_t pos = 0;

        r.hotelID = line.substr(0, (pos = line.find('|')));

        line.erase(0, pos + 1);

        r.roomID = line.substr(0, (pos = line.find('|')));

        line.erase(0, pos + 1);

        r.type = line.substr(0, (pos = line.find('|')));

        line.erase(0, pos + 1);

        r.isAvailable = stoi(line.substr(0, (pos = line.find('|'))));

        line.erase(0, pos + 1);

        r.pricePerNight = stof(line);

        rooms.push_back(r);
    }

    inFile.close();

    cout << "Rooms loaded from file.\n";
}

// Search rooms by price range

void searchRoomsByPriceRange() {

    float minPrice, maxPrice;

    cout << "Enter minimum price: "; cin >> minPrice;

    cout << "Enter maximum price: "; cin >> maxPrice;

    bool found = false;

    for (const auto& r : rooms) {


        if (r.pricePerNight >= minPrice && r.pricePerNight <= maxPrice) {

            cout << "Hotel ID: " << r.hotelID << "\nRoom ID: " << r.roomID << "\nType: " << r.type

                 << "\nPrice Per Night: $" << r.pricePerNight << "\n-----------------------------\n";

            found = true;
        }
    }
    if (!found) {
        cout << "No rooms found in the given price range.\n";
    }
}

// Search rooms by price range

void searchRoomsByPriceRange3() {

    float minPrice, maxPrice;

    cout << "Enter minimum price: "; cin >> minPrice;

    cout << "Enter maximum price: "; cin >> maxPrice;


    bool found = false;

    for (const auto& r : rooms) {

        if (r.pricePerNight >= minPrice && r.pricePerNight <= maxPrice) {

            cout << "Hotel ID: " << r.hotelID << "\nRoom ID: " << r.roomID << "\nType: " << r.type

                 << "\nPrice Per Night: $" << r.pricePerNight << "\n-----------------------------\n";

            found = true;

        }

    }
    if (!found) {

        cout << "No rooms found in the given price range.\n";

    }

}


// Save rooms to file

void saveRoomsToFile4() {

    ofstream outFile("rooms.txt");

    if (!outFile) {

        cout << "Error opening file for writing.\n";

        return;

    }

    for (const auto& r : rooms) {

        outFile << r.hotelID << "|" << r.roomID << "|" << r.type << "|"

                << r.isAvailable << "|" << r.pricePerNight << "\n";

    }
    outFile.close();

    cout << "Rooms saved to file.\n";

}


// Filter rooms by availability and price

void filterRoomsByAvailabilityAndPrice() {

    bool availability;

    float maxPrice;

    cout << "Enter Availability (1 for Yes, 0 for No): "; cin >> availability;

    cout << "Enter maximum price per night: "; cin >> maxPrice;

    bool found = false;

    for (const auto& r : rooms) {

        if (r.isAvailable == availability && r.pricePerNight <= maxPrice) {

            cout << "Hotel ID: " << r.hotelID << "\nRoom ID: " << r.roomID << "\nType: " << r.type

                 << "\nPrice Per Night: $" << r.pricePerNight << "\n-----------------------------\n";

            found = true;

        }
    }

    if (!found) {

        cout << "No rooms found with the specified criteria.\n";

    }
}

// Sort rooms by price

void sortRoomsByPrice() {

    sort(rooms.begin(), rooms.end(), [](const Room& a, const Room& b) {

        return a.pricePerNight < b.pricePerNight;

    });

    cout << "Rooms sorted by price.\n";

}

// Sort rooms by availability

void sortRoomsByAvailability() {

    sort(rooms.begin(), rooms.end(), [](const Room& a, const Room& b) {

        return a.isAvailable > b.isAvailable; // Available rooms come first

    });

    cout << "Rooms sorted by availability.\n";

}

void addPredefinedRooms()
{
    rooms =

    {

    {"H001", "R001", "Single", 1, 350},
    {"H001", "R002", "Double", 0, 750},
    {"H001", "R003", "Suite", 1, 1200},
    {"H001", "R004", "Single", 1, 400},
    {"H001", "R005", "Double", 1, 800},
    {"H002", "R006", "Single", 0, 450},
    {"H002", "R007", "Double", 1, 780},
    {"H002", "R008", "Suite", 0, 1500},
    {"H002", "R009", "Single", 1, 500},
    {"H002", "R010", "Double", 1, 900},
    {"H003", "R011", "Suite", 1, 1350},
    {"H003", "R012", "Single", 0, 600},
    {"H003", "R013", "Double", 1, 850},
    {"H003", "R014", "Single", 1, 580},
    {"H003", "R015", "Suite", 0, 1450},
    {"H004", "R016", "Single", 1, 700},
    {"H004", "R017", "Double", 0, 950},
    {"H004", "R018", "Suite", 1, 1600},
    {"H004", "R019", "Single", 1, 620},
    {"H004", "R020", "Double", 1, 880}
};
 saveRoomsToFile();

    cout << "Predefined rooms added and saved to file.\n";

}
// Add a new customer

void addCustomer()

{
    Customer c;

    cout << "Enter Hotel ID: "; cin >> c.hotelID;

    cout << "Enter Customer ID: "; cin >> c.id;

    cout << "Enter Name: "; cin.ignore(); getline(cin, c.name);


    cout << "Enter Email: "; cin >> c.email;

    cout << "Enter Phone Number: "; cin >> c.phoneNumber;

    customers.push_back(c);

    cout << "Customer added successfully!\n";

}

// View all customers

void viewCustomers()

 {

    for (const auto& c : customers)
        {

        cout << "Hotel ID: " << c.hotelID << "\nCustomer ID: " << c.id << "\nName: " << c.name

             << "\nEmail: " << c.email << "\nPhone Number: " << c.phoneNumber << "\n\n";

    }
}

// Search customer by ID

void searchCustomerById()

{
    string customerId;

    cout << "Enter Customer ID to search: "; cin >> customerId;

    for (const auto& c : customers)

        {

        if (c.id == customerId)

         {

            cout << "Hotel ID: " << c.hotelID << "\nCustomer ID: " << c.id << "\nName: " << c.name

                 << "\nEmail: " << c.email << "\nPhone Number: " << c.phoneNumber << "\n";

            return;

        }
    }
    cout << "Customer not found!\n";

}

// Update customer details

void updateCustomer()

{
    string customerId;

    cout << "Enter Customer ID to update: "; cin >> customerId;

    for (auto& c : customers) {

        if (c.id == customerId) {

            cout << "Enter New Name: "; cin.ignore(); getline(cin, c.name);

            cout << "Enter New Email: "; cin >> c.email;

            cout << "Enter New Phone Number: "; cin >> c.phoneNumber;

            cout << "Customer updated successfully!\n";

            return;

        }
    }
    cout << "Customer not found!\n";

}

// Delete a customer
void deleteCustomer()
{
    string customerId;

    cout << "Enter Customer ID to delete: "; cin >> customerId;

    for (auto it = customers.begin(); it != customers.end(); ++it)
     {

        if (it->id == customerId)

            {
            customers.erase(it);

            cout << "Customer deleted successfully!\n";

            return;
        }
    }
    cout << "Customer not found!\n";
}

// List customers by name

void listCustomersByName()

{
    cout << "Customers sorted by name:\n";

    sort(customers.begin(), customers.end(), [](const Customer& a, const Customer& b)
         {

        return a.name < b.name;

    });

    viewCustomers();

}

// Save customers to file

void saveCustomersToFile()

{

    ofstream outFile("customers.txt");

    for (const auto& c : customers)

        {

        outFile << c.hotelID << "|" << c.id << "|" << c.name << "|" << c.email << "|" << c.phoneNumber << "\n";

    }

    outFile.close();

    cout << "Customers saved to file.\n";

}


// Load customers from file

void loadCustomersFromFile()

{

    ifstream inFile("customers.txt");

    if (!inFile) {

        cout << "No customers file found.\n";

        return;

    }
    customers.clear();

    Customer c;

    string line;

    while (getline(inFile, line))

        {

        size_t pos = 0;

        c.hotelID = line.substr(0, (pos = line.find('|')));

        line.erase(0, pos + 1);

        c.id = line.substr(0, (pos = line.find('|')));

        line.erase(0, pos + 1);

        c.name = line.substr(0, (pos = line.find('|')));

        line.erase(0, pos + 1);

        c.email = line.substr(0, (pos = line.find('|')));

        line.erase(0, pos + 1);

        c.phoneNumber = line;

        customers.push_back(c);

    }

    inFile.close();

    cout << "Customers loaded from file.\n";
}

// Add a new booking

void addBooking()

{
    Booking b;

    cout << "Enter Booking ID: "; cin >> b.bookingID;

    cout << "Enter Hotel ID: "; cin >> b.hotelID;

    cout << "Enter Room ID: "; cin >> b.roomID;

    cout << "Enter Customer ID: "; cin >> b.customerID;

    cout << "Enter Check-in Date (YYYY-MM-DD): "; cin >> b.checkInDate;

    cout << "Enter Check-out Date (YYYY-MM-DD): "; cin >> b.checkOutDate;

    bookings.push_back(b);

    cout << "Booking added successfully!\n";

}

// View all bookings

void viewBookings()
 {
    for (const auto& b : bookings)
        {
        cout << "Booking ID: " << b.bookingID << "\nHotel ID: " << b.hotelID << "\nRoom ID: " << b.roomID

             << "\nCustomer ID: " << b.customerID << "\nCheck-in Date: " << b.checkInDate

             << "\nCheck-out Date: " << b.checkOutDate << "\n\n";
    }
}

// Search booking by ID
void searchBookingById()
{
    string bookingId;
    cout << "Enter Booking ID to search: "; cin >> bookingId;

    for (const auto& b : bookings)
        {
        if (b.bookingID == bookingId)

        {
            cout << "Booking ID: " << b.bookingID << "\nHotel ID: " << b.hotelID << "\nRoom ID: " << b.roomID
                 << "\nCustomer ID: " << b.customerID << "\nCheck-in Date: " << b.checkInDate
                 << "\nCheck-out Date: " << b.checkOutDate << "\n";
            return;

        }
    }
    cout << "Booking not found!\n";
}

// Update booking details
void updateBooking()

 {
    string bookingId;
    cout << "Enter Booking ID to update: "; cin >> bookingId;

    for (auto& b : bookings)

        {
        if (b.bookingID == bookingId)

        {
            cout << "Enter New Hotel ID: "; cin >> b.hotelID;

            cout << "Enter New Room ID: "; cin >> b.roomID;

            cout << "Enter New Customer ID: "; cin >> b.customerID;

            cout << "Enter New Check-in Date (YYYY-MM-DD): "; cin >> b.checkInDate;

            cout << "Enter New Check-out Date (YYYY-MM-DD): "; cin >> b.checkOutDate;

            cout << "Booking updated successfully!\n";

            return;

        }
    }
    cout << "Booking not found!\n";
}

// Delete a booking

void deleteBooking()

{
    string bookingId;

    cout << "Enter Booking ID to delete: "; cin >> bookingId;


    for (auto it = bookings.begin(); it != bookings.end(); ++it)


        {
        if (it->bookingID == bookingId)

         {
            bookings.erase(it);

            cout << "Booking deleted successfully!\n";

            return;
        }

    }
    cout << "Booking not found!\n";

}


// List bookings by hotel

void listBookingsByHotel()

 {

    string hotelId;

    cout << "Enter Hotel ID to list bookings: "; cin >> hotelId;

    for (const auto& b : bookings)
        {
        if (b.hotelID == hotelId)
        {
            cout << "Booking ID: " << b.bookingID << "\nRoom ID: " << b.roomID << "\nCustomer ID: " << b.customerID
                 << "\nCheck-in Date: " << b.checkInDate << "\nCheck-out Date: " << b.checkOutDate << "\n\n";
        }
    }
}

// Save bookings to file
void saveBookingsToFile()
{
    ofstream outFile("bookings.txt");
    for (const auto& b : bookings)
        {
        outFile << b.bookingID << "|" << b.hotelID << "|" << b.roomID << "|" << b.customerID
                << "|" << b.checkInDate << "|" << b.checkOutDate << "\n";
    }
    outFile.close();
    cout << "Bookings saved to file.\n";
}

// Load bookings from file
void loadBookingsFromFile()
{
    ifstream inFile("bookings.txt");
    if (!inFile) {
        cout << "No bookings file found.\n";
        return;
    }
    bookings.clear();
    Booking b;
    string line;
    while (getline(inFile, line))
        {
        size_t pos = 0;
        b.bookingID = line.substr(0, (pos = line.find('|')));

        line.erase(0, pos + 1);

        b.hotelID = line.substr(0, (pos = line.find('|')));
        line.erase(0, pos + 1);

        b.roomID = line.substr(0, (pos = line.find('|')));
        line.erase(0, pos + 1);

        b.customerID = line.substr(0, (pos = line.find('|')));
        line.erase(0, pos + 1);

        b.checkInDate = line.substr(0, (pos = line.find('|')));
        line.erase(0, pos + 1);

        b.checkOutDate = line;
        bookings.push_back(b);
    }
    inFile.close();
    cout << "Bookings loaded from file.\n";
}
// Add a new bill
void generateBill()
 {
    Billing b;

    cout << "Enter Hotel ID: "; cin >> b.hotelID;

    cout << "Enter Room ID: "; cin >> b.roomID;

    cout << "Enter Customer ID: "; cin >> b.customerID;

    cout << "Enter Room Charge: "; cin >> b.roomCharge;

    b.taxes = b.roomCharge * 0.1; // Assuming 10% tax

    b.totalAmount = b.roomCharge + b.taxes;

    bills.push_back(b);

    cout << "Bill generated successfully!\n";
}

// View all bills
void viewBills()
{
    for (const auto& b : bills)
        {
        cout << "Hotel ID: " << b.hotelID << "\nRoom ID: " << b.roomID << "\nCustomer ID: " << b.customerID

             << "\nRoom Charge: " << fixed << setprecision(2) << b.roomCharge

             << "\nTaxes: " << b.taxes << "\nTotal Amount: " << b.totalAmount << "\n\n";

    }
}

// Save bills to file
void saveBillsToFile()
{
    ofstream outFile("bills.txt");
    for (const auto& b : bills)
        {
        outFile << b.hotelID << "|" << b.roomID << "|" << b.customerID << "|" << b.roomCharge << "|" << b.taxes << "|" << b.totalAmount << "\n";
    }
    outFile.close();
    cout << "Bills saved to file.\n";
}

// Load bills from file
void loadBillsFromFile()
{
    ifstream inFile("bills.txt");
    if (!inFile) {
        cout << "No bills file found.\n";
        return;
    }
    bills.clear();
    Billing b;
    string line;
    while (getline(inFile, line))

        {
        size_t pos = 0;
        b.hotelID = line.substr(0, (pos = line.find('|')));
        line.erase(0, pos + 1);
        b.roomID = line.substr(0, (pos = line.find('|')));
        line.erase(0, pos + 1);
        b.customerID = line.substr(0, (pos = line.find('|')));
        line.erase(0, pos + 1);
        b.roomCharge = stof(line.substr(0, (pos = line.find('|'))));
        line.erase(0, pos + 1);
        b.taxes = stof(line.substr(0, (pos = line.find('|'))));
        line.erase(0, pos + 1);
        b.totalAmount = stof(line);
        bills.push_back(b);
    }
    inFile.close();
    cout << "Bills loaded from file.\n";
}

// Payment simulation
void processPayment()
{
    string hotelId, roomId, customerId;
    cout << "Enter Hotel ID: "; cin >> hotelId;
    cout << "Enter Room ID: "; cin >> roomId;
    cout << "Enter Customer ID: "; cin >> customerId;

    for (auto& b : bills)
        {
        if (b.hotelID == hotelId && b.roomID == roomId && b.customerID == customerId) {
            cout << "Processing payment for:\n";
            cout << "Hotel ID: " << b.hotelID << "\nRoom ID: " << b.roomID << "\nCustomer ID: " << b.customerID
                 << "\nTotal Amount: " << b.totalAmount << "\n";
            cout << "Payment Successful!\n";
            return;
        }
    }
    cout << "No matching bill found!\n";
}

// Staff Structure
struct Staff
{
    string hotelId;
    string staffId;
    string name;
    string shift; // Morning, Evening, Night
    vector<string> assignedTasks;
};

vector<Staff> staffList;

// Inventory Item Structure
struct InventoryItem

{
    string hotelId;
    string itemName;
    int quantity;
    int lowThreshold; // Alert threshold for low stock
};

vector<InventoryItem> inventory;

// ----- HOUSEKEEPING MANAGEMENT -----

// Add a housekeeping request
void addHousekeepingRequest()
{
    HousekeepingRequest req;

    cout << "Enter Hotel ID: "; cin >> req.hotelId;

    cout << "Enter Request ID: "; cin >> req.requestId;

    cout << "Enter Room ID: "; cin >> req.roomId;

    cout << "Enter Description: "; cin.ignore(); getline(cin, req.description);

    req.status = "Pending";

    requests.push_back(req);

    cout << "Housekeeping request added successfully!\n";

}

// Update the status of a housekeeping request
void updateHousekeepingStatus()

{
    string requestId;

    cout << "Enter Request ID to update: "; cin >> requestId;

    for (auto& req : requests)

        {

        if (req.requestId == requestId)

        {
            cout << "Enter New Status (Pending/In Progress/Completed): ";

            cin >> req.status;

            cout << "Status updated successfully!\n";

            return;
        }
    }

    cout << "Request ID not found!\n";
}

// View all housekeeping requests for a specific hotel

void viewHousekeepingRequests()
{
    string hotelId;

    cout << "Enter Hotel ID to view requests: "; cin >> hotelId;


    for (const auto& req : requests) {

        if (req.hotelId == hotelId) {

            cout << "Request ID: " << req.requestId << "\nRoom ID: " << req.roomId

                 << "\nDescription: " << req.description << "\nStatus: " << req.status << "\n\n";

        }
    }
}

// ----- STAFF SCHEDULING AND TASK MANAGEMENT -----

// Add a new staff member
void addStaff()
 {
    Staff s;
    cout << "Enter Hotel ID: "; cin >> s.hotelId;

    cout << "Enter Staff ID: "; cin >> s.staffId;

    cout << "Enter Name: "; cin.ignore(); getline(cin, s.name);

    cout << "Enter Shift (Morning/Evening/Night): "; cin >> s.shift;

    staffList.push_back(s);

    cout << "Staff member added successfully!\n";

}

// Assign a task to a staff member

void assignTaskToStaff()

{
    string staffId, task;

    cout << "Enter Staff ID to assign task: "; cin >> staffId;

    cout << "Enter Task: "; cin.ignore(); getline(cin, task);


    for (auto& s : staffList)

        {

        if (s.staffId == staffId)

         {
            s.assignedTasks.push_back(task);

            cout << "Task assigned successfully!\n";

            return;

        }
    }
    cout << "Staff ID not found!\n";
}

// View staff details and assigned tasks for a specific hotel
void viewStaffDetails()

{
    string hotelId;

    cout << "Enter Hotel ID to view staff details: "; cin >> hotelId;


    for (const auto& s : staffList)

        {

        if (s.hotelId == hotelId)

        {
            cout << "Staff ID: " << s.staffId << "\nName: " << s.name << "\nShift: " << s.shift << "\nTasks:\n";

            for (const auto& task : s.assignedTasks)

            {
                cout << "- " << task << "\n";

            }
            cout << "\n";

        }

    }
}

void checkAvailability() {
    // Check room availability
}

void bookRoom() {
    // Book a room
}

void cancelBooking() {
    // Cancel a room booking
}

void checkIn() {
    // Check in a guest
}

void checkOut() {
    // Check out a guest
}

void getRoomDetails() {
    // Get details of a specific room
}


    // List all available rooms


void updateGuestInfo() {
    // Update information for a guest
}



void generateInvoice() {
    // Generate an invoice for a guest
}

void handleComplaints() {
    // Handle guest complaints
}

void provideRoomService() {
    // Provide room service to a guest
}

void scheduleCleaning() {
    // Schedule cleaning for a room
}

void manageStaff() {
    // Manage hotel staff
}

void organizeEvents() {
    // Organize events in the hotel
}

void provideTourInformation() {
    // Provide information about local tours
}

void manageInventory() {
    // Manage hotel inventory
}

void offerPromotions() {
    // Offer promotions to guests
}

void collectFeedback() {
    // Collect feedback from guests
}

void updateRoomRates() {
    // Update room rates
}

void manageReservations() {
    // Manage reservations
}

void handleSpecialRequests() {
    // Handle special requests from guests
}

void provideTransportation() {
    // Provide transportation services
}

void manageSecurity() {
    // Manage hotel security
}

void conductSurveys() {
    // Conduct surveys for guest satisfaction
}

void maintainWebsite() {
    // Maintain the hotel website
}
// ----- INVENTORY MANAGEMENT -----

// Add inventory item

void addInventoryItem()

{
    InventoryItem item;

    cout << "Enter Hotel ID: "; cin >> item.hotelId;

    cout << "Enter Item Name: "; cin.ignore(); getline(cin, item.itemName);

    cout << "Enter Quantity: "; cin >> item.quantity;

    cout << "Enter Low Stock Threshold: "; cin >> item.lowThreshold;

    inventory.push_back(item);

    cout << "Inventory item added successfully!\n";

}

// Update inventory quantity

void updateInventoryQuantity()

 {
    string hotelId, itemName;

    int quantity;

    cout << "Enter Hotel ID: "; cin >> hotelId;

    cout << "Enter Item Name to update: "; cin.ignore(); getline(cin, itemName);

    cout << "Enter New Quantity: "; cin >> quantity;

    for (auto& item : inventory)
        {
        if (item.hotelId == hotelId && item.itemName == itemName)

         {

            item.quantity = quantity;

            cout << "Inventory updated successfully!\n";

            return;

        }
    }
    cout << "Item not found in inventory!\n";
}

// View inventory for a specific hotel

void viewInventory()
{
    string hotelId;

    cout << "Enter Hotel ID to view inventory: "; cin >> hotelId;

    for (const auto& item : inventory)

        {

        if (item.hotelId == hotelId)

        {
            cout << "Item Name: " << item.itemName << "\nQuantity: " << item.quantity

                 << "\nLow Stock Threshold: " << item.lowThreshold << "\n\n";

        }
    }
}

// Check for low inventory levels for a specific hotel

void checkLowInventory()

 {
    string hotelId;

    cout << "Enter Hotel ID to check low inventory: "; cin >> hotelId;


    cout << "Low Inventory Items:\n";

    for (const auto& item : inventory)

        {
        if (item.hotelId == hotelId && item.quantity <= item.lowThreshold) {

            cout << "- " << item.itemName << " (Quantity: " << item.quantity << ")\n";

        }
    }
}

// ----- SECURITY SYSTEM - ACCESS CONTROL -----

void lockRoomDoor(int roomNumber)

{
    if (roomNumber <= 0 || roomNumber > 500)

        {
        cout << "Invalid room number! Please enter a number between 1 and 500." << endl;

        return;

    }
    rooms2[roomNumber].doorLocked = true;

    cout << "Room " << roomNumber << " door is now locked." << endl;

}

void unlockRoomDoor(int roomNumber, string digitalKey)

{
    if (roomNumber <= 0 || roomNumber > 500)

        {

        cout << "Invalid room number! Please enter a number between 1 and 500." << endl;

        return;
    }

    if (rooms2[roomNumber].digitalKey == digitalKey)

    {
        rooms2[roomNumber].doorLocked = false;

        cout << "Room " << roomNumber << " door unlocked successfully." << endl;

    }
    else

        {

        cout << "Invalid digital key! Door remains locked." << endl;

    }

}

bool verifyBiometricAccess(int roomNumber, const string& biometricData) {
    // Validate room number
    if (roomNumber <= 0 || roomNumber > 500) {
        cout << "Invalid room number! Please enter a number between 1 and 500." << endl;
        return false;
    }

    // Check if the room exists in the map
    if (rooms2.find(roomNumber) == rooms2.end()) {
        cout << "Room " << roomNumber << " does not exist." << endl;
        return false;
    }

    // Verify biometric data
    if (rooms2[roomNumber].biometricData == biometricData) {
        cout << "Biometric access verified for Room " << roomNumber << "." << endl;
        return true;
    } else {
        cout << "Biometric access denied for Room " << roomNumber << "." << endl;
        return false;
    }
}


// ----- SECURITY SYSTEM - SURVEILLANCE -----

void monitorCCTV(int cameraID)

 {

    if (find(cameras.begin(), cameras.end(), cameraID) != cameras.end())

        {

        cout << "Monitoring CCTV Camera ID: " << cameraID << ". Displaying live feed..." << endl;

    }

    else

    {
        cout << "Camera ID " << cameraID << " not found in the system." << endl;

    }
}

void alertSecurity(int roomNumber)

{

    if (roomNumber <= 0 || roomNumber > 500)

        {

        cout << "Invalid room number! Please enter a number between 1 and 500." << endl;

        return;

    }
    cout << "Security Alert! Immediate response required for Room " << roomNumber << "." << endl;
}

// ----- SECURITY SYSTEM - EMERGENCY SYSTEMS -----

void triggerEmergencyAlarm(string location)

{
    cout << "Emergency alarm triggered at location: " << location << "." << endl;

    cout << "Please evacuate the area immediately!" << endl;

}

void guideEvacuation(string location)
{

    cout << "Guiding evacuation for location: " << location << "." << endl;

    cout << "Follow the green exit signs to the nearest safe zone." << endl;

}
//Helper function to validate time slots

bool isValidTimeSlot(const string &timeSlot)

{
    return !timeSlot.empty() && timeSlot.find('-') != string::npos;

}

// Helper function to display a divider

void printDivider()
 {
    cout << string(50, '-') << endl;
}

// Function to book a facility for a given time slot

void bookFacility(const string &facility, const string &userName, const string &timeSlot) {
    if (amenities.find(facility) == amenities.end()) {
        cout << "Facility " << facility << " not found." << endl;
        return;
    }
    if (!isValidTimeSlot(timeSlot)) {
        cout << "Invalid time slot. Please enter a valid time slot (e.g., 10:00 AM - 11:00 AM)." << endl;
        return;
    }

    for (const auto &booking : amenities[facility]) {
        if (booking.timeSlot == timeSlot) {
            cout << "Time slot " << timeSlot << " is already booked for " << facility << "." << endl;
            return;
        }
    }

    amenities[facility].push_back({userName, timeSlot});
    cout << "Booking successful! " << userName << " booked " << facility << " for time slot: " << timeSlot << "." << endl;
}

// Function to view all bookings for a facility

void viewFacilityBookings(const string &facility)

{
    if (amenities.find(facility) == amenities.end())

        {
        cout << "Facility " << facility << " not found." << endl;
        return;
    }

    printDivider();

    cout << "Bookings for " << facility << ":\n";

    for (const auto &booking : amenities[facility]) {

        cout << " - " << booking.userName << " | Time Slot: " << booking.timeSlot << endl;

    }
    if (amenities[facility].empty()) {
        cout << "No bookings found for " << facility << "." << endl;
    }
    printDivider();
}

// Function to schedule an event in a conference room

void scheduleEvent(const string &room, const string &organizer, const string &date, const vector<string> &equipment) {
    // Check if the conference room exists
    if (conferenceRooms.find(room) == conferenceRooms.end()) {
        cout << "Conference room " << room << "  found." << endl;
        return;
    }

    // Check if the date is already reserved by another event
    for (const auto &event : conferenceRooms[room]) {
        if (event.date == date) {
            cout << "The room " << room << " is already reserved for date: " << date << " by " << event.organizerName << "." << endl;
            return;
        }
    }

    // Add the new event to the schedule
    conferenceRooms[room].push_back({organizer, date, equipment});
    cout << "Event scheduled successfully! " << organizer << " reserved " << room << " for date: " << date << "." << endl;
}


// Function to view all events in a conference room

void viewRoomEvents(const string &room) {

    if (conferenceRooms.find(room) == conferenceRooms.end())

        {

        cout << "Conference room " << room << "  found." << endl;

        return;
    }

    printDivider();

    cout << "Events for " << room << ":\n";

    for (const auto &event : conferenceRooms[room])

        {

        cout << " - Organizer: " << event.organizerName << " | Date: " << event.date << " | Equipment: ";

        for (const string &equipment : event.equipmentRequested)

        {
            cout << equipment << " ";

        }
        cout << endl;

    }
    if (conferenceRooms[room].empty())

    {
        cout << "No events found for " << room << "." << endl;
    }
    printDivider();
}

// Helper function to ensure room exists

void ensureRoomExists(int roomNumber)

{
    if (roomNumber < 0 || roomNumber >= rooms1.size())

        {
        cout << "Invalid room number!" << endl;

        return;
    }

    if (rooms1[roomNumber].temperature == 0)

        {
        // Initialize room with default settings

        rooms1[roomNumber] = {24.0, false, 0, 0, 30, "None"};

        cout << "Room " << roomNumber << " initialized with default settings." << endl;

    }
}

// Room Control System

void setRoomTemperature(int roomNumber, float temperature)

{
    ensureRoomExists(roomNumber);

    rooms1[roomNumber].temperature = temperature;

    cout << "Room " << roomNumber << " temperature set to " << fixed << setprecision(1) << temperature << "°C" << endl;

}

void controlLights(int roomNumber, bool state)

{

    ensureRoomExists(roomNumber);

    rooms1[roomNumber].lightsOn = state;

    cout << "Lights in Room " << roomNumber << " turned " << (state ? "ON" : "OFF") << endl;

}


void setCurtainPosition(int roomNumber, int position)
{
    ensureRoomExists(roomNumber);

    if (position < 0 || position > 100)
    {
        cout << "Invalid curtain position! Must be between 0 and 100." << endl;
        return;
    }

    rooms1[roomNumber].curtainPosition = position;

    cout << "Curtains in Room " << roomNumber << " set to position " << position << "%" << endl;
}
// Energy Efficiency

void monitorEnergyUsage(int roomNumber)
{
    ensureRoomExists(roomNumber);

    rooms1[roomNumber].energyUsage = (rooms1[roomNumber].lightsOn ? 10 : 0) +

                                     static_cast<int>(rooms1[roomNumber].temperature) / 2 +

                                     rooms1[roomNumber].curtainPosition / 10;

    cout << "Energy usage in Room " << roomNumber << ": " << rooms1[roomNumber].energyUsage << " units" << endl;
}

void optimizeEnergyConsumption(int roomNumber)

{

    ensureRoomExists(roomNumber);

    rooms1[roomNumber].lightsOn = false;

    rooms1[roomNumber].temperature = 24.0;

    rooms1[roomNumber].curtainPosition = 0;

    cout << "Energy settings optimized for Room " << roomNumber << "." << endl;
}

// Entertainment

void connectToStreamingService(int roomNumber, string serviceName)

{
    ensureRoomExists(roomNumber);

    rooms1[roomNumber].streamingService = serviceName;

    cout << "Room " << roomNumber << " connected to " << serviceName << "." << endl;
}

void controlTVVolume(int roomNumber, int volumeLevel)

{
    ensureRoomExists(roomNumber);

    if (volumeLevel < 0 || volumeLevel > 100)

        {

        cout << "Invalid volume level! Must be between 0 and 100." << endl;

        return;

    }
    rooms1[roomNumber].tvVolume = volumeLevel;

    cout << "TV volume in Room " << roomNumber << " set to " << volumeLevel << endl;
}

// Display Room Status

void displayRoomStatus(int roomNumber)

 {
    ensureRoomExists(roomNumber);

    Roomdetails &room = rooms1[roomNumber];

    cout << "\nRoom " << roomNumber << " Status:" << endl;

    cout << "Temperature: " << room.temperature << "°C" << endl;

    cout << "Lights: " << (room.lightsOn ? "ON" : "OFF") << endl;

    cout << "Curtains: " << room.curtainPosition << "%" << endl;

    cout << "Energy Usage: " << room.energyUsage << " units" << endl;

    cout << "Streaming Service: " << room.streamingService << endl;

    cout << "TV Volume: " << room.tvVolume << "\n" << endl;

}

// Display Room Status

void displayRoomStatus1(int roomNumber)

 {
    ensureRoomExists(roomNumber);

    Roomdetails &room = rooms1[roomNumber];

    cout << "\nRoom " << roomNumber << " Status:" << endl;

    cout << "Temperature: " << room.temperature << "°C" << endl;

    cout << "Lights: " << (room.lightsOn ? "ON" : "OFF") << endl;

    cout << "Curtains: " << room.curtainPosition << "%" << endl;

    cout << "Energy Usage: " << room.energyUsage << " units" << endl;

    cout << "Streaming Service: " << room.streamingService << endl;

    cout << "TV Volume: " << room.tvVolume << "\n" << endl;

}

// Function to simulate water conservation

void optimizeWaterUsage(WaterConservation& water)

 {

    cout << "Water Conservation Systems:\n";

    cout << (water.faucetOptimized ? "Faucets are optimized for water usage.\n" : "Faucets are not optimized. Please consider upgrading.\n");

    cout << (water.showerOptimized ? "Showers are optimized for water usage.\n" : "Showers are not optimized. Please consider upgrading.\n");

}

// Function to simulate green energy integration

void integrateGreenEnergy(GreenEnergy& energy)

 {
    cout << "Green Energy Integration:\n";
    cout << (energy.solarPowerEnabled ? "Solar-powered amenities are enabled.\n" : "Solar-powered amenities are not enabled.\n");

    cout << (energy.energyEfficientElevators ? "Energy-efficient elevators are in use.\n" : "Energy-efficient elevators are not in use.\n");

    cout << (energy.energyEfficientAppliances ? "Energy-efficient appliances are in use.\n" : "Energy-efficient appliances are not in use.\n");

}

// Function to manage waste
void manageWaste(WasteManagement& waste)
{
    cout << "Waste Management Systems:\n";
    cout << (waste.smartTrashBins ? "Smart trash bins for recycling and waste sorting are in use.\n" : "Smart trash bins are not in use.\n");
    cout << (waste.compostingFoodWaste ? "Food waste is being composted from hotel kitchens.\n" : "Food waste is not being composted.\n");
}

// Function to simulate contactless wellness services

void contactlessWellnessServices()

 {

    int choice;

    cout << "\n--- Contactless Wellness Services ---\n";

    cout << "1. Virtual yoga or fitness sessions accessible from in-room screens\n";

    cout << "2. Smart beds that adjust for optimal sleep comfort\n";

    cout << "3. Go Back\n";

    cout << "Enter your choice: ";

    cin >> choice;

    switch (choice)

    {
        case 1:

            cout << "Virtual yoga or fitness session is now available on your in-room screen.\n";

            break;

        case 2:
            cout << "Smart bed adjustments have been made for your optimal sleep comfort.\n";
            break;

        case 3:
            cout << "Returning to the main menu.\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
            break;

    }
}

// Function to simulate air quality monitoring

void airQualityMonitoring()

 {
    int choice;

    cout << "\n--- Air Quality Monitoring ---\n";


    cout << "1. Real-time updates on room air quality\n";

    cout << "2. View air purification system status\n";

    cout << "3. Go Back\n";

    cout << "Enter your choice: ";

    cin >> choice;


    switch (choice)

    {
        case 1:
            cout << "Real-time updates: The air quality in your room is optimal.\n";
            break;

        case 2:
            cout << "The air purification system is running smoothly, ensuring clean air.\n";
            break;

        case 3:
            cout << "Returning to the main menu.\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
            break;

    }
}

// Function to simulate health check services

void healthCheckServices()

{
    int choice;

    cout << "\n--- Health Check Services ---\n";

    cout << "1. Integration with telemedicine platforms for virtual doctor consultations\n";

    cout << "2. Health monitoring devices in wellness centers or spas\n";

    cout << "3. Go Back\n";

    cout << "Enter your choice: ";

    cin >> choice;

    switch (choice)
     {

        case 1:
            cout << "You can now book a virtual doctor consultation via our telemedicine platform.\n";
            break;
        case 2:
            cout << "Health monitoring devices are now available in the wellness center/spa.\n";
            break;
        case 3:
            cout << "Returning to the main menu.\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
            break;
    }
}

// Function to simulate immersive gaming experiences

void immersiveGamingExperience()
{
    int choice;
    cout << "\n--- Immersive Gaming Experiences ---\n";

    cout << "1. In-room AR/VR gaming setup\n";

    cout << "2. Hotel-wide scavenger hunt using augmented reality\n";

    cout << "3. Go Back\n";

    cout << "Enter your choice: ";

    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "In-room AR/VR gaming setup is now ready for you. Enjoy the experience!\n";
            break;

        case 2:
            cout << "Hotel-wide scavenger hunt started. Use the AR app on your device to begin the hunt!\n";
            break;

        case 3:
            cout << "Returning to the main menu.\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
            break;

    }
}

// Function to simulate interactive art displays

void interactiveArtDisplays()

{
    int choice;

    cout << "\n--- Interactive Art Displays ---\n";

    cout << "1. Digital art changing based on guest interactions\n";

    cout << "2. Digital art changing based on guest preferences\n";

    cout << "3. Go Back\n";

    cout << "Enter your choice: ";

    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Enjoy the interactive digital art that changes as you move closer to it.\n";
            break;

        case 2:
            cout << "The digital art now adjusts based on your preferences and interactions. Enjoy!\n";
            break;

        case 3:
            cout << "Returning to the main menu.\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
            break;

    }

}

// Function to simulate live streaming of hotel events

void liveStreamingHotelEvents()

{
    int choice;

    cout << "\n--- Live Streaming of Hotel Events ---\n";

    cout << "1. Stream concert events\n";

    cout << "2. Stream shows\n";

    cout << "3. Stream conferences\n";

    cout << "4. Go Back\n";

    cout << "Enter your choice: ";

    cin >> choice;

    switch (choice)
    {

        case 1:
            cout << "Streaming the concert live directly to your room. Enjoy the music!\n";
            break;

        case 2:
            cout << "Streaming live shows now available in your room.\n";
            break;

        case 3:
            cout << "Live streaming of conferences is now available. Watch the event in real-time.\n";
            break;

        case 4:
            cout << "Returning to the main menu.\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
            break;

    }
}
// Main menu

void hotelManagementMenu()

{
    int choice;

    do {
        cout << "\nHotel Management Menu:\n";

        cout << "1. Add Hotel\n";

        cout << "2. View Hotels\n";

        cout << "3. Save Hotels to File\n";

        cout << "4. Load Hotels from File\n";

        cout << "5. Add Predefined Hotels\n";

        cout << "6. Search Hotel by Name Prefix\n";

        cout << "7. Search Hotel by Location\n";

        cout << "8. Search Hotel by Ratings\n";

        cout << "9. Sort Hotels by Name\n";

        cout << "10. Sort Hotels by Ratings\n";

        cout << "11. Sort Hotels by ID\n";

        cout << "12. Select Hotel by ID\n";  // New option

        cout << "13. Search Hotel on Google Maps\n";

        cout << "0. Exit\n";

        cout << "Enter choice: ";

        cin >> choice;

        switch (choice)

        {
            case 1:

                addHotel();

                break;

            case 2:
                viewHotels();
                break;

            case 3:
                saveHotelsToFile();
                break;

            case 4:
                loadHotelsFromFile();
                break;

            case 5:
                addPredefinedHotels();
                break;

            case 6:
                searchHotelByNamePrefix();
                break;

            case 7:
                searchHotelByLocation();
                break;

            case 8:
                searchHotelByRatings();
                break;

            case 9:
                sortHotelsByName();
                break;

            case 10:
                sortHotelsByRatings();
                break;

            case 11:
                sortHotelsById();
                break;

            case 12:
                selectHotel();  // Call the new function here
             break;

             case 13:
                 searchHotelOnGoogleMaps();

                break;

            case 0:

                cout << "Exiting Hotel Management...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    }
     while (choice != 0);

}

// Room Management Menu

void roomManagementMenu()

{
    int choice;

    do
        {
        cout << "\n----- Room Management System -----\n";

    cout << "1. Add Room\n";

    cout << "2. View Rooms\n";

    cout << "3. Update Room Price\n";

    cout << "4. Update Room Availability\n";

    cout << "5. Delete Room\n";

    cout << "6. List Available Rooms\n";

    cout << "7. List All Rooms\n";

    cout << "8. List Rooms by Hotel\n";

    cout << "9. Save Rooms to File\n";

    cout << "10. Load Rooms from File\n";

    cout << "11. Search Rooms by Price Range\n";

    cout << "12. Filter Rooms by Availability and Price\n";

    cout << "13. Sort Rooms by Price\n";

    cout << "14. Sort Rooms by Availability\n";

    cout<<"15.Add Predefined Room to file\n";

    cout << "0. Exit\n";

    cout << "Enter your choice: ";

    cin >>choice;


        switch (choice) {

            case 1:
                addRoom();
                break;

            case 2:
                viewRooms();
                break;

            case 3:
                updateRoomPrice();
                break;

            case 4:
                updateRoomAvailability();
                break;

            case 5:
                deleteRoom();
                break;

            case 6:
                listAvailableRooms();
                break;

            case 7:
                listAllRooms();
                break;

            case 8:
                listRoomsByHotel();
                break;

            case 9:
                saveRoomsToFile();
                break;

            case 10:
                loadRoomsFromFile();
                break;

            case 11:
                searchRoomsByPriceRange();
                break;

            case 12:
                filterRoomsByAvailabilityAndPrice();
                break;

            case 13:
                sortRoomsByPrice();
                break;

            case 14:
                sortRoomsByAvailability();
                break;

            case 15:
                addPredefinedRooms();
                break;

            case 0:
                cout << "Exiting the system Room...\n";
                break;

            default:
                cout << "Invalid choice! .\n";
                break;
        }

    }


        while (choice != 0);


}

// Customer Management Menu

void customerManagementMenu()
{
    int choice;

    do
        {
        cout << "\nCustomer Management Menu:\n";

        cout << "1. Add Customer\n";

        cout << "2. View Customers\n";

        cout << "3. Search Customer by ID\n";

        cout << "4. Update Customer\n";

        cout << "5. Delete Customer\n";

        cout << "6. List Customers by Name\n";

        cout << "7. Save Customers to File\n";

        cout << "8. Load Customers from File\n";

        cout << "0. Exit\n";

        cout << "Enter choice: ";

        cin >> choice;

        switch (choice)

         {
            case 1:
                addCustomer();
                break;

            case 2:
                viewCustomers();
                break;

            case 3:
                searchCustomerById();
                break;

            case 4:
                updateCustomer();
                break;

            case 5:
                deleteCustomer();
                break;

            case 6:
                listCustomersByName();
                break;

            case 7:
                saveCustomersToFile();
                break;

            case 8:
                loadCustomersFromFile();
                break;

            case 0:
                cout << "Exiting Customer Management...\n";
                break;

            default:
                cout << "Invalid choice!\n";

        }

    }
    while (choice != 0);
}
// Booking Management Menu

void bookingManagementMenu()

{
    int choice;

    do {

        cout << "\nBooking Management Menu:\n";

        cout << "1. Add Booking\n";

        cout << "2. View Bookings\n";

        cout << "3. Search Booking by ID\n";

        cout << "4. Update Booking\n";

        cout << "5. Delete Booking\n";

        cout << "6. List Bookings by Hotel\n";

        cout << "7. Save Bookings to File\n";

        cout << "8. Load Bookings from File\n";

        cout << "0. Exit\n";

        cout << "Enter choice: ";

        cin >> choice;

        switch (choice)
        {
            case 1:
                addBooking();
                break;

            case 2:
                viewBookings();
                break;

            case 3:
                searchBookingById();
                break;

            case 4:
                updateBooking();
                break;

            case 5:
                deleteBooking();
                break;

            case 6:
                listBookingsByHotel();
                break;

            case 7:
                saveBookingsToFile();
                break;

            case 8:
                loadBookingsFromFile();
                break;

            case 0:
                cout << "Exiting Booking Management...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    }
    while (choice != 0);

}
// Billing Management Menu

void billingManagementMenu()

{
    int choice;

    do {

        cout << "\nBilling and Payment Management Menu:\n";

        cout << "1. Generate Bill\n";

        cout << "2. View Bills\n";

        cout << "3. Save Bills to File\n";

        cout << "4. Load Bills from File\n";

        cout << "5. Process Payment\n";

        cout << "0. Exit\n";

        cout << "Enter choice: ";

        cin >> choice;

        switch (choice)

        {
            case 1:
                generateBill();
                break;

            case 2:
                viewBills();
                break;

            case 3:
                saveBillsToFile();
                break;

            case 4:
                loadBillsFromFile();
                break;

            case 5:
                processPayment();
                break;

            case 0:
                cout << "Exiting Billing and Payment Management...\n";
                break;

            default:
                cout << "Invalid choice!\n";

        }

    }
    while (choice != 0);
}


// ----- MAIN MENU -----

void operationsManagementMenu()

{
    int choice;

    do {

        cout << "\nOperations Management Menu:\n";

        cout << "1. Add Housekeeping Request\n";

        cout << "2. Update Housekeeping Status\n";

        cout << "3. View Housekeeping Requests\n";

        cout << "4. Add Staff Member\n";

        cout << "5. Assign Task to Staff\n";

        cout << "6. View Staff Details\n";

        cout << "7. Add Inventory Item\n";

        cout << "8. Update Inventory Quantity\n";

        cout << "9. View Inventory\n";

        cout << "10. Check Low Inventory Levels\n";

        cout << "0. Exit\n";

        cout << "Enter choice: ";

        cin >> choice;

        switch (choice)

        {
            case 1:
                addHousekeepingRequest();
                break;

            case 2:
                updateHousekeepingStatus();
                break;

            case 3:
                viewHousekeepingRequests();
                break;

            case 4:
                addStaff();
                break;

            case 5:
                assignTaskToStaff();
                break;

            case 6:
                viewStaffDetails();
                break;

            case 7:
                addInventoryItem();
                break;

            case 8:
                updateInventoryQuantity();
                break;
            case 9:
                viewInventory();
                break;

            case 10:
                checkLowInventory();
                break;

            case 0:
                cout << "Exiting Operations Management...\n";
                break;

            default:
                cout << "Invalid choice!\n";

        }

    }
    while (choice != 0);
}


// ----- MAIN MENU -----

void securityManagementMenu()
{
    int choice, roomNumber, cameraID;

    string input, location;

    while (true)

        {

        cout << "\n--- Smart Security System ---\n";

        cout << "1. Lock Room Door\n";

        cout << "2. Unlock Room Door\n";

        cout << "3. Verify Biometric Access\n";

        cout << "4. Monitor CCTV Camera\n";

        cout << "5. Alert Security\n";

        cout << "6. Trigger Emergency Alarm\n";

        cout << "7. Guide Evacuation\n";

        cout << "8. Add CCTV Camera\n";

        cout << "9. List CCTV Cameras\n";

        cout << "10. Update Room Digital Key\n";

        cout << "11. Display Room Status\n";

        cout << "12. Exit\n";

        cout << "Enter your choice: ";

        cin >> choice;

        if (choice == 12)
            {
            cout << "Exiting Security System. Stay safe!" << endl;

            break;
        }

        switch (choice)

        {
            case 1:
                cout << "Enter Room Number: ";

                cin >> roomNumber;

                lockRoomDoor(roomNumber);

                break;

            case 2:

                cout << "Enter Room Number: ";

                cin >> roomNumber;

                cout << "Enter Digital Key: ";

                cin >> input;

                unlockRoomDoor(roomNumber, input);

                break;

            case 3:

                cout << "Enter Room Number: ";

                cin >> roomNumber;

                cout << "Enter Biometric Data: ";

                cin.ignore();

                getline(cin, input);

                verifyBiometricAccess(roomNumber, input);

                break;

            case 4:

                cout << "Enter CCTV Camera ID: ";

                cin >> cameraID;

                monitorCCTV(cameraID);

                break;

            case 5:

                cout << "Enter Room Number to alert security: ";

                cin >> roomNumber;

                alertSecurity(roomNumber);

                break;

            case 6:

                cout << "Enter Emergency Location: ";

                cin.ignore();

                getline(cin, location);

                triggerEmergencyAlarm(location);

                break;

            case 7:

                cout << "Enter Evacuation Location: ";

                cin.ignore();

                getline(cin, location);

                guideEvacuation(location);

                break;

            case 8:

                cout << "Enter CCTV Camera ID to add: ";

                cin >> cameraID;

                if (find(cameras.begin(), cameras.end(), cameraID) == cameras.end())

                    {
                    cameras.push_back(cameraID);

                    cout << "CCTV Camera ID " << cameraID << " has been added to the system." << endl;

                }

                else

                    {

                    cout << "CCTV Camera ID " << cameraID << " already exists." << endl;

                }

                break;

            case 9:

                cout << "Available CCTV Cameras:\n";

                for (int cam : cameras) {

                    cout << " - Camera ID: " << cam << endl;

                }

                if (cameras.empty()) {

                    cout << "No cameras available." << endl;

                }

                break;

            case 10:

                cout << "Enter Room Number: ";

                cin >> roomNumber;

                cout << "Enter New Digital Key: ";

                cin >> input;

                rooms2[roomNumber].digitalKey = input;

                cout << "Digital key for Room " << roomNumber << " has been updated successfully." << endl;
                break;

            case 11:

                cout << "Room Status:\n";

                for (const auto& room : rooms2)

                {
                    cout << "Room " << room.first << ": Door " << (room.second.doorLocked ? "Locked" : "Unlocked") << ", Key: " << room.second.digitalKey << endl;

                }
                break;

            default:

                cout << "Invalid choice! Please select a valid option." << endl;

        }
    }
}
// Function to handle the main menu of the system
void amenitiesManagementMenu()
{
    int choice;
    string facility, userName, timeSlot, room, organizer, date, equipmentItem;
    vector<string> equipment;

    while (true)
        {
        cout << "\n--- Amenities Management System ---\n";
        cout << "1. Book a Facility\n";
        cout << "2. View Facility Bookings\n";
        cout << "3. Schedule an Event in Conference Room\n";
        cout << "4. View Conference Room Events\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 5)
            {
            cout << "Exiting Amenities Management System. Goodbye!" << endl;
            break;
        }

        switch (choice)
        {
            case 1:
                cout << "Enter Facility (Spa, Gym, Pool): ";
                cin >> facility;

                cout << "Enter Your Name: ";
                cin.ignore();

                getline(cin, userName);

                cout << "Enter Time Slot (e.g., 10:00 AM - 11:00 AM): ";
                getline(cin, timeSlot);

                bookFacility(facility, userName, timeSlot);

                break;

            case 2:
                cout << "Enter Facility (Spa, Gym, Pool): ";
                cin >> facility;
                viewFacilityBookings(facility);
                break;

          case 3: {
                cout << "Enter Conference Room (e.g., Conference Room 1): ";
                cin.ignore();
                getline(cin, room);
                cout << "Enter Organizer Name: ";
                getline(cin, organizer);
                cout << "Enter Event Date (e.g., 2025-01-15): ";
                getline(cin, date);
                vector<string> equipment; // Declare equipment vector here
                cout << "Enter Equipment (type 'done' to finish): ";
                while (true) {
                    getline(cin, equipmentItem);
                    if (equipmentItem == "done") break;
                    equipment.push_back(equipmentItem);
                }
                scheduleEvent(room, organizer, date, equipment);
                break;
            }

            case 4:
                cout << "Enter Conference Room (e.g., Conference Room 1): ";
                cin.ignore();

                getline(cin, room);
                viewRoomEvents(room);

                break;

            default:
                cout << "Invalid choice! Please select a valid option." << endl;
        }
    }
}

// Main Program to take user input
void roomAutomationMenu()
{
    int choice, roomNumber;

    float temperature;

    int position, volumeLevel;

    bool lightState;

    string serviceName;

    while (true)
        {
        cout << "\n--- Smart Room Automation System ---\n";

        cout << "1. Set Room Temperature\n";

        cout << "2. Control Lights\n";

        cout << "3. Set Curtain Position\n";

        cout << "4. Monitor Energy Usage\n";

        cout << "5. Optimize Energy Consumption\n";

        cout << "6. Connect to Streaming Service\n";

        cout << "7. Control TV Volume\n";

        cout << "8. Display Room Status\n";

        cout << "9. Exit\n";

        cout << "Enter your choice: ";

        cin >> choice;


        if (choice == 9) break;


        cout << "Enter Room Number: ";

        cin >> roomNumber;


        switch (choice)
        {
            case 1:

                cout << "Enter desired temperature: ";

                cin >> temperature;

                setRoomTemperature(roomNumber, temperature);

                break;

            case 2:
                cout << "Turn lights ON (1) or OFF (0): ";

                cin >> lightState;

                controlLights(roomNumber, lightState);

                break;
            case 3:
                cout << "Enter curtain position (0-100): ";

                cin >> position;

                setCurtainPosition(roomNumber, position);

                break;

            case 4:

                monitorEnergyUsage(roomNumber);

                break;

            case 5:

                optimizeEnergyConsumption(roomNumber);

                break;

            case 6:
                cout << "Enter streaming service name: ";
                cin.ignore(); // Clear newline left in the buffer
                getline(cin, serviceName);
                connectToStreamingService(roomNumber, serviceName);
                break;

            case 7:
                cout << "Enter TV volume level (0-100): ";
                cin >> volumeLevel;
                controlTVVolume(roomNumber, volumeLevel);
                break;

            case 8:
                displayRoomStatus(roomNumber);
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }

    cout << "Exiting system. Goodbye!" << endl;
}


// Function to handle eco-friendly actions using switch-case
void handleEcoFriendlyActions()
{
    int choice;

    WaterConservation water = {true, true};

     // Faucets and showers are optimized

    GreenEnergy energy = {true, true, true};

    // All green energy initiatives are active

    WasteManagement waste = {true, true};

      // Smart bins and composting are in use

    while (true) {

        cout << "\n--- Eco-Friendly and Green Initiatives ---\n";

        cout << "1. View Water Conservation Systems\n";

        cout << "2. View Green Energy Integration\n";

        cout << "3. View Waste Management Systems\n";

        cout << "4. Exit\n";

        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice)
         {
            case 1:
                optimizeWaterUsage(water);
                break;

            case 2:
                integrateGreenEnergy(energy);
                break;

            case 3:
                manageWaste(waste);
                break;

            case 4:
                cout << "Exiting Eco-Friendly and Green Initiatives.\n";
                return;

            default:
                cout << "Invalid choice! Please enter a valid option.\n";
        }
    }
}

// Function to handle the main health and wellness menu
void healthWellnessMenu()
{
    int choice;
    while (true)
        {
        cout << "\n--- Health & Wellness ---\n";

        cout << "1. Contactless Wellness Services\n";

        cout << "2. Air Quality Monitoring\n";

        cout << "3. Health Check Services\n";

        cout << "4. Exit\n";

        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice)

    {
            case 1:
                contactlessWellnessServices();
                break;
            case 2:
                airQualityMonitoring();
                break;
            case 3:
                healthCheckServices();
                break;
            case 4:
                cout << "Exiting the Health & Wellness menu. Goodbye!\n";
                return;
            default:
                cout << "Invalid choice! Please try again.\n";
                break;
        }
    }
}

// Function to handle the main entertainment menu
void entertainmentMenu() {
    int choice;
    while (true)
        {
        cout << "\n--- Unique Entertainment Features ---\n";

        cout << "1. Immersive Gaming Experiences\n";

        cout << "2. Interactive Art Displays\n";

        cout << "3. Live Streaming of Hotel Events\n";

        cout << "4. Exit\n";

        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice)
        {
            case 1:
                immersiveGamingExperience();
                break;

            case 2:
                interactiveArtDisplays();
                break;

            case 3:
                liveStreamingHotelEvents();
                break;

            case 4:
                cout << "Exiting the Entertainment Features menu. Goodbye!\n";
                return;

            default:
                cout << "Invalid choice! Please try again.\n";
                break;
        }
    }
}

int main()
 {
    int choice;

     cout << "\n\t\t\t\t *************";
    cout << "\n\t\t\t\t WELCOME TO";
    cout << "\n\t\t\t\t *************";
    cout << "\n\t\t\t\t * SMART HOTEL MANAGEMENT  SYSTEM*";
    cout << "\n\t\t\t\t *************";
    cout << "\n\t\t\tPress any key to continue.";
    cin >> choice;

    while (true)
        {
        // Main menu display
        cout << "\n--- Main Hotel Management System ---\n";

        cout << "1. Hotel Management\n";

        cout << "2. Room Management\n";

        cout << "3. Customer Management\n";

        cout << "4. Booking Management\n";

        cout << "5. Billing Management\n";

        cout << "6. Operations Management\n";

        cout << "7. Security Management\n";

        cout << "8. Amenities Management\n";

        cout << "9. Room Automation\n";

        cout << "10. Eco-Friendly Actions\n";

        cout << "11. Health & Wellness\n";

        cout << "12. Entertainment\n";

        cout << "13. Exit\n";

        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice)
        {
            case 1:
                hotelManagementMenu();  // Call hotel management menu function
                break;

            case 2:
                roomManagementMenu();   // Call room management menu function
                break;

            case 3:
                customerManagementMenu();  // Call customer management menu function
                break;

            case 4:
                bookingManagementMenu();   // Call booking management menu function
                break;

            case 5:
                billingManagementMenu();  // Call billing management menu function
                break;

            case 6:
                operationsManagementMenu();  // Call operations management menu function
                break;

            case 7:
                securityManagementMenu();   // Call security management menu function
                break;

            case 8:
                amenitiesManagementMenu();  // Call amenities management menu function
                break;

            case 9:
                roomAutomationMenu();   // Call room automation menu function
                break;

            case 10:
                handleEcoFriendlyActions();   // Call eco-friendly actions menu function
                break;

            case 11:
                healthWellnessMenu();   // Call health and wellness menu function
                break;

            case 12:
                entertainmentMenu();  // Call entertainment menu function
                break;

            case 13:
                cout << "Exiting the system. Goodbye!" << endl; // Exit message
                return 0;  // Exit the program

            default:
                cout << "Invalid choice. Please enter a valid option!" << endl;
        }
    }

    return 0;
}



