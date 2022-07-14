#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cmath>
using namespace std;

class ZernoProgramm_Supply {
    public:
    void Logistic_Demand(){
            int transport;
            cout << "Company logistics for employees only" << endl;
            cout << "Enter the vehicle entered by the client (0) Train or (1) Truck" << endl;
            cin >> transport;
            int kolvo, dis;
            cout << "Enter number of wagons" << endl;
            cin >> kolvo;
            int tran = (kolvo*1000)*1.5;
            cout << tran << endl;
            cout << "The recent distance was -" << endl;
            cin >> dis;
            int patrol = 100;
            cout << "Fuel price 100 RUB per kilometer" << endl;
            int FORMULA_y = kolvo*dis*tran*patrol;
            cout << FORMULA_y << "RUB" << endl;
            // Formula : y = T*S1/S2 * A * B
            
            int zer,wage,f_for;
            int G_for = 12500;
            cout << "Buying grain, entering values is written by hand " << endl;
            cin >> zer;
            cout << "The salary of workers is calculated according to the formula - f * G ( f - The number of workers, and G - the minimum wage) " << endl;
            cout << "F( ) = " << endl;
            cin >> f_for;
            cout << "The wages for the work of workers amounted to -" << f_for*G_for << "RUB" << endl;
            
            cout << "For convenience, a receipt was created for the expense item of the company Zerno" << endl;
            int itogoDemand = f_for*G_for+FORMULA_y;
            time_t seconds = time(NULL);
            tm* timeinfo = localtime(&seconds);
            cin.get();
            fstream demand;
            demand.open("DemandZZerno.txt", ios::out);
            if (demand.is_open()){
                demand << "Start filling out the questionnaire:"<<asctime(timeinfo);
                demand << "Company expenses:"<<itogoDemand<< " RUB"<< endl ;
                demand << "amount of wagons :"<<tran<< " RUB" << endl;
                demand << "The recent distance was:"<<dis<< " km" << endl;
                demand << "Buying grain:"<<zer<< " RUB" << endl;
                demand << "The salary of workers:"<<f_for*G_for<< " RUB" << endl;
                demand.close();
            }

        }
        void Train(){
            cout << "Excuse me, but more than 200t it is preferable to take the train. Since you charge so much, you get a bulk discount." << endl;
            int stoimosti;
            cin >> stoimosti;
            cout << double(pow(sqrt(stoimosti),3)) << "RUB" << endl;
        }
        void Supply(){
            cout << "The last purchased grain, enter its total in rubles. Also included is the old shopping database" << endl;
            int uwu;
            cin >> uwu;

            fstream demand;
            demand.open("DemandZZerno.txt", ios::out);
            if (demand.is_open()){
                demand << "Company expensive: "<<uwu+rand()<< "RUB" ;
                demand.close();
            }
            cout << "Company income:" << uwu+rand() << "RUB" << endl;
        }
};

