# Introdução ao Arduino

## O que é Arduino?
O Arduino é um microcontrolador em que é possível ser reprogramado. Com ele, você será capaz de controlar inúmeros dispositivos e componentes de circuitos elétricos, por exemplo, LEDs, motores, chaves, a luz de uma casa, sensores, temperatura, a potência de um determinado equipamento, um robô, e muito mais.
O objetivo era elaborar um dispositivo que fosse ao mesmo tempo barato, funcional e fácil de programar, sendo dessa forma acessível a estudantes e projetistas amadores. Além disso, foi adotado o conceito de hardware livre, o que significa que qualquer um pode montar, modificar, melhorar e personalizar o Arduino, partindo do mesmo hardware básico. No mundo da computação e da eletrônica isso é chamado de open source. 

## Como surgiu?
O Arduino foi criado em 2005 por um grupo de 5 pesquisadores : Massimo Banzi, David Cuartielles, Tom Igoe, Gianluca Martino e David Mellis, mas esta história começa por volta de 2002 no Interaction Design Institute Ivrea (IDII) – uma antiga escola de design italiana. O professor da disciplina de design de interação, Massimo Banzi, estava com um problema. Ele precisava encontrar uma maneira fácil e barata para que os seus alunos, na maioria designers e artistas, pudessem criar dispositivos eletrônicos que reagissem fisicamente conforme fossem estimulados. O que ele e seus colegas criaram revolucionaram o universo maker.
Este vídeo(https://www.ted.com/talks/massimo_banzi_how_arduino_is_open_sourcing_imagination?language=pt-br) mostra Massimo Banzi, um dos criadores do Arduino, falando um pouco sobre o processo de criação e desenvolvimento, e apresentando alguns projetos que utilizam a plataforma.

    (Para mais detalhes, acesse: https://eletronicapratica.com/arduino/historia-do-arduino/)

## O que posso fazer com Arduino?
Arduinos são usados em inúmeros projetos, dos mais simples aos mais complexos. Luzes que piscam ao ritmo da música, alarmes que disparam quando percebem movimento, robôs que interagem com o ambiente e controlam máquinas pela Internet, roupas, óculos e bolsas multimídia, instalações visuais, sensoriais, cinéticas e sonoras, sistemas de automação residencial, sistemas de irrigação, sistemas de realidade virtual, próteses controladas por voz, jogos, drones, controladores MIDI, impressoras 3D são alguns exemplos de projetos já criados com Arduino.

## Tipos de Arduino
Existem dezenas de diferentes tipos de placas que podem ser chamadas de “Arduino”. O Arduino Uno é um dos mais populares, e ideal para fazer protótipos, experimentar e programar. O Arduino Mega possui mais pinos, maior capacidade de processamento e memória e é indicado para projetos maiores (ex: impressoras 3D). Existem várias placas minúsculas como o Arduino Pro Mini, o DigiSpark ATTiny, ou o Arduino Nano (incluído no kit).

## Como funciona o Arduino?
O circuito do Arduino é composto de um microcontrolador programável montado em uma placa, onde é configurado para operar e oferecer acesso seguro aos seus pinos de entrada e saída. Um microcontrolador é como um mini-computador. Ele tem memória, uma unidade central de processamento (CPU), entradas e saídas. Os programas gravados na memória de um microcontrolador controlam os sinais (correntes e tensões) enviadas e recebidas em seus pinos de entrada e saída, permitindo receber sinais de sensores externos e controlar dispositivos.
As entradas do Arduino recebem dados, que podem ser pulsos, tensões e outros sinais elétricos que ele interpreta como dados digitais (dois estados lógicos: ligado/ALTO ou desligado/BAIXO) ou analógicos (valores que variam). Os geradores desses sinais podem ser chaves, potenciômetros, sensores de luz, som e temperatura, outros circuitos, dispositivos conectados a redes, etc. As saídas também produzem pulsos, tensões e sinais analógicos ou digitais, que podem ser usadas para diversas tarefas, como acender um LED, controlar um motor, ligar ou desligar um circuito, controlar um dispositivo externo, enviar um email.
O microcontrolador processa os dados de entrada para gerar os dados de saída. Todo o processamento é feito via software, ou seja, através de uma linguagem de programação.
Um programa usa instruções para ler o estado (nível de tensão, nível lógico alto ou baixo) em pinos de entrada, e produzir saídas (tensão, nível lógico alto ou baixo) nos pinos de saída, que poderão ligar, desligar ou controlar componentes e dispositivos. O programa é um arquivo de texto digitado em um computador, em seguida traduzido para linguagem de máquina e depois transferido para o microcontrolador (através de um circuito de comunicação que controla o acesso a pinos de comunicação serial), onde será gravado na memória do chip.
Uma vez gravado o programa, o microcontrolador pode ser desconectado do computador e usado em outro circuito para usar seus pinos de entrada/saída, ser alimentado por baterias, e funcionar de forma independente.

## Circuito
A placa Arduino UNO possui diversos conectores que servem para interface com o mundo externo. Esses pinos são:
*14 pinos de entrada e saída digital (pinos 0-13);
*6 pinos de entradas analógicas (pinos A0 - A5);
*6 pinos de saídas analógicas (pinos 3, 5, 6, 9, 10 e 11).
    
    Desenvolveremos melhor esses conceitos eletrônicos ao longo do curso.

## Programação
Escrever um programa em Arduino é muito simples. Tudo o que você precisa é conectá-lo ao computador por meio de um cabo USB e utilizar um ambiente de programação chamado IDE, onde você digita o programa, faz os testes para encontrar eventuais erros e transfere o programa para o dispositivo.

