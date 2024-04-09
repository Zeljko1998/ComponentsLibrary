#pragma once

#include <memory>
#include <string>
#include <utility>

#include "PinType.h"

class Pin {
 private:
  /* data */
  int pinNumber_;
  std::string pinName_;
  std::string pinDescription_;
  PinType type_;

 public:
  // Constructors
  Pin() {}
  Pin(int number, std::string name, std::string description, PinType type)
      : pinNumber_{number},
        pinName_{name},
        pinDescription_{description},
        type_{type} {}
  Pin(Pin& cpy)
      : pinNumber_{cpy.pinNumber_},
        pinName_{cpy.pinName_},
        pinDescription_{cpy.pinDescription_},
        type_{cpy.type_} {}

  Pin(Pin&& moveObj) noexcept
      : pinNumber_{std::move(moveObj.pinNumber_)},
        pinName_{std::move(moveObj.pinName_)},
        pinDescription_{std::move(moveObj.pinDescription_)},
        type_{std::move(moveObj.type_)} {}
  // Copy assignment operator
  Pin operator=(Pin& other);
  // Move assignment operator
  Pin& operator=(Pin&& other);

  // Destructor
  ~Pin() {}

  // Getters
  int getPinNumber();
  std::string getPinName();
  std::string getPinDescription();
  PinType getPinType();

  // Setters
  void setPinName(std::string name);
  void setPinDescription(std::string description);

  // Functions
};
