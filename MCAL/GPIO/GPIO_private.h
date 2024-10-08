/*
  Author:      Heba Adel
  Version:     0.1
  Date:        21/8/2023
  Description: GPIO driver private file
*/

#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H

/* Equation to calculate address of a given port index */
#define ADDRESS_PORTN(port) (0x40004000 + ((port % 4) << 12) + (port / 4) * (2 << 16))

#define SYSCTL_RCGCGPIO_R       (*((volatile unsigned long *)0x400FE608))
#define SYSCTL_PRGPIO_R         (*((volatile unsigned long *)0x400FEA08))

#endif /* GPIO_DRIVER_PRIVATE_H */
