---
layout: page
title: SuiteRNA
permalink: /ia/suiterna/
---

<small style="color: #999;">Abril de 2026</small>

**SuiteRNA** es un conjunto de herramientas interactivas de visualización de redes neuronales para la enseñanza, donde cada módulo aísla y hace observable en tiempo real un concepto central del aprendizaje profundo mediante comparación controlada de un enjambre de modelos: varias redes entrenan en paralelo mientras varía exactamente un hiperparámetro y todo lo demás queda fijo, de modo que el efecto se vuelve observable en tiempo real. Esa comparación controlada es la firma de la suite.

## Estado del proyecto

<table style="width: auto; margin: 0 auto; margin-bottom: 2rem;">
  <thead>
    <tr>
      <th>Herramienta</th>
      <th>Tecnología</th>
      <th>Estado</th>
      <th>Enlaces</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>BasicRNA</td>
      <td>HTML + canvas 2D</td>
      <td>Disponible</td>
      <td><a href="/ia/suiterna/basicrna/">Página</a> · <a href="https://github.com/mancpato/BasicRNA">Repo</a></td>
    </tr>
    <tr>
      <td>TalleRNA</td>
      <td>p5.js</td>
      <td>Disponible</td>
      <td><a href="/ia/suiterna/tallerna/">Página</a> · <a href="https://github.com/mancpato/TalleRNA">Repo</a></td>
    </tr>
    <tr>
      <td>TalleRNAmulti</td>
      <td>p5.js</td>
      <td>Disponible</td>
      <td><a href="/ia/suiterna/tallernamulti/">Página</a> · <a href="https://github.com/mancpato/TalleRNAmulti">Repo</a></td>
    </tr>
    <tr>
      <td>TalleCNN</td>
      <td>PyTorch + Dear PyGui</td>
      <td>En desarrollo</td>
      <td>-</td>
    </tr>
    <tr>
      <td>TalleRNN</td>
      <td>PyTorch + Dear PyGui</td>
      <td>En diseño</td>
      <td>-</td>
    </tr>
    <tr>
      <td>TalleAttn</td>
      <td>PyTorch + Dear PyGui</td>
      <td>En diseño</td>
      <td>-</td>
    </tr>
    <tr>
      <td>KAN / ESN / SNN</td>
      <td>por definir</td>
      <td>En diseño</td>
      <td>-</td>
    </tr>
    <tr>
      <td>TalleRNAslt</td>
      <td>p5.js &rarr; PyTorch</td>
      <td>En desarrollo</td>
      <td>-</td>
    </tr>
  </tbody>
</table>

## Ruta de aprendizaje

1. **BasicRNA**: mover parámetros a mano, uno a la vez, y ver qué le pasa a la frontera de decisión.
2. **TalleRNA**: comparar redes chicas entrenando simultáneamente, variando un hiperparámetro.
3. **TalleRNAmulti**: más capacidad y problemas multiclase.
4. **TalleCNN**: extiende la comparación controlada al dominio de imagen.
5. **TalleRNN**: extiende la comparación controlada al dominio de secuencia.
6. **TalleAttn**: extiende la comparación controlada al mecanismo de atención.

Las arquitecturas especiales (KAN, ESN, SNN) y TalleRNAslt son ramas laterales de exploración, no continuación de esta ruta.

## Para docentes

<!-- pendiente: redactar -->

---

### TalleCNN {#tallecnn}
*(En desarrollo)*

Visualizador de redes neuronales convolucionales entrenando sobre datos de imagen.
Permite comparar enjambres de CNNs variando el tamaño del kernel, la profundidad,
el tipo de pooling y la presencia de batch normalization o data augmentation.
Incluye visualización de mapas de características (feature maps) y mapas de
relevancia Grad-CAM para hacer observable qué zonas de la imagen activan cada
filtro. Corre como aplicación nativa con Dear PyGui y PyTorch.

---

### TalleRNN {#tallernn}
*(En diseño)*

Visualizador de redes recurrentes (RNN y LSTM) entrenando sobre secuencias
sintéticas. El objetivo es hacer observable el flujo de información a través del
tiempo: cómo el estado oculto evoluciona, dónde el gradiente se desvanece o
explota, y qué ventaja aportan las compuertas de la LSTM frente a la RNN simple.
Corre como aplicación nativa con Dear PyGui y PyTorch.

---

### TalleAttn {#talleattn}
*(En diseño)*

Transformador didáctico de escala reducida (~50K–500K parámetros) entrenado sobre
datos sintéticos. Permite explorar el mecanismo de atención cabeza por cabeza,
observar cómo el modelo distribuye el peso entre posiciones de la secuencia y
comparar arquitecturas con distinto número de cabezas o capas. Corre como
aplicación nativa con Dear PyGui y PyTorch.

---

### Arquitecturas especiales {#especiales}
*(En diseño)*

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

### TalleRNAslt {#tallernaslt}
*(En desarrollo)*

Proyecto de análisis basado en la Teoría del Aprendizaje Singular (Singular
Learning Theory, SLT). Cada herramienta de la SuiteRNA expone un aspecto
geométrico distinto de la pérdida: TalleRNA ofrece simetrías de permutación
exactamente contables; TalleCNN introduce simetrías continuas por capa; TalleAttn
permite medir la dimensión de aprendizaje local (LLC) por cabeza de atención.
TalleRNAslt reúne estas perspectivas en un visualizador de la geometría del espacio
de parámetros: paisaje de pérdida, curvatura y grupos de simetría de la red.

---

Toda la Suite debiera estar terminada en 2027. En algún momento será necesario incursionar en el tinyML, pero no sé cuándo.

{% include volver-seccion.html url="/ia/" %}
