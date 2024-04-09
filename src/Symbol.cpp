#include "Symbol.h"

// Copy assignment operator
Symbol Symbol::operator=(Symbol& other) {
  name_ = other.name_;
  shape_ = other.shape_;
  description_ = other.description_;
}
// Move assignment operator
Symbol& Symbol::operator=(Symbol&& MoveObj) {
  name_ = std::move(MoveObj.name_);
  description_ = std::move(MoveObj.description_);
  shape_ = std::move(MoveObj.shape_);
}

// Getters
SymbolShape Symbol::getSymbolShape() { return shape_; }
std::string Symbol::getSymbolName() { return name_; }
std::string Symbol::getSymbolDescription() { return description_; }

// Setters
void Symbol::setSymbolShape(SymbolShape shape) { shape_ = shape; }
void Symbol::setSymbolName(std::string name) {
  if (name != "") {
    name_ = name;
  }
}
void Symbol::setDescription(std::string description) {
  description_ = description;
}

// Methods
void Symbol::addPin(std::string name, std::string description, PinType type) {
  pins.push_back(
      std::make_unique<Pin>(pins.size() + 1, name, description, type));
}
void Symbol::removePin(int pinNumber) {
  auto it = pins.begin();
  it += pinNumber;
  pins.erase(it);
}

void Symbol::removeAllPins() { pins.clear(); }