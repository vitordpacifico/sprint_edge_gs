**<h2>SPRINT DA GLOBAL SOLUTION, DA MATÉRIA DE EDGE COMPUTING.</h2>**
    
**Membros:**

Victor Pacifico Dias - RM558017

Guilherme Abe - RM554743

Gustavo Paulino - RM554779

**<h2>Link do projeto: (Feito no site Wokwi)</h2>**
link do projeto: https://wokwi.com/projects/399257234375428097

**<h2>Materiais Necessários para o projeto</h2>**
1. Arduino Uno R3
2. Sensor Ultrassônico HCSR04
3. Sensor de Temperatura DS18B20
4. Protoboard e Cabos Jumpers
5. Resistor de 4.7kΩ

**<h2>Para fazermos as conexões do Sensor Ultrassônico HCSR04 no Arduino precisamos conectar:</h2>**

O VCC no encaixe de 5V do Arduino

O GND no encaixe do GND no Arduino

O Trigger no Pino Digital 9 no Arduino

O Echo no Pino Digital 10 no Arduino

**<h2>E para fazermos as conexões do Sensor de Temperatura DS18B20 no Arduino precisamos conectar:</h2>**

O VCC no encaixe de 3.5V do Arduino

O GND no encaixe do GND no Arduino

Encaixar o Data no Pino Digital 2 no Arduino

Encaixar um Resistor de 4.7kΩ entre o 3.5V e VCC





**<h2>Descrição do Projeto</h2>**
O sistema, que foi feito em arduino consiste basicamente em dois sensores: um sensor ultrassônico, o HCSR04 para medir a distância de objetos jogados ao mar ao sensor, e o sensor de temperatura DS18B20 para medir a temperatura ambiente da água. Esses sensores são conectados ao Arduino Uno R3 que teoricamente seria acoplado a uma "plataforma" submersa na água, e esse hardware seria o responsável por coletar todos os dados de lixos jogados no mar, processá-los e, enviar para a nossa nuvem.

<h2>Instruções de Uso</h2>

**Montagem do Circuito:**

Primeiro conecte o sensor ultrassônico e o sensor de temperatura ao Arduino conforme as instruções que nós fornecemos. Certifique-se de que todas as conexões estejam firmes e corretas antes de ligar o Arduino.

**Carregamento do Código:**

Após upar, e carregar todo o código, ligue o Arduino e observe as medições que serão realizadas.
Os dados de distância e temperatura serão exibidos no Serial Monitor da IDE do Arduino.

**Dependências:**

O código necessário se encontra tanto no nosso anquivo main aqui do projeto, como também está incluído no projeto feito pelo site Wokwi. Aconselha-mos que faça o projeto primeiramente pelos sites simuladores antes de fazer diretamente no IDE do Arduino
