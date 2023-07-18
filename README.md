<div align="center">
    <img src=".github/readme/banner-light.png#gh-light-mode-only" alt="Banner (claro)" />
    <img src=".github/readme/banner-dark.png#gh-dark-mode-only" alt="Banner (oscuro)" />
</div>

<br>

El objetivo de este proyecto es simple: programar una función que devuelva una línea leída de un file descriptor.

Este proyecto no solo te permitirá añadir una función bastante práctica a tu colección; también te hará aprender el increíble concepto de las variables estáticas en C.

<br>

<div align="center">
    <a href='https://profile.intra.42.fr/users/antgalan' target="_blank">
        <img alt='42 (oscuro)' src='https://img.shields.io/badge/Málaga-black?style=flat&logo=42&logoColor=white'/>
    </a>
    <a href='https://projects.intra.42.fr/projects/42cursus-get_next_line/projects_users/2955768' target="_blank">
        <img src="https://img.shields.io/badge/Puntuación-125%20%2F%20100-success?color=%2312bab9&style=flat" />
    </a>
    <a href="https://wakatime.com/@srgalan">
        <img src="https://wakatime.com/badge/github/15Galan/get_next_line.svg" alt="Tiempo" />
    </a>
</div>

---

# Parte obligatoria

<table>
  <tr>
    <td><strong>Nombre de la función</strong></td>
    <td><em>get_next_line</em></td>
  </tr>
  <tr>
    <td><strong>Prototipo</strong></td>
    <td><code>char *get_next_line(int fd)</code></td>
  </tr>
  <tr>
    <td><strong>Archivos a entregar</strong></td>
    <td><code>get_next_line.h</code>, <code>get_next_line.c</code>, <code>get_next_line_utils</code></td>
  </tr>
  <tr>
    <td><strong>Parámetros</strong></td>
    <td>fd: descriptor de archivo del que leer.</td>
  </tr>
  <tr>
    <td><strong>Valor devuelto</strong></td>
    <td>La línea leída; <code>NULL</code> en caso de fallo o fin de lectura.</td>
  </tr>
  <tr>
    <td><strong>Elementos autorizados</strong></td>
    <td><code>read()</code>, <code>malloc()</code>, <code>free()</code></td>
  </tr>
  <tr>
    <td><strong>Descripción</strong></td>
    <td>Función que devuelve la línea leída de un descriptor de archivo.</td>
  </tr>
</table>

- Llamar a tu función `get_next_line()` de manera repetida (por ejemplo, usando un bucle) te permitirá leer el contenido del archivo hacia el que apunta el descriptor de archivo, línea a línea, hasta el final.
- Tu función deberá devolver la línea que se acaba de leer; si no hay nada más que leer o si ha ocurrido un error, deberá devolver `NULL`.
- Asegúrate de que tu función se comporta adecuadamente cuando lea de un archivo y cuando lea de `stdin`.
- Ten en cuenta que la línea devuelta debe terminar con el caracter `n`, excepto si se ha llegado al final del archivo y esté no termina con un caracter `n`.
- `get_next_line.h` deberá tener como mínimo el prototipo de la función `get_next_line()`.
- Añade todas las funciones de ayuda que necesites en el archivo `get_next_line_utils.c`.

# Parte bonus

- Desarrolla `get_next_line()` con una sola variable estática.
- Tu `get_next_line()` tiene que ser capaz de gestionar múltiples fd a la vez. Es decir, si tienes tres fd disponibles para lectura (por ejemplo: 3, 4 y 5), debes poder utilizar `get_next_line()` una vez sobre el fd 3, otra vez sobre el fd 4, y otra vez sobre el fd 5 de forma alterna. Y sí, no debe perder el hilo de lectura de cada uno de los fd.

