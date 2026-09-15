---
layout: page
title: Inteligencia Artificial
permalink: /ia/
nav_order: 1
---

Notas y proyectos sobre IA (y temas afines). La pandemia fue un detonador importante, me dio tiempo de aprender nuevas tecnologías de redes neuronales y terminar muchos proyectos comenzados hacia años. El trabajo docente aterrizó bien, en mancuerna con mis colegas Margarita de Anda y Jaime Eudes, de la UABCS, aunque ahora veo un futuro incierto en el DASC.

<div style="border: 1px solid #ddd; border-radius: 8px; padding: 1.2em 1.5em; margin: 1.5em 0; background: rgba(127,127,127,0.05);">
<strong style="font-size: 1.1em;">SuiteRNA</strong>

SuiteRNA Mi proyecto principal: herramientas interactivas para enseñar redes neuronales, en orden de dificultad. Van del perceptrón de tres parámetros, que se mueve a mano, hasta los mecanismos de atención, con ramas hacia arquitecturas especiales: Kolmogorov-Arnold, de eco y de impulsos. Cada una aísla un concepto y lo vuelve observable — con redes chicas, varias entrenan en paralelo variando un solo hiperparámetro; con las grandes, la comparación cambia de forma.

<a href="/ia/suiterna/">Ir a SuiteRNA →</a>
</div>

**Algunos proyectos:**
- [GradienViz](#gradienviz), *febrero de 2026*. Visualizador de optimización por gradiente para regresión lineal. Se originó de una plática de redes neuronales y por eso está aquí.
- [Consensus](#consensus), *mayo de 2026*. El debate automatizado para asistencia colegiada.
- [BusqProfundidad](#busqprofundidad), *febrero de 2020*. Búsqueda en profundidad simple, programada en Processing.
- [BusqAmplitud](#busqamplitud), *febrero de 2020*. Búsqueda en amplitud (anchura) simple, programada en Processing.

**Del baúl de los recuerdos:**

- [Mi inicio en la IA](#cinvestav-ia), *1994*. Sobre cómo comencé esta ruta de vida.
- [Tesis de maestría](#tesis-cinvestav), *1995/1996*.

---

## GradienViz {#gradienviz}

<small style="color: #999;">Febrero de 2026</small>

Herramienta pedagógica para cursos de cálculo diferencial, álgebra lineal, estadística, inteligencia artificial, aprendizaje automático y optimización numérica. Implementada en p5.js como un único archivo HTML autocontenido — no requiere instalación ni servidor.

Nació de una plática con Margarita de Anda Trasviña, antes mi alumna, ahora colega del DASC, sobre cómo simular la manera en que distintas redes neuronales se acercan al óptimo desde puntos iniciales distintos. Fue la semilla del [TalleRNA](/ia/suiterna/tallerna/).

<img src="{{ site.baseurl }}/assets/images/ia/GradienViz.png" alt="Pantalla de ejemplo" width="600">

La **regresión lineal** (o ajuste lineal) es un problema ubicuo en ciencias e ingeniería. Enorme cantidad de problemas requiere entender cómo cambia un fenómeno. Dado un conjunto de puntos $$(x_i,y_i)$$, obtener la recta $$y=mx+b$$ que pasa más cerca de todos ellos.

Desde el punto de vista matemático, hay tres perspectivas para resolverlo:
- con cálculo diferencial, el método clásico, optimizando con derivadas parciales,
- con álgebra lineal, mi preferida, usando la matriz normal para proyectar la solución y
- con estadística inferencial, maximizando la verosimilitud, asumiendo distribución normal de errores.

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

Este programa lo usé de recurso para IA durante años. Fue en la pandemia cuando lo subí como repositorio para compartirlo no sólo con estudiantes, sino con colegas del DASC (Margarita y Jaime). Está programado en **Processing**.

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

# Baúl de los recuerdos
<figure style="text-align: center; margin: 2em 0 1em;">
  <img src="/assets/images/Baul.jpg"
       alt="Mis gustos"
       style="display: block; margin: 0 auto; max-width: 50%; border-radius: 6px;">
</figure>

## Mi inicio en la IA {#cinvestav-ia}

<small style="color: #999;">Enero de 1994</small>

Mi posgrado fue en IA, particularmente resolviendo un problema de visión por computadora, haciendo uso del enfoque lógico-combinatorio del reconocimiento de patrones. Esa etapa del CINVESTAV fue de gran aprendizaje. Simular visión artificial es complicado porque no sabemos cómo vemos, es completamente automático, así que no podemos decirle a una máquina como lo hacemos, hay que inventar métodos.

Todo comienza con la adquisición y preprocesamiento de la imagen, luego la segmentación y extracción de características y pasar a construir índices de búsqueda en bases de objetos para tratar de identificarlos. Procesamiento Digital de Imágenes lo llevé con Humberto Sossa y Reconocimiento de Patrones con José Ruiz Schulcloper. Fueron buenas y productivas épocas de trabajo en los seminarios del CINVESTAV.

Los demostradores automáticos de teoremas desarrollados en Lógica Matemática, con Guillermo Morales, aportaron otra perspectiva de la IA. Este, junto con el de Inteligencia Artificial  se convirtieron en pilares para muchas otras cosas.

El curso de teoría de la computación (lenguajes formales y autómatas), con Feliú, y dar esa asignatura en ESCOM, me ayudó a redondear todo este asunto. En la UABCS me ha tocado impartir más de 20 veces cursos que tienen que ver con IA y su estudio lo llevo paralelo al de la programación numérica.

En este momento, mi trabajo (*diversión*) principal es el desarrollo de lo que llamo SuiteRNA, un conjunto de visualizadores de redes neuronales que permiten explorar su comportamiento al variar algún hiperparámetro. No se conforma con redes tradicionales ni con la teoría matemática clásica.

{% include volver-seccion.html url="/ia/" %}

---

## Tesis de maestría {#tesis-cinvestav}

<small style="color: #999;">1995/1996</small>

Aparte de los cursos obligatorios, hubo que llevar otros optativos. Reconocimiento de Patrones fue uno de ellos, impartido por José Ruiz Schulcloper. No sólo patrones visuales, también patrones sociales, de conducta, lo que sea que tenga estructura. 

El curso de Reconocimiento de Patrones hizo excelente mancuerna con el de Procesamiento Digital de Imágenes, impartido por Humberto Sossa.

{% include volver-seccion.html url="/ia/" %}
