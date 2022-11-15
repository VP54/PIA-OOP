
#include <iostream>
#include <cmath>
#include <typeinfo>
#include <fstream>
#include "Clovek.cpp"
#include <string>
#include <vector>
#include <algorithm>    // std::sort
using namespace std;
#include <fstream>

std::string should_continue(){
    std::string should_cont;

    std::cout << "Zadej Y/N pokud chces/nechces pokracovat: ";
    std::cin >> should_cont;
    if(should_cont == "Y"){
        return "true";
    }
    else if (should_cont == "N"){
        return "false";
    }
    else {
        //std::cout << "Nezadal jsi ani Y/N prosim zadej spravne :) ";
        return "invalid";
    }
}


int main(){
    std::string temp_jmeno, temp_prijmeni, temp_vzdelani;
    double temp_vyska;
    int temp_vek;
    std::string should_cont = "true";

    std::vector<tuple <std::string, std::string, int, double, std::string>> person;

   while(should_cont == "true"){

        temp_jmeno = zadej_jmeno();
        temp_vek = zadej_vek();
        temp_prijmeni = zadej_prijmeni();
        temp_vyska = zadej_vysku();
        temp_vzdelani = zadej_vzdelani();

        person.push_back(make_tuple(temp_prijmeni, temp_jmeno, temp_vek, temp_vyska, temp_vzdelani));

        should_cont = should_continue();
        while (should_cont == "invalid"){
            should_cont = should_continue();
            if (should_cont != "invalid"){
            }
        }
    }

    std::sort(person.begin(), person.end());

    vypis_info(person);
    zapis_do_souboru(person);
};