#ifndef TEST_EXPORTS
#define TEST_EXPORTS
#define TEST_API __declspec(dllexport)
#else
#define TEST_EXPORTS __declspec(dllimport)
#endif

#ifndef TEST_HPP_INCLUDE
#define TEST_HPP_INCLUDE
class TestInterface{
public:
    virtual void Hello() = 0;
};
class Test: public TestInterface{
public:
    virtual void Hello();
};
typedef TestInterface* (*pCAPI)();
#endif

extern "C"{
    TestInterface* TEST_API CreateAPI();
}