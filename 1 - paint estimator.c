#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  float wallWidth = 0.0;
  float wallHeight = 0.0;
  float wallArea = 0.0;
  float gallonsPaintNeeded = 0.0;
  int cansNeeded = 0;
  
  float squareFeetPerGallons = 350.0;
  float gallonsPerCan = 1.0;
  
  printf("Enter wall height (feet): \n");
  scanf("%f", &wallHeight);
  
  printf("Enter wall width (feet): \n");
  scanf("%f", &wallWidth);
  
  if(wallWidth < 0.0 && wallHeight < 0.0){
      printf("Invalid entry");
  }
  else{
    wallArea = wallWidth * wallHeight;
    printf("The wall area is: %f\n", wallArea);
    
    gallonsPaintNeeded = wallArea/squareFeetPerGallons;
    printf("Paint Needed: %f gallons\n", gallonsPaintNeeded);
    
    gallonsPaintNeeded = ceil(gallonsPaintNeeded);
    cansNeeded = gallonsPaintNeeded/gallonsPerCan;
    printf("Cans needed: %d can(s)\n", cansNeeded);
  }
  return 1;
}
