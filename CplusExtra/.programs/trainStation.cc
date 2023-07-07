#include <iostream>
#include <cstdio>

struct stationInfo{

    std::string stationName;
    int trainSize;
    std::string trainName;
    std::string stationRoute;

};

enum customerStationSelected{

stationLocal,
stationForeign,

};


class trains{
    public:
    char arrived;
    bool gettingUsed = true;
    std::string stationName;

        void moving() {
            std::cout << "The train is currently moving to its route " << '\n';
        }

        void halt() {
            std::cout << "The train is halted at the station " << '\n';
        }

        void gettingPassenger() {
                std::cout << "The train is getting passenger in station " << stationName << '\n';
        }
};

class trainLocal : public trains {

	;

};

class trainForeign : public trains {


    ;


};

void ticketPrint(stationInfo &stations);
void stationDestinations(stationInfo &stations, std::string stationRoute);
void printStationTrainBoard(trainLocal &changeBoard);
void printStationTrainBoard(trainForeign &changeBoard);

int main() {

    std::string yes("yes");
    std::string no("no");
    char Y('Y');
    char N('N');

    std::string getCustomerTicket;
    std::string customerStationPicked;

    customerStationSelected customerStations = stationLocal;

    stationInfo station1;
    stationInfo station2;


        station1. stationName = "WDR 2"; // Local station
        station1. trainName = "Crescent";
        station1. trainSize = 46;
        station1. stationRoute = "Sydney - New South Wales to Cairns";


            station2. stationName = "SWR 3"; // Foreign station
            station2. trainName = "Transilien";
            station2. trainSize = 34;
            station2. stationRoute = "Nashville - Tennessee to New Orleans";

        trainLocal stationLocalBoard;
        trainLocal trainLocal;
        
        trainForeign stationForeignBoard;
        trainForeign trainForeign;

        
        stationLocalBoard. stationName = "Metro Local";
        stationLocalBoard. gettingUsed = true;
        stationLocalBoard. arrived = Y;

        stationForeignBoard. stationName = "Metro Foreign";
        stationForeignBoard. gettingUsed = true;
        stationForeignBoard. arrived = N;



                std::cout << "{------------------------::: :: STATION BOARD :: :::------------------------}\n" << '\n' << '\n';

                std::cout << "                            " << "  ( Local Stations  )     " << "     " << '\n' << '\n';
                    printStationTrainBoard(stationLocalBoard);
                     std::cout << '\n' << '\n';
                std::cout << "                            " << "  ( Foreign Stations )    " << "     " << '\n' << '\n';
                    printStationTrainBoard(stationForeignBoard);
                std::cout << '\n' << '\n';

                std::cout << "{---------------------------------------------------------------------------}\n" << '\n' << '\n';

                // stationLocalBoard. gettingPassenger();
                // stationForeignBoard. gettingPassenger();



                	std::cout << "Choose a station to get ticket. (L | F)\n" << '\n';
                	std::cin >> customerStationPicked;





    switch(customerStations){

        case stationLocal:
        						std::cout << "Returning? " << '\n';
                                std::cout << "Answer: ";
                                    std::cin >> getCustomerTicket;

                                if(getCustomerTicket == "yes" || getCustomerTicket == yes) {
                                    ticketPrint(station1);
                                }
                                
                                else if(getCustomerTicket == "no" || getCustomerTicket == no) {
                                    stationDestinations(station1, "New South Wales to Cairns - Sydney");
                                    ticketPrint(station1);

                                }
        break;

        case stationForeign:                         
                                std::cout << "Returning? " << '\n';
                                std::cout << "Answer: ";
                                    std::cin >> getCustomerTicket;

                                if(getCustomerTicket == "yes" || getCustomerTicket == yes) {
                                    ticketPrint(station2);
                                }
                                
                                else if(getCustomerTicket == "no" || getCustomerTicket == no) {      
                                    stationDestinations(station2, "Tennessee to New Orleans - Nashville");
                                    ticketPrint(station2);

                                }
        break;

    }
        
    return 0;
};

void printStationTrainBoard(trainLocal &changeBoard) {
    
        std::cout << "                             > Station Name: " << changeBoard. stationName << '\n';
        std::cout << "                             >  Operational: " <<changeBoard. gettingUsed << '\n';
        std::cout << "                             >      Arrived: " << changeBoard. arrived << '\n';
            
}
void printStationTrainBoard(trainForeign &changeBoard) {
    
        std::cout << "                             > Station Name: " << changeBoard. stationName << '\n';
        std::cout << "                             >  Operational: " <<changeBoard. gettingUsed << '\n';
        std::cout << "                             >      Arrived: " << changeBoard. arrived << '\n';
      
}
void ticketPrint(stationInfo &stations) {

    std::cout << " {------" << "----------------------- Ticket Info -----------------------" << "------} " << '\n';

        std::cout << "               > " << "Station name: " << stations.stationName << " " <<  '\n';
        std::cout << "               > " << "Train destination: " << stations.stationRoute << " " <<  '\n';
        std::cout << "               > " << "Train Name: " << stations.trainName << " " << '\n';
        std::cout << "               > " << "Train Size: " <<stations.trainSize << " " << '\n';
    std::cout << " {------"  << "-----------------------------------------------------------" << "------} " << '\n';
    
}
void stationDestinations(stationInfo &stations, std::string stationRoute) {
    stations. stationRoute = stationRoute;
}
void checkTrain(trains &trainInfo) {
    
    std::cout << "Train Status" << '\n';
    

}
