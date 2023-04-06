# Curso Análise de dados com Inteligência Artificial

Introdução a Análise de Dados; Produção de Dados; Armazenamento Analítico; Análise de Dados;
Problemas e Soluções em Análise de Dados; Análise de Dados Categóricos; Exemplos de Dados:
Métricas de Desempenho; Indicadores; Sistemas de Medição. Módulos Python para Análise de Dados.
Introdução à Análise de Dados com Python. Análise exploratória de Dados; Aplicações de modelos e
algoritmos de aprendizado de máquina.

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

![PlanoEnsino-AnaliseDeDadosComInteligenciaArtificial-pre-1](https://user-images.githubusercontent.com/123272343/230292698-19a116c0-89a5-404a-ba4b-4209c92cb9c5.png)

![PlanoEnsino-AnaliseDeDadosComInteligenciaArtificial-pre-2](https://user-images.githubusercontent.com/123272343/230292711-c68eddf3-9643-4d87-8d19-87dacf7fba85.png)

PDF: [PlanoEnsino-AnaliseDeDadosComInteligenciaArtificial-pre.pdf](https://github.com/DayanFA/Nucleo-avancado-de-empreendedorismo-e-tecnologia-do-Acre/files/11167116/PlanoEnsino-AnaliseDeDadosComInteligenciaArtificial-pre.pdf)
