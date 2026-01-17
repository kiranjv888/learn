pipeline{
	agent any
	stages{
		stage("checkout")
		{
			steps{
				checkout scm
			}	
			
		}
		stage("configutation"){
			steps{
				sh 'cmake -B build -s'
			}
		}
		stage("Build"){
			steps{
				sh 'cmake --build build'
			}	
		}	
		stage("Test"){
			steps{
				sh './build/run_tests'
			}	
	
	}
	
	post{
		success{
			echo 'Build Success'
		}	
		failure{
			echo 'Build Failed'
		}	
	}
}

