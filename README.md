# smart_fire_alert

**Instituto INFNET![](Marcos_Cassiano_PB_TP9/Aspose.Words.b7059aae-f20a-47cf-839c-13711704c849.001.png)**

**Curso de engenharia da computação**

**Aluno: Marcos Cassiano de Souza**

**Teste de Performance 9 -**

**Projeto de Bloco: Sistemas Digitais Embarcados**

**Prof.: Edgar jose Garcia Neto Segundo**

**Rio de Janeiro 09/2023**

**Índice**

**Sistema embarcado …………………………..………………………………… 3-6 Função do projeto ………….…………..…………………………………… 3 Motivação do projeto ………………….…………………………………… 3 Funcionamento do projeto ….………..…………………………………… 3 Comparativo do projeto …………………………………………….……… 3 Componentes do projeto …..……………………………………….…… 4-5**

**CPU do projeto ……….……………………………………………………… 6 Diagramas ………………………………………………………………………… 6-9 Descrição dos sensores ..……………………………………………………… 10 Controle dos dispositivos ..………………………………………………… 10-11 Tipo de funcionamento …….…………………………………………… 10 Outros tipos de sensores ……………………………………………… 10 Alimentação do circuito ………………………………………………… 11 Processamento ……..……………………………………………………..……… 11 Ponto único de falha ………………………………………………..…………… 12 Bibliografia ………………………………………………………………………… 13**

1. **Função do Projeto**

Este projeto tem o principal objetivo de atender aos requisitos do projeto de bloco de sistemas digitais embarcados utilizando hardware e softwares disponibilizados ou recomendados durante o curso. A função do sistema embarcado é ser um ‘SMART FIRE ALERT’, um sistema de alerta de incêndio inteligente que além detectar falsos positivos, tem a tomada de decisão baseada em parâmetros pré-estabelecidos, como se tem pessoas no prédio a fim de evitar gastos com disparos de eventos.

2. **Motivação**

Ele tem o objetivo de resolver o problema de comunicação dos alertas de incêndio, servindo de pré aviso para a administração do prédio, integrantes da brigada e bombeiros, eliminando a necessidade de tomada de decisão tardias ou que por causa de alguma situação possam ser negligenciadas.

3. **Funcionamento do projeto**

Ele funciona com base nos parâmetros pré estabelecidos por código para ter a solução mais eficiente do problema.

Com pessoas no prédio: Havendo pessoas no prédio no dia do ocorrido, ao verificar que se trata de um incêndio de verdade e não um falso positivo, ele irá acionar todos os funcionários que forem cadastrados previamente do princípio de incêndio que está ocorrendo, além de avisar a todos ele manda um aviso diferente para os integrantes da brigada de incêndio, que são responsáveis para uma tomada de decisão inicial e a administração do prédio para se prevenir e tomar as decisões mais rapidamente.

Sem pessoas no prédio: Sendo em dia que não possua expediente e o sistema detectando que não existem pessoas no prédio naquele dia, ele irá ter um comportamento diferente, visando não só a economia, mas também a eficiência do projeto ele irá disparar avisos apenas para os integrantes da brigada para estarem cientes do ocorrido, e a administração do prédio para tomarem alguma atitude e como forma de precaver qualquer prejuízo ainda maior, ele irá também notificar o corpo de bombeiros, tendo em vista que o prédio pode estar vazio, o que pode fazer com que incêndio se alastre mais por não ter ninguém no local no momento para tentar conter o princípio de incêndio. Então, como o fogo pode tomar tamanhos maiores a fim de evitar tragédias maiores ele irá avisar o corpo de bombeiros também.

Além disso, o sistema conta com uma alimentação por fonte usb, onde será alimentado por 5v tanto

- ESP32 como os sensores.
4. **Comparativo**

No mercado atual existem sistemas como o da intelbras de detector de fumaça inteligente o IDF 620, ele possui apenas o sensor de fumaça para fazer a identificação de algum incêndio, possui conectividade com wifi e sistema de comunicação própria que precisa ser comprada a parte para fazer qualquer tipo de personalização. Existem de outras marcas, porém a maioria possui apenas o detector de fumaça como sensor e seus valores giram em torno de 100 a 300 reais, variando com a marca e quantidade de recursos oferecidos.

5. **Componentes Hardware e Software**

