# using slim openjdk because jar is already compiled
FROM openjdk:11.0.1-jre-slim-stretch
EXPOSE 8080
ARG JAR=spring-petclinic-2.2.0.BUILD-SNAPSHOT.jar
COPY $JAR /app.jar
ENTRYPOINT ["java","-jar","/app.jar"]