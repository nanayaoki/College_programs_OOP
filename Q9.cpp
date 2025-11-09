#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // Map to store Country -> Currency
    map<string, string> currencyMap;

    // Adding some countries and their currencies
    currencyMap["India"]             = "Indian Rupee (INR)";
    currencyMap["United States"]     = "US Dollar (USD)";
    currencyMap["United Kingdom"]    = "Pound Sterling (GBP)";
    currencyMap["Japan"]             = "Japanese Yen (JPY)";
    currencyMap["China"]             = "Chinese Yuan (CNY)";
    currencyMap["Russia"]            = "Russian Ruble (RUB)";
    currencyMap["Canada"]            = "Canadian Dollar (CAD)";
    currencyMap["Australia"]         = "Australian Dollar (AUD)";
    currencyMap["Germany"]           = "Euro (EUR)";
    currencyMap["France"]            = "Euro (EUR)";
    currencyMap["Italy"]             = "Euro (EUR)";
    currencyMap["Brazil"]            = "Brazilian Real (BRL)";
    currencyMap["South Africa"]      = "South African Rand (ZAR)";
    currencyMap["Saudi Arabia"]      = "Saudi Riyal (SAR)";
    currencyMap["UAE"]               = "UAE Dirham (AED)";
    currencyMap["Nepal"]             = "Nepalese Rupee (NPR)";
    currencyMap["Sri Lanka"]         = "Sri Lankan Rupee (LKR)";
    currencyMap["Bangladesh"]        = "Bangladeshi Taka (BDT)";
    currencyMap["Pakistan"]          = "Pakistani Rupee (PKR)";
    currencyMap["Switzerland"]       = "Swiss Franc (CHF)";
    currencyMap["Mexico"]            = "Mexican Peso (MXN)";
    currencyMap["Turkey"]            = "Turkish Lira (TRY)";

    cout << "====== Country – Currency Chart ======\n";
    for (auto it = currencyMap.begin(); it != currencyMap.end(); it++) {
        cout << it->first << " → " << it->second << endl;
    }

    // Optional: search a country's currency
    string searchCountry;
    cout << "\nEnter a country to search its currency: ";
    getline(cin, searchCountry);

    if (currencyMap.find(searchCountry) != currencyMap.end()) {
        cout << "Currency of " << searchCountry << " is: "
             << currencyMap[searchCountry] << endl;
    } else {
        cout << "Country not found in list!" << endl;
    }

    return 0;
}