|**Componentes**|**Valor Por UND**|**IMAGEM**|
| - | - | - |
|ESP32 NodeMCU|R$: 65,00|![](Aspose.Words.b7059aae-f20a-47cf-839c-13711704c849.002.jpeg)|
|Sensor de Chama KY-026|R$:10,00|![](Aspose.Words.b7059aae-f20a-47cf-839c-13711704c849.003.jpeg)|
|Sensor de Fumaça MQ-2|R$: 19,86|![](Aspose.Words.b7059aae-f20a-47cf-839c-13711704c849.004.jpeg)|
|Mini Sensor De Movimento Presença Pir Hc-sr505 P/ Arduino|R$: 14,00|![](Aspose.Words.b7059aae-f20a-47cf-839c-13711704c849.005.jpeg)|
|Buzzer|R$:3,66|![](Aspose.Words.b7059aae-f20a-47cf-839c-13711704c849.006.jpeg)|
|ProtoBoard|R$:18,90|![](Aspose.Words.b7059aae-f20a-47cf-839c-13711704c849.007.jpeg)|
|Kit Jumper|R$:0,18|![](Aspose.Words.b7059aae-f20a-47cf-839c-13711704c849.008.jpeg)|
|Led 5mm|R$:0,21|![](Aspose.Words.b7059aae-f20a-47cf-839c-13711704c849.009.jpeg)|
|Resistor 1K|R$:0,04|![](Aspose.Words.b7059aae-f20a-47cf-839c-13711704c849.010.jpeg)|
|Total por unidade|R$:117,85||


|**SOFTWARE**|**LINK**|**IMAGEM**|**DESCRIÇÃO**|
| - | - | - | - |
|BLYNK|https://blynk.io/|![](Aspose.Words.b7059aae-f20a-47cf-839c-13711704c849.011.jpeg)|API para comunicação com a WEB e diversos outros serviços.|
|ARDUINO IDE|https://www.arduino.cc /en/software|![](Aspose.Words.b7059aae-f20a-47cf-839c-13711704c849.012.jpeg)|IDE de desenvolvimento para componentes arduino.|
|WOKWI|https://wokwi.com/|![](Aspose.Words.b7059aae-f20a-47cf-839c-13711704c849.013.jpeg)|Simulador online de componentes para testes.|
|FRITZING|https://fritzing.org/|![](Aspose.Words.b7059aae-f20a-47cf-839c-13711704c849.014.jpeg)|Montar esquema elétricos.|

6. **Qual Processador utilizar**

Este projeto irá utilizar como processador central o arduino **ESP32 NodeMCU**. O maior motivo da sua utilização é sua conectividade integrada com wifi, o tornando muito mais útil para as demandas atuais onde todas as pessoas estão 100% conectadas a internet. Outro grande motivo é sua integração com o BLYNK que permite notificações tanto por email, sms e pelo próprio aplicativo de forma instantânea. Além disso, ele possui um dashboard onde podemos fazer uma rápida análise dos dados gerados pelo nosso controlador. Seu baixo consumo aliado ao resto do sistema permite também ter diversos desses sensores sem impactar no gasto mensal do local onde ele estará instalado.

Justificativa: Os principais motivos da escolha do **ESP32** no lugar do **Arduino UNO** são a falta de wifi integrado, necessitando de módulos extras para adicionar essa função, outro empecilho é seu tamanho o que ocuparia um espaço consideravelmente maior tornando o projeto maior e gastando mais para a produção do seu corpo o que deixa ele mais caro e com menos possibilidade de uso. Capacidade de processamento inferior, deixando sua velocidade de processamento de dados inferior ao **ESP32,** algo que neste projeto onde a velocidade será crucial, isso poderia impactar circunstacialmente conforme o número de pessoas adicionadas fosse aumentando, além disso com

- **ESP32** nosso circuito pode ter expansões futuras aumentando assim suas funcionalidades sem perder sua capacidade de processamento ou velocidade de ação permitindo algumas personalizações no sistema de disparo de eventos pelo usuário que irá administrar o circuito.

**2 Diagrama de Blocos e Funcional do projeto**

![](Aspose.Words.b7059aae-f20a-47cf-839c-13711704c849.015.png)

![](Aspose.Words.b7059aae-f20a-47cf-839c-13711704c849.016.jpeg)

![](Aspose.Words.b7059aae-f20a-47cf-839c-13711704c849.017.jpeg)

![](Aspose.Words.b7059aae-f20a-47cf-839c-13711704c849.018.jpeg)

![](Aspose.Words.b7059aae-f20a-47cf-839c-13711704c849.019.jpeg)

![](Aspose.Words.b7059aae-f20a-47cf-839c-13711704c849.020.jpeg)

![](Aspose.Words.b7059aae-f20a-47cf-839c-13711704c849.021.jpeg) ![](Aspose.Words.b7059aae-f20a-47cf-839c-13711704c849.022.png)

**3 Quais os tipos de sensores que serão utilizados no projeto**

**KY-026**

