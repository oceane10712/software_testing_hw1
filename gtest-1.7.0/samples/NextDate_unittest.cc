#include<limits.h>
#include"NextDate.h"
#include"gtest/gtest.h"

TEST(NextDateBoundaryTest,NormalValue){
	//Worst Case for NextDate Function	
	EXPECT_STREQ("1/2/1812",NextDateProblem(1,1,1812));
	EXPECT_STREQ("1/2/1813",NextDateProblem(1,1,1813));
	EXPECT_STREQ("1/2/1912",NextDateProblem(1,1,1912));
	EXPECT_STREQ("1/2/2011",NextDateProblem(1,1,2011));
    EXPECT_STREQ("1/2/2012",NextDateProblem(1,1,2012));

    EXPECT_STREQ("1/3/1812",NextDateProblem(1,2,1812));
    EXPECT_STREQ("1/3/1813",NextDateProblem(1,2,1813));
    EXPECT_STREQ("1/3/1912",NextDateProblem(1,2,1912));
    EXPECT_STREQ("1/3/2011",NextDateProblem(1,2,2011));
    EXPECT_STREQ("1/3/2012",NextDateProblem(1,2,2012));

    EXPECT_STREQ("1/16/1812",NextDateProblem(1,15,1812));
    EXPECT_STREQ("1/16/1813",NextDateProblem(1,15,1813));
    EXPECT_STREQ("1/16/1912",NextDateProblem(1,15,1912));
    EXPECT_STREQ("1/16/2011",NextDateProblem(1,15,2011));
    EXPECT_STREQ("1/16/2012",NextDateProblem(1,15,2012));

    EXPECT_STREQ("1/31/1812",NextDateProblem(1,30,1812));
    EXPECT_STREQ("1/31/1813",NextDateProblem(1,30,1813));
    EXPECT_STREQ("1/31/1912",NextDateProblem(1,30,1912));
    EXPECT_STREQ("1/31/2011",NextDateProblem(1,30,2011));
    EXPECT_STREQ("1/31/2012",NextDateProblem(1,30,2012));

    EXPECT_STREQ("2/1/1812",NextDateProblem(1,31,1812));
    EXPECT_STREQ("2/1/1813",NextDateProblem(1,31,1813));
    EXPECT_STREQ("2/1/1912",NextDateProblem(1,31,1912));
    EXPECT_STREQ("2/1/2011",NextDateProblem(1,31,2011));
    EXPECT_STREQ("2/1/2012",NextDateProblem(1,31,2012));




    EXPECT_STREQ("3/1/1812",NextDateProblem(2,29,1812));
    EXPECT_STREQ("3/1/1813",NextDateProblem(2,28,1813));
    EXPECT_STREQ("3/1/1912",NextDateProblem(2,29,1912));
    EXPECT_STREQ("3/1/2011",NextDateProblem(2,28,2011));
    EXPECT_STREQ("3/1/2012",NextDateProblem(2,29,2012));




    EXPECT_STREQ("12/2/1812",NextDateProblem(12,1,1812));
    EXPECT_STREQ("12/2/1813",NextDateProblem(12,1,1813));
    EXPECT_STREQ("12/2/1912",NextDateProblem(12,1,1912));
    EXPECT_STREQ("12/2/2011",NextDateProblem(12,1,2011));
    EXPECT_STREQ("12/2/2012",NextDateProblem(12,1,2012));

    EXPECT_STREQ("12/3/1812",NextDateProblem(12,2,1812));
    EXPECT_STREQ("12/3/1813",NextDateProblem(12,2,1813));
    EXPECT_STREQ("12/3/1912",NextDateProblem(12,2,1912));
    EXPECT_STREQ("12/3/2011",NextDateProblem(12,2,2011));
    EXPECT_STREQ("12/3/2012",NextDateProblem(12,2,2012));

    EXPECT_STREQ("12/16/1812",NextDateProblem(12,15,1812));
    EXPECT_STREQ("12/16/1813",NextDateProblem(12,15,1813));
    EXPECT_STREQ("12/16/1912",NextDateProblem(12,15,1912));
    EXPECT_STREQ("12/16/2011",NextDateProblem(12,15,2011));
    EXPECT_STREQ("12/16/2012",NextDateProblem(12,15,2012));


    EXPECT_STREQ("12/31/1812",NextDateProblem(12,30,1812));
    EXPECT_STREQ("12/31/1813",NextDateProblem(12,30,1813));
    EXPECT_STREQ("12/31/1912",NextDateProblem(12,30,1912));
    EXPECT_STREQ("12/31/2011",NextDateProblem(12,30,2011));
    EXPECT_STREQ("12/31/2012",NextDateProblem(12,30,2012));

    EXPECT_STREQ("1/1/1813",NextDateProblem(12,31,1812));
    EXPECT_STREQ("1/1/1814",NextDateProblem(12,31,1813));
    EXPECT_STREQ("1/1/1913",NextDateProblem(12,31,1912));
    EXPECT_STREQ("1/1/2012",NextDateProblem(12,31,2011));
    EXPECT_STREQ("2012 is over",NextDateProblem(12,31,2012));


    EXPECT_STREQ("4/2/1812",NextDateProblem(4,1,1812));
    EXPECT_STREQ("4/2/1813",NextDateProblem(4,1,1813));
    EXPECT_STREQ("4/2/1912",NextDateProblem(4,1,1912));
    EXPECT_STREQ("4/2/2011",NextDateProblem(4,1,2011));
    EXPECT_STREQ("4/2/2012",NextDateProblem(4,1,2012));

    EXPECT_STREQ("4/3/1812",NextDateProblem(4,2,1812));
    EXPECT_STREQ("4/3/1813",NextDateProblem(4,2,1813));
    EXPECT_STREQ("4/3/1912",NextDateProblem(4,2,1912));
    EXPECT_STREQ("4/3/2011",NextDateProblem(4,2,2011));
    EXPECT_STREQ("4/3/2012",NextDateProblem(4,2,2012));

    EXPECT_STREQ("4/16/1812",NextDateProblem(4,15,1812));
    EXPECT_STREQ("4/16/1813",NextDateProblem(4,15,1813));
    EXPECT_STREQ("4/16/1912",NextDateProblem(4,15,1912));
    EXPECT_STREQ("4/16/2011",NextDateProblem(4,15,2011));
    EXPECT_STREQ("4/16/2012",NextDateProblem(4,15,2012));

    EXPECT_STREQ("4/30/1812",NextDateProblem(4,29,1812));
    EXPECT_STREQ("4/30/1813",NextDateProblem(4,29,1813));
    EXPECT_STREQ("4/30/1912",NextDateProblem(4,29,1912));
    EXPECT_STREQ("4/30/2011",NextDateProblem(4,29,2011));
    EXPECT_STREQ("4/30/2012",NextDateProblem(4,29,2012));

    EXPECT_STREQ("5/1/1812",NextDateProblem(4,30,1812));
    EXPECT_STREQ("5/1/1813",NextDateProblem(4,30,1813));
    EXPECT_STREQ("5/1/1912",NextDateProblem(4,30,1912));
    EXPECT_STREQ("5/1/2011",NextDateProblem(4,30,2011));
    EXPECT_STREQ("5/1/2012",NextDateProblem(4,30,2012));


}

