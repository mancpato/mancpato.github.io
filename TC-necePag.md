---
layout: page
title: ¿Es necesaria la Teoría de la Computación en Ingeniería en IA y Ciberseguridad?
permalink: /docencia/TC-necePag/
---

Los siguientes argumentos pueden ser de interés/utilidad para los interesados en los aspectos técnicos y curriculares de la Teoría de la Computación. 

Los lenguajes formales, autómatas, computabilidad y complejidad computacional no son un bloque de relleno académico, sino el sustrato conceptual sobre el que se sostienen tanto la IA, la Ciberseguridad y otros perfiles porfesionales. Donde difieren es en *cuánto énfasis relativo* merece cada componente y *cómo* debe enseñarse en un plan de ingeniería aplicada frente a una licenciatura/ingeniería tradicional en Computación/Informática/Sistemas.

No se trata solo de si la teoría es útil, sino de si es constitutiva de la disciplina, el mismo tipo de argumento que sostiene que no se puede quitar Teoría Política a los politólogos, Teoría de la Comunicación a los comunicólogos o Derecho Romano a los abogados, sin dejar de estar formando profesionales en vez de técnicos superiores. Este es un tema que siempre abordo en mi taller de matemáticas para profesores en la UABCS.

## 1. Los tres componentes

Conviene separar lo que coloquialmente se agrupa bajo **"Teoría de la Computación"** en tres piezas con relevancia distinta para cada perfil profesional.

1. **Lenguajes formales y autómatas**: jerarquía de Chomsky, DFA/NFA, gramáticas libres de contexto, autómatas de pila.
2. **Computabilidad**: máquinas de Turing, decidibilidad, el problema de la parada, reducciones.
3. **Complejidad computacional**: clases P/NP/NP-completo (y peores), reducciones polinomiales, análisis de recursos.

La tercera es la componente de mayor rendimiento pedagógico por unidad de tiempo invertido, más que autómatas construidos desde cero y más que las demostraciones formales de computabilidad pura. Esto no significa prescindir de los otros dos; significa que si hay que priorizar, esto es lo imprescindible.

## 2. Por qué es necesaria en Ingeniería en IA

La **TC** ayuda porque la complejidad computacional determina qué es entrenable u optimizable en la práctica, además de que modela cómo una IA procesa y genera lenguaje natural y código estructurado.

- **Procesamiento de lenguaje natural y generación de código.** Las gramáticas libres de contexto y los autómatas finitos son la base histórica y estructural del análisis sintáctico: cómo un modelo convierte texto en estructuras (árboles sintácticos), cómo se tokeniza y limpia un dataset, y cómo se diseñan lenguajes de dominio específico (DSLs) para sistemas de IA.
- **Modelos secuenciales.** Un autómata es, en esencia, una máquina con estado que procesa tokens uno a uno — el mismo principio formal detrás de RNNs, y de forma más indirecta, de los mecanismos de atención en Transformers. Entender esa herencia formal ayuda a razonar sobre por qué ciertas arquitecturas escalan como escalan. El no determinismo modela el paralelismo real, pero esto es más útil en complejidad que en la práctica.
- **Complejidad y optimización.** Reconocer si un problema de entrenamiento, planificación o búsqueda es NP-duro evita perseguir soluciones exactas donde no las hay, y justifica formalmente el uso de heurísticas, aproximaciones y metaheurísticas. Un ingeniero de IA no necesita demostrar teoremas de incompletitud, pero sí necesita la distinción entre "¿se puede resolver?" y "¿se puede resolver eficientemente?" — es la pregunta que subyace a por qué un Transformer con complejidad O(n²) no puede procesar un millón de tokens sin trucos como Flash Attention o modelos de espacio de estados (que, no es casualidad, son básicamente autómatas revisitados).
- **Límites de la computabilidad**, con menor peso relativo, dan marco para no perseguir problemas indecidibles y para participar con criterio en debates sobre los límites de lo que un modelo puede en principio aprender.

## 3. Por qué es necesaria en Ciberseguridad

La **TC** es necesaria porque una parte importante de los mecanismos clásicos puede formularse con TC y buena parte de la garantía de que un esquema criptográfico es seguro es un resultado de complejidad computacional. Aquí la conexión es más directa e ineludible que en IA:

