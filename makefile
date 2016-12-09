NOMBRE_EJECUTABLE1 = inicializadorAleatorio
NOMBRE_EJECUTABLE2 = inicializadorSecuencial

# Esta es la target que se ejecuta por defecto si se escribe "make" en la consola
all: release

# Compilación principal del ejecutable
release:
	@echo 'Compilando target: $@'
	gcc inicializadorAleatorio.c -o $(NOMBRE_EJECUTABLE1)
	@echo ' '
	@echo "Ejecute el programa haciendo: ./"$(NOMBRE_EJECUTABLE1)""

	@echo 'Compilando target: $@'
	gcc inicializadorAleatorio.c -o $(NOMBRE_EJECUTABLE2)
	@echo ' '
	@echo "Ejecute el programa haciendo: ./"$(NOMBRE_EJECUTABLE2)""

# Other Targets
clean:
	#Borro el contenido del directorio de compilación
	rm -rf $(DIR_OUTPUT)/*
	-@echo ' ' 