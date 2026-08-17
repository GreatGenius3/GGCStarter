# GGCStarter

En enkel startmall för C-programmering med stöd för Debug och Release-lägen. Fungerar i CLion, Visual Studio Code och Visual Studio.

## Funktioner

- ✅ C11-standard
- ✅ Debug och Release-konfigurationer
- ✅ Stöd för GCC (MinGW) och MSVC
- ✅ Bygg-system med CMake och Ninja
- ✅ Cross-platform (Windows)
- ✅ Automatisk detektering av build mode, compiler och arkitektur

## Förutsättningar

### För CLion och VS Code (GCC/MinGW):
- [CMake](https://cmake.org/download/) (version 3.10 eller senare)
- [Ninja](https://github.com/ninja-build/ninja/releases)
- [MinGW-w64](https://www.mingw-w64.org/) eller liknande GCC-kompilator

### För Visual Studio (MSVC):
- [Visual Studio 2022](https://visualstudio.microsoft.com/) (eller senare)
- CMake-komponenten (installeras med Visual Studio)

## Kom igång

### CLion

1. Öppna projektet i CLion
2. Välj build configuration (Debug eller Release) i dropdown-menyn
3. Klicka på "Run" eller "Debug" knappen
4. Programmet byggs automatiskt och körs

### Visual Studio Code

1. Öppna projektet i VS Code
2. Installera C/C++ och CMake Tools extensions om de inte redan är installerade
3. Välj en CMake preset:
   - `debug` för GCC Debug
   - `release` för GCC Release
   - `msvc-debug` för Visual Studio Debug
   - `msvc-release` för Visual Studio Release
4. Klicka på "Build" eller tryck `F7`
5. Klicka på "Run" eller tryck `F5`

### Visual Studio

1. Öppna projektet i Visual Studio
2. Välj "Open a Local Folder" och välj projektmappen
3. Visual Studio kommer automatiskt att detektera CMakePresets.json
4. Välj configuration i dropdown-menyn (Debug eller Release)
5. Klicka på "Local Windows Debugger" eller tryck `F5`

## Projektstruktur

```
GGCStarter/
├── CMakeLists.txt          # CMake-konfiguration
├── CMakePresets.json       # Build-presets för olika miljöer
├── src/
│   └── main.c              # Huvudprogram
└── README.md               # Denna fil
```

## Koden

`main.c` demonstrerar:
- Build mode-detektering (Debug/Release)
- Compiler-detektering (GCC/Clang/MSVC)
- Arkitektur-detektering (32/64-bit)
- Grundläggande C11-syntax

## CMake Presets

Projektet använder följande presets:

| Preset | Compiler | Generator | Build Type |
|--------|----------|-----------|------------|
| `debug` | GCC | Ninja | Debug |
| `release` | GCC | Ninja | Release |
| `msvc-debug` | MSVC | Visual Studio 18 2026 | Debug |
| `msvc-release` | MSVC | Visual Studio 18 2026 | Release |

## Bygg från kommandoraden

```bash
# Konfigurera med Debug preset
cmake --preset debug

# Bygg
cmake --build build/debug

# Kör
./build/debug/MyCStart.exe
```

## 💻 För utvecklare (Terminal & Traditionell .sln)

Om du föredrar att arbeta via terminalen eller vill generera en traditionell Visual Studio Solution-fil, använd följande kommandon i projektets rot:

### Skapa och öppna en traditionell `.sln`-fil
Om du vill arbeta med en klassisk Visual Studio-lösning, kör detta i din terminal:
```bash
cmake -S . -B build-vs -G "Visual Studio 18 2026" -A x64
```
* **Öppna filen:** Gå till mappen `build-vs` och dubbelklicka på `SKOLA1.sln`.
* **Viktigt:** Högerklicka på projektet **SKOLA1** i Solution Explorer och välj **Sätt som startprojekt** (Set as Startup Project) innan du kör.

### Bygg och kompilera direkt i terminalen (MinGW / Make)
```bash
# 1. Generera byggfiler
cmake -S . -B build-mingw -G "MinGW Makefiles"

# 2. Kompilera koden (universellt kommando)
cmake --build build-mingw
```
*Den färdiga filen `SKOLA1.exe` hamnar direkt i mappen `build-mingw/`.*

## License

Detta projekt är fritt att använda för utbildningssyften.
