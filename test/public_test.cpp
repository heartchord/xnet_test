#include "xnet.h"
#include "gtest/gtest.h"

# pragma warning(disable: 4996)


TEST(KSGPublicTest, ValidIpStr)
{
    const char * const cszIp0 = "192.168.1.1";
    EXPECT_EQ(true, xnet::KG_IsValidIpv4Str(cszIp0));

    const char * const cszIp1 = "192.168.0.1";
    EXPECT_EQ(true, xnet::KG_IsValidIpv4Str(cszIp1));

    const char * const cszIp2 = "192.108.0.1";
    EXPECT_EQ(true, xnet::KG_IsValidIpv4Str(cszIp2));
}

TEST(KSGPublicTest, InvalidIpStr)
{
    const char * const cszIp0 = "192.108.256.1";
    EXPECT_EQ(false, xnet::KG_IsValidIpv4Str(cszIp0));

    const char * const cszIp1 = "192.168.1a.1";
    EXPECT_EQ(false, xnet::KG_IsValidIpv4Str(cszIp1));
}
