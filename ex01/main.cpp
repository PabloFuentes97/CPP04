#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

void	leaks(void)
{
	system("leaks -q dogsAndCatsBrain");
}

int	main(void)
{
	int		len = 4;
	std::cout << "\nCrear array de animales\n" << std::endl;
	Animal	*objs[len];

	std::cout << "\nArray de animales creado\n" << std::endl;
	std::cout << "Inicializar array de animales\n" << std::endl;
	for (int i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			objs[i] = new Dog();
		else
			objs[i] = new Cat();
	}
	std::cout << "\nArray de animales inicializado\n" << std::endl;
	std::cout << "Destruir animales\n" << std::endl;
	for (int i = 0; i < len; i++)
	{
		delete objs[i];
	}
	std::cout << "\nAnimales destruidos" << std::endl;
	{
		std::cout << "\n\n---------------PRUEBA COPIA PROFUNDA-------------\n\n\n" << std::endl;
		Cat cat1;
		cat1.getBrain()->setIdea("hola buenas miau");
		std::cout << std::endl << "idea 1 gato 1: " << cat1.getBrain()->getIdea(0) << std::endl;
		std::cout << "\n--------------Copia mediante asignación-------------\n" << std::endl;
		Cat cat2 = cat1;
		std::cout << std::endl << "idea 1 gato 2: " << cat2.getBrain()->getIdea(0) << std::endl;
		std::cout << "\n--------------Copia mediante constructor-------------\n" << std::endl;
		Cat cat3 = Cat(cat2);
		std::cout << std::endl << "idea 1 gato 3: " << cat3.getBrain()->getIdea(0) << std::endl;
		cat1.getBrain()->setIdea("jeje gatete");
		std::cout << std::endl << "idea 2 gato 1: " << cat1.getBrain()->getIdea(1) << std::endl;
		std::cout << std::endl << "idea 2 gato 2: " << cat2.getBrain()->getIdea(1) << std::endl;
		std::cout << std::endl << "idea 2 gato 3: " << cat3.getBrain()->getIdea(1) << std::endl;
		
		Dog dog1;
		dog1.getBrain()->setIdea("que pasa soy un perro");
		std::cout << std::endl << "Idea perrete 1: " << dog1.getBrain()->getIdea(0) << std::endl;
		std::cout << "\n--------------Copia mediante constructor-------------\n" << std::endl;
		Dog dog2 = Dog(dog1);
		std::cout << std::endl << "Idea perrete 2: " << dog2.getBrain()->getIdea(0) << std::endl;
		std::cout << "\n--------------Copia mediante asignación-------------\n" << std::endl;
		Dog dog3 = dog2;
		std::cout << std::endl << "Idea perrete 3: " << dog3.getBrain()->getIdea(0) << std::endl;
		dog1.getBrain()->setIdea("jeje perrete");
		std::cout << std::endl << "idea 2 perro 1: " << dog1.getBrain()->getIdea(1) << std::endl;
		std::cout << std::endl << "idea 2 perro 2: " << dog2.getBrain()->getIdea(1) << std::endl;
		std::cout << std::endl << "idea 2 perro 3: " << dog3.getBrain()->getIdea(1) << std::endl;
	}
	atexit(&leaks);
	return (0);
}