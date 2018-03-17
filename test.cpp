/*
 * test.cpp
 *
 *  Created on: Mar 17, 2018
 *      Author: alex
 */

#include <gmock/gmock.h>
#include "soundex.h"


class SoundexEncoding : public ::testing::Test
{
public:
	Soundex soundex;
};




TEST_F(SoundexEncoding, RetainsSoleLetterOfOneWord)
{

	const auto encoded = soundex.encode("A");
	EXPECT_EQ("A000", encoded);
}

TEST_F(SoundexEncoding, PadsWithZerosToEnsureThreeDigits)
{
	const auto encoded = soundex.encode("I");
	EXPECT_EQ("I000", encoded);
}

int main(int argc, char **argv)
{
	::testing::InitGoogleMock(&argc, argv);
	return RUN_ALL_TESTS();
}



