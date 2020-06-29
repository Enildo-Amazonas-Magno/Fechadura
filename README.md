# Fechadura
Joãozinho estava um dia chegando em casa quando percebeu que havia perdido a chave da porta. Desesperado, ele resolveu pedir ajuda a seu amigo Roberto, que em poucos segundos conseguiu abrir a porta usando suas ferramentas.

Admirado com a velocidade em que seu amigo conseguiu abrir a porta de sua casa sem a chave, ele decidiu perguntar como ele tinha conseguido aquilo. Roberto explicou que a fechadura da casa de Joãozinho é baseada em um sistema de pinos de tamanhos diferentes que, uma vez alinhados na mesma altura M , possibilitam a abertura da porta.

Uma fechadura é um conjunto de N pinos dispostos horizontalmente que podem ser movimentados para cima ou para baixo com o auxílio de uma chave de metal que, ao ser inserida dentro da fechadura, pode aumentar ou diminuir em 1mm, simultaneamente, a altura de quaisquer dois pinos consecutivos.

Joãozinho como um exemplar perfeccionista decidiu desbloquear sua fechadura na menor quantidade de movimentos, onde cada movimento consiste em escolher dois pinos consecutivos da fechadura e aumentar ou diminuir a altura dos dois pinos em 1mm. Após todos os pinos possuírem altura exatamente igual a M , a fechadura é desbloqueada.

Formato de entrada

A primeira linha da entrada contém dois inteiros N e M representando, respectivamente, a quantidade de pinos da fechadura e a altura em que eles devem ficar para a fechadura ser desbloqueada.

A segunda linha da entrada contém N inteiros, representando as alturas dos pinos da fechadura.
Restrições

    1 ≤ N ≤ 1000
    1 ≤ M ≤ 100
    Cada altura dos pinos está entre 1 e 100.
    É garantido que os casos de testes sempre possuem uma solução.

Formato de saída

Seu programa deve imprimir uma linha contendo um inteiro representando a quantidade mínima de movimentos para desbloquear a fechadura.
