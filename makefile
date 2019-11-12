primergrado.png : euler1.dat euler2.dat euler3.dat impli1.dat impli2.dat impli3.dat graficar.py
	python graficar.py

euler1.dat : ejercicio27.x
	./ejercicio27.x

ejercicio27.x : Ejercicio27.cpp
	c++ Ejercicio27.cpp -o ejercicio27.x

    