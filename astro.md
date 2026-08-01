---
layout: page
title: Astronomía
permalink: /astronomia/
nav_order: 4
---



- [Cielos oscuros de BCS y recursos en línea](#cielos-bcs), *julio de 2026* Comparación entre predicciones de lightpollutionmap y mediciones reales con fotómetro TESS en San Pedro, BCS.
- [Apuntes breves sobre ciencia](#ApuntesBreves), *julio de 2026* Este libro es una compilación de trabajos de divulgación sobre astronomía y matemáticas.

**Del baúl de los recuerdos:**
- [Cómo comencé con astronomía](#EOS-ASI), *julio de 2026* Otra de las historias que me gusta recordar
- [El eclipse de 1991](#eclipse-1991), *agosto de 2026* De las mejores experiencias


---

## Cielos oscuros de BCS y recursos en línea  {#cielos-bcs}
<small style="color: #999;">Julio de 2026</small>

Sociedad Astronómica Mira, La Paz, BCS

Si alguna vez buscaste un sitio para observar o fotografiar el cielo nocturno, probablemente consultaste lightpollutionmap.info — una herramienta muy difundida y útil como punto de partida. Pero hay algo importante que debes saber antes de confiar en sus números: sus estimaciones pueden ser sistemáticamente más optimistas que la realidad, y sus propios autores lo advierten.

Las Sociedades Astronómicas [Merak](https://www.facebook.com/search/top?q=sociedad%20astron%C3%B3mica%20merak) (en Santa Rosalía) y [Mira](https://www.facebook.com/SociedadAstronomicaMira) llevamos años midiendo la calidad del cielo en sitios de BCS con fotómetros calibrados. el esfuerzo se ha extendido y hoy contamos con el apoyo de colaboradores en varios lugares del estado. La discrepancia con el mapa en línea es consistente: los fotómetros marcan alrededor de 0.5 mag/arcsec² menos que lo que predice el modelo — es decir, el cielo real es más brillante (más contaminado) de lo que el mapa sugiere.

### El caso concreto: San Pedro, BCS

El mapa asigna a un punto cerca de San Pedro 21.43 mag/arcsec², equivalente a Bortle 4. La noche del 23 de julio de 2025 medimos ese mismo sitio con fotómetro TESS. Resultado: 20.92 mag/arcsec² en el cénit, con valores que caen hasta 19.4 hacia el norte, en dirección a La Paz.

<div style="display: flex; gap: 1.5em; flex-wrap: wrap; margin: 1.5em 0;">
  <figure style="flex: 1; min-width: 220px; text-align: center; margin: 0;">
    <img src="/assets/images/LP-SanPedro.png"
         alt="Lightpollutionmap - San Pedro BCS"
         style="width: 100%; border-radius: 6px;">
    <figcaption style="font-size: 0.85em; color: #666; margin-top: 0.4em;">
      Predicción de <em>lightpollutionmap</em> para el sitio: 21.51 mag/arcsec², Bortle 4.
      Un número único y optimista para todo el cielo.
    </figcaption>
  </figure>
  <figure style="flex: 1; min-width: 220px; text-align: center; margin: 0;">
    <img src="/assets/images/tess-SanPedro.jpg"
         alt="Medición TESS all-sky - San Pedro BCS - 23 jul 2025"
         style="width: 100%; border-radius: 6px;">
    <figcaption style="font-size: 0.85em; color: #666; margin-top: 0.4em;">
      Mapa all-sky del fotómetro TESS (23-jul-2025). El cénit marca 20.92 mag/arcsec²;
      hacia el norte, en dirección a La Paz, los valores caen hasta 19.4 —
      más de 1.5 mag de diferencia según la dirección.
    </figcaption>
  </figure>
</div>

El mapa da un número único y optimista. El fotómetro revela que el mismo cielo varía más de 1.5 magnitudes según la dirección que mires. Esa estructura direccional el modelo no la captura.

Y un ejemplo local que ilustra el límite de cualquier modelo: si en San Pedro el estadio está encendido durante un juego de béisbol, la Vía Láctea desaparece. Ningún satélite predice eso.

### ¿Por qué divergen? Las razones son técnicas:

Entre las principales podemos contar:

1. El satélite VIIRS no ve bien el azul de los LED
VIIRS-DNB integra entre 500–900 nm y tiene muy poca sensibilidad al pico azul (~450 nm) de las luminarias LED blancas — precisamente las más comunes hoy y las más dispersivas en la atmósfera. El resultado: el modelo subestima sistemáticamente la contaminación de fuentes LED modernas.

1. El modelo de dispersión atmosférica es genérico
La dispersión real depende de la composición atmosférica local. En BCS tenemos dispersión marina en la costa y dispersión por polvo hacia el norte — ambas superiores al promedio que usa el modelo. Hacer un modelo de dispersión preciso requiere inventario local de fuentes de luz, geografía detallada y composición atmosférica en tiempo real. Es computacionalmente muy costoso y ningún modelo global lo hace bien a escala local.

1. Los datos VIIRS se toman a la 01:30 hora local
Si tu medición es antes o después de ese horario, ya estás comparando cosas distintas. La actividad humana (comercios, estadios, tráfico) varía durante la noche.

1. TESS y SQM-L no son el mismo instrumento
Aunque usan el mismo tipo de fotodiodo, sus filtros espectrales son distintos. El TESS tiene una banda más amplia hacia el rojo; el SQM-L intenta replicar la respuesta visual humana. En cielos muy oscuros miden prácticamente lo mismo. En zonas con contaminación, el TESS puede registrar valores más brillantes que el SQM-L porque captura más luz en el infrarrojo cercano. Siempre hay que especificar con qué instrumento se midió.

1. El airglow natural añade variabilidad irreducible
El airglow es emisión propia de la atmósfera a ~90 km de altitud (principalmente OH, O₂ y Na), y en los últimos años ha sido especialmente intenso y variable, correlacionado con el máximo del ciclo solar actual. El TESS lo captura bien, especialmente hacia los horizontes, y se suma a los domos de luz artificial. Esto introduce una variabilidad natural de ~0.6 mag/arcsec² que no puede eliminarse con más datos ni con mejores modelos — es física del sistema.

El propio FAQ de lightpollutionmap comenta: **"The modeled zenith brightness represents the best case scenario"**

No es un defecto oculto — es una advertencia explícita de sus autores. El problema es que la mayoría de los usuarios no lee el FAQ y toma los números como mediciones reales.

Bortle vs. SQM: referencia aproximada
Bortle	SQM típico (mag/arcsec²)
4	~21.5
5	~20.8
6	~20.0
7	~19.1
8–9	< 18.5

San Pedro marcó 20.92 en cénit esa noche: entre Bortle 4 y 5, no el Bortle 4 limpio que sugiere el mapa. Con el norte degradado a 19.4, partes del cielo rozan Bortle 7.

Esta tabla es una referencia aproximada. La correlación precisa para sitios de BCS, separando contribuciones artificiales de naturales (airglow, luz zodiacal), es un estudio pendiente.

### Recomendación práctica

- Usa lightpollutionmap como primera aproximación para identificar zonas prometedoras
- No interpretes sus valores como medición real del cielo que vas a encontrar
- Para astrofotografía seria, nada reemplaza medir en sitio
- En BCS en particular, las condiciones costeras hacen que los modelos globales fallen más que en zonas continentales


{% include volver-seccion.html url="/astro/" %}

---

## Apuntes breves sobre ciencia {#ApuntesBreves}

No tengo la fecha exacta, pero alrededor de 2010 comencé escribir artículos para medios de información, para compartir en mi muro en Facebook y a asistir aprogramas de radio y televisión para participar comentando temas de astronomía. Canal 10 fue el primero al que asistí, luego también en canal 8. Algunos artículos salieron en el Sudcaliforniano y otros en revistas digitales como Culco. En 2018, organicé mucho de este material y compilé un libro de divulgación que editó la UABCS (versión digital). Reune varios de estos trabajos junto con otros sobre temas de matemáticas (la segunda parte). 

Lo descargan en la liga [Apuntes breves sobre ciencia (PDF)](/assets/files/astronomia/ApuntesBreves.pdf)

<figure style="text-align: center; margin: 2em 0 1em;">
  <img src="/assets/images/astronomia/ApuntesBreves.png"
       alt="Apuntes breves, sección de la portada"
       style="display: block; margin: 0 auto; max-width: 60%; border-radius: 6px;">
  <figcaption style="font-size: 0.9em; color: #666; margin-top: 0.5em;">Parte superior de la portada</figcaption>
</figure>

Como digo en la portada de este sitio, para mí escribir es una actividad indispensable del proceso de aprender y pensar. Al ritmo que voy, todo indica que podré editar una segunda versión con temas nuevos. Como siempre, lo que falta es tiempo.


{% include volver-seccion.html url="/astro/" %}

---

<!-- 
        **** Inicia el baúl de los recuerdos ****
-->

## Cómo comencé con astronomía {#EOS-ASI}
<small style="color: #999;">Julio de 2026</small>

Ya se había terminado el tercer semestre en la UNISON, 1990, y estábamos principalmente no haciendo nada. Cierto día, mis compañeros del salón, físicos y matemáticos, me invitaron a ir a una conferencia de un astrónomo que acababa de llegar a la UNISON. Ahí voy de curioso, como todos. Fue una de las mejores decisiones de mi vida.

Antonio Sánchez Ibarra, nos habló de su trabajo como astrónomo solar, monitoreando e investigando sobre hoyos coronales.


{% include volver-seccion.html url="/astro/" %}

---

## El eclipse de 1991 {#eclipse-1991}
<small style="color: #999;">Agosto de 2026</small>

El llamado eclipse del siglo pasó por La Paz, lo que me hizo anfitrión automáticamente.

Lo observamos y registramos desde La Matanza, BCS, para acercarnos aún más a la línea central.


{% include volver-seccion.html url="/astro/" %}
