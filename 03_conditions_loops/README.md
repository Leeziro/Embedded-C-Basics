# Del 3 – Villkor och loopar

## Syfte
Målet med denna del är att förstå hur villkor (`if / else`) och loopar (`for`, `while`)
fungerar i C, samt hur de används i embedded-system.

## Mini-uppgift
Jag skrev ett program som använder:
- en `while`-loop för att styra körningen
- en `for`-loop som räknar från 0 till 4
- `printf` för att visa värden i varje varv

Programmet skriver ut räknarvärden och avslutas kontrollerat.

## Reflektion
Jag lärde mig att loopar kan köra väldigt snabbt och att en `while`-loop utan
stoppvillkor leder till oändlig körning. Detta motsvarar hur `while(1)` används
i embedded-system, där programmet normalt aldrig avslutas.

Jag lärde mig även vikten av radbrytning (`\n`) för att få läsbar output.


Q


1. Vad är skillnaden mellan for och while?

2. När är while bättre än for?

3. Varför används while(1) i embedded?

4. Vad händer om villkoret i en while aldrig blir falskt?

A

1. for används när antalet varv är känt i förväg, medan while kör så länge ett villkor är sant.

2. När man inte vet hur många gånger någonting måste upprepas

3. För att loopen alltid ska köra

4. Då blir det en oändlig loop