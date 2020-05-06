pipeline {
    agent any 
    triggers {
        cron('H */2 * * 1-3')
    }
    stages {     
        stage('Test phase') {
            steps {
                echo 'Hello world!' 
            }
        }
    }
}
