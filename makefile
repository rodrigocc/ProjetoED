#MAKEFILE																			
# Definição de Macros
OPCAO =
NOME =  spell_checker
COMPILADOR = gcc
CODIGO = source
BIBLIOTECAS = includes
MAIN = main.c

# Corpo do Make

all: prog	
	clear
	./$(NOME)

prog: bib main
	@echo "Compilado e linkando-->"$(NOME)
	$(COMPILADOR) $(OPCAO) *.o -o $(NOME)

bib: $(CODIGO) $(BIBLIOTECAS)
	@echo "Compilado Bibliotecas: gerando objetos -> *.o\n"
	$(COMPILADOR) $(OPCAO) -c $(CODIGO)/*.c -I$(BIBLIOTECAS)
	ls -l *.o

main: $(MAIN) $(BIBLIOTECAS)
	@echo "Compilado : gerando objeto -> "$(MAIN)
	$(COMPILADOR) $(OPCAO) -c $(MAIN) -I$(BIBLIOTECAS)

limpa: cx
	@echo "Deletando arquivos objetos"
	ls -l *.o
	-rm -f *.o
cx:
	@echo "Deletando "$(NOME)
	-rm -f $(NOME)

ex:
	./$(NOME)

refaz: limpa cx prog
