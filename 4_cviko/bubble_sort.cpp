#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>


std::vector<int> nacti_soubor(){
    std::vector<int> vstupni_vektor;
    int vstupni_data;
    
    //Nacti data
    std::ifstream cteni_soubor("./data.txt");

    while (cteni_soubor >> vstupni_data){
        vstupni_vektor.push_back(vstupni_data);
    }

    return vstupni_vektor;
}

std::vector<int> prohod_poradi(std::vector<int> vektor, int i){
    
    int temp = vektor[i];
    vektor[i] = vektor[i + 1];
    vektor[i + 1] = temp;

    return vektor;
}

std::vector<int> setrid_pole(std::vector<int> vektor){
    
    for (int step = 0; step < vektor.size(); ++step) {
        for (int i = 0; i < vektor.size() - step; ++i) {
            if (vektor[i] > vektor[i + 1]) {
                //std::cout << vektor[i] << "-----" << vektor[i+1] << "\n";
                vektor = prohod_poradi(vektor, i);
            
            }
        }
    }

    return vektor;
}


void vytvor_soubor(std::vector<int> vektor ){
    std::ofstream zapis("./data_file.txt");
    
    for (int i = 0; i < vektor.size(); i++) {
        zapis << vektor[i];
        zapis << '\n';
    }
}

int main(){
    // Zadefinuju si promenne
    std::vector<int> vektor;
    std::vector<int> setrizeny_vektor;
    int test_val; 

    vektor = nacti_soubor();  
    
    setrizeny_vektor = setrid_pole(vektor);

    vytvor_soubor(setrizeny_vektor);
}