Sensor do tipo fotodiodo para detectar chamas, Modelo KY-026 custa em média 10,00 reais, ele possui um potenciômetro que pode ser utilizado para regular sua sensibilidade de medição, pode ser conectado diretamente no arduino usando a conexão de 5v e GND, ele pode ler sinal digital de 1= tem chama ou 0 = sem chama, seu funcionamento parte de 3 etapas, a leitura do sensor frontal que emite um sinal analogico, depois passa pelo amplificador que é um potenciômetro que faz a amplificação desse sinal e depois joga ele para o comparador onde ele faz a comparação se um valor está abaixo de um valor específico para dar o sinal de saída baixa.

**MQ-2**

Sensor do tipo semicondutor para detectar gás e fumaça, Modelo MQ-2 custa em média 19,00 reais, ele possui um potenciômetro que pode ser utilizado para regular sua sensibilidade de medição, pode ser conectado diretamente no arduino usando conexão 5v e GND, sua medição é feita de forma analógica com a saída sendo de 0~5V, mas o sistema não precisa de adaptação pois ele possui um um conversor para saída digital diretamente, simplificando o uso do mesmo. Quando a concentração de gases fica acima do nível ajustado no potenciômetro, a saída digital fica em nível alto ou 1 e quando estiver abaixo do nível ele ficará em estado baixo 0.

**Pir Hc-sr505**

Sensor do tipo PIR(Sensor Infravermelho Passivo) para detectar movimento, modelo HD-SR505 custa em média 15,00 reais, pode ser conectado diretamente no arduino usando a conexão 5v e GND, sua medição é feita de forma digital com sinal e baixo, onde alto = 3,3v e baixo = 0v. Fácil utilização, possui um bom ângulo de visão, aproximadamente 100° graus e distância de 3 metros.

**4 - Dispositivos e atuadores que serão controlados pelo projeto**

1. **- O controle dos dispositivos é do tipo liga/desliga?**

Os atuadores BUZZER e LED são do tipo liga/desliga, eles são acionados de acordo com a lógica de funcionamento do circuito, o Buzzer é altamente eficiente para detectar falhas do próprio sistema ou para fazer algum tipo de aviso. Os Leds serão úteis para mostrar que o sistema está ligado apenas olhando para ele, o que vai ser útil para uma rápida avaliação.

2. **- Listas os dispositivos que não forem do tipo liga/desliga.**

O único atuador que não é do tipo liga/desliga é a API BLYNK, que utilizaremos para estar sempre monitorando o circuito evitando qualquer tipo de falha em forma de evento utilizando o protocolo MQTT, como perder conexão com wifi, algum sensor não funcionar, possíveis falsos positivos como quando reconhece fumaça e não reconhece chama.

3. **- Qual o tipo de alimentação dos dispositivos a serem controlados (127v, 220v, 5v, bateria, corrente contínua, corrente alternada). Quais informações de tensão, corrente e potência você tem sobre esses dispositivos?**

O microcontrolador ESP32 será utilizado na tensão elétrica de 3,3v sendo alimentado pelo usb diretamente na placa, e os sensores que precisam de alimentação 5v serão alimentados externamente por outra fonte de alimentação.

**Processamento**

O sistema está montado em protoboard para testes de funcionamento antes de colocar em prática, ele possui 2 LEDs vermelhos, um indica quando o sistema está ligado e funcionando e outro quando ainda não conseguiu conectar no wifi.

O Buzzer que é ativado quando ocorre o incêndio e tem pessoas no prédio(detectou movimento) BLYNK(API) que é disparado o evento quando ocorre o incêndio e tem 3 tomadas de decisão baseadas nas regras estabelecidas e de acordo com a limitação do projeto por utilizar a versão gratuita do BLYNK. As decisões são tomadas quando os valores de fumaça e chama estão em nível alto e assim avisa a administração do prédio.

Após a detecção do incêndio temos um desvio de condicional onde será tomada as decisões se tiver movimento dentro do prédio ou não, se tiver movimento avisa a todos os funcionários, se não tiver avisa somente a brigada e também aos bombeiros.

Variáveis monitoradas são, Movimento, chama e fumaça.



|Fumaça|Chama|Fogo|Ação|
| - | - | - | - |
|0|0|0|1 min de Timer|
|0|1|0|5 seg de Timer|
|1|0|0|5 seg de Timer|
|1|1|1|Acionar Atuadores|

**Detalhamento da etapa de Processamento**

O passo a passo do processamento é:

- Estabelecer conexão com a rede wifi local

Ocorrendo falha ele deve tentar novamente e não parar de piscar o LED indicando que ainda não conectou a rede wifi.

- Estabelecer conexão com o software BLYNK

Semelhante ao processo anterior, fica piscando o mesmo LED indicando que ainda não saiu do Loop. Única forma de diferenciar é lendo os logs.

