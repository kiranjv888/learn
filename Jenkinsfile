pipeline {
    agent any
    stages {
        stage('Build') {
            steps {
                sh 'make'
            }
        }
        stage('Test') {
            steps {
                // Runs the app using the input file and checks if it crashes
                sh './laser_solver < input.txt'
            }
        }
    }
}