class ZernoProgramm {
    public:
        void Bill(){
            string data, type,distance, auto1;
            int vol,rrr;
            time_t seconds = time(NULL);
            tm* timeinfo = localtime(&seconds);
            cout << "Time recorded automatically, now : "<< asctime(timeinfo) << endl << "Your full name" << endl;
            cin >> data;
            cout << "Grain crop -" << endl;
            cin >> type;
            cout << "The total price for which you are ready to take -" << endl;
            cin >> rrr;
            cout << "Volume - " << endl;
            cin >> vol;
            cout << "Place of delivery -" << endl;
            cin >> distance;
            cout << "Transportation distance - " << endl;
            cin >> auto1;
            cin.get();

            fstream Client;
            Client.open("DatasClient.txt", ios::out);
            if (Client.is_open()){
                Client << "Start filling out the questionnaire:"<<asctime(timeinfo);
                Client << "Full name " << data << endl;
                Client << "Grain type " << type << endl;
                Client << "Grain volume " << vol << endl;
                Client << "Place of delivery " << distance << endl;
                Client << "Transport distance " << auto1 << endl;
                Client << "The total cost " << vol*rrr << endl;
                Client.close();
            }
        }
        void Type(){
            cout << "The volume of grain crop you are interested in. (It is counted all at once in tons)" << endl;
            int answerVolume;
            cin >> answerVolume;
            cout << "you choosed" << answerVolume << " tons" << endl;
            cout << "Now you need to select the type of transport for further delivery" << endl;
            cout << "Grain crops available" << endl;
            cout << "1. Wheat" << endl << "2. Rye" << endl << "3. Oats" << endl << "4. Sorghum" << endl << "5. Corn" << endl << "6. Millet" << endl << "7. Barley" << endl;
            string answerType;
            cin >> answerType;
            cout << "Great choice" << endl;
            if (answerType == "Wheat"){
                int psheno;
                cout << "The price of the product for which you are ready to purchase from us";
                cin >> psheno;
                cout << "Total " << psheno*answerVolume << "RUB";
                int ur_huy = psheno*answerVolume;
                fstream myfile;
                myfile.open("Bill.txt", ios::out);
                if (myfile.is_open()){
                    myfile << "The cost of grain was:" << ur_huy;
                    myfile.close();
                }
            } else if (answerType == "Rye"){
                int rozh;
                cout << "The price of the product for which you are ready to purchase from us";
                cin >> rozh;
                cout << "total " << rozh*answerVolume << "RUB";
                int ur_huy = rozh*answerVolume;
                fstream myfile;
                myfile.open("Bill.txt", ios::out);
                if (myfile.is_open()){
                    myfile << "The cost of grain was:" << ur_huy;

                    myfile.close();
                }
            } else if (answerType == "Oats"){
                int oves;
                cout << "The price of the product for which you are ready to purchase from us";
                cin >> oves;
                cout << "total " << oves*answerVolume << "RUB";
                int ur_huy = oves*answerVolume;
                fstream myfile;
                myfile.open("Bill.txt", ios::out);
                if (myfile.is_open()){
                    myfile << "The cost of grain was:" << ur_huy;

                    myfile.close();
                }
            } else if (answerType == "Sorghum"){
                int sorgo;
                cout << "The price of the product for which you are ready to purchase from us";
                cin >> sorgo;
                cout << "total " << sorgo*answerVolume << "RUB";
                int ur_huy = sorgo*answerVolume;
                fstream myfile;
                myfile.open("Bill.txt", ios::out);
                if (myfile.is_open()){
                    myfile << "The cost of grain was:" << ur_huy;

                    myfile.close();
                }
            } else if (answerType == "Corn"){
                int corn;
                cout << "The price of the product for which you are ready to purchase from us";
                cin >> corn;
                cout << "total " << corn*answerVolume << "RUB";
                int ur_huy = corn*answerVolume;
                fstream myfile;
                myfile.open("Bill.txt", ios::out);
                if (myfile.is_open()){
                    myfile << "The cost of grain was:" << ur_huy;

                    myfile.close();
                }
            } else if (answerType == "Millet"){
                int proso;
                cout << "The price of the product for which you are ready to purchase from us";
                cin >> proso;
                cout << "total " << proso*answerVolume << "RUB";
                int ur_huy = proso*answerVolume;
                fstream myfile;
                myfile.open("Bill.txt", ios::out);
                if (myfile.is_open()){
                    myfile << "The cost of grain was:" << ur_huy;

                    myfile.close();
                }
            } else if (answerType == "Barley"){
                int chu;
                cout << "The price of the product for which you are ready to purchase from us";
                cin >> chu;
                cout << "total " << chu*answerVolume << "RUB";
                int ur_huy = chu*answerVolume;
                fstream myfile;
                myfile.open("Bill.txt", ios::out);
                if (myfile.is_open()){
                    myfile << "The cost of grain was:" << ur_huy;

                    myfile.close();
                }
            }
            cout << "Choose the method of transportation Train or Truck" << endl;
            string answerTransition;
            cin >> answerTransition;
            if (answerTransition == "Train"){
                cout << "how many tonns go you get" << endl;
                int answ;
                cin >> answ;
                cout << "you need trains - " << answ/30 << endl;
                cout << "Total " << answ*1000 << endl;
                int res = answ*1000;
                fstream myfile;
                myfile.open("Bill.txt", ios::out);
                if (myfile.is_open()){
                    myfile << "Total cost including 3% tax (Transport): " << res;
                    myfile.close();
            }} else if (answerTransition == "Фура") {
                cout << "how many tonns go you get" << endl;
                int answ;
                cin >> answ;
                cout << "you need trucks - " << answ/10 << endl;
                cout << "Total " << answ*15000 << endl;
                int res = answ*15000;
                fstream myfile;
                myfile.open("Bill.txt", ios::out);
                if (myfile.is_open()){
                    myfile << "Total cost including 3% tax (Transport): " << res;
                    myfile.close();
                }
            }


            fstream myfile;
            
            myfile.open("Bill.txt", ios::out);
            if (myfile.is_open()){
                myfile << "Your choice:" << answerType << endl;
                myfile << "You need tons:" << answerVolume << endl;
                myfile << "Your vehicle: " << answerTransition << endl;
                myfile.close();
            }

            system("pause>0");
            Bill();
        }
        void Distance() {
            cout << "Our elevator is located in Kolomna. Select a city from the list below where you would like to deliver grain." << endl << "Our prices depend on the county where you live." << endl;
            cout << "1. Moscow region" << endl << "2. Lipetsk region" << endl << "3. Tula region" << endl << "4. Ryazan region" << endl << "5. Kaluga region" << endl;
            string answerDistance;
            int anttt;
            cin >> answerDistance;
            cin >> anttt;
            if (anttt == 5){
                string y = "start https://yandex.ru/maps/?ll=37.569124%2C54.858522&mode=routes&rtext=55.103034%2C38.752809~54.513845%2C36.261215&rtt=auto&ruri=ymapsbm1%3A%2F%2Fgeo%3Fll%3D38.753%252C55.103%26spn%3D0.214%252C0.099%26text%3D%25D0%25A0%25D0%25BE%25D1%2581%25D1%2581%25D0%25B8%25D1%258F%252C%2520%25D0%259C%25D0%25BE%25D1%2581%25D0%25BA%25D0%25BE%25D0%25B2%25D1%2581%25D0%25BA%25D0%25B0%25D1%258F%2520%25D0%25BE%25D0%25B1%25D0%25BB%25D0%25B0%25D1%2581%25D1%2582%25D1%258C%252C%2520%25D0%259A%25D0%25BE%25D0%25BB%25D0%25BE%25D0%25BC%25D0%25BD%25D0%25B0~ymapsbm1%3A%2F%2Fgeo%3Fll%3D35.445%252C54.372%26spn%3D3.831%252C2.073%26text%3D%25D0%25A0%25D0%25BE%25D1%2581%25D1%2581%25D0%25B8%25D1%258F%252C%2520%25D0%259A%25D0%25B0%25D0%25BB%25D1%2583%25D0%25B6%25D1%2581%25D0%25BA%25D0%25B0%25D1%258F%2520%25D0%25BE%25D0%25B1%25D0%25BB%25D0%25B0%25D1%2581%25D1%2582%25D1%258C&z=8.47";
                system(y.c_str());
                cout << "The most comfortable route is 220km" << endl;
            } else if (anttt == 4) {
                string x = "start https://yandex.ru/maps/?ll=39.247180%2C54.866563&mode=routes&rtext=55.103034%2C38.752809~54.629565%2C39.741917&rtt=auto&ruri=ymapsbm1%3A%2F%2Fgeo%3Fll%3D38.753%252C55.103%26spn%3D0.214%252C0.099%26text%3D%25D0%25A0%25D0%25BE%25D1%2581%25D1%2581%25D0%25B8%25D1%258F%252C%2520%25D0%259C%25D0%25BE%25D1%2581%25D0%25BA%25D0%25BE%25D0%25B2%25D1%2581%25D0%25BA%25D0%25B0%25D1%258F%2520%25D0%25BE%25D0%25B1%25D0%25BB%25D0%25B0%25D1%2581%25D1%2582%25D1%258C%252C%2520%25D0%259A%25D0%25BE%25D0%25BB%25D0%25BE%25D0%25BC%25D0%25BD%25D0%25B0~&z=10";
                system(x.c_str());
                cout << "The most comfortable route is 340km" << endl;
            } else if (anttt == 3) {
                string z = "https://yandex.ru/maps/?ll=38.187171%2C54.648951&mode=routes&rtext=55.103034%2C38.752809~54.193122%2C37.617348&rtt=auto&ruri=ymapsbm1%3A%2F%2Fgeo%3Fll%3D38.753%252C55.103%26spn%3D0.214%252C0.099%26text%3D%25D0%25A0%25D0%25BE%25D1%2581%25D1%2581%25D0%25B8%25D1%258F%252C%2520%25D0%259C%25D0%25BE%25D1%2581%25D0%25BA%25D0%25BE%25D0%25B2%25D1%2581%25D0%25BA%25D0%25B0%25D1%258F%2520%25D0%25BE%25D0%25B1%25D0%25BB%25D0%25B0%25D1%2581%25D1%2582%25D1%258C%252C%2520%25D0%259A%25D0%25BE%25D0%25BB%25D0%25BE%25D0%25BC%25D0%25BD%25D0%25B0~&z=9.07";
                system(z.c_str());
                cout << "The most comfortable route is 181km" << endl;
            } else if (anttt == 2) {
                string a = "https://yandex.ru/maps/?ll=39.064787%2C53.874720&mode=routes&rtext=55.103034%2C38.752809~52.608826%2C39.599229&rtt=auto&ruri=ymapsbm1%3A%2F%2Fgeo%3Fll%3D38.753%252C55.103%26spn%3D0.214%252C0.099%26text%3D%25D0%25A0%25D0%25BE%25D1%2581%25D1%2581%25D0%25B8%25D1%258F%252C%2520%25D0%259C%25D0%25BE%25D1%2581%25D0%25BA%25D0%25BE%25D0%25B2%25D1%2581%25D0%25BA%25D0%25B0%25D1%258F%2520%25D0%25BE%25D0%25B1%25D0%25BB%25D0%25B0%25D1%2581%25D1%2582%25D1%258C%252C%2520%25D0%259A%25D0%25BE%25D0%25BB%25D0%25BE%25D0%25BC%25D0%25BD%25D0%25B0~&z=7.64";
                system(a.c_str());
                cout << "The most comfortable route is 84 km" << endl;
            } else if (anttt == 1) {
                string b = "https://yandex.ru/maps/?ll=38.187460%2C55.432836&mode=routes&rtext=55.103034%2C38.752809~55.753215%2C37.622504&rtt=auto&ruri=ymapsbm1%3A%2F%2Fgeo%3Fll%3D38.753%252C55.103%26spn%3D0.214%252C0.099%26text%3D%25D0%25A0%25D0%25BE%25D1%2581%25D1%2581%25D0%25B8%25D1%258F%252C%2520%25D0%259C%25D0%25BE%25D1%2581%25D0%25BA%25D0%25BE%25D0%25B2%25D1%2581%25D0%25BA%25D0%25B0%25D1%258F%2520%25D0%25BE%25D0%25B1%25D0%25BB%25D0%25B0%25D1%2581%25D1%2582%25D1%258C%252C%2520%25D0%259A%25D0%25BE%25D0%25BB%25D0%25BE%25D0%25BC%25D0%25BD%25D0%25B0~&z=9.51";
                system(b.c_str());
                cout << "The most comfortable route is 110km" << endl;
            }
            fstream myfile;
            
            myfile.open("Distance.txt", ios::out);
            if (myfile.is_open()){
                myfile << "Your direction is: " << answerDistance << endl;
                myfile.close();
            }
            Type();
        }
};

class ZernoProject {
    public:
        void Application() {
            int result;
            cout << "What do you want to do." << endl;
            cout << "1. What will the delivery schedule look like?" << endl << "2. Show the income/expenses since the last transaction." << endl << "3. Final receipt for payment and delivery." << endl;
            cin >> result;
            if (result == 1){
                ZernoProgramm Programm;
                Programm.Distance();
            } else if ( result == 2 ) {
                ZernoProgramm_Supply Zpr;
                Zpr.Supply();
                Zpr.Logistic_Demand();
            } else if ( result == 2 ) {
                cout << "Register first!"  << endl;
                Application();
            }
        }
};

int main() {
    ZernoProject Zerno;
    Zerno.Application();
    return 0;
}