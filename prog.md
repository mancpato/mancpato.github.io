---
layout: page
title: Programación
permalink: /programacion/
nav_order: 2
---

Notas, proyectos y temas afines. La llegada de los LLM ha permitido que rescate mucho código que he escrito durante décadas, organizando mejor en repositorios de [github](https://github.com/mancpato) cuando creo que vale la pena.

**Algunos proyectos**
- [GradienViz](#gradienviz), *enero de 2026* Visualizador de optimización por gradiente, con raíces en programación numérica. Entrada completa en la sección de IA.
- [paranoia2](#paranoia2), un verificador de la norma IEEE 754 de 2019. 
- [CUDA](#cuda), verano de 2024, el inicio de programas de alto rendimiento.
- [Monografía de mi sabático](#mono), trabajo comenzado en la UNISON en 2008 y terminado en la UABCS. Presenté la monografía al regresar, pero continué desarrollándolo unos años más hasta darle la forma que quería.

**Topología geométrica/combinatoria**
- [NautyNav](#nauty-nav), *agosto de 2026* Visualizador de grafos generados con geng.c
- [KnotViz](#knotviz), *mayo de 2026* Un visualizador de nudos y algunos de sus invariantes
- [SmallGraph/TinyGraph](#smallgraph), *2015 -* Grafos he programado desde la licenciatura en la UNISON, pero aquí comencé a tener rutinas serias.

**Del baúl de los recuerdos:**
- [Cómo comencé a programar](#como-comence-a-programar), *julio de 2026* Del Basic en adelante
- [Mi tesis de licenciatura](#simplex), *verano de 1993* 
- [PAREIMM](#pareimm), *1992/1993* Un esfuerzo conjunto de estudiantes de Pedro Flores Pérez

---

### GradienViz {#gradienviz}
<small style="color: #999;">Enero de 2026</small>

Herramienta pedagógica para diversos cursos sobre el tema de regresión lineal. Implementada en p5.js como un único archivo HTML autocontenido — no requiere instalación ni servidor.

Ver la entrada completa, con capturas y más detalle, en la [sección de IA](/ia/#gradienviz).

{% include volver-seccion.html url="/programacion/" %}

---

### NautyNav {#nauty-nav}
<small style="color: #999;">Agosto de 2026</small>

Explorador interactivo de grafos no isomorfos generados por nauty/geng. Es una herramienta didáctica para cursos de teoría de grafos y matemáticas discretas. 

<img src="{{ site.baseurl }}/assets/images/prog/NautyNav.png" alt="Pantalla de ejemplo" width="600">

Permite navegar visualmente por todos los grafos no isomorfos de orden n (4 ≤ n ≤ 9), mostrando en tiempo real sus propiedades estructurales y algebraicas. 

El repositorio se encuentra en [github.com/mancpato/NautyNav](https://github.com/mancpato/NautyNav). Puede ser de utilidad en cursos de Matemáticas Discretas o Teoría de Gráficas.

Era fácil de hacer, como subproducto de un proyecto mayor que permite hacer búsquedas exhaustivas para diversos proyectos.


{% include volver-seccion.html url="/programacion/" %}

---

### KnotViz {#knotviz}
<small style="color: #999;">Mayo de 2026</small>

Visualizador interactivo de nudos y algunos de sus invariantes. Los nudos (matemáticos y cotidianos) siempre me han gustado. Pero fue hasta la pandemia cuando leí ccon un poco más de seriedad el tema matemático y no estaba preparado para tanto bagage teórico, así que me conformé con muy poco.

El repositorio se encuentra en [github.com/mancpato/KnotViz](https://github.com/mancpato/KnotViz). Espero que sea de utilidad en cursos teoría de nudos. En la UABCS no hay asignaturas.

{% include volver-seccion.html url="/programacion/" %}

---

### SmallGraph {#smallgraph}
<small style="color: #999;">2015 en adelante</small>

Comencé a programar grafos desde la UNISON, gracias a que Pedro Flores estaba metido en optimización y luego de trabajar matricialmente con el método Simplex, decidió meterse a optimización de flujo en redes. Los que estábamos en sus cursos optativos éramos Edelmira, Irene, Myriam y yo.

Es primera versión de grafos era por listas de adyacencia usadas de manera descuidad. Optimizabamos memoria pero no tiempo, cosa que entendí hasta llegar al CINVESTAV. Me han seguido gustando los problemas de grafos y no fue sino hasta 2015 que me regresó la curiosidad por hacer una estructura de datos eficiente, empleando matrices de adyacencia, pero con máscaras de bits.

Con la actual arquitectura de 64 bits, me decidí por trabajar rutinas exclusivamente para grafos con un máximo de 64 nodos, lo que significaba un arreglo de 64 enteros largos sin signo. Con esa idea surgió **SmallGraph**. Primero en lenguaje C, fiel a mi origen, pero pocos años más tarde lo mudé a C++, con una clase `SmallGraph.hpp`.

En 2025 leí un artículo de mis amigos de la UNISON Eduardo Frías y Héctor Hernández, con quienes no he perdido contacto. Estaban contando grafos con ciertas características, problemas de contractabilidad. El artículo hacía referencia a un repositorio con su código, que cloné y revisé en cuanto pude. Usaba la arcaica e ineficiente estructura de matrices de adyacencia pero con matrices reales de enteros. De inmediato me surgió la idea de probar mis estructuras con sus programas.

Los grafos distintos crecen tan rápidamente, que sus conteos y búsquedas estaban en grafos de 12 o 13 nodos cuando mucho, así que adapté los algoritmos a usar enteros cortos de 16 bits, lo que es amigable con el caché. Surgió así `TinyGraph.hpp`. Las vacaciones de 2025 estuve programando y finalmente logré replicar sus búsquedas. La mejora en tiempo fue sustancial, como era de esperarse.

Con esta estructura y unas pocas semanas de cómputo 24/7 de mi PC de la UABCS (viejita, un intel i3 con 4 núcleos), logré contar todos los grafos de 13 nodos en busca de aquellos con las características de interés. Espero pronto escribir una entrada específica al respecto.

Este fue de mis primero programas optimizados con IA, que hizo una lookup table para reducir cálculos y mejoró una rutina incorporando la nueva operación `popcount` de los procesadores modernos.


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

### CUDA {#cuda}
<small style="color: #999;">Verano de 2024</small>

Había dinero de un proyecto que se tenía que usar, ya tenía que camibiar de Laptop yeso llevó a comprar una Victus con tarjeta gráfica RTX 3050. Al inicio, todo normal. Pero luego, mis hijos la usaron para jugar. Máquina gamer a fin de cuentas, Halo, Minecraft, cualquier juego moderno se veía de lujo. Entonces me cayó el 20 de que estaba desaprovechando un GPU, así que me di a la tarea de aprender a programarlo.

Desde el *Hola mundo* para CUDA (el modelo y herramientas de programación de NVIDIA) me di cuenta de que eso era pensar distinto.

---


<!-- 
        **** Inicia el baúl de los recuerdos ****
-->

### Monografía de mi sabático {#mono}

<small style="color: #999;">Verano de 2010</small>

Tuve el gusto de invertir mi primer sabático visitando la UNISON en 2008. Ahí regresé a mis mundos de astronomía, guitarra y matemáticas. Me recibieron en el Departamento de Matemáticas y comencé a darle forma a mi libro de programación numérica, una introducción que presenté como monografía al regresar a la UABCS.

[Introducción a la Programación Numérica (PDF)](/assets/files/programacion/Mono.pdf){:target="_blank" rel="noopener noreferrer"} Este estudio contiene dos partes, la primera sobre los fundamentos y la segunda sobre tres aplicaciones comunes: la suma de números de punto flotante, raíces de ecuaciones y funciones trascendentes (el caso de la exponencial).


{% include volver-seccion.html url="/programacion/" %}

---


## Cómo comencé a programar {#como-comence-a-programar}
<small style="color: #999;">Julio de 2026</small>

Ya me gustaban las matemáticas desde la secundaria cuando inicié mi aventura de programar computadoras en la prepa (primero BASIC en una Tandy2, luego C sobre un SO UNIX V). Fue inmediato juntar los dos mundos. Eso se formalizó hasta el tercer semestre de la carrera de matemáticas, en métodos numéricos, una de mis asignaturas favoritas. Pero esta historia requiere hacerle más honor, mi recorrido es, de alguna manera, la historia de la programación, desde mi limitada perspectiva.

Métods numéricos, análisis numérico, cómputo científico, computación de alto rendimiento, simulación, ... hay muchas líneas de trabajo pero me gusta simplificar y llamarlas de manera genérica **programación numérica**. No es un término estándar, pero prefiero usarlo para referirme a toda esta área de trabajo.

Algunos cursos que llevé en el posgrado fueron de una utilidad enorme, pero mi forma de trabajo cambió la primera vez que impartí Sistemas Operativos en un posgrado que hubo en la UABCS y luego Programación de Sistemas en una carrera de nivel superior. De ahí, programar en Linux fue rutina, siempre con Makefile y repositorios fue rutina. Ya los conocía, pero no les daba tanto uso.


{% include volver-seccion.html url="/programacion/" %}

---

### PAREIMM {#pareimm}
<small style="color: #999;">1992/1993</small>

*(en construcción)*

{% include volver-seccion.html url="/programacion/" %}

---

### Mi tesis de licenciatura {#simplex}
<small style="color: #999;">Agosto de 2026</small>

Estudié e implemente un problema de optimización lineal: el método Símplex especializado en redes. El trabajo fue desarrollado en el Departamento de Matemáticas de la Universidad de Sonora. Tesis dirigida por Pedro Flores Pérez. La terminé en el verano de 1993. La presenté un viernes, me dieron mi acta de examen profesional el lunes. El martes ya estaba en la Sección de Computación del Departamento de Ingeniería Eléctrica del CINVESTAV.

El repositorio se encuentra en [github.com/mancpato/MiSimplex](https://github.com/mancpato/MiSimplex). El código fue desarrollado usando Borland C/C++ (3.0 o 3.1) y el documento escrito usando LaTeX. 

Esas versiones no compilaban por la versión/dependencia de software, pero las traje de vuelta a la vida, sin tocar las versiones originales. Por eso en el repositorio tiene los directorios Src1993 y SrcNew.

El código en LaTeX no se ha modernizado y no compila.

{% include volver-seccion.html url="/programacion/" %}
