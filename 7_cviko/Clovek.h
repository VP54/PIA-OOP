
#include <typeinfo>
#include <algorithm>
#include <fstream>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;
/*  */
class Clovek
{

public:

        bool zkontroluj_vysku(double vyska);
        double zadej_vysku();
        bool check_vek(int age);
        int zadej_vek();
        std::string zadej_jmeno();
        std::string zadej_prijmeni();
        
        std::string zadej_vzdelani();
        std::string map_vzdelani(int id_vzdelani);

        void vypis_info(std::vector<tuple <std::string, std::string, int, double, std::string>> person);
        std::string string_to_lower(std::string to_transform);
        void zapis_do_souboru(std::vector<tuple <std::string, std::string, int, double, std::string>> person);

};