TEST(NextDateEquivalenceClassTest,Equivalence){
 	//WR

	 EXPECT_STREQ("6/16/1912",NextDateProblem(6,15,1912));  
	 EXPECT_STREQ("month not in 1...12\n",NextDateProblem(-1,15,1912));
    EXPECT_STREQ("month not in 1...12\n",NextDateProblem(13,15,1912));
    EXPECT_STREQ("day not in 1...31\n",NextDateProblem(6,-1,1912));
    EXPECT_STREQ("day not in 1...31\n",NextDateProblem(6,32,1912));
    EXPECT_STREQ("year not in 1812...2012\n",NextDateProblem(6,15,1811));
    EXPECT_STREQ("year not in 1812...2012\n",NextDateProblem(6,15,2013));


    //SR

    EXPECT_STREQ("month not in 1...12\n",NextDateProblem(-1,15,1912));
    EXPECT_STREQ("day not in 1...31\n",NextDateProblem(6,-1,1912));
    EXPECT_STREQ("year not in 1812...2012\n",NextDateProblem(6,15,1811));
    EXPECT_STREQ("month not in 1...12\nday not in 1...31\n",NextDateProblem(-1,-1,1912));
    EXPECT_STREQ("day not in 1...31\nyear not in 1812...2012\n",NextDateProblem(6,-1,1811));
    EXPECT_STREQ("month not in 1...12\nyear not in 1812...2012\n",NextDateProblem(-1,15,1811));
    EXPECT_STREQ("month not in 1...12\nday not in 1...31\nyear not in 1812...2012\n",NextDateProblem(-1,-1,1811));

    //WN

    EXPECT_STREQ("6/15/2000",NextDateProblem(6,14,2000));
    EXPECT_STREQ("7/30/1996",NextDateProblem(7,29,1996));
    EXPECT_STREQ("Invalid input date",NextDateProblem(2,30,2002));
    EXPECT_STREQ("Invalid input date",NextDateProblem(2,31,2000));


    //SN

    EXPECT_STREQ("6/15/2000",NextDateProblem(6,14,2000));
    EXPECT_STREQ("6/15/1996",NextDateProblem(6,14,1996));
    EXPECT_STREQ("6/15/2002",NextDateProblem(6,14,2002));

    EXPECT_STREQ("6/30/2000",NextDateProblem(6,29,2000));
    EXPECT_STREQ("6/30/1996",NextDateProblem(6,29,1996));
    EXPECT_STREQ("6/30/2002",NextDateProblem(6,29,2002));

/*
	 EXPECT_STREQ("Invalid input date",NextDateProblem(6,30,2000));
 	 EXPECT_STREQ("Invalid input date",NextDateProblem(6,30,1996));
    EXPECT_STREQ("Invalid input date",NextDateProblem(6,30,2002));
*/
    EXPECT_STREQ("Invalid input date",NextDateProblem(6,31,2000));
    EXPECT_STREQ("Invalid input date",NextDateProblem(6,31,1996));
    EXPECT_STREQ("Invalid input date",NextDateProblem(6,31,2002));



    EXPECT_STREQ("7/15/2000",NextDateProblem(7,14,2000));
    EXPECT_STREQ("7/15/1996",NextDateProblem(7,14,1996));
    EXPECT_STREQ("7/15/2002",NextDateProblem(7,14,2002));

    EXPECT_STREQ("7/30/2000",NextDateProblem(7,29,2000));
    EXPECT_STREQ("7/30/1996",NextDateProblem(7,29,1996));
    EXPECT_STREQ("7/30/2002",NextDateProblem(7,29,2002));

    EXPECT_STREQ("7/31/2000",NextDateProblem(7,30,2000));
    EXPECT_STREQ("7/31/1996",NextDateProblem(7,30,1996));
    EXPECT_STREQ("7/31/2002",NextDateProblem(7,30,2002));








}





