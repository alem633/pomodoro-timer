# Pomodoro Study Timer 🍅⏲️
[In English/Inglese]

## 🌟 Overview
A simple, dependency-free Pomodoro timer written in C. Perfect for study sessions!  
*"Study as if you know nothing. Work as if you can solve anything." - James Clear*

---

## 📋 Features
- **Focus Session**: 25 minutes of concentrated work.
- **Short Break**: 5-minute rest after each focus session.
- **Long Break**: 15-minute rest after every 4 sessions.
- **Cross-Platform Support**: Works on Windows and Linux.
- **Audible Bell**: Alerts you when a session ends.
- **No Dependencies**: Uses standard libraries only.

---

## 🛠️ Installation
Compile with GCC:  
```bash
gcc -o pomodorostudy pomodorostudy.c
```

---

## 🚀 Usage
Run the executable:  
```bash
./pomodorostudy
```
- Press **Ctrl + C** to exit anytime.
- The timer runs indefinitely until manually stopped.

---

## ⚙️ Customization
Modify the `#define` values in the code to adjust durations:
```c
#define LONG_BREAK   15  // minutes
#define SHORT_BREAK  5
#define FOCUS        25
```
Recompile after changes.

---

## 📝 Notes
- **Windows**: Uses `Beep()` for sound.  
- **Linux**: Requires `paplay` for bell sound (falls back to terminal bell if missing).  
- Unsupported systems will throw an error.

---

# Timer Pomodoro per Studio 🍅⏲️
[In Italian/Italiano]

## 🌟 Panoramica
Un timer Pomodoro scritto in C senza dipendenze esterne. Ideale per sessioni di studio!  
*"Studia come se non sapessi nulla. Lavora come se potessi risolvere qualsiasi cosa." - James Clear*

---

## 📋 Funzionalità
- **Sessione di Focus**: 25 minuti di lavoro concentrato.
- **Pausa Breve**: 5 minuti di riposo dopo ogni sessione.
- **Pausa Lunga**: 15 minuti dopo ogni 4 sessioni.
- **Supporto Multi-Piattaforma**: Funziona su Windows e Linux.
- **Segnale Acustico**: Avvisa alla fine di ogni sessione.
- **Nessuna Dipendenza**: Utilizza solo librerie standard.

---

## 🛠️ Installazione
Compila con GCC:  
```bash
gcc -o pomodorostudy pomodorostudy.c
```

---

## 🚀 Utilizzo
Esegui il file compilato:  
```bash
./pomodorostudy
```
- Premi **Ctrl + C** per uscire in qualsiasi momento.
- Il timer continua finché non viene interrotto manualmente.

---

## ⚙️ Personalizzazione
Modifica i valori `#define` nel codice per regolare i tempi:
```c
#define LONG_BREAK   15  // minuti
#define SHORT_BREAK  5
#define FOCUS        25
```
Ricompila dopo le modifiche.

---

## 📝 Note
- **Windows**: Utilizza `Beep()` per il suono.  
- **Linux**: Richiede `paplay` per il suono (usa il suono del terminale se non disponibile).  
- Sistemi non supportati genereranno un errore.
