software erst anzahlung dann garantie

aufteilung projekt damit projekt steuerbar ist. Möglicher wechsel vom
Auftragnehmer

Design by Contract:
    siehe folie
    
    aufteilung gebraucht interface
    interface hat anforderungen

    sprache eiffel
    contract gleich bedingungen (boolsche formeln, vorbedingung, nachbedingung, invariante)
    entspricht hoare kalkül
    ide als beispiel (funktionsparameter (double != int)) typsystem = contract

    jml in java

JML:
    Kommentare oder Blöcke definieren Contracts
    logische, arithmetische, quantoren, vergleiche, spezialsymbole
    rückgabewert der Methode definierbar

    ensures, requires, signals exception beim eintritt von condition
    invarianten, loop invarianten, decreasing, nullable

    Verwendungsmöglichkeiten:
        - siehe Folie

Static Analysis:
    COde wird vor Laufzeit überprüft, (WARNINGS)
    Siehe Pipeline in folien
    sat modulo t programme
    mit modulo?

    Pro und Con

Runtime assertion checking:
    spezifikationen werden in assertions übersetzt
    werden überwacht
    (zu runtime werden fehler abgefangen)
    verändern programmablauf
    pro cons = folie
    try catch nachteil mit safestate absichern
    bsp. Auto = grau
        Flugzeug
    
Verifikation
    = KIV
    alternativ model checking
    Plug and Wait

Testing:
    erfüllbarkeitsproblem
    testdaten können unbestimmt sein (N > 0)
    muss nicht heißen das problem funktioniert

Dokumentation


OOP:
    Methoden der Kindklasse muss mindestens die der elternklasse entsprechen
    Vorbedingung schwächer
    Nachbedingung stärker
    invariante idr stärker




In spezifikation keine "Fahrzeug klasse" kann diese nicht spezifiziert werden, selbst wenn sie existiert
Lösung: 
    Ausschließen vom Faktor (nicht gut)
    spezifikation  von umgebun


    
