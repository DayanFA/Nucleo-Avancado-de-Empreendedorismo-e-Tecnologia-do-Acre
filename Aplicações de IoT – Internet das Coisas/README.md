# Curso Aplicações de IoT – Internet das Coisas

Aprendizagem de conceitos fundamentais relacionados à Internet das Coisas; Cenários e aplicações:
área industrial, planejamento urbano, cidades inteligentes, sistemas de transporte, sistemas logísticos,
monitoramento interno e ambiental, agronegócio etc.; Exploração e consolidação dos conceitos pela
experimentação de casos de usos; Desenvolvimento de sistemas baseados em Internet das Coisas para
resolução de problemas reais. Integração de dispositivos através da nuvem; Criação de aplicações em
Python para IoT. 

# Exercício de avaliação

* Exercício

A pasta "Hands On" contem três arquivos:
• Hands-on-alunos.ipynb (o notebook)
• auto_cleaned.csv (arquivo treinamento)
• test.csv (arquivo teste)

↪ Questão 1:

Crie um modelo de regressão linear múltipla <b>lm1</b> treinado sobre as seguintes features do conjunto auto_cleaned:

• Horsepower
• Curb-weight
• Engine-size
• Highway-mpg
• City-mpg
• Bore
• Width
• Length
• Wheel-base

Avalie a qualidade do ajuste (treinamento) usando R-squared e a qualidade das previsões do ajuste usando MSE.

↪ Questão 2:

Crie um novo modelo de regressão linear múltipla <b>lm2</b> treinado sobre as seguintes features:
• horsepower
• highway-mpg
• city-mpg

Avalie a qualidade do ajuste (treinamento) usando R-squared e a qualidade das previsões do ajuste usando MSE.

↪ Questão 3:

Crie um novo modelo de regressão linear múltipla <b>rlm3</b> treinado sobre as seguintes features:
• highway-mpg
• city-mpg

Avalie a qualidade do ajuste (treinamento) usando R-squared e a qualidade das previsões do ajuste usando MSE.

↪ Questão 4:

Avalie os modelos lm1, lm2 e lm3 treinados e diga qual foi o melhor (e o pior) para métrica MSE sobre o conjunto de dados de testes (test.csv), isto é, dados não usados nos ajustes dos modelos. Esse conjunto contem 50 carros e seus respectivos preços. Para tanto use estes modelos para realizar novas previsões sobre os preços dos 50 carros contidos no arquivo test.csv e avalie a qualidade das previsões pra cada modelo usando MSE.

Para realizar previsões no teste, procure selecionar as mesmas colunas utilizadas no treinamento. Por exemplo, se o modelo foi treinado usando as colunas 1, 2 e 3 do dataframe de treino como features, realize as previsões utilizando somente as colunas 1, 2 e 3 do dataframe de teste como features. Atente que para a métrica MSE, você precisa também selecionar a coluna do 'price' do teste para compará-la com o 'price' predito pelo modelo.

# Plano de ensino

![PlanoEnsino-Aplicações_de_IoT](https://user-images.githubusercontent.com/123272343/230484223-8c81615f-81e5-491f-94c3-cd85f7125df9.png)

![PlanoEnsino-Aplicações_de_IoT-2](https://user-images.githubusercontent.com/123272343/230484241-1e21af22-022c-4012-a311-41a9cc76cf5c.png)

PDF: [PlanoEnsino-Aplicações_de_IoT.pdf](https://github.com/DayanFA/Nucleo-avancado-de-empreendedorismo-e-tecnologia-do-Acre/files/11174121/PlanoEnsino-Aplicacoes_de_IoT.pdf)
