pipeline {
  agent any
  stages {
    stage('Build') {
      steps {
        sh 'git submodule update --init --recursive'
        sh 'mkdir build && cd build &&  cmake .. && make'
      }
    }

    stage('Test') {
      steps {
        sh './build/test/gtestExample1_tst '
      }
    }

  }
}