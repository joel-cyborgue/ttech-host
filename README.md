# Site web communautaire TTECH™

Bienvenue sur le site web communautaire TTECH™ ! TTECH™ est une communauté dédiée à la promotion de l'innovation technologique en Afrique, axée sur des domaines tels que le développement de CPU et de FPGA personnalisés, et proposant des formations et des ateliers.

## Puzzle d'entrée

La page d'accueil du site web (`home/index.html`) propose un puzzle d'entrée donnant accès au contenu principal de la communauté. Ce puzzle consiste à :

1. Calculer les termes de la suite de Fibonacci du 5e au 15e terme.
2. Concaténer ces nombres sans espaces ni traits d'union.
3. Utiliser chaque chiffre du nombre concaténé comme valeur de décalage pour un chiffrement de César afin de chiffrer la lettre correspondante (détails dans `home/index.html`). La chaîne chiffrée résultante constitue le mot de passe.

## Présentation du contenu du site web

Une fois accessible, le site web (`home/html/Accueil.html`) fournit des informations sur :

* **Nos membres** : Présentation des membres clés de la communauté TTECH™ et de leur expertise.
* **Historique de nos réussites** : Mise en avant des réalisations passées, telles que :
* Prototypage d'une calculatrice à partir de zéro avec des composants fabriqués en Afrique (2023).
* Développement d'un mini-oscilloscope analogique fonctionnel par des étudiants (2024).
* Lancement prévu du projet de processeur open source « TCHIP-1 » (2025).
* **Congrès et événements** : Liste des événements à venir, notamment :
* Participation au Salon des Makers – Lomé (avril 2025).
* Organisation du 1er hackathon TTECH™ autour des FPGA africains (juillet 2025).
* Conférence « Conception de CPU Low-Tech » à Aného (décembre 2025).

## Technologies utilisées

* HTML
* CSS
* JavaScript

## Structure du projet

Le projet est organisé comme suit :

```
.
├── home/
│ ├── assets/ # Images, icônes et autres ressources statiques
│ ├── html/ # Fichiers HTML pour différentes pages
│ ├── javascript/ # Fichiers JavaScript
│ ├── style_css/ # Feuilles de style CSS
│ └── index.html # Page d'accueil avec le puzzle d'entrée
├── .firebaserc # Configuration de Firebase
├── .github/ # Workflows GitHub Actions
├── firebase.json # Configuration de l'hébergement Firebase
└── README.md # Ce fichier
```

## Vision

TTECH™ a pour objectif d'être à la pointe de l'innovation technologique africaine et de donner aux individus les moyens d'agir et les communautés par le biais de l’éducation et du développement de matériel open source.
