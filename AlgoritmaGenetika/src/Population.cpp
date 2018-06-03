#include "Population.h"
#include "../dewGraphicLib.h"

Population::Population(std::string target , int maks , float mutRate)
{

    this->target = target;
    this->maks = maks;
    this->mutationRate = mutRate;

    for (int a = 0 ; a<this->maks ; a++)
    {
        population[a] = new DNA(this->target.length());
    }




}

void Population::createMatingPool()
{

matingPool.clear();

    for (int a = 0 ; a<this->maks; a++)
    {
        int n = population[a]->fitness;


        for(int b = 0 ; b<n ; b++)
        {
            matingPool.push_back(this->population[a]);

        }


    }





}


void Population::generateNewPopulation()
{
    for (int a = 0 ;a<this->maks;a++)
    {
        int x = random (0 , matingPool.size()-1);
        int y = random (0, matingPool.size()-1);

        DNA *man = matingPool[x];
        DNA *girl = matingPool[y];

        DNA *child = man->mating(girl);
        //child.mutation(this->mutationRate);

        population[a]=child;



    }


    this->generation++;


}

void Population::calculateFitness()
{
    for(int a = 0 ; a< this->maks;a++)
    {
        population[a]->calculateFitness(this->target);


    }
}


void Population::evaluate()
{ cout<<"2"<<endl;
    int fitness=0;
    int arr=0;
    int h=0;
    gotoxy(50 ,0);
    cout<<"       POPULASI";



   for (int a = 0 ; a<this->maks ; a++)
   {




       if (fitness<population[a]->fitness)
       {
           fitness = population[a]->fitness;
           arr=a;
       }
        if(h>=25)h=0;
       gotoxy(50 ,h+1);

       cout<<population[a]->genes;
       h++;
   }





        gotoxy(0,0);
        cout<<"TARGET"<<endl;
        cout<<target<<endl<<endl;
        cout<<"Kalimat Terbaik"<<endl;
        cout<<population[arr]->getGenes()<<endl;
        cout<<"Kecocokan "<<population[arr]->getFitness()<<"%"<<endl;
        cout<<"Generation   : "<<this->generation;

        if(population[arr]->fitness>=100)
            getch();

}

