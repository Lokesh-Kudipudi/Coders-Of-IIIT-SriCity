// Problem 1

//Assume decimal base of 7 ( 0 to 6)

// year -- Day ----- remainder when divided with 7 -- assigned number(reamainder + leap years occured so far)

// 1900 -- Monday -- 3 -- (3)
// 1901 --Tuesday -- 4 -- (4)
// 1902 -- Wednesday -- 5 -- (5)
// 1903 -- Thursday -- 6 -- (6)
// 1904 -- Friday -- 0 -- leapyear -- (0)
// 1905 -- Sunday -- 1 -- (2 == remainder + no of leap years occured soo far)
// 1906 -- Monday --2 -- (3)
// 1907 -- Tuesday -- 3 -- (4)
// 1908 -- Wednesday -- 4 -- (5) (leap year)
// 1909 -- Friday -- 5 -- (0 == remainder + no of leap years occured soo far)
// 1910 -- Saturday -- 6 -- (1)
// 1911 -- Sunday -- 0 -- (2)

#include <stdio.h>

int main()
{
  int year;
  printf("Enter the year: ");
  scanf("%d", &year);

  int remainder = 0;
  int leapyears;

	// Finding no of leap years from 1900 to year given
  for (int i = 1900; i < year; i++)
  {
    if (((i % 4) == 0 && (i % 100 != 0)) || i % 400 == 0)
      leapyears++;
  }

	// 1) Finding remainder with 7 
	// 2) adding leap years and finding new remainder with 7
  remainder = year % 7;
  remainder = ((remainder + leapyears)) % 7;

  switch (remainder)
  {
  case 1:
    printf("The first of january in %d year is Saturday1  -- remainder -- %d \n", year, remainder);
    break;
  case 2:
    printf("The first of january in %d year is Sunday2  -- remainder -- %d \n", year, remainder);
    break;
  case 3:
    printf("The first of january in %d year is Monday3  -- remainder -- %d \n", year, remainder);
    break;
  case 4:
    printf("The first of january in %d year is Tuesday4  -- remainder -- %d \n", year, remainder);
    break;
  case 5:
    printf("The first of january in %d year is Wednesday5  -- remainder -- %d \n", year, remainder);
    break;
  case 6:
    printf("The first of january in %d year is Thursday6  -- remainder -- %d \n", year, remainder);
    break;
  case 0:
    printf("The first of january in %d year is Friday0  -- remainder -- %d \n", year, remainder);
    break;
  }
  return 0;
}
