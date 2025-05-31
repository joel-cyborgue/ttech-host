# TTECH™ Community Website

Welcome to the TTECH™ Community Website project! TTECH™ is a community dedicated to fostering technological innovation in Africa, with a focus on areas like custom CPU and FPGA development, and providing training and workshops.

## Entry Puzzle

The website features an entry puzzle on its landing page (`home/index.html`) to grant access to the main community content. The puzzle involves:

1.  Calculating the Fibonacci sequence terms from the 5th to the 15th term.
2.  Concatenating these numbers together without spaces or hyphens.
3.  Using each digit of the concatenated number as a shift value for a Caesar cipher to encrypt a corresponding letter (details in `home/index.html`). The resulting encrypted string is the password.

## Website Content Overview

Once accessed, the website (`home/html/Accueil.html`) provides information about:

*   **Nos membres:** Showcasing key members of the TTECH™ community and their expertise.
*   **Historique de nos Réussites:** Highlighting past achievements, such as:
    *   Prototyping a calculator from scratch using African-made components (2023).
    *   Developing a functional mini-analog oscilloscope by students (2024).
    *   The planned launch of the "TCHIP-1" Open Source CPU project (2025).
*   **Congrès et Événements:** Listing upcoming events, including:
    *   Participation in the Salon des Makers – Lomé (April 2025).
    *   Organization of the 1st TTECH™ Hackathon around African FPGAs (July 2025).
    *   "Low-Tech CPU Design" Conference in Aného (December 2025).

## Technologies Used

*   HTML
*   CSS
*   JavaScript

## Project Structure

The project is organized as follows:

```
.
├── home/
│   ├── assets/         # Images, icons, and other static assets
│   ├── html/           # HTML files for different pages
│   ├── javascript/     # JavaScript files
│   ├── style_css/      # CSS stylesheets
│   └── index.html      # Landing page with the entry puzzle
├── .firebaserc         # Firebase configuration
├── .github/            # GitHub Actions workflows
├── firebase.json       # Firebase hosting configuration
└── README.md           # This file
```

## Vision

TTECH™ aims to be at the forefront of African technological innovation, empowering individuals and communities through education and open-source hardware development.
