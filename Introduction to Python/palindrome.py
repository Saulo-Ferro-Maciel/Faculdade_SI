control = 1

def menu():
    print("\n1 - Maior palavra")
    print("2 - Menor palavra")
    print("3 - Contagem de letras")
    print("4 - Contagem de palavras")
    print("5 - Verificar palíndromo")
    print("0 - Sair")
    case = int(input("Escolha uma opção: "))
    return case

def maior_palavras(prase):
    palavras = prase.split()
    maior = max(palavras, key=len)
    return print(f"\nMaior palavra: {maior} com {len(maior)} letras")

def menor_palavras(prase):
    palavras = prase.split()
    menor = min(palavras, key=len)
    return print(f"Menor palavra: {menor} com {len(menor)} letras")

def counting_letters(frase):    
    frase = frase.replace(" ", "").lower()
    frequencia = {}
    for letra in frase:
        if letra in frequencia:
            frequencia[letra] += 1
        else:
            frequencia[letra] = 1
    return print(f"Frequência de letras: {frequencia}")

def counting_words(prase):
    words = prase.split()
    return print(f"Total de palavras: {len(words)}")
    
def palindrome(prase):
    try:
        if prase.replace(" ", "") == prase[::-1].replace(" ", ""):
            return print("É um palíndromo")
        else:
            return print("Não é um palíndromo")
    except:
        print("Digite uma frase válida.")
        return
    
while control != 0:
    menu_option = menu()
    if menu_option == 1:
        prase = input("Digite uma palavra ou frase: ")
        maior_palavras(prase)
    elif menu_option == 2:
        prase = input("Digite uma palavra ou frase: ")
        menor_palavras(prase)
    elif menu_option == 3:
        prase = input("Digite uma palavra ou frase: ")
        counting_letters(prase)
    elif menu_option == 4:
        prase = input("Digite uma palavra ou frase: ")
        counting_words(prase)
    elif menu_option == 5:
        prase = input("Digite uma palavra ou frase: ")
        palindrome(prase)
    elif menu_option == 0:
        print("Encerrando o programa.")
        control = 0
        break
    else:
        print("Opção inválida, tente novamente.")
    