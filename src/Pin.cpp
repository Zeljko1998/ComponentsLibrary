#include "Pin.h"

Pin Pin::operator=(Pin& other) {
  pinNumber_ = other.pinNumber_;
  pinName_ = other.pinName_;
  pinDescription_ = other.pinDescription_;
  type_ = other.type_;
  return *this;
}

Pin& Pin::operator=(Pin&& other) {
  pinNumber_ = std::move(other.pinNumber_);
  pinName_ = std::move(other.pinName_);
  pinDescription_ = std::move(other.pinDescription_);
  type_ = std::move(other.type_);
  return *this;
}

int Pin::getPinNumber() { return pinNumber_; }

std::string Pin::getPinName() { return pinName_; }
std::string Pin::getPinDescription() { return pinDescription_; }
PinType Pin::getPinType() { return type_; }

void Pin::setPinName(std::string name) {
  if (name != "") {
    pinName_ = name;
  }
}
void Pin::setPinDescription(std::string description) {
  pinDescription_ = description;
}