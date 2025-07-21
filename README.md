# 🔄 push_swap

## 📖 Description
**push_swap** est un projet de l'école 42 qui consiste à trier une pile d'entiers en utilisant uniquement un ensemble limité d'opérations, et en produisant la **séquence la plus courte possible**.  
Le but principal est de concevoir un **algorithme efficace de tri** tout en respectant les contraintes imposées par le projet.

---

## 🧩 Fonctionnalités
### **Objectif principal**
- Trier une pile d’entiers (stack **A**) en utilisant une pile auxiliaire (**B**).
- Générer et afficher la **liste des opérations** effectuées pour trier les éléments.

### **Ensemble d’opérations**
- **sa / sb / ss** : Échange les deux premiers éléments de la pile A / B / les deux piles.  
- **pa / pb** : Pousse le premier élément de la pile B vers A, ou de A vers B.  
- **ra / rb / rr** : Fait tourner les éléments de la pile A / B / les deux piles vers le haut.  
- **rra / rrb / rrr** : Fait tourner les éléments de la pile A / B / les deux piles vers le bas.

### **Gestion des erreurs**
- Vérification des entrées :  
  - Valeurs non numériques.  
  - Entiers en dehors des limites `INT_MIN` / `INT_MAX`.  
  - Doublons dans les données.  

### **Optimisation**
- Algorithmes adaptés selon la taille de la pile :  
  - Cas simples (≤ 3 ou 5 éléments).  
  - Algorithmes plus complexes (ex. **radix sort**, tri par groupes) pour les grandes piles.
