---
layout: page
title: Docencia
permalink: /docencia/
nav_order: 3
---

Me tienen aquí dos cosas: el gusto por aprender y el gusto por compartir. 

- [Asignaturas que imparto](#asignaturas), *julio de 2026* El rango es muy amplio, casi aleatorio los primeros años.  
- [Uso de IA en clases de matemáticas](#IA-mate) *junio de 2026* Algunas ideas sobre el uso de la tecnología en la docencia de las mateáticas y el lastre que nos detiene.
- [Taller de matemáticas para profesores en la UABCS](#TalleMate), *julio de 2026* Inició en 2023 y poco a poco le hemos dado forma entre los asistentes y un servidor.

**Del baúl de los recuerdos:**
- [Cómo comencé a dar clases](#como-comencé-a-dar-clases), *julio de 2026* Un afortunado accidente.
- [La experiencia en ESCOM](#ESCOM), *julio de 2026* Esta es una etapa llena de recuerdos gratos, historias que me gusta contar. 
  
---

## Asignaturas que imparto {#asignaturas}
<small style="color: #999;">Julio de 2026</small>

### Álgebra Lineal

**Repositorios:**

- [Refinamiento Iterativo](https://github.com/mancpato/RefItera-cuda-BL) Este proyecto es una implementación y comparación de refinamiento iterativo para sistemas lineales usando tres enfoques diferentes: CPU (OpenBLAS/LAPACK), GPU (CUDA/cuBLAS) y Híbrido (MAGMA).

**Materiales de lectura:**

- [Vectores](/assets/files/docencia/AL1-Vectores.pdf)
- [Matrices](/assets/files/docencia/AL2-Matrices.pdf)
- [Tipos de matrices](/assets/files/docencia/AL2-Matrices3Tipos.pdf)
- [Subespacios](/assets/files/docencia/AL2-Matrices4SubSpc.pdf)
- [Operaciones con matrices](/assets/files/docencia/AL2-MatricesOps.pdf)
- [Propiedades de matrices](/assets/files/docencia/AL2-MatricesProps.pdf)
- [Notas de enseñanza](/assets/files/docencia/AL2-teaching.pdf)
- [Refinamiento iterativo](/assets/files/docencia/AL6-RefinItera.pdf)

### Teoría de la Computación

- [Notas de clase](/assets/files/docencia/NotasTC.pdf)
- [Fundamentos matemáticos]

**Máquina de Turing Universal (restringida)**

<!-- ![MTUR](/assets/images/docencia/foto.jpg) -->


{% include volver-seccion.html url="/docencia/" %}

---


## Uso de IA en matemáticas {#IA-mate}
<small style="color: #999;">Mayo de 2026</small>

**El cambio que ya empezó: matemáticas, programación e IA en la educación superiror**
*Reflexión para discusión académica*

### El catalizador y la resistencia

No es la inteligencia artificial la que ha creado la necesidad de repensar el rol de las matemáticas en la formación profesional. La IA ha actuado como un catalizador visible de un proceso que comenzó hace tres décadas, cuando las computadoras personales y el software de cálculo simbólico y numérico —MATLAB, Mathematica, Excel, las calculadoras gráficas— se masificaron en las aulas y en el ejercicio profesional. Ya en los años noventa un ingeniero podía resolver un sistema de ecuaciones lineales con un clic, un contador podía generar estados financieros completos con una hoja de cálculo, y un geólogo podía procesar datos sísmicos con herramientas que antes requerían días de trabajo manual. La pregunta sobre qué vale la pena enseñar y evaluar no es nueva; lo que ha cambiado, con los modelos de lenguaje de gran escala, es que la fricción técnica que separaba al usuario del cómputo se ha reducido a casi cero. Ya no hay excusa institucional para no darse cuenta.

Sin embargo, la resistencia a adaptar los planes de estudio y las prácticas docentes ha sido notablemente persistente. Seguimos evaluando la capacidad de integrar funciones racionales como si el mercado laboral recompensara la velocidad de cómputo manual. Seguimos diseñando exámenes que miden lo que una máquina hace mejor, mientras dedicamos poco tiempo a lo que la máquina no puede hacer: formular el problema correcto, interpretar el resultado en contexto, detectar un absurdo físico, elegir entre modelos alternativos. Esta inercia no es malicia ni pereza individual; es el resultado de décadas de reproducción de un modelo en el que el cuello de botella era la ejecución. Ese cuello de botella ha desaparecido. Nos sigue costando soltarlo.

### Del cálculo al juicio: desplazamiento del valor formativo

La tesis central es simple: el valor diferencial del egresado ya no está en su capacidad de ejecutar algoritmos matemáticos, sino en su capacidad de modelar, validar e interpretar. El ingeniero no será más rápido que la IA haciendo derivadas; será mejor haciendo la pregunta correcta antes de derivar, y sabiendo si el resultado tiene sentido después. El contador no competirá con un sistema automático en velocidad de cálculo; lo superará en la capacidad de detectar una inconsistencia en los supuestos o una irregularidad que el software no fue programado para cuestionar.

Esto no significa abandonar los fundamentos matemáticos ni eliminar la práctica manual. La ejecución conserva un valor formativo real como andamiaje cognitivo: no se aprende a modelar sin haber manipulado alguna vez las ecuaciones; no se desarrolla intuición sobre la estabilidad numérica sin haber experimentado la fragilidad de un método mal aplicado. El error no es enseñar el procedimiento; es convertirlo en el objetivo final, en la principal evidencia de comprensión. Que un estudiante sepa integrar por partes no es malo; lo es que esa habilidad sea el centro de la evaluación cuando ya no es el centro del ejercicio profesional.

El desplazamiento que proponemos no es sustitución sino rejerarquización: de los métodos algorítmicos manuales hacia el modelado, el análisis de sensibilidad, la crítica de supuestos, la detección de errores conceptuales, la comunicación del resultado en términos no técnicos y la capacidad de traducir un problema real a una formulación que una máquina pueda resolver. Esas competencias no se desarrollan resolviendo más problemas de libro; se desarrollan interactuando con el fenómeno de maneras que antes eran logísticamente imposibles en el tiempo de un semestre.

### La tercera vía: programación exploratoria mediada por IA

Frente al falso dilema entre calcular todo a mano y usar la IA como caja negra, la programación asistida abre un espacio pedagógico distinto. No se trata de que los estudiantes se conviertan en desarrolladores de software, sino de que tengan la capacidad de especificar, ejecutar, modificar y validar un procedimiento matemático automatizado. Lo que la IA ha cambiado en este punto es decisivo: la barrera técnica que antes hacía inviable usar programación como herramienta cotidiana en cursos de matemáticas —el tiempo de aprendizaje del lenguaje, la instalación del entorno, la depuración de errores de sintaxis— se ha reducido drásticamente. Ahora el estudiante puede describir en lenguaje natural lo que necesita y recibir código funcional en segundos. La fricción operativa ya no es el obstáculo. El obstáculo restante es conceptual, y eso es exactamente el territorio del profesor.

Es importante distinguir cuatro situaciones de uso, porque cada una tiene pertinencia, expectativas y riesgos distintos.

La primera es la **demostración docente**: el profesor genera una visualización o simulador y lo muestra en clase mientras explica. Los alumnos no tocan el código; la ganancia está en la calidad de la explicación que acompaña a la herramienta, en el concepto que se vuelve visible y dinámico en lugar de estático en el pizarrón.

La segunda es la **exploración estudiantil guiada**: los alumnos reciben un enlace a una herramienta interactiva y responden preguntas del tipo "¿qué ocurre si cambias este parámetro?", "¿a partir de qué valor el error supera el cinco por ciento?", "¿por qué la solución numérica se vuelve inestable aquí?". El aprendizaje ocurre en la experimentación y en la argumentación, no en el código.

La tercera es la **obtención de un resultado puntual a interpretar**: un alumno o un profesional usa la IA para generar un script que resuelva un problema específico, ejecuta el resultado y lo interpreta en el contexto de su disciplina. La competencia que se evalúa es la claridad de la especificación y la capacidad de auditoría del resultado.

La cuarta es el **software de academia construido colectivamente**: equipos de profesores producen, documentan y mantienen un repertorio de herramientas para sus asignaturas. Es un artefacto institucional con criterios mínimos de calidad, pero no pretende competir con software profesional. Su valor es pedagógico: está diseñado con una intención didáctica que el software comercial generalmente ignora. Esta distinción debe decirse con honestidad. Un script de Google Colab no reemplaza a un paquete de simulación validado industrialmente; confundir ambos planos sería irresponsable tanto para los profesores que lo producen como para los estudiantes que lo usan.

### Más allá de las matemáticas: amplitud disciplinar

El argumento anterior no es exclusivo de las ciencias exactas ni de la ingeniería. Dondequiera que exista una parte operativa automatizable, la misma tensión aparece entre la ejecución y la interpretación. Un contador que usa IA para generar declaraciones fiscales, pero no puede verificar si los supuestos son razonables ni detectar una inconsistencia en los datos de origen, no es un buen contador. Un geólogo que automatiza el cálculo de reservas minerales sin entender los límites del modelo ni las fuentes de incertidumbre es un riesgo para su organización. Un administrador de empresas que produce proyecciones financieras con herramientas automáticas sin saber qué hipótesis las sustentan toma decisiones en el aire.

En todas estas disciplinas la pregunta subyacente es la misma: ¿qué significa ser competente cuando la ejecución se ha vuelto barata y la interpretación, valiosa? Las respuestas varían según el área, pero la pregunta es universal. Los planes de estudio que no la han enfrentado explícitamente —en matemáticas, contabilidad, geología, administración o cualquier otra disciplina técnica— están formando egresados para un mercado que ya no existe.

### La evaluación: donde el paradigma viejo sobrevive más

El lugar donde el cambio de paradigma es más difícil y más necesario es la evaluación. Podemos hablar de modelado, validación e interpretación en los objetivos del curso, pero si el examen sigue midiendo velocidad algebraica y memorización procedimental, todo el discurso pierde fuerza práctica. Los alumnos estudian lo que se evalúa. Si evaluamos calculadoras humanas, formaremos calculadoras humanas.

El cambio evaluativo no requiere abandonar el rigor; requiere redirigirlo. Pedir al estudiante que prediga el comportamiento de un sistema antes de ejecutar el código y luego explique la discrepancia entre su predicción y el resultado es más exigente que pedirle que resuelva una integral. Diseñar un caso de prueba que pueda verificarse a mano para validar la salida de un programa requiere comprensión más profunda que aplicar un método de integración. El rigor no está en la dificultad técnica del procedimiento sino en la precisión conceptual que se exige.

### Los riesgos reales: empatía sin complacencia

Señalar riesgos no es resistencia al cambio; es responsabilidad académica. Dos riesgos merecen atención particular, y ambos deben abordarse con empatía estructural, no con señalamiento individual.

El primero es el estudiante que usa la IA sin base teórica suficiente. Ocurre cuando permitimos su uso irrestricto antes de haber construido los conceptos fundamentales que permiten auditar el resultado. El alumno aprende a pedir pero no a juzgar; desarrolla una falsa fluidez que se colapsa en cuanto el problema sale del guión esperado. La solución no es prohibir la herramienta, sino diseñar actividades donde la validación sea obligatoria y visible: predicción antes de ejecutar, explicación del resultado, problemas abiertos donde ninguna IA tiene respuesta única.

El segundo es el profesor que no actualiza su práctica. Esto ocurre, en la mayoría de los casos, no por rechazo ideológico sino porque el sistema no lo ha pedido explícitamente, no le ha dado tiempo, y no le ha ofrecido formación pertinente. La mayoría de los profesores de matemáticas en universidades latinoamericanas tienen cargas lectivas altas, pocos incentivos para innovar, y una formación de posgrado que no incluyó estos temas porque tampoco existían de la manera en que existen hoy. Señalar este retraso no es culpar al individuo; es reconocer un problema estructural que requiere respuestas institucionales.

La empatía, sin embargo, no debe confundirse con complacencia. Podemos entender las causas de la resistencia y, al mismo tiempo, afirmar que seguir evaluando lo que la IA hace mejor es un error profesional. Preparamos mal a nuestros alumnos si les hacemos invertir horas en lo que ya no es diferencial.

### La pregunta que no admite evasión

¿Estamos evaluando a nuestros alumnos por su capacidad de ser calculadoras humanas —un rol que lleva décadas en extinción— o por su capacidad de entender, conectar y auditar las herramientas matemáticas para resolver problemas reales? La respuesta definirá el sentido de nuestros programas de estudio, nuestras prácticas de aula y, en última instancia, la pertinencia de nuestra propia profesión.

La IA no nos obliga a responder esta pregunta. Nos obliga a dejar de ignorarla.

*Documento de reflexión para discusión académica interna · DASC · UABCS*
*Elaborado a partir de una serie de talleres de verano impartidos entre 2023 y 2026.*

{% include volver-seccion.html url="/docencia/" %}

---
## Taller de matemáticas para profesores {#TalleMate}
<small style="color: #999;">Julio de 2026</small

Desde 2012 he comenzado a escribir algunas ideas sobre la docencia de las matemáticas y comenzó mi interés por trabajar estos temas con profesores del DASC, pero no convencí a cada jefe en turno (Mónica-Andrés). Fue hasta 2023 cuando pude impartir el primer taller de matematicas para profesores de la UABCS. 



{% include volver-seccion.html url="/docencia/" %}

---

<!-- 
        **** Inicia el baúl de los recuerdos ****
-->

## Cómo comencé a dar clases {#como-comencé-a-dar-clases}

Me inicié como docente de nivel superior en la Escuela Superior de Cómputo del IPN, en el verano de 1994 y en 1999 me cambié a la UABCS. Aquí hay materiales, reflexiones y experiencias enseñando matemáticas, especialmente en la UABCS. Dos grandes apartados: sobre las asignaturas regulares que imparto y el taller para profesores de matemáticas de la UABCS.

---

## La experiencia en ESCOM {#ESCOM}
<small style="color: #999;">Julio de 2026</small>

En 1993 terminé la carrera de matemáticas en la UNISON y de inmediato me fui al posgrado al CINVESTAV. Luego de un año de créditos, el verano siguiente comencé a dar clases de métodos numéricos a uno de los dos grupos de la primera generación de estudiantes de la nueva Escuela Superior de Cómputo del IPN.


{% include volver-seccion.html url="/docencia/" %}

