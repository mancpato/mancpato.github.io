---
layout: page
title: TalleRNAmulti
permalink: /ia/suiterna/tallernamulti/
---

Extiende TalleRNA hacia redes más grandes (hasta ~1500 parámetros) y problemas
multiclase (3 o 4 clases). Permite observar cómo los hiperparámetros se comportan cuando la red tiene mayor capacidad y la salida ya no es binaria. Se ha agregado el hiperparámetro dropout, que para redes pequeñas no tenía sentido usar. Comparte la filosofía de experimento controlado: varía exactamente una cosa, mantiene todo lo demás fijo.

<img src="{{ site.baseurl }}/assets/images/ia/TalleRNAmulti.png" alt="Pantalla de ejemplo" width="500">

Es una página web autocontenida: no requiere compilación ni instalación, solo abrir `index.html` en el navegador. Toda la lógica de entrenamiento está escrita en p5.js. Está disponible en [mancpato.github.io/TalleRNAmulti](https://mancpato.github.io/TalleRNAmulti/), donde basta seleccionar el problema, ajustar los hiperparámetros deseados e iniciar el entrenamiento. 

**Hiperparámetros controlados:**
- Topología: hasta 8 arquitecturas, T0 (2→K) a T7 (2→32→32→K)
- Tasa de aprendizaje: hasta 8 modelos, usuario indica mín y máx
- Inicialización: Uniforme, Normal, Xavier y He, hasta 3 semillas por distribución
- Activación: 7 de las funciones comunes
- Dropout: 6 modelos, p de 0.0 a 0.5

El repositorio se encuentra en
[github.com/mancpato/TalleRNAmulti](https://github.com/mancpato/TalleRNAmulti). Se espera que sea útil para cualquier interesado en estudiar redes neuronales.

{% include volver-seccion.html url="/ia/suiterna/" %}
