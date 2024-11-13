print("Ciao! Oggi creeremo un nome per una band da un paio delle tue informazioni personali!")
a=(input("Sei pronto??"))
if(a)=="no":
    print("è stato comunque un piacere parlare con te")
    exit()
else:
    print("Bene! Iniziamo!")

def nome_band():
    nome=input("Quale è la tua città di origine? ")
    if(nome):
        print("Fantastico! È una città bellissima!")
        animale=input("Come si chiama il tuo animale domestico? ")
        print(f"Il cane di mia zia si chiamava {animale}, che coincidenza! Quindi il nome della nostra band è {nome}" + " " + f"{animale}.")
        
    else:
        print("quindi non vuoi fare una band?")
nome_band()