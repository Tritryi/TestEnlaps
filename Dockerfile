# Utilisation d'une image de base spécifique aux images qui ont pour vocation d'être le moins lourde possible
FROM alpine:latest

# Mise à jour des paquets et installation de dépendances
RUN apk update ; apk add gcc make

# Répertoire de travail dans l'image
WORKDIR /app

# Copie du Makefile et des sources C
COPY Makefile .
COPY src/ src/

# Compilation du programme
RUN make

EXPOSE 8080

# Commande pour exécuter le programme
CMD ["./calculator"]
