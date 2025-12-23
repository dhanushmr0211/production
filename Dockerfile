
FROM eclipse-temurin:17-jdk

WORKDIR /app
COPY Main.java .
RUN javac Main.java
CMD ["java", "Main"]
docker run -it main-java   
 docker build -t main-java .