- **Autómatas y expresiones regulares** son el corazón operativo de los sistemas IDS/IPS (Snort), los Web Application Firewals, las herramientas de firmas de malware (YARA) y el análisis de logs. Diseñar una firma para detectar una inyección SQL es definir un autómata que reconoce un patrón malicioso. Un ingeniero que entiende esto sabe también sus límites: un autómata finito no puede contar paréntesis anidados, eso requiere pila, y saber eso es saber exactamente qué ataques puede evadir esa herramienta.
- **Computabilidad e indecidibilidad** aquí hay aplicación concreta: el Teorema de Rice, derivado del problema de la parada, establece que no existe un algoritmo general capaz de determinar con certeza si un programa arbitrario es malicioso. Esto no es una curiosidad teórica — es la razón formal por la que ningún antivirus será nunca perfecto, y por la que el sandboxing y el análisis heurístico son necesarios en vez de bastar con firmas estáticas.
- **Complejidad computacional es base de la criptografía moderna.** La seguridad descansa en el supuesto de que ciertos problemas (factorización, logaritmo discreto) están en NP pero no se sabe que estén en P. Sin entender P vs NP y reducción polinomial, no se entiende *por qué* confiamos en un esquema criptográfico — solo se sabe usarlo, como un técnico.
- **Verificación formal y model checking**, empleados en auditoría de protocolos, smart contracts y detección de vulnerabilidades (buffer overflows, condiciones de carrera), son extensiones directas de teoría de autómatas y lógica formal.

## 4. La distinción técnico / ingeniero

Un técnico en ciberseguridad usa un Web Application Firewall, un ingeniero sabe que ese WAF corre sobre un autómata finito, conoce sus limitaciones estructurales y sabe qué ataques puede evadirlo. Un técnico en IA puede usar Pandas y scikit-learn; un ingeniero entiende por qué un Transformer tiene complejidad cuadrática, qué alternativas arquitectónicas existen precisamente por esa razón e incluso saber (si no entender) que los LLM aprenden contra lo que la estadística dice y que eso se justifica con la teoría del aprendizaje singular (que ya son matemáticas avanzadas). La teoría es lo que separa operar una herramienta de poder rediseñarla cuando falla o cuando aparece un problema fuera del manual.

## 5. Lo formativo y lo operativo: la abstracción como condición física

Toda asignatura con carga matemática fuerte tiene una parte **operativa** (lo que se reutiliza directamente en otras materias o en la práctica profesional) y una parte **formativa** (lo que tal vez no vuelva a tocarse explícitamente, pero que entrena la capacidad de pensar formalmente, de abstraer, de sostener una cadena de inferencia). Un boxeador no salta la cuerda arriba del ring, lo hace en el gimnasio, para ganar una condición que después se manifiesta en el ring sin que nadie vea la cuerda.

TC tiene ambas partes:

- La parte operativa debe ser clara: regex, IDS, complejidad, criptografía, autómatas, modelos secuenciales. Es lo que un estudiante reutiliza directamente, con nombre y aplicación identificables.
- La parte formativa es otra cosa: construir una demostración por diagonalización, minimizar un autómata a mano, seguir el argumento de una reducción de un problema NP-completo a otro. Nada de eso se vuelve a tocar literalmente en el trabajo de un ingeniero de IA o de ciberseguridad. Pero ejercitar ese tipo específico de pensamiento, sostener una inferencia formal sin apoyo intuitivo, manejar niveles de abstracción, distinguir cuándo una prueba es rigurosa y cuándo solo lo parece, es la condición que después permite, por ejemplo, leer con criterio un paper que afirma que un algoritmo es "óptimo", o notar que la demostración de seguridad de un protocolo tiene un hueco.

