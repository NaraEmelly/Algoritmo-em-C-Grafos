# Projeto: Algoritmo de Busca em Largura (BFS) em C

Este projeto tem como objetivo a implementação do algoritmo de **Busca em Largura (Breadth-First Search - BFS)** utilizando a linguagem de programação C. O sistema foi desenvolvido com foco em modularidade, organização de arquivos e automação do processo de compilação.

## 🚀 Funcionalidades
* Implementação do algoritmo BFS para travessia de grafos.
* Estrutura de dados modular (separação entre cabeçalhos e implementação).
* Automação de compilação utilizando `Makefile`.

##  Estrutura do Projeto
```text
Algoritmo-em-C-Grafos/
├── include/
│   └── grafo.h          # Definições das estruturas e protótipos
├── src/
│   ├── grafo.c          # Implementação lógica do grafo e BFS
│   └── main.c           # Ponto de entrada e teste do algoritmo
├── Makefile             # Regras para compilação automatizada
└── README.md            # Documentação
└── Pesquisa Grafos.pdf  # Pesquisa feita sobre Grafos
```
## Como Compilar e Executar
Para compilar e gerar o executável, certifique-se de ter o GCC instalado em seu ambiente. Utilize o terminal na pasta raiz do projeto e siga os passos:

##1. Compilar o Projeto
```
mingw32-make
```
ou
```
gcc -Iinclude src/main.c src/grafo.c -o grafo_bfs
```
##2. Executar o Programa
```
.\grafo_bfs.exe 
```
##3. Limpar arquivos gerados (objetos e executáveis):
```
#(Powershell)
   del src\*.o grafo_bfs.exe
```

## Tecnologias Utilizadas

- Linguagem: C

- Compilador: GCC (MinGW)

- Ferramenta de Build: Makefile

# Autor : Nayara Emelly Pereira Mendonça
Desenvolvido como parte da pesquisa acadêmica sobre Teoria dos Grafos.
