#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

void	leaks(void)
{
	system("leaks -q AAnimal");
}

int	main(void)
{

	//AAnimal animal; // error can't construct abstract class object
	
	/*
	int		len = 4;
	std::cout << "\nCrear array de animales\n" << std::endl;
	AAnimal	*objs[len];

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
	atexit(&leaks);*/
	return (0);
}