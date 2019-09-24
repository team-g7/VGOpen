# Prosjektoppgave - Zumo Robot
Hensikten med denne oppgaven er å gi en liten utfordring for de som ønsker. Studenter vil bli delt inn i grupper på 5/6 personer. Hver gruppe får utdelt en Zumo robot hver som dere skal programmere, "designe" og eventuelt montere flere dubeditter på. I slutten av arrangementet vil det bli holdt en konkurranse etter cup-prinsippet mellom alle Zumo-robotene (for de som vil delta).

## Eksempel på fremgang (for å bli kjent med roboten og dens egenskaper)

### Steg 1:
Ta utgangspunkt i eksemplene som ligger tilgjengelig på Android IDEn, og lag et program som får roboten til å følge en sort strek på hvit bakgrunn (benk/gulv/papir). For å teste: bruk sort isolasjonsteip/elektrikerteip og lag en banen på pult, gulv eller en annen lys/hvit overflate.

### Steg 2:
Nå kan du forberede roboten for zumo-bryting. Zumobryting foregår inne i en ring. Spillet går ut på å få motstanderen ut av ringen. I dette steget kan du modifiser løsningen fra Steg 1 slik at roboten hele tiden holder seg inne i en sumo-ring. Bruk sort teip og lag en ring, firkant, trekant eller noe lignende. IKKE LAG EN SORT BANE MED HVIT KANT NÅ! Det vil gå mye teip dersom man prøver å lage en sort bane. Dere kan fint lage roboten slik at den detekterer en sort kant på banen, for så enkelt å skifte til hvit kant før konkurransen.

### Steg 3:
Oppgrader til en selvstyrt robot som kan slåss på egen hånd i en zumo-brytekonkurranse. Her må dere bruke en eller flere avstandsmåler(e), for eksempel
http://www.pololu.com/catalog/product/136 (leveres med roboten). Dere finner mer informasjon og
videoer om Robot Sumo her http://www.youtube.com/results?search_query=robot+sumo&oq=robot+sumo 

Angrepet vil være basert på avstandsmåleren og deteksjon av objekter. Roboten vil typisk gå rundt sin egen akse til den finner motstanderen, for så å kjøre i dens retning med hensikt på å dytte den ut av ringen. Det blir interessant å se når begge robotene er programmert til å vinne! ;) Måtte det beste programmet vinne! Her er det ingen rom for flaks ;)

NB! Banen det skal konkurreres på vil være sort, med hvit markering rundt ytterkanten. Det betyr at du må skrive om rutinen fra Krav 1 over slik at roboten detekterer hvit avgrensing og ikke sort avgrensing, MEN DETTE GJØR DERE FØRST NÅR DET NÆRMER SEG KONKURRANSE!!

## Zumo roboten
* Brukerveiledning for Zumo Robot shield: https://www.pololu.com/docs/0J57
* Detaljert beskrivelse av roboten:  https://www.pololu.com/product/2510
* Mange ressurser (under Resources-fanen på siden over): https://www.pololu.com/product/2510/resources