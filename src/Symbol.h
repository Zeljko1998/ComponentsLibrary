#pragma once

#include <iterator>
#include <memory>
#include <string>
#include <vector>

#include "Pin.h"
#include "SymbolShape.h"

class Symbol {
 private:
  SymbolShape shape_;
  std::string name_;
  std::string description_;
  std::vector<std::unique_ptr<Pin>> pins;

 public:
  Symbol() {}

  Symbol(std::string name = "New symbol",
         SymbolShape shape = SymbolShape::RECTANGLE, std::string description)
      : name_{name}, shape_{shape}, description_{description} {};

  Symbol(Symbol& cpy) noexcept
      : name_{cpy.name_}, shape_{cpy.shape_}, description_{cpy.description_} {};

  Symbol(Symbol&& moveObj) noexcept
      : name_{std::move(moveObj.name_)},
        shape_{std::move(moveObj.shape_)},
        description_{std::move(moveObj.description_)} {};

  // Copy assignment operator
  Symbol operator=(Symbol& other);
  // Move assignment operator
  Symbol& operator=(Symbol&& moveObj);
  ~Symbol(){};

  // Getters
  SymbolShape getSymbolShape();
  std::string getSymbolName();
  std::string getSymbolDescription();

  // Setters
  void setSymbolShape(SymbolShape shape);
  void setSymbolName(std::string name);
  void setDescription(std::string description);

  // Methods
  void addPin(std::string name, std::string description, PinType type);
  void removePin(int pinNumber);
  void removeAllPins();
};