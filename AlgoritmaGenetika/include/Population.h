
#include "DNA.h"
#include <iostream>
#include <string.h>
#include <vector>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
class Population
{

    private:
    DNA *population[2000];
    std::string target;
    std::string best;
    int maks;

    float mutationRate;
    int generation=0;
   std::vector <DNA *> matingPool;


    public:
        Population(std::string target , int maks , float mutRate);

        void createMatingPool();
        void generateNewPopulation();
        void calculateFitness();
        void evaluate();
};

