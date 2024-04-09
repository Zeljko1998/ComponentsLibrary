#include <gtest/gtest.h>

#include "Pin.h"

TEST(PinClassTests, Test_00) {
  Pin newPin(1, "EN", "IC enable pin - active low!", PinType::DIGITAL_IN);

  EXPECT_EQ(newPin.getPinNumber(), 1);
  EXPECT_EQ(newPin.getPinName(), "EN");
}