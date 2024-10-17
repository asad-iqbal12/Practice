#include <Arduino.h>  // Include this for Arduino framework projects
#include <unity.h>     // Include the Unity framework

int add(int a, int b);
int minus(int a, int b);
void test_add_function(void) {
    // Test cases
    TEST_ASSERT_EQUAL(10, add(7, 3));
    TEST_ASSERT_EQUAL(0, add(-1, 1));
    TEST_ASSERT_EQUAL(-5, add(-3, -2));
}

void test_minus_function(void)
{
    TEST_ASSERT_EQUAL(4, minus(7, 3));
    TEST_ASSERT_EQUAL(-2, minus(-1, 1));
    TEST_ASSERT_EQUAL(-1, minus(-3, -2));
}

void setup() {
    delay(5000);
    Serial.begin(115200);
    UNITY_BEGIN();
    RUN_TEST(test_add_function);
    RUN_TEST(test_minus_function);
    UNITY_END();
}

void loop() 
{
    
}

int add(int a, int b) {
    Serial.printf("testing\n");
  return a + b;
}
int minus(int a, int b)
{
    return a - b;
}
