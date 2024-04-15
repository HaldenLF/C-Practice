// this function takes the year as input and returns the century

int centuryFromYear(int year) 
{
  int century = 0;
  
  if (year % 100 == 0) {
    century = year/100;
  } else if (year % 100 + 1) {
    century = year/100 +1;
  }
  return century;
}