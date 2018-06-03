
#include <iostream>
#include "Population.h"
#include "DNA.h"
#include "dewGraphicLib.h"
#include <ctime>
#include <cstdlib>
using namespace std;

string target = "Aku Sih Selalu Sayang Kamu Selamanya";
int maxPopulation = 2000;
float mutationRate = 0.01;
void run();
void createPopulation();
 Population *population;
int main()
{
srand(time(0));

    population = new Population(target , maxPopulation , mutationRate);

    run();


}


void run ()
{
    while (true)
    {
        population->calculateFitness();
        population->createMatingPool();

        population->generateNewPopulation();
        population->calculateFitness();
        population->evaluate();



    }
}
