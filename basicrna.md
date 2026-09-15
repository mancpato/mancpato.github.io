---
layout: page
title: BasicRNA
permalink: /ia/suiterna/basicrna/
---

<img src="{{ site.baseurl }}/assets/images/ia/basicrna/portada.png" alt="Las cuatro páginas de BasicRNA: una neurona con su recta separadora, la red 2→4→1 con diecisiete deslizadores, la misma red con una activación distinta por neurona, y la animación de un paso de retropropagación." width="700">

**BasicRNA** son cuatro páginas sueltas para las primeras clases sobre redes
neuronales. Cada una es un archivo HTML único, sin dependencias y sin
compilación: se abre con doble clic y dibuja con canvas 2D.

Son deliberadamente pobres en perillas. La frontera de este directorio no es
que aquí no se entrene, sino que aquí no se configura. Las tres primeras
páginas no entrenan: el alumno mueve los parámetros a mano, uno a la vez, y ve
qué le pasa a la frontera. La cuarta entrena exponiendo un solo
hiperparámetro, la tasa de aprendizaje, que es el único cuyo efecto la
animación vuelve visible. Momento, tamaño de lote, épocas e inicialización se
quedan en TalleRNA. Si se abrieran aquí, la cuarta página ya sería TalleRNA.

- `1-Perceptron.html` — los tres parámetros del perceptrón: dos pesos giran la
  recta, el sesgo la desplaza.

  <img src="{{ site.baseurl }}/assets/images/ia/basicrna/1-Perceptron.png" alt="Perceptrón simple con dos pesos y un sesgo editables, mostrando la recta separadora sobre el conjunto de puntos." width="400">

- `2-EditParam.html` — red 2→4→1, diecisiete parámetros, disco contra anillo:
  la intuición ya no alcanza, y ese es el punto.

  <img src="{{ site.baseurl }}/assets/images/ia/basicrna/2-EditParam.png" alt="Red 2→4→1 con diecisiete deslizadores editables, clasificando un disco dentro de un anillo." width="400">

- `3-EditActivFun.html` — una función de activación por neurona, elegida con
  clic sobre el nodo entre seis.

  <img src="{{ site.baseurl }}/assets/images/ia/basicrna/3-EditActivFun.png" alt="Red 2→4→1 con una función de activación distinta asignada a cada neurona, elegida con clic sobre el nodo." width="400">

- `4-Backprop.html` — quién acomoda los diecisiete: un paso de retropropagación
  animado, con botones de ×10 y ×100.

  <img src="{{ site.baseurl }}/assets/images/ia/basicrna/4-Backprop.png" alt="Animación de un paso de retropropagación sobre la red 2→4→1, con botones para repetirlo ×10 y ×100." width="400">

Las cuatro comparten el mismo diagrama, los mismos doscientos puntos
partidos en 160 de entrenamiento y 40 de prueba, y el mismo sorteo con semilla,
para que todo el grupo abra el mismo tablero.

El repositorio se encuentra en [github.com/mancpato/BasicRNA](https://github.com/mancpato/BasicRNA).

{% include volver-seccion.html url="/ia/suiterna/" %}
