#include<iostream>

int Fibb(){
  int tab[30];
  tab[0] = tab[1] = 1;
  for(int i = 2 ; i < 30; i++){
    tab[i]=tab[i-1]+tab[i-2];
  }
  for(int i = 0 ; i < 30 ; i++){
    std::cout << tab[i] << " , ";
  }
  std::cout << std::endl;
  return 0;
}