- Fazer medição dos sensores de chama e fumaça

A única forma de verificar é testando fisicamente eles, visto que a saída deles é I/O, se estiver 0 pode significar tanto como não tendo chama ou fogo como o sensor não respondendo.

- Verificar se possui pessoas no prédio

Esse sensor é utilizado de tempos em tempos para validar se possui pessoas no prédio. E ocorrendo falha a única forma de saber é testando ele fisicamente.

**Ponto único de falha no sistema**

O sistema possui como ponto único de falha 3 pontos.

1 - Mal ou interrupção no funcionamento do microcontrolador: Se o ESP32 parar de funcionar ele terá que ser trocado, pois não há forma de remediar seu uso. Fica inviável financeiramente ter redundância neste ponto para ficar de backup caso o controlador principal falhe. Será mais viável duplicar o microcontrolador.

2 - Conexão com wifi e BLYNK- Neste ponto existe a etapa de auto teste para verificar se a conexão está funcionando, não conectando ao wifi ou ao software blynk o circuito fica em loop inicial e não consegue avançar para as medições dos sensores, isso se dá pela necessidade de conexão ao software blynk para o sistema avisar de forma eficiente sobre um problema quando ocorrer.

3 - Interrupção dos sensores - Se os sensores pararem de funcionar o circuito não conseguirá identificar o defeito e não irá funcionar de forma adequada. Novamente se torna inviável ter redundância neste ponto, se tornando assim mais prático financeiramente apenas duplicar os sensores.

**Bibliografia:**

1 - Datasheet do Microcontrolador ESP32, [alldatasheet.com/esp32](https://www.alldatasheet.com/view.jsp?Searchword=Esp32%20datasheet&gad=1&gclid=CjwKCAjwyeujBhA5EiwA5WD7_ediEF4rBRY1rv2TqSK90RlqRmmHxaRf3iG7rPB2G5xDstk21CQcvRoCJWcQAvD_BwE)

2 - PDF Datasheet sensor de chama KY-026, <https://moviltronics.com/wp-content/uploads/2019/10/KY-026.pdf>

3 - Documentação do simulador wokwi esp32, <https://docs.wokwi.com/guides/esp32>

4 - Documentação do simulador wokwi esp32 com wifi, <https://docs.wokwi.com/guides/esp32-wifi>

5 - Exemplo de projeto utilizando o sensor de temperatura KY-026, <https://www.robotique.tech/robotics/fire-detection-system-controlled-by-esp32/>

6 - Vídeo no Youtube de exemplo de sensor de chamas 1, [Módulo detector de chamas](https://www.youtube.com/watch?v=SZCgVClp12g&ab_channel=WSGambis)

7 - Vídeo no Youtube de exemplo de sensor de chamas 2, [Fire arduino detection blynk notification](https://www.youtube.com/watch?v=09qCFviU8p0&ab_channel=TeachMeSomething)

8 - Vídeo no Youtube de exemplo de automação com ESP32 com BLYNK, [Home automation | esp32 | Blynk 2.0](https://www.youtube.com/watch?v=_96Kfo2_pOk&ab_channel=TechnicalShubham)

9 - PDF Datasheet do sensor de presença PIR HC-SR505, <https://static.rapidonline.com/pdf/78-4110_v1.pdf>

10 - PDF Datasheet do sensor de gases e fumaça MQ-2, <https://www.pololu.com/file/0J309/MQ2.pdf>

11 - Projeto Montado com código no simulador WOKWI, <https://wokwi.com/projects/366386807639851009>

12 - PDF com biblioteca do sensor de temperatura, <https://blogmasterwalkershop.com.br/arquivos/datasheet/Datasheet%20DHT11.pdf>

13 - Video do projeto montado apenas no simulador WOKWI, <https://youtu.be/X2jGG2ng2sU>

14 - Link da LIB do BLYNK utilizada no código, <https://docs.blynk.io/en/blynk-library-firmware-api/installation/install-blynk-library-in-arduino-ide>

15 - Código do ESP32 no GITHUB, <https://github.com/marcoscsouza/smart_fire_alert/blob/main/maincode.ino>

16 - Video projeto montado na protoboard, <https://youtu.be/WdHIDzaAZK4>

17 - Prototipo de estrutura 3D utilizada como caixa do circuito, [https://www.tinkercad.com/things/1ofKsk4fGAu-copy-of-circular-box/edit?sharecode=7XgApz3jLs3gi PyEwwOelKhgPUbk5iavfEcF6RNF6tg](https://www.tinkercad.com/things/1ofKsk4fGAu-copy-of-circular-box/edit?sharecode=7XgApz3jLs3giPyEwwOelKhgPUbk5iavfEcF6RNF6tg)


