# Projeto

O projeto foi inicialmente criado usando o Microsoft visual studio, por isso esta uma bagunça

O projeto foi feito principalmente usando o compilador da microsoft, mas ele pode ser usado rodando no GCC

# Como Rodar

## Opção 1

Com o vscode, abra o folder do projeto e rode o main.cpp, tenha certeza que as configurações do vscode estejam certa para rodar todos os
arquivos .h e .cpp no mesmo folder.

Possivelmente no task.json em "args" substitua o ${file} por  "${workspaceFolder}/*.cpp", "${workspaceFolder}/*.h", adcione essas linhas, substitua por // se for windows


## Opção 2

No console no folder do projeto, usando o gcc compiler, escreva "g++ *.h *.cpp -o main.exe"

## Opção 3 => Preferivel

Com o microsoft visual comunity, clicar em "abrir projeto ou solucao" abrir o ASP.sln

## Opção 4

Com o microsoft visual comunity, clicar em abrir pasta local e localize o projeto
