# JOGO DA FORCA em C++
## Aprendendo C++ - refatorando o código do Jogo da Forca
### Curso feito na plataforma Alura
Código refatorado de modo a tornar mais claro quais variáveis são acessadas/modificadas pelas funções;
passagem das variáveis por referência e não por cópia entre as Translation Units; utilização de <array>
em vez de <vector> como variável que armazena os chutes_errados,utilizando desse modo a stack em vez d
a heap; não acessar variáveis globais diretamente na main a partir de outras translation units (foram
retirados os extern; implementação de função inline
