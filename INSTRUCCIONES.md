# 📋 INSTRUCCIONES - Cómo agregar ejercicios a tu sitio web

## 🎯 PASOS RÁPIDOS PARA HOY (SEMANA 2)

### 1. Abre el archivo `semana2.html` en tu editor de código

### 2. Para cada ejercicio, reemplaza estas 3 partes:

#### A) **TÍTULO Y DESCRIPCIÓN**
```html
<h2 class="exercise-title">
    <span class="exercise-number">Ejercicio 1:</span>
    [NOMBRE DEL EJERCICIO]  ← CAMBIA ESTO
</h2>
```

```html
<div class="exercise-description">
    <p>[DESCRIPCIÓN DEL EJERCICIO]</p>  ← CAMBIA ESTO
</div>
```

#### B) **CÓDIGO**
Busca esta sección:
```html
<pre><code class="language-cpp">// PEGA AQUÍ TU CÓDIGO
```

Y reemplázala con tu código completo. **IMPORTANTE**: 
- Cambia `<` por `&lt;`
- Cambia `>` por `&gt;`
- Esto es necesario para que el HTML no se rompa

**EJEMPLO:**
```cpp
#include <iostream>  // ❌ INCORRECTO en HTML
```

```cpp
#include &lt;iostream&gt;  // ✅ CORRECTO en HTML
```

#### C) **SALIDA**
Busca:
```html
<pre class="output-content">// PEGA AQUÍ LA SALIDA</pre>
```

Y reemplaza con la salida real de tu programa.

---

## 📝 EJEMPLO COMPLETO

### ANTES (plantilla vacía):
```html
<section class="exercise">
    <div class="exercise-header">
        <h2 class="exercise-title">
            <span class="exercise-number">Ejercicio 1:</span>
            [NOMBRE DEL EJERCICIO]
        </h2>
        <span class="exercise-tag">Básico</span>
    </div>

    <div class="exercise-description">
        <p>[DESCRIPCIÓN DEL EJERCICIO]</p>
    </div>

    <div class="code-container">
        <div class="code-header">
            <span class="code-title">
                <svg>...</svg>
                ejercicio1.cpp
            </span>
            <button class="copy-btn" onclick="copyCode(this)">
                <svg>...</svg>
                Copiar
            </button>
        </div>
        <pre><code class="language-cpp">// PEGA AQUÍ TU CÓDIGO</code></pre>
    </div>

    <div class="output-container">
        <div class="output-header">
            <span class="output-title">
                <svg>...</svg>
                Salida
            </span>
        </div>
        <pre class="output-content">// PEGA AQUÍ LA SALIDA</pre>
    </div>
</section>
```

### DESPUÉS (con tu código):
```html
<section class="exercise">
    <div class="exercise-header">
        <h2 class="exercise-title">
            <span class="exercise-number">Ejercicio 1:</span>
            Suma de dos números
        </h2>
        <span class="exercise-tag">Básico</span>
    </div>

    <div class="exercise-description">
        <p>Programa que solicita dos números al usuario y muestra su suma.</p>
    </div>

    <div class="code-container">
        <div class="code-header">
            <span class="code-title">
                <svg>...</svg>
                ejercicio1.cpp
            </span>
            <button class="copy-btn" onclick="copyCode(this)">
                <svg>...</svg>
                Copiar
            </button>
        </div>
        <pre><code class="language-cpp">#include &lt;iostream&gt;
using namespace std;

int main() {
    int a, b, suma;
    
    cout &lt;&lt; "Ingrese primer número: ";
    cin &gt;&gt; a;
    cout &lt;&lt; "Ingrese segundo número: ";
    cin &gt;&gt; b;
    
    suma = a + b;
    cout &lt;&lt; "La suma es: " &lt;&lt; suma &lt;&lt; endl;
    
    return 0;
}</code></pre>
    </div>

    <div class="output-container">
        <div class="output-header">
            <span class="output-title">
                <svg>...</svg>
                Salida
            </span>
        </div>
        <pre class="output-content">Ingrese primer número: 5
Ingrese segundo número: 3
La suma es: 8</pre>
    </div>
</section>
```

---

## 🏷️ ETIQUETAS DE DIFICULTAD

Puedes cambiar la etiqueta según la dificultad:

```html
<span class="exercise-tag">Básico</span>
<span class="exercise-tag">Intermedio</span>
<span class="exercise-tag">Avanzado</span>
<span class="exercise-tag">Desafío</span>
```

---

## 💾 CÓMO SUBIR TUS CAMBIOS A GITHUB

Después de editar `semana2.html`:

```bash
cd D:\C++\NIVELACION
git add semana2.html
git commit -m "Agregar 10 ejercicios de Semana 2"
git push origin main
```

Espera 1-2 minutos y tu sitio se actualizará automáticamente en:
https://milagros1804.github.io/Nive_LP/semana2.html

---

## 🔄 PARA LAS PRÓXIMAS SEMANAS

1. **Copia** el archivo `semana2.html`
2. **Renómbralo** a `semana3.html`, `semana4.html`, etc.
3. **Cambia** el encabezado:
   ```html
   <div class="week-badge">Semana 03</div>
   <h1 class="week-main-title">Nombre del Tema</h1>
   ```
4. **Agrega** tus ejercicios de la misma manera

---

## 📁 ESTRUCTURA FINAL DE TU PROYECTO

```
D:\C++\NIVELACION\
├── index.html          ← Página principal
├── semana1.html        ← Ejercicios Semana 1
├── semana2.html        ← Ejercicios Semana 2 (EDITA ESTE HOY)
├── semana3.html        ← Lo crearás después
├── semana4.html
├── semana5.html
├── semana6.html
├── semana7.html
├── styles.css          ← Estilos generales
├── week-styles.css     ← Estilos de semanas
└── script.js           ← Funciones JavaScript
```

---

## ⚡ ATAJOS DE TECLADO ÚTILES

**Visual Studio Code:**
- `Ctrl + F` - Buscar texto (usa esto para encontrar "PEGA AQUÍ TU CÓDIGO")
- `Ctrl + H` - Buscar y reemplazar
- `Ctrl + S` - Guardar
- `Alt + Shift + F` - Formatear documento

---

## 🆘 PROBLEMAS COMUNES

### ❌ El código no se ve bien
**Solución**: Recuerda cambiar `<` por `&lt;` y `>` por `&gt;`

### ❌ La página no se actualiza en GitHub Pages
**Solución**: Espera 2-3 minutos después del push. Limpia caché (Ctrl + F5)

### ❌ Los colores del código no aparecen
**Solución**: Verifica que la sección `<pre><code class="language-cpp">` esté correcta

---

## ✅ CHECKLIST PARA HOY

- [ ] Abrir `semana2.html` en editor
- [ ] Agregar nombre y descripción del Ejercicio 1
- [ ] Pegar código del Ejercicio 1 (con &lt; y &gt;)
- [ ] Pegar salida del Ejercicio 1
- [ ] Repetir para los 10 ejercicios
- [ ] Guardar archivo
- [ ] Subir a GitHub (`git add`, `git commit`, `git push`)
- [ ] Verificar en navegador después de 2 minutos

---

¡Mucha suerte con tu presentación! 🚀
