programa pa;

inicio

escreva('Digite o número de termos da PA, o primeiro termo e a razão respectivamente');

leia(n, a1, r);

soma<-- 0;

para cont<-- 1 até n faça

escreva(a1);

a1<-- a1 + r;

soma<-- soma + a1

fim para

escreva(soma)
system("pause")
