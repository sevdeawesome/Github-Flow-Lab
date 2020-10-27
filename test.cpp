#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld){
	char* test_val[3];
	test_val[0] = "./c-echo";
	test_val[1]="hello";
	test_val[2]="world";
	EXPECT_EQ("hello world", echo(3,test_val));
}
TEST(EchoTest,EmptyString){
	char* test_val[1];
	test_val[0]="./c-echo";
	EXPECT_EQ("",echo(1,test_val));
}
TEST(EchoTest,Numbers){
	char* test_val[2];
	test_val[0]="./c-echo";
	test_val[1]="0123456789";
	EXPECT_EQ("0123456789",echo(2,test_val));
}
TEST(EchoTest,SpecialCharacters){
	char* test_val[2];
	test_val[0]="./c-echo";
	test_val[1]="!@#$%^&*()<>?";
	EXPECT_EQ("!@#$%^&*()<>?",echo(2,test_val));
}
TEST(EchoTest,LongString){
	char* test_val[9];
	test_val[0]="./c-echo";
	test_val[1]="Hi";
	test_val[2]="my";
	test_val[3]="name";
	test_val[4]="is";
	test_val[5]="Dexter";
	test_val[6]="I";
	test_val[7]="like";
	test_val[8]="food";
	EXPECT_EQ("Hi my name is Dexter I like food",echo(9,test_val));
}
int main(int argc, char** argv){
	::testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}
