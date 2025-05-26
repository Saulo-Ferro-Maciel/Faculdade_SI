controle = 1
while controle != 0:
    pergunta = input("Quantas notas a serem adicionadas?\nR: ")
    
    try:
        nota = 0
        notaString = ""
        auxiliar = int(pergunta)
        listaNotas = []
        
        for i in range(auxiliar):
            pergunta = float(input(f"Digite o valor da {i+1}ª nota: "))
            listaNotas.append(pergunta)
            nota += listaNotas[i]
            if i != auxiliar-1:
                notaString += f"{listaNotas[i]} - "
            else:
                notaString += f"{listaNotas[i]}."
        media = nota/auxiliar        
        print(f"\nForam adicionadas {auxiliar} notas.\nAs notas adicionas fora {notaString}\nA média das notas é: {media}")
    except:
        print("Por favor valores digite válidos")
    
    pergunta = input("Deseja sair? [sim/não] ")
    if pergunta[0].lower() == "s":
        controle = 0
