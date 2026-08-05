---
layout: page
title: Inteligencia Artificial
permalink: /ia/
nav_order: 1
---

Notas y proyectos sobre IA (y temas afines). La pandemia fue un detonador importante, me dio tiempo de aprender nuevas tecnologías de redes neuronales y terminar muchos proyectos comenzados hacía años. El trabajo docente aterrizó bien, en mancuerna con mis colegas Margarita de Anda y Jaime Eudes, de la UABCS.

**Algunos proyectos:**
- [SuiteRNA](#suiterna), *abril de 2026* Gran proyecto de análisis de entrenamiento de redes neuronales. Desde perceptrones multicapa hasta redes de atención, incluyendo redes especiales.
- [GradienViz](#gradienviz), *febrero de 2026* Visualizador de optimización por gradiente para regresión lineal. Se originó de una plática de redes neuronales y por eso está aquí.
- [Consensus](#consensus), *mayo de 2026* El debate automatizado para asistencia colegiada.
- [BusqProfundidad](#busqprofundidad), *febrero de 2020* Búsqueda en profundidad simple, programada en Processing.
- [BusqAmplitud](#busqamplitud), *febrero de 2020* Búsqueda en amplitud (anchura) simple, programada en Processing.

**Del baúl de los recuerdos:**

- [Mi inicio en la IA](#cinvestav-ia), *1994*, Sobre cómo comencé esta ruta de vida.
- [Tesis de maestría](#tesis-cinvestav) *1995/1996*

---

## Repositorios del proyecto SuiteRNA {#suiterna}

<small style="color: #999;">Abril de 2026</small>

**SuiteRNA** es un conjunto de herramientas interactivas de visualización de redes neuronales para la enseñanza, donde cada módulo aísla y hace observable en tiempo real un concepto central del aprendizaje profundo mediante comparación controlada de un enjambre de modelos.

- [TalleRNA](#tallerna), un recurso para comparar varias redes neuronales muy pequeñas (menos de 50 parámetros) aprendiendo simultáneamente.
- [TalleRNAmulti](#tallernamulti), un recurso para comparar varias redes neuronales (menos de 1500 parámetros) aprendiendo simultáneamente.
- [TalleCNN](#tallecnn), comparación de redes convolucionales variando kernels,
  profundidad y pooling. *(en construcción)*
- [TalleRNN](#tallernn), comparación de redes recurrentes y LSTM. *(en construcción)*
- [TalleAttn](#talleattn), transformador didáctico para explorar mecanismos de
  atención. *(en construcción)*
- [Arquitecturas especiales](#especiales): Kolmogorov-Arnold (KAN), redes de eco (ESN) y redes de
  impulsos (SNN). *(planeadas)*
- [TalleSLT](#talleslt), análisis del aprendizaje singular: geometría de la pérdida
  y grupos de simetría de las redes. *(investigación en curso)*

Toda la Suite debiera estar terminada en 2027. En algún momento será necesario incursionar en el tinyML, pero no sé cuándo.

---

### TalleRNA {#tallerna}
Visualizador interactivo de múltiples de redes neuronales para clasificación binaria entrenando simultáneamente, para uso didáctico. Permite comparar redes neuronales pequeñas (perceptrones multicapa) variando algún hiperparámetro. Más detalles pueden leerse en el README del repositorio.

<img src="{{ site.baseurl }}/assets/images/ia/TalleRNA.png" alt="Pantalla de ejemplo" width="500">

Corre directamente como página web, basta cargar index.html en el navegador de preferencia. Usa p5.js para ejecutar todas las operaciones de redes neuronales. Puede usarse directamente en [mancpato.github.io/TalleRNA](https://mancpato.github.io/TalleRNA/), no requiere instalación. Basta seleccionar el problema, ajustar los hiperparámetros deseados e iniciar el entrenamiento. 

**Hiperparámetros controlados:**
- Topología: 8 posibles redes
- Activación: 7 de las funciones comunes
- Inicialización: Uniforme, Normal, Xavier y He
- Tasa de aprendizaje: 8 valores, usuario indica min y max
- Momentum: máximo 0.9, mínimo seleccionable
Experimentos: 4 combinaciones de dos hiperparámetros fijas de interés, mas otras libres

El repositorio se encuentra en [github.com/mancpato/TalleRNA](https://github.com/mancpato/TalleRNA). Se espera que sea útil para cualquier interesado en estudiar redes neuronales.

Para visualizar una sola red aprendiendo, se recomienda el excelente recurso [Playground de TensorFlow](https://playground.tensorflow.org/), muy instructivo, elocuente y bellamente diseñado.

---

### TalleRNAmulti {#tallernamulti}
Extiende TalleRNA hacia redes más grandes (hasta ~1500 parámetros) y problemas
multiclase (3 o 4 clases). Permite observar cómo los hiperparámetros se comportan cuando la red tiene mayor capacidad y la salida ya no es binaria. Se ha agregado el hiperparámetro dropout, que para redes pequeñas no tenía sentido usar. Comparte la filosofía de experimento controlado: varía exactamente una cosa, mantiene todo lo demás fijo.

<img src="{{ site.baseurl }}/assets/images/ia/TalleRNAmulti.png" alt="Pantalla de ejemplo" width="500">

Corre directamente como página web, basta cargar `index.html` en el navegador de preferencia. Usa p5.js para ejecutar todas las operaciones de redes neuronales. Puede usarse directamente en [mancpato.github.io/TalleRNA](https://mancpato.github.io/TalleRNAmulti/), no requiere instalación. Basta seleccionar el problema, ajustar los hiperparámetros deseados e iniciar el entrenamiento. 

**Hiperparámetros controlados:**
- Topología: hasta 8 arquitecturas, T0 (2→K) a T7 (2→32→32→K)
- Tasa de aprendizaje: hasta 8 modelos, usuario indica mín y máx
- Inicialización: Uniforme, Normal, Xavier y He, hasta 3 semillas por distribución
- Activación: 7 de las funciones comunes
- Dropout: 6 modelos, p de 0.0 a 0.5

El repositorio se encuentra en
[github.com/mancpato/TalleRNAmulti](https://github.com/mancpato/TalleRNAmulti). Se espera que sea útil para cualquier interesado en estudiar redes neuronales.

---

### TalleCNN {#tallecnn}
*(en construcción)*

Visualizador de redes neuronales convolucionales entrenando sobre datos de imagen.
Permite comparar enjambres de CNNs variando el tamaño del kernel, la profundidad,
el tipo de pooling y la presencia de batch normalization o data augmentation.
Incluye visualización de mapas de características (feature maps) y mapas de
relevancia Grad-CAM para hacer observable qué zonas de la imagen activan cada
filtro. Corre como aplicación nativa con Dear PyGui y PyTorch.

---

### TalleRNN {#tallernn}
*(en construcción)*

Visualizador de redes recurrentes (RNN y LSTM) entrenando sobre secuencias
sintéticas. El objetivo es hacer observable el flujo de información a través del
tiempo: cómo el estado oculto evoluciona, dónde el gradiente se desvanece o
explota, y qué ventaja aportan las compuertas de la LSTM frente a la RNN simple.
Corre como aplicación nativa con Dear PyGui y PyTorch.

---

### TalleAttn {#talleattn}
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

### TalleSLT {#talleslt}
*(investigación en curso)*

Proyecto de análisis basado en la Teoría del Aprendizaje Singular (Singular
Learning Theory, SLT). Cada herramienta de la SuiteRNA expone un aspecto
geométrico distinto de la pérdida: TalleRNA ofrece simetrías de permutación
exactamente contables; TalleCNN introduce simetrías continuas por capa; TalleAttn
permite medir la dimensión de aprendizaje local (LLC) por cabeza de atención.
TalleSLT reúne estas perspectivas en un visualizador de la geometría del espacio
de parámetros: paisaje de pérdida, curvatura y grupos de simetría de la red.

{% include volver-seccion.html url="/ia/" %}

---

## GradienViz {#gradienviz}

<small style="color: #999;">Febrero de 2026</small>

Herramienta pedagógica para cursos de cálculo diferencial, álgebra lineal, estadística, inteligencia artificial, aprendizaje automático y optimización numérica. Implementada en p5.js como un único archivo HTML autocontenido — no requiere instalación ni servidor.

Nació de una plática con Margarita de Anda Trasviña, antes mi alumna, ahora colega del DASC, sobre cómo simular la manera en que distintas redes neuronales se acercan al óptimo desde puntos iniciales distintos. Fue la semilla del [TalleRNA](#tallerna).

<img src="{{ site.baseurl }}/assets/images/ia/GradienViz.png" alt="Pantalla de ejemplo" width="600">

La **regresión lineal** (o ajuste lineal) es un problema ubicuo en ciencias e ingeniería. Enorme cantidad de problemas requiere entender cómo cambia un fenómeno. Dado un conjunto de puntos $$(x_i,y_i)$$, obtener la recta $$y=mx+b$$ que pasa más cerca de todos ellos.

Desde el punto de vista matemático, hay tres perspectivas para resolverlo:
- con cálculo diferencial, el método clásico
- con álgebra lineal, mi preferida y
- con estadística inferencial.


Puede usarse directamente en [mancpato.github.io/GradienViz](https://mancpato.github.io/GradienViz/), no requiere instalación. Basta agregar puntos en el panel blanco con el mouse, al menos 3 y luego click en entrenar. 

Espero que sea de utilidad en cursos de cálculo diferencial, álgebra lineal, estadística, optimización, programación lineal e IA. Para los interesados, el repositorio con el código fuente se encuentra en [github.com/mancpato/GradienViz](https://github.com/mancpato/GradienViz). 

{% include volver-seccion.html url="/ia/" %}

---

## Consensus {#consensus}

<small style="color: #999;">Mayo de 2026</small>

(*Proyecto en desarrollo*)

<img src="{{ site.baseurl }}/assets/images/ia/LogoConsensus.png" 
     alt="Logo" 
     style="float: left; width: 80px; margin: 0 15px 5px 0; 
            border-radius: 4px; padding: 2px;"> **Consensus** es un sistema de evaluación iterativa multi-agente que envía un
mismo prompt a varios modelos de lenguaje de distintos proveedores y los hace
evaluarse mutuamente hasta alcanzar un consenso colectivo. La rúbrica de
evaluación no se impone externamente sino que emerge de los propios modelos.
Cada agente evalúa las respuestas ajenas de forma anónima y en orden aleatorio,
con mitigaciones explícitas para los sesgos documentados de autopreferencia,
posición y verbosidad. Las puntuaciones se agregan mediante Mediana Geométrica,
robusta ante evaluadores atípicos.
<div style="clear: both;"></div>

Cuando hay desacuerdo, el sistema entra en rondas de debate tipo Delphi: cada
modelo recibe los argumentos más divergentes del grupo y se le pide integrarlos
antes de revisar su posición. El proceso itera hasta convergencia. El resultado
no es simplemente la "mejor" respuesta, sino un ranking fundamentado en
deliberación colectiva — con trazabilidad del nivel de consenso alcanzado y de
dónde persistió el desacuerdo.

**Arquitectura:**
<img src="{{ site.baseurl }}/assets/images/ia/Consensus.png" alt="Pantalla de ejemplo" width="700">

### Requisitos
- Python 3.10 o superior
- Claves de API para los modelos que vayas a usar

*Repositorio disponible cuando esté terminado.*

{% include volver-seccion.html url="/ia/" %}

---

## BusqProfundidad {#busqprofundidad}
<small style="color: #999;">Febrero de 2020</small>

Este programa lo usé de recurso para IA durante años. Fue en la pandemia cuando lo subí como repositorio para compartirlo no sólo con estudiantes, sino con colegas del DASC (Margarita y jaime). Está programado en **Processing**.

El repositorio con el código fuente se encuentra en [github.com/mancpato/BusqProfundidad](https://github.com/mancpato/BusqProfundidad). Es una versión sencilla, no se si algún día la volveré a revisar.

{% include volver-seccion.html url="/ia/" %}

---

## BusqAmplitud {#busqamplitud}
<small style="color: #999;">Febrero de 2020</small>

Este programa, al igual que la búsqueda en profundidad, los usaba desde antes, pero la pandemia cambió la dinámica. Está programado en **Processing**.

El repositorio con el código fuente se encuentra en [github.com/mancpato/BusqAmplitud](https://github.com/mancpato/BusqAmplitud). Es una versión sencilla, no se si algún día la volveré a revisar.

{% include volver-seccion.html url="/ia/" %}

---

<!-- 
        **** Inicia el baúl de los recuerdos ****
-->

## Mi inicio en la IA {#cinvestav-ia}

<small style="color: #999;">Enero de 1994</small>

Mi posgrado fue en IA, particularmente resolviendo un problema de visión por computadora, haciendo uso del enfoque lógico-combinatorio del reconocimiento de patrones. Esa etapa del CINVESTAV fue de gran aprendizaje. Simular visión artificial es complicado porque no sabemos cómo vemos, es completamente automático, así que no podemos decirle a una máquina como lo hacemos, hay que inventar métodos.

Todo comienza con la adquisición y preprocesamiento de la imagen, luego la segmentación y extracción de características y pasar a construiri índices de búsqueda en bases de objetos para tratar de identificarlos. Procesamiento Digital de Imágenes lo llevé con Humberto Sossa y Reconocimiento de Patrones con José Ruiz Schulcloper. Fueron buenas y productivas épocas de trabajo en los seminarios del CINVESTA.

Los demostradores automáticos de teoremos desarrollados en Lógica Matemática, con Guillermo Morales, aportaron otra perspectiva de la IA. Este, junto con el de Inteligencia Artificial  se convirtieron en pilares para muchas otras cosas.

El curso de teoría de la computación (lenguajes formales y autómatas), con Feliú, y dar esa asignatura en ESCOM, me ayudó a redondear todo este asunto. En la UABCS me ha tocado impartir más de 20 veces cursos que tienen que ver con IA y su estudio lo llevo paralelo al de la programación numérica.

En este momento, mi trabajo (*diversión*) principal es el desarrollo de lo que llamo SuiteRNA, un conjunto de visualizadores de redes neuronales que permiten explorar su comportamiento al variar algún hiperparámetro. No se conforma con redes tradicionales ni con la teoría matemática clásica.

{% include volver-seccion.html url="/ia/" %}

---

## Tesis de maestría {#tesis-cinvestav}

<small style="color: #999;">1995/1996</small>

Aparte de los cursos obligatorios, hubo que llevar otros optativos. Reconocimiento de Patrones fue uno de ellos, impartido por José Ruiz Schulcloper. No sólo patrones visuales, también patrones sociales, de conducta, lo que sea que tenga estructura. 

El curso de Reconocimiento de Patrones hizo excelente mancuerna con el de Procesamiento Digital de Imágenes, impartido por Humberto Sossa.

{% include volver-seccion.html url="/ia/" %}
