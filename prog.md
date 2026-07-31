---
layout: page
title: Programación
permalink: /programacion/
nav_order: 2
---

Notas, proyectos y temas afines 

**Algunos proyectos**
- [GradienViz](#GradienViz), *enero de 2026* Visualizador de optimización por gradiente, con raíces en programación numérica. Entrada completa en la sección de IA.
- [NautyNav](#NautyNav), *agosto de 2026* Visualizador de grafos generados con geng.c
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

### NautyNav {#NautyNav}
<small style="color: #999;">Agosto de 2026</small>

Explorador interactivo de grafos no isomorfos generados por nauty/geng. Es una herramienta didáctica para cursos de teoría de grafos y matemáticas discretas. 

<img src="{{ site.baseurl }}/assets/images/prog/NautyNav.png" alt="Pantalla de ejemplo" width="600">

Permite navegar visualmente por todos los grafos no isomorfos de orden n (4 ≤ n ≤ 9), mostrando en tiempo real sus propiedades estructurales y algebraicas. 

El repositorio se encuentra en [github.com/mancpato/NautyNav](https://github.com/mancpato/NautyNav). Puede ser de utilidad en cursos de Matemáticas Discretas o Teoría de Gráficas.

Era fácil de hacer, como subproducto de un proyecto mayor que permite hacer búsquedas exhaustivas para diversos proyectos.


{% include volver-seccion.html url="/programacion/" %}

---

### Paranoia2
<small style="color: #999;">Julio de 2026</small>

En 1983, el analista numérico William Kahan programó paranoia.bas, un programa que buscaba defectos en las comptadoras de la época. Cada una hacía cuentas a su propio estilo, lo que llevaba a que el mismo programa diera resultados distintos si se cambiaba de computadora. Fue el arquitecto principal de la norma 754 de IEEE, que rige cómo las computadoras deben hacer los cálculos, algo que a la gran mayoría de las personas les pasa desapercibido pero lo usan todo el tiemmpo. Sus trabajos le ganaron la medalla Turing, el equivalente al Nobrel en computación.

Conocí el programa traducido paranoia.c y es una maravilla de genialidad. Hoy por fortuna casi toda computadora cumple la norma. **paranoia2** es un verificador del cumplimiento de la norma 2019, para formatos binarios (la norma incluye base 10, pensado para cuestiones económicas).

El repositorio se encuentra en [github.com/mancpato/Paranoia2](https://github.com/mancpato/Paranoia2). Puede ser de utilidad para interesados en los detalles finos de programación numérica. Este es material denso y muy técnico.

`paranoia2` verifica conformidad IEEE 754-2019 en los cuatro formatos binarios — binary16, binary32, binary64, binary128 — cubriendo las operaciones aritméticas básicas y sus cinco modos de redondeo, fma, fronteras de redondeo y el bit sticky, las cinco banderas de excepción, las operaciones requeridas de §5 (nextUp/nextDown, scaleB, logB, remainder, roundToIntegral, predicados), aritmética de infinitos y NaN (payload, signaling/quiet), comparaciones y totalOrder, subnormales (incluido FTZ/DAZ), overflow, conversiones binary↔binary, operaciones de bit de signo (negate/abs/copySign/copy), secuencias hexadecimales externas, convertToInteger (§5.8: las cinco direcciones de redondeo, en variante Exact y normal, hacia int32_t/int64_t/uint32_t/uint64_t), y la constatación de qué operaciones recomendadas de §9.5 están disponibles en la plataforma. 

**Importante:** Los formatos decimales, incluidos en la norma, se verifican.

Incluye un hito de confiabilidad propio: invariancia frente al nivel de optimización de compilación — el mismo hash SHA-256 del JSON de salida del banco compilado con -O0/-O2/-O3/-Og — evidencia directa de que el banco mide la plataforma que se está evaluando, no el compilador que se usó para construir el propio banco.

El desarrollo contó con la invaluable y extensa asistencia de Claude (Anthropic) a lo largo de todo el proyecto:
- análisis del texto normativo IEEE 754-2019,
- diseño de arquitectura y módulos,
- verificación de casos de prueba con aritmética exacta (Python fractions.Fraction) antes de generar cualquier código y
- revisión de kernels e integración.

La iniciativa, idea, interfaces internas, decisiones de diseño, dirección y detalles de documentación son míos.

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

El repositorio se encuentra en [github.com/mancpato/MiSimplex](https://github.com/mancpato/MiSimplex). El código fue desarrollado usando Borland C/C++ (3.0 o 3.1) y el documento escrito usando LaTeX. 

Esas versiones no compilaban por la versión/dependencia de software, pero las traje de vuelta a la vida, sin tocar las versiones originales. Por eso en el repositorio tiene los directorios Src1993 y SrcNew.

El código en LaTeX no se ha modernizado y no compila.

{% include volver-seccion.html url="/programacion/" %}
