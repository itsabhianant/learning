#include "d.hpp"

int main() {
    // Creating a Tour
    Tour asia;
    asia.title = "Tour to Asia";
    
    //Creating a country
    Country india;
    india.name = "India";

    //Creating cities for india
    City pune;
    pune.name = "Pune";
    pune.population = 31'20'000;
    pune.cost = 5043.56;

    City delhi;
    delhi.name = "Delhi";
    delhi.population = 1'90'00'000;
    delhi.cost = 4562.23;

    City chennai;
    chennai.name = "Chennai";
    chennai.population = 70'88'000;
    chennai.cost = 4987.45;

    //Adding the cities of to india;
    india.cities.push_back(pune);
    india.cities.push_back(delhi);
    india.cities.push_back(chennai);

    //Adding india to the asia tour
    asia.countries.push_back(india);

    //Adding a new country
    Country japan;
    japan.name = "Japan";

    //Creating cities for japan
    City kyoto;
    kyoto.name = "Kyoto";
    kyoto.population = 14'80'000;
    kyoto.cost = 2345.98;

    City osaka;
    osaka.name = "Osaka";
    osaka.population = 26'90'000;
    osaka.cost = 3542.45;

    City tokyo;
    tokyo.name = "Tokyo";
    tokyo.population= 1'40'00'000;
    tokyo.cost = 9234.34;

    //Adding the cities to japan
    japan.cities.push_back(kyoto);
    japan.cities.push_back(osaka);
    japan.cities.push_back(tokyo);

    //Adding japan to the asia tour
    asia.countries.push_back(japan);

    //Adding a new country
    Country china;
    china.name = "China";

    //Creating cities for china
    City beijing;
    beijing.name = "Beijing";
    beijing.population = 2'15'00'000;
    beijing.cost = 9304.23;

    City shenghai;
    shenghai.name = "Shenghai";
    shenghai.population = 2'63'00'000;
    shenghai.cost = 4523.23;

    City chengdu;
    chengdu.name = "Chengdu";
    chengdu.population = 1'63'00'000;
    chengdu.cost = 6342.42;

    //Adding the cities to china
    china.cities.push_back(beijing);
    china.cities.push_back(shenghai);
    china.cities.push_back(chengdu);

    //Adding china to the asia tour
    asia.countries.push_back(china);

    display(asia);

    return 0;
}