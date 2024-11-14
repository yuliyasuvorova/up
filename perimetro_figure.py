
def problema_geometria():
    print("Ciao! Sono il calcolatore di perimetri! So calcolare il perimetro di: quadrato, cerchio e rettangolo. Quale figura scegli?")
    scelta=input(">")
    if scelta=="quadrato":
        print("Hai scelto di calcolare il perimetro del quadrato!")
        lato=float(input("Inserisci il valore del lato del quadrato: "))
        print(f"Il perimetro del tuo quadrato è: {lato*4}")
    elif scelta=="rettangolo":
        print("Hai scelto di calcolare il perimetro del rettangolo!")
        base =float(input("Inserisci il valore della base del rettangolo: "))
        altezza =float(input("Inserisci il valore dell'altezza del rettangolo: "))
        print(f"Il perimetro del tuo rettangolo è: {base*2+altezza*2}" )
    elif scelta=="cerchio":
        print("Hai scelto di calcolare il perimetro del cerchio!")
        raggio=float(input("Inserisci il valore del raggio del cerchio: "))
        print(f"Il perimetro del tuo cerchio è: {2*3.14*raggio}")
    else:
        print("Mi chiedi troppo!")

problema_geometria()