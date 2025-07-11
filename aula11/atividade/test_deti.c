#include "unity.h"
#include "deti.h"

void setUp(void) {}
void tearDown(void) {}

void test_array_maior(void){
    int a[] = {1,2,3,4};
    TEST_ASSERT_EQUAL(4, array_maior(a,4));
}

void test_to_Uppper(){
    TEST_ASSERT_EQUAL('A', to_Uppper('a'));
}

void test_maior(void){
    TEST_ASSERT_EQUAL(2, maior(1,2));
    TEST_ASSERT_EQUAL(20, maior(20,2));
    TEST_ASSERT_EQUAL(5, maior(2,5));
}

int main(void){
    UNITY_BEGIN();

    RUN_TEST(test_array_maior);
    RUN_TEST(test_to_Uppper);
    RUN_TEST(test_maior);

    return UNITY_END();
}
