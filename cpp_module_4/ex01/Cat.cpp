/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:19:17 by smarty            #+#    #+#             */
/*   Updated: 2024/04/16 20:35:21 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat default constructor called" << std::endl;
    this->brain = new Brain();
}
Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;

}
Cat::Cat(Cat &src): Animal("Cat")
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->brain = new Brain();
}
Cat &Cat::operator=(Cat &src)
{
    std::cout << "Cat affectation operator called" << std::endl;
    return src;
}