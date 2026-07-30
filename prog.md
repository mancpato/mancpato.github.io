---
layout: page
title: Programación
permalink: /programacion/
nav_order: 2
---

Notas, proyectos y temas afines 

**Algunos proyectos**
- [GradienViz](#GradienViz), *enero de 2026* Visualizador de optimización por gradiente, con raíces en programación numérica. Entrada completa en la sección de IA.
- [paranoia2](#paranoia2), un verificador de la norma IEEE 754 de 2019. 
- [Monografía de mi sabático](#Mono), trabajo comenzado en la UNISON en 2008 y terminado en la UABCS. Presenté la monografía al regresar, pero continué desarrollándolo unos años más hasta darle la forma que quería.

**Del baúl de los recuerdos:**
- [Cómo comencé a programar](#como-comencé-a-programar), *julio de 2026) 
- [Mi tesis de licenciatura](#Simplex), *agosto de 2026* 

---

### GradienViz {#GradienViz}
<small style="color: #999;">Enero de 2026</small>

Herramienta pedagógica para cursos de cálculo diferencial, álgebra lineal, estadística, inteligencia artificial, aprendizaje automático y optimización numérica. Implementada en p5.js como un único archivo HTML autocontenido — no requiere instalación ni servidor.

Nació de una plática con Margarita de Anda Trasviña, antes mi alumna, ahora colega del DASC, sobre cómo simular la manera en que distintas redes neuronales se acercan al óptimo desde puntos iniciales distintos. Fue la semilla del TalleRNA.

Ver la entrada completa, con capturas y más detalle, en la [sección de IA](/ia/#GradienViz).

{% include volver-seccion.html url="/programacion/" %}

---

### Paranoia2
<small style="color: #999;">Julio de 2026</small>

En 1983, el analista numérico William Kahan programó paranoia.bas, un programa que buscaba defectos en las comptadoras de la época. Cada una hacía cuentas a su propio estilo, lo que llevaba a que el mismo programa diera resultados distintos si se cambiaba de computadora. Fue el arquitecto principal de la norma 754 de IEEE, que rige cómo las computadoras deben hacer los cálculos, algo que a la gran mayoría de las personas les pasa desapercibido pero lo usan todo el tiemmpo. Sus trabajos le ganaron la medalla Turing, el equivalente al Nobrel en computación.

Conocí el programa traducido paranoia.c y es una maravilla de genialidad. Hoy por fortuna casi toda computadora cumple la norma. **paranoia2** es un verificador del cumplimiento de la norma 2019, para formatos binarios (la norma incluye base 10, pensado para cuestiones económicas).

El repositorio se encuentra en [github.com/mancpato/Paranoia2](https://github.com/mancpato/Paranoia2). Puede ser de utilidad para interesados en los detalles finos de programación numérica. Este es material denso y muy técnico.


{% include volver-seccion.html url="/programacion/" %}

---

### Monografía de mi sabático {#Mono}

<small style="color: #999;">Verano de 2010</small>

Tuve el gusto de invertir mi primer sabático visitando la UNISON en 2008. Ahí regresé a mis mundos de astronomía, guitarra y matemáticas. Me recibieron en el Departamento de Matemáticas y comencé a darle forma a mi libro de programación numérica, una introducción que presenté como monografía al regresar a la UABCS.

[Introducción a la Programación Numérica (PDF)](/assets/files/programacion/Mono.pdf) Este estudio contiene dos partes, la primera sobre los fundamentos y la segunda sobre tres aplicaciones comunes: la suma de números de punto flotante, raíces de ecuaciones y funciones trascendentes (el caso de la exponencial).


{% include volver-seccion.html url="/programacion/" %}

---


## Cómo comencé a programar {#como-comencé-a-programar}
<small style="color: #999;">Julio de 2026</small>

Ya me gustaban las matemáticas desde la secundaria cuando inicié mi aventura de programar computadoras en la prepa (primero BASIC en una Tandy2, luego C sobre un SO UNIX V). Fue inmediato juntar los dos mundos. Eso se formalizó hasta el tercer semestre de la carrera de matemáticas, en métodos numéricos, una de mis asignaturas favoritas. Pero esta historia requiere hacerle más honor, mi recorrido es, de alguna manera, la historia de la programación, desde mi limitada perspectiva.

Métods numéricos, análisis numérico, cómputo científico, computación de alto rendimiento, simulación, ... hay muchas líneas de trabajo pero me gusta simplificar y llamarlas de manera genérica **programación numérica**. No es un término estándar, pero prefiero usarlo para referirme a toda esta área de trabajo.


{% include volver-seccion.html url="/programacion/" %}

---

### Mi tesis de licenciatura {#Simplex}
<small style="color: #999;">Agosto de 2026</small>

Estudié e implemente un problema de optimización lineal: el método Símplex especializado en redes. El trabajo fue desarrollado en el Departamento de Matemáticas de la Universidad de Sonora. Tesis dirigida por Pedro Flores Pérez. La terminé en el verano de 1993. La presenté un viernes, me dieron mi acta de examen profesional el lunes. El martes ya estaba en la Sección de Computación del Departamento de Ingeniería Eléctrica del CINVESTAV.

El repositorio se encuentra en [github.com/mancpato/MiSimplex](https://github.com/mancpato/MiSimplex). El código fue desarrollado usando Borland C/C++ (3.0 o 3.1) y el documento escrito usando LaTeX. Esas versiones no compilan en la actualidad por la versión/dependencia de software, pero la intención es traerlas de vuelta a la vida en cuanto se pueda.

{% include volver-seccion.html url="/programacion/" %}
