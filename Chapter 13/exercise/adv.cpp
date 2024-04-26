#include "ads.h"
#include <iostream>

Advertising getAds()
{
    Advertising temp{};
    std::cout << "Quantos anúncios foram assistidos hoje? ";
    std::cin >> temp.ads_watched;
    
    std::cout << "Qual a porcentagem de cliques de usuários no anuncio? ";
    std::cin >> temp.percentage_click;

    std::cout << "Qual a media de ganhos por clique no anuncio? ";
    std::cin >> temp.average_earnings;

    return temp;
}

void printAds (const Advertising& ads)
{
    std::cout << "Quantidade de anuncios assistidos: " << ads.ads_watched << '\n';
    std::cout << "Porcentagem de usuários que clicaram no anuncio: " << ads.percentage_click << '\n';
    std::cout << "Média de ganhos por clique em anúncios: " << ads.average_earnings << '\n';
    std::cout << "Quantidade de dinheiro ganho no dia: " << (ads.ads_watched * ads.percentage_click / 100 * ads.average_earnings) << '\n';

    return;
}
