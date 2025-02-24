# Première étape : préparer l'application
# Utilisation d'une image la plus légère possible
FROM alpine:latest AS compiler

# Ajout de packages nécessaires à la compilation
RUN apk add build-base

# Répertoire de travail dans l'image
WORKDIR /app

# Copier les fichiers de l'application
COPY . .

# Compilation de l'application
RUN make


# Deuxième étape : créer l'image voulue
# Utilisation d'une image de base spécifique aux images qui ont pour vocation d'être le moins lourde possible
FROM alpine:latest

# Mise à jour des paquets et installation de dépendances
RUN apk update

# Répertoire de travail dans l'image
WORKDIR /app

# Au lieu de copier l'éxecutable et le Makefile, on se contente de copier l'éxecutable créé par compiler
COPY --from=compiler /app/calculator /app/calculator

# Cete application n'a pas besoin de communiquer en réseau, ce n'est pas un conteneur qui tourne en fond donc on
# commente le fait d'exposer un port
#EXPOSE 8080

# Commande pour exécuter le programme
CMD ["/app/calculator"]
