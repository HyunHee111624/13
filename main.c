#include <stdio.h>
#include <stdlib.h>

struct student {
  int ID;
  char name[100];
  float score;
  };

int main(int argc, char *argv[])
{  
  
  struct student s1 = {123, "JUYEOP", 4.3};
  
  s1.ID = 123456;
  s1.name[0] = 'c';
  s1.score = 0.7;
  
  
  printf("%i\n", s1.ID);
  printf("%s\n", s1.name);
  printf("%f\n", s1.score);
    
  system("PAUSE");	
  return 0;
}
