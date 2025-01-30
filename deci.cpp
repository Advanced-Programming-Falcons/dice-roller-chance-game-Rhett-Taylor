#include <iostream>
#include "dice.hpp"
#include <cstdlib>
#include <ctime>
#include <string>
int rollDice(int high){
    return (rand()%5) + 1;

}
Die::Die(int sides): sides(sides){
cout << "e";
}
int Die::Roll(){
return (rand()%sides)+1;
  }