---
layout: page
title: Programación Numérica
permalink: /programacion/
nav_order: 2
---

## Notas, proyectos y temas afines 

Ya me gustaban las matemáticas desde la secundaria cuando inicié mi aventura de programar computadoras en la prepa (primero BASIC en una Tandy2, luego C sobre un SO UNIX V). Fue inmediato juntar los dos mundos. Eso se formalizó hasta el tercer semestre de la carrera de matemáticas, en métodos numéricos, una de mis asignaturas favoritas.

Métods numéricos, análisis numérico, cómputo científico, computación de alto rendimiento, simulación, ... hay muchas líneas de trabajo pero me gusta simplificar y llamarlas de manera genérica **programación numérica**. No es un término estándar, pero prefiero usarlo para referirme a toda esta área de trabajo.

**Algunos proyectos**
- [paranoia2](#paranoia2), un verificador de la norma IEEE 754 de 2019. 
- [Monografía de mi sabático](#Mono), trabajo comenzado en la UNISON en 2008 y terminado en la UABCS. Presenté la monografía al regresar, pero continué desarrollándolo unos años más hasta darle la forma que quería.

### Paranoia2
En 1983, el analista numérico William Kahan programó paranoia.bas, un programa que buscaba defectos en las comptadoras de la época. Cada una hacía cuentas a su propio estilo, lo que llevaba a que el mismo programa diera resultados distintos si se cambiaba de computadora. Fue el arquitecto principal de la norma 754 de IEEE, que rige cómo las computadoras deben hacer los cálculos, algo que a la gran mayoría de las personas les pasa desapercibido pero lo usan todo el tiemmpo. Sus trabajos le ganaron la medalla Turing, el equivalente al Nobrel en computación.

Conocí el programa traducido paranoia.c y es una maravilla de genialidad. Hoy por fortuna casi toda computadora cumple la norma. **paranoia2** es un verificador del cumplimiento de la norma 2019, para formatos binarios (la norma incluye base 10, pensado para cuestiones económicas).

El repositorio se encuentra en [github.com/mancpato/Paranoia2](https://github.com/mancpato/Paranoia2). Puede ser de utilidad para interesados en los detalles finos de programación numérica.

---

### Monografía de mi sabático {#Mono}
Tuve el gusto de invertir mi primer sabático visitando la UNISON en 2008. Ahí regresé a mis mundos de astronomía, guitarra y matemáticas. Me recibieron en el Departamento de Matemáticas y comencé a darle forma a mi libro de programación numérica, una introducción que presenté como monografía al regresar a la UABCS.

[Introducción a la Programación Numérica (PDF)](/assets/files/programacion/Mono.pdf) Este estudio contiene dos partes, la primera sobre los fundamentos y la segunda sobre tres aplicaciones comunes: la suma de números de punto flotante, raíces de ecuaciones y funciones trascendentes (el caso de la exponencial).

---
