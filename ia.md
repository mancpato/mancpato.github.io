---
layout: page
title: Inteligencia Artificial
permalink: /ia/
nav_order: 1
---

## Notas y proyectos sobre IA (y temas afines) 

Mi posgrado fue en IA, particularmente resolviendo un problema de visión por computadora, haciendo uso del enfoque lógico-combinatorio del reconocimiento de patrones. Esa etapa del CINVESTAV fue de gran aprendizaje. Los cursos de IA y el de lógica matemática se convirtieron en pilares para muchas otras cosas.

El acercamiento con la teoría de la computación (lenguajes formales y autómatas) me ayudó a redondear todo este asunto. En la UABCS me a tocado impartir más de 20 veces cursos que tienen que ver con IA y su estudio lo llevo paralelo al de la programación numérica.

En este momento, mi trabajo (*diversión*) principal es el desarrollo de lo que llamo SuiteRNA, un conjunto de visualizadores de redes neuronales que permiten explorar su comportamiento al variar algún hiperparámetro. No se conforma con redes tradicionales.

- [SuiteRNA](#SuiteRNA), *julio de 2026* Gran proyecto de desarrollo de comparadores de redes neuronales.
- [GradienViz](#GradienViz), *enero de 2026* Visualizador de optimización por gradiente para regresión lineal.

---

## Repositorios del proyecto SuiteRNA: {#SuiteRNA}

- [TalleRNA](#TalleRNA), un recurso para comparar varias redes neuronales muy pequeñas (menos de 50 parámetros) aprendiendo simultáneamente.
- [TalleRNAmulti](#TalleRNAmulti), un recurso para comparar varias redes neuronales (menos de 1500 parámetros) aprendiendo simultáneamente.
- [TalleCNN](#TalleCNN), comparación de redes convolucionales variando kernels,
  profundidad y pooling. *(en construcción)*
- [TalleRNN](#TalleRNN), comparación de redes recurrentes y LSTM. *(en construcción)*
- [TalleAttn](#TalleAttn), transformador didáctico para explorar mecanismos de
  atención. *(en construcción)*
- [Arquitecturas especiales](#especiales): Kolmogorov-Arnold (KAN), redes de eco (ESN) y redes de
  impulsos (SNN). *(planeadas)*
- [TaleSLT](#TaleSLT), análisis del aprendizaje singular: geometría de la pérdida
  y grupos de simetría de las redes. *(investigación en curso)*

Toda la Suite debiera estar terminada en 2027. En algún momento será necesario incursionar en el tinyML, pero aún no se cuándo.

---

### TalleRNA {#TalleRNA}
Visualizador interactivo de múltiples de redes neuronales para clasificación binaria entrenando simultáneamente, para uso didáctico. Permite comparar redes neuronales pequeñas (perceptrones multicapa) variando algún hiperparámetro. Más detalles pueden leerse en el README del repositorio.

<img src="{{ site.baseurl }}/assets/images/ia/TalleRNA.png" alt="Pantalla de ejemplo" width="500">

Corre directamente como página web, basta cargar index.html en el navegador de preferencia. Usa p5.js para ejecutar todas las operaciones de redes neuronales. 

El repositorio se encuentra en [github.com/mancpato/TalleRNA](https://github.com/mancpato/TalleRNA). Se espera que sea útil para cualquier interesado en estudiar redes neuronales.

Para visualizar una sóla red aprendiendo, se recomienda el excelente recurso [Playground de TensorFlow](https://playground.tensorflow.org/), muy instructivo, elocuente y bellamente diseñado.

---

### TalleRNAmulti {#TalleRNAmulti}
Extiende TalleRNA hacia redes más grandes (hasta ~1500 parámetros) y problemas
multiclase. Permite observar cómo los hiperparámetros se comportan cuando la red tiene mayor capacidad y la salida ya no es binaria. Se ha agregado el hiperparámetro dropout, que para redes pequeñas no tenía sentido usar. Comparte la filosofía de experimento controlado: varía exactamente una cosa, mantiene todo lo demás fijo.

<img src="{{ site.baseurl }}/assets/images/ia/TalleRNAmulti.png" alt="Pantalla de ejemplo" width="500">

Al igual que TalleRNA, corre directamente como página web. Usa p5.js.

El repositorio se encuentra en
[github.com/mancpato/TalleRNAmulti](https://github.com/mancpato/TalleRNAmulti).

---

### TalleCNN {#TalleCNN}
*(en construcción)*

Visualizador de redes neuronales convolucionales entrenando sobre datos de imagen.
Permite comparar enjambres de CNNs variando el tamaño del kernel, la profundidad,
el tipo de pooling y la presencia de batch normalization o data augmentation.
Incluye visualización de mapas de características (feature maps) y mapas de
relevancia Grad-CAM para hacer observable qué zonas de la imagen activan cada
filtro. Corre como aplicación nativa con Dear PyGui y PyTorch.

---

### TalleRNN {#TalleRNN}
*(en construcción)*

Visualizador de redes recurrentes (RNN y LSTM) entrenando sobre secuencias
sintéticas. El objetivo es hacer observable el flujo de información a través del
tiempo: cómo el estado oculto evoluciona, dónde el gradiente se desvanece o
explota, y qué ventaja aportan las compuertas de la LSTM frente a la RNN simple.
Corre como aplicación nativa con Dear PyGui y PyTorch.

---

### TalleAttn {#TalleAttn}
*(en construcción)*

Transformador didáctico de escala reducida (~50K–500K parámetros) entrenado sobre
datos sintéticos. Permite explorar el mecanismo de atención cabeza por cabeza,
observar cómo el modelo distribuye el peso entre posiciones de la secuencia y
comparar arquitecturas con distinto número de cabezas o capas. Corre como
aplicación nativa con Dear PyGui y PyTorch.

---

### Arquitecturas especiales {#especiales}
*(planeadas)*

Tres herramientas independientes en etapa de diseño:

- **KAN** (Kolmogorov-Arnold Networks): redes cuyas conexiones aprenden funciones
  en lugar de pesos escalares, visualizando las funciones aprendidas en cada arista.
- **ESN / Liquid** (Echo State Networks): reservorios recurrentes de dinámica fija
  donde solo se entrena la capa de salida; útiles para mostrar el poder de los
  sistemas dinámicos caóticos como sustrato de cómputo.
- **SNN** (Spiking Neural Networks): redes de impulsos donde la información viaja
  como trenes de espiga; permiten discutir la frontera entre neurociencia
  computacional e ingeniería.

---

### TaleSLT {#TaleSLT}
*(investigación en curso)*

Proyecto de análisis basado en la Teoría del Aprendizaje Singular (Singular
Learning Theory, SLT). Cada herramienta de la SuiteRNA expone un aspecto
geométrico distinto de la pérdida: TalleRNA ofrece simetrías de permutación
exactamente contables; TalleCNN introduce simetrías continuas por capa; TalleAttn
permite medir la dimensión de aprendizaje local (LLC) por cabeza de atención.
TaleSLT reúne estas perspectivas en un visualizador de la geometría del espacio
de parámetros: paisaje de pérdida, curvatura y grupos de simetría de la red.

---

## GradienViz {#GradienViz}

<small style="color: #999;">Enero de 2026</small>

Herramienta pedagógica para cursos de inteligencia artificial, aprendizaje automático y optimización numérica. Implementada en p5.js como un único archivo HTML autocontenido — no requiere instalación ni servidor.

<img src="{{ site.baseurl }}/assets/images/ia/GradienViz.png" alt="Pantalla de ejemplo" width="600">

El repositorio se encuentra en
[github.com/mancpato/GradienViz](https://github.com/mancpato/GradienViz).