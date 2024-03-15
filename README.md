# ComponentsLibrary Project

## Symbol related classes

### Pin Class
- [ ] _Konstruktori/Destruktor_
- [ ] Varijable (pinType, pinName, pinFunction, Description)
- [ ] _Geteri_
- [ ] _Metode (addNewPin, removePin, CopyExistingPin, ListExistingPins)_

### SymbolClass
- [ ] _Konstruktori/Destruktor_
- [ ] Varijable (pins, powerSupply, shape, Description)
- [ ] _Geteri_
- [ ] _Metode (addNewPin, removePin, CopyExistingPin, ListExistingPins)_ 

## Component related classes

### ComponentBase
- [ ] _Konstruktoi (bez/sa parametrima, destruktor, move, copy ...)_
- [ ] _Privatni clanovi klase (manufacturer, manufacturerPartNumber, stockCount, price, description, symbol, footprintType, distributor, temperaturni opseg)_
- [ ] _Geteri za navedene clanove_
- [ ] _Metode : addNewComponent, RemoveExistingComponent, IncreaseStockCount, stockCountAlarm_

### PassiveComponent : ComponentBase
- [ ] _Konstruktoi (bez/sa parametrima, destruktor, move, copy ...)_
- [ ] _Privatni clanovi klase (tip, otpor, induktivnost, kapacitivnost)_
- [ ] _()_


### ActiveComponent : ComponentBase
- [ ] _Konstruktoi (bez/sa parametrima, destruktor, move, copy ...)_
- [ ] _Privatni clanovi klase (tip,analog_digital,discreteComponent_integratedCircuit)_
- [ ] _()_

### Component final
- [ ] _Konstruktoi (bez/sa parametrima, destruktor, move, copy ...)_
- [ ] _shared ptr na ComponentBase objekat, componentAlarm_
- [ ] _Metode koje omogucavaju manipulaciju nad komponentama_

### ComponentsLibrary
- [ ] _Konstruktori_
- [ ] _Vektor shared ptra na komponente biblioteke_
- [ ] _Funkcije za rad sa bibliotekom (addComponent, removeComponent, IncreaseStockCount, )_
- [ ] _Printanje liste komponenti filtriranih po razlicitim parametrima_
- [ ] _Search by different parameters_
- [ ] _()_

### ComponentsPurchase
- [ ] _Private variables -> map<sharet_ptr, count>
- [ ] _Printanje liste za narudzbu na terminal i u file_
- [ ] _Dodavanje i izbacivanje komponenti_
