programa pa;

inicio

escreva('Digite o n�mero de termos da PA, o primeiro termo e a raz�o respectivamente');

leia(n, a1, r);

soma<-- 0;

para cont<-- 1 at� n fa�a

escreva(a1);

a1<-- a1 + r;

soma<-- soma + a1

fim para

escreva(soma)
system("pause")
