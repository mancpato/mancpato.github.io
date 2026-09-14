---
layout: page
title: TalleRNA
permalink: /ia/suiterna/tallerna/
---

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

{% include volver-seccion.html url="/ia/suiterna/" %}
