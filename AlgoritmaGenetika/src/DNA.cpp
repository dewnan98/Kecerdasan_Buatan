
#include "DNA.h"
#include  <cstdlib>
#include <iostream>
#include <string.h>
#include "../dewGraphicLib.h"
DNA::DNA(int num)
{

  for (int a = 0 ; a<num ; a++)
  {
      this->genes+=newChar();
  }



}

char DNA:: newChar()
{
    char c;
    int rand ;
    c = random(65,122);
if(c>=91 && c<=92)
    c=32;

    return c;

}

void DNA::calculateFitness(string target)
{

int score;
score = 0;

    for(int a = 0 ; a<target.length(); a++)
    {
        if(genes[a]==target[a])
        {
       score++;
        }
    }

    this->fitness=score*100/target.length();



}

DNA* DNA::mating(DNA *pasangan){

    int midpoint = random(0,this->genes.length());
    DNA* child = new DNA(this->genes.length());
    for (int a = 0 ; a<this->genes.length();a++)
    {
        if(a>midpoint)
        child->genes[a]=this->genes[a];
        else
            child->genes[a]=pasangan->genes[a];

    }



    return child;
}