Incluso cediendo (sin conceder) que Ingeniería en IA es una disciplina aplicada y no una rama directa de la computación, ninguna ingeniería seria renuncia a la parte formativa de sus matemáticas de base. Un ingeniero eléctrico sí carga con análisis real y álgebra lineal demostrativa, no solo con recetario de circuitos, precisamente porque esa carga formativa es la que permite razonar fuera del recetario cuando aparece un problema nuevo. TC cumple ese mismo papel para IA y Ciberseguridad: no es solo la caja de herramientas operativas, es también el gimnasio donde se entrena la capacidad de abstracción que después se usa en cualquier parte del currículum sin que nadie vuelva a ver la cuerda.

Quitar la materia no elimina la necesidad de los conceptos, los dispersa entre otras materias que tienen que improvisarla, pero sin estructura. El contenido queda escondido y fragmentado en vez de concentrado y visible en una materia.

A esto se suma un argumento de caducidad: las herramientas concretas (un framework de ML, una suite de pentesting) tienen una vida útil de pocos años, mientras que la NP-completitud y el problema de la parada no caducan. Un plan de estudios que privilegia herramientas sobre teoría produce egresados competentes por un tiempo limitado; uno que asienta la teoría produce egresados que pueden re-aprender la siguiente generación de herramientas por sí mismos.

## 6. La identidad disciplinar

Todo lo anterior se puede considerar un argumento utilitario: la teoría sirve para tareas concretas. Es válido, pero es un argumento incompleto aún. El argumento no es "la teoría política sirve para tal tarea del politólogo": es que sin teoría política no queda una disciplina, queda una colección de técnicas (encuestas, análisis de discurso, gestión de campañas) sin el marco conceptual que las integra y hace inteligibles como una sola cosa.

Ese mismo argumento aplica aquí con una base histórica concreta: *la computación no adoptó la teoría de la computación como apoyo: nació de ella.* Turing, Church y Gödel definieron formalmente qué es computar antes de que existiera una sola computadora física; Shannon conectó eso con circuitos lógicos. Todo lo que vino después (ingeniería de software, bases de datos, sistemas operativos, redes neuronales, criptografía aplicada) es derivado de ese marco, no al revés. Quitar la teoría de un plan de Ingeniería en IA no es quitar una materia de apoyo: es cortar la raíz genealógica de la que cuelga el resto de la disciplina. 

## 7. Estándares internacionales

Esto sí sale fácil de una búsqueda en google y es el argumento *burocrático* que suele pesar más (y por lo mismo es lo más aburrido de todo esto).

- Los criterios ABET para acreditar programas de cómputo exigen cobertura sustancial de *algoritmos y complejidad* y de *teoría de ciencias de la computación* como requisito curricular general — no como elemento optativo.
- Para programas nombrados explícitamente "ciberseguridad" o equivalentes, ABET exige de forma explícita matemáticas discretas y matemáticas especializadas que incluyan *teoría de la complejidad*, junto con álgebra abstracta, teoría de la información, teoría de números y campos finitos. Es decir: para un programa de Ciberseguridad, teoría de la complejidad no es una preferencia pedagógica de un profesor — es un renglón nombrado explícitamente en el estándar internacional de acreditación de ingeniería.
- CS2023, la guía curricular más reciente publicada conjuntamente por ACM, IEEE Computer Society y AAAI (Association for the Advancement of Artificial Intelligence) (2024), mantiene "Algorithmic Foundations" (que incluye complejidad computacional) como una de las áreas de conocimiento nucleares de cualquier programa de cómputo. Es revelador que AAAI se sumara a esta guía precisamente para reforzar la cobertura de IA, no para diluir los fundamentos algorítmicos: la lectura institucional es que la IA se construye *sobre* ese núcleo, no en su lugar.

Y aquí no puedo creer que no hayan revisado esto. Es el tipo de argumento que pesa más para un comité curricular que una lista de aplicaciones prácticas, porque no depende de criterio pedagógico personal sino de estándares externos que definen si un programa es acreditable, reconocible internacionalmente como programa de cómputo serio.

¿Y entonces qué paso en el Tec de La Paz y en la UABCS?

---

*Debo agregar que la IA (Claude y Gemini) fueron de gran ayuda en los apartados 2, 3 7 7, además de retoques cosméticos. El resto salen de la experiencia humana, de conocer suficiente la disciplina para entenderr su peso teórico y uso práctico.*


{% include volver-seccion.html url="/docencia/#TC" %}