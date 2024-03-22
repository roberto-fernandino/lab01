#!/bin/bash

# Obtém a lista de arquivos .c no diretório atual
arquivos=$(ls *.c)

# Compila cada arquivo .c encontrado
for arquivo in $arquivos; do
    gcc -o "${arquivo%.c}" "$arquivo"
done