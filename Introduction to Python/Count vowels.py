control = 1
while control !=0:
    prase = input("digite uma frase ou palavra: ")
    checagem = ["a", "e", "i", "o", "u"]
    contadorVogais = 0
    for i in prase:
        if i.lower() in checagem:
            contadorVogais += 1
    print(f"Total de vogais: {contadorVogais}")
    prase = input("Deseja continuar? Digite S para sim ou N para não: ")
    if prase.lower() == "n":
        control = 0
    elif prase.lower() == "s":
        control = 1
    else:
        print("Opção inválida, encerrando o programa.")
        control = 0