[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/wbwIuXW8)
# AP 2: Domain design en implementatie

Student: Ali Albonaser

Studentnummer: 1852275

Link naar deze repository: https://github.com/alialbonaser204/Design_implementation

Deze repository bevat de uitwerking van bovengenoemde student van Summatieve Opdracht 2, voor het vak Adaptive Programming aan de HU, cursusjaar 2023-2024.

Om te voorkomen dat te grote bestanden worden meegestuurd met een commit, staan de mappen .idea en cmake-build-debug in de .gitignore. Gelieve deze dus ook niet mee te proberen te pushen; dat is niet nodig.

De bijgeleverde code kan nog niet op zichzelf draaien. Gedurende de uitwerking van deze opdracht:

- moeten de lege bestanden worden ingevuld;
- moeten bestanden zoals de testsuite, waar al wel functies in staan, worden aangevuld;
- moeten er mogelijk bestanden worden toegevoegd;
- moet mogelijk de CMakeLists.txt-file worden aangepast, om te veranderen welke bestanden voor welke configuratie worden gecompileerd;

zodat de code wel compleet functioneert conform de eisen op de Canvaspagina.

De CMakeLists.txt bevat twee configuraties:

- AP_2_main, die de main.cpp en alle bestanden in de src-map compileert;
- AP_2_test, die alle bestanden in de mappen src en test compileert.

Dit staat dus ook toe dat je je eigen main-functie in main.cpp en aanpalende bestanden zet, zonder dat dat de main-functie bijt die wordt gegenereerd door Catch.
