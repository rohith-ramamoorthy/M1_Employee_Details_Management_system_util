
#include "unity.h"
#include <main.h>

#include <main.h>
#define PROJECT_NAME    "Employee-Record-System"


void test_Add_Record(void);
void test_List_Record(void);
void test_Modify_Record(void);
void test_Delete_Record(void);
void test_Exit(void);

void setUp(){}

void tearDown(){}

int main()
{

  UNITY_BEGIN();


  RUN_TEST(test_Add_Record);
  RUN_TEST(test_Modify_Record);
  RUN_TEST(test_Exit);

 
  return UNITY_END();
}

void test_ADD_Record(void) {
  TEST_ASSERT_EQUAL(raaga 22 35000, Add_Record(raaga, 22, 35000));
  
  
  TEST_ASSERT_EQUAL(12 raaga 35000, Add_Record(raaga, 12, 7500));
}

void test_Modify_Record(void) {
  TEST_ASSERT_EQUAL(raaga, Modify_Record( raaga));
  

  TEST_ASSERT_EQUAL(raaga, Modify_Record(abc));
}
