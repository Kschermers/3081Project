### Basic Feedback for Lab 06

Run on February 20, 10:35:50 AM.


#### System Files and Lab Directory Structure

+ Pass: Check that directory "googletest" exists.

+ Pass: Check that directory "labs" exists.

+ Pass: Check that directory "labs/lab06_google_tests" exists.

+ Pass: Make directory "Lab06_Testing".

+ Pass: Change into directory "Lab06_Testing".


#### Essential Files Exist

+ Pass: Check that file "../labs/lab06_google_tests/date_unittest.cc" exists.


### Testing correct implementation

+ Pass: Copy directory "Lab06 files.".



+ Pass: Copy directory "Files for correct version".



+ Pass: Change into directory "correct".

+ Pass: Check that make compiles.



+ Pass: Check that file "date_unittest" exists.

+ Pass: Get all google tests.
    15 tests found.




#### Results

+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.PrintDateTests.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.PrintDateTestsWithoutNewline.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.DaysBetweenTests.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.GetDateTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.SubstractionTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.AdditionTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.Jan1stToMarch1st2016Test.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.EpochTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.Today.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.GetUsDateTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.PrintDateTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.PrintUsDateTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.FirstDateTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.LastDateTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.LeapYearTest.



+ Pass: 100% of the tests passed.


### Testing Mutants


***Note: This is just the basic feedback.  The full feedback is run daily as a batch process (click link below)***


Link to full feedback: [Lab_06_Full_Feedback.md](Lab_06_Full_Feedback.md)



 __Below are the mutants that your tests will need to find for the Full Feedback__:


 * __Mutant:__ Dates from GetDate are missing a character


 * __Mutant:__ Some dates dont have leading zeroes


 * __Mutant:__ Todays date month off by one


 * __Mutant:__ Dates from GetUsDate are not in the right format (same as GetDate?)


 * __Mutant:__ operator-: Probably a copy paste error


 * __Mutant:__ Days between calculation seems to be much larger than it should be.


 * __Mutant:__ A test failed on the correct version of the program.Developer thought months should be zero-indexedDates constructed with epoch are about 70 years in the future


 * __Mutant:__ 1/1/2016 to 3/1/2016 is 60 days, but this version returns 59

