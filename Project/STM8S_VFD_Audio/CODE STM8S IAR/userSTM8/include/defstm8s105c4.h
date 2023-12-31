/*-------------------------------------------------------------------------
 *      STM8 definitions of SFR registers
 *
 *      Used with STM8 IAR C/C++ Compiler and Assembler.
 *
 *      Copyright 2010 IAR Systems AB.
 *
 *      $Revision$
 *-----------------------------------------------------------------------*/

#ifndef __IOSTM8S105C4_H__
#define __IOSTM8S105C4_H__

#if (((__TID__ >> 8) & 0x7F) != 0x38)     /* 0x38 = 56 dec */
#error This file should only be compiled by STM8 IAR compiler and assembler
#endif

/*-------------------------------------------------------------------------
 *      I/O register macros
 *-----------------------------------------------------------------------*/

#include "io_macros.h"


#ifdef __IAR_SYSTEMS_ICC__
#pragma system_include
#pragma language=save
#pragma language=extended
#endif

/*-------------------------------------------------------------------------
 *      Port A register definitions
 *-----------------------------------------------------------------------*/
/* Port A data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PA_ODR;
#endif
__IO_REG8_BIT(PA_ODR,      0x5000, __READ_WRITE, __BITS_PA_ODR);

/* Port A input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PA_IDR;
#endif
__IO_REG8_BIT(PA_IDR,      0x5001, __READ, __BITS_PA_IDR);

/* Port A data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PA_DDR;
#endif
__IO_REG8_BIT(PA_DDR,      0x5002, __READ_WRITE, __BITS_PA_DDR);

/* Port A control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PA_CR1;
#endif
__IO_REG8_BIT(PA_CR1,      0x5003, __READ_WRITE, __BITS_PA_CR1);

/* Port A control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PA_CR2;
#endif
__IO_REG8_BIT(PA_CR2,      0x5004, __READ_WRITE, __BITS_PA_CR2);


/*-------------------------------------------------------------------------
 *      Port A bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PA_ODR_ODR0              PA_ODR_bit.ODR0
#define PA_ODR_ODR1              PA_ODR_bit.ODR1
#define PA_ODR_ODR2              PA_ODR_bit.ODR2
#define PA_ODR_ODR3              PA_ODR_bit.ODR3
#define PA_ODR_ODR4              PA_ODR_bit.ODR4
#define PA_ODR_ODR5              PA_ODR_bit.ODR5
#define PA_ODR_ODR6              PA_ODR_bit.ODR6
#define PA_ODR_ODR7              PA_ODR_bit.ODR7

#define PA_IDR_IDR0              PA_IDR_bit.IDR0
#define PA_IDR_IDR1              PA_IDR_bit.IDR1
#define PA_IDR_IDR2              PA_IDR_bit.IDR2
#define PA_IDR_IDR3              PA_IDR_bit.IDR3
#define PA_IDR_IDR4              PA_IDR_bit.IDR4
#define PA_IDR_IDR5              PA_IDR_bit.IDR5
#define PA_IDR_IDR6              PA_IDR_bit.IDR6
#define PA_IDR_IDR7              PA_IDR_bit.IDR7

#define PA_DDR_DDR0              PA_DDR_bit.DDR0
#define PA_DDR_DDR1              PA_DDR_bit.DDR1
#define PA_DDR_DDR2              PA_DDR_bit.DDR2
#define PA_DDR_DDR3              PA_DDR_bit.DDR3
#define PA_DDR_DDR4              PA_DDR_bit.DDR4
#define PA_DDR_DDR5              PA_DDR_bit.DDR5
#define PA_DDR_DDR6              PA_DDR_bit.DDR6
#define PA_DDR_DDR7              PA_DDR_bit.DDR7

#define PA_CR1_C10               PA_CR1_bit.C10
#define PA_CR1_C11               PA_CR1_bit.C11
#define PA_CR1_C12               PA_CR1_bit.C12
#define PA_CR1_C13               PA_CR1_bit.C13
#define PA_CR1_C14               PA_CR1_bit.C14
#define PA_CR1_C15               PA_CR1_bit.C15
#define PA_CR1_C16               PA_CR1_bit.C16
#define PA_CR1_C17               PA_CR1_bit.C17

#define PA_CR2_C20               PA_CR2_bit.C20
#define PA_CR2_C21               PA_CR2_bit.C21
#define PA_CR2_C22               PA_CR2_bit.C22
#define PA_CR2_C23               PA_CR2_bit.C23
#define PA_CR2_C24               PA_CR2_bit.C24
#define PA_CR2_C25               PA_CR2_bit.C25
#define PA_CR2_C26               PA_CR2_bit.C26
#define PA_CR2_C27               PA_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port A bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PA_ODR_ODR0         0x01
#define MASK_PA_ODR_ODR1         0x02
#define MASK_PA_ODR_ODR2         0x04
#define MASK_PA_ODR_ODR3         0x08
#define MASK_PA_ODR_ODR4         0x10
#define MASK_PA_ODR_ODR5         0x20
#define MASK_PA_ODR_ODR6         0x40
#define MASK_PA_ODR_ODR7         0x80

#define MASK_PA_IDR_IDR0         0x01
#define MASK_PA_IDR_IDR1         0x02
#define MASK_PA_IDR_IDR2         0x04
#define MASK_PA_IDR_IDR3         0x08
#define MASK_PA_IDR_IDR4         0x10
#define MASK_PA_IDR_IDR5         0x20
#define MASK_PA_IDR_IDR6         0x40
#define MASK_PA_IDR_IDR7         0x80

#define MASK_PA_DDR_DDR0         0x01
#define MASK_PA_DDR_DDR1         0x02
#define MASK_PA_DDR_DDR2         0x04
#define MASK_PA_DDR_DDR3         0x08
#define MASK_PA_DDR_DDR4         0x10
#define MASK_PA_DDR_DDR5         0x20
#define MASK_PA_DDR_DDR6         0x40
#define MASK_PA_DDR_DDR7         0x80

#define MASK_PA_CR1_C10          0x01
#define MASK_PA_CR1_C11          0x02
#define MASK_PA_CR1_C12          0x04
#define MASK_PA_CR1_C13          0x08
#define MASK_PA_CR1_C14          0x10
#define MASK_PA_CR1_C15          0x20
#define MASK_PA_CR1_C16          0x40
#define MASK_PA_CR1_C17          0x80

#define MASK_PA_CR2_C20          0x01
#define MASK_PA_CR2_C21          0x02
#define MASK_PA_CR2_C22          0x04
#define MASK_PA_CR2_C23          0x08
#define MASK_PA_CR2_C24          0x10
#define MASK_PA_CR2_C25          0x20
#define MASK_PA_CR2_C26          0x40
#define MASK_PA_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Port B register definitions
 *-----------------------------------------------------------------------*/
/* Port B data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PB_ODR;
#endif
__IO_REG8_BIT(PB_ODR,      0x5005, __READ_WRITE, __BITS_PB_ODR);

/* Port B input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PB_IDR;
#endif
__IO_REG8_BIT(PB_IDR,      0x5006, __READ, __BITS_PB_IDR);

/* Port B data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PB_DDR;
#endif
__IO_REG8_BIT(PB_DDR,      0x5007, __READ_WRITE, __BITS_PB_DDR);

/* Port B control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PB_CR1;
#endif
__IO_REG8_BIT(PB_CR1,      0x5008, __READ_WRITE, __BITS_PB_CR1);

/* Port B control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PB_CR2;
#endif
__IO_REG8_BIT(PB_CR2,      0x5009, __READ_WRITE, __BITS_PB_CR2);


/*-------------------------------------------------------------------------
 *      Port B bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PB_ODR_ODR0              PB_ODR_bit.ODR0
#define PB_ODR_ODR1              PB_ODR_bit.ODR1
#define PB_ODR_ODR2              PB_ODR_bit.ODR2
#define PB_ODR_ODR3              PB_ODR_bit.ODR3
#define PB_ODR_ODR4              PB_ODR_bit.ODR4
#define PB_ODR_ODR5              PB_ODR_bit.ODR5
#define PB_ODR_ODR6              PB_ODR_bit.ODR6
#define PB_ODR_ODR7              PB_ODR_bit.ODR7

#define PB_IDR_IDR0              PB_IDR_bit.IDR0
#define PB_IDR_IDR1              PB_IDR_bit.IDR1
#define PB_IDR_IDR2              PB_IDR_bit.IDR2
#define PB_IDR_IDR3              PB_IDR_bit.IDR3
#define PB_IDR_IDR4              PB_IDR_bit.IDR4
#define PB_IDR_IDR5              PB_IDR_bit.IDR5
#define PB_IDR_IDR6              PB_IDR_bit.IDR6
#define PB_IDR_IDR7              PB_IDR_bit.IDR7

#define PB_DDR_DDR0              PB_DDR_bit.DDR0
#define PB_DDR_DDR1              PB_DDR_bit.DDR1
#define PB_DDR_DDR2              PB_DDR_bit.DDR2
#define PB_DDR_DDR3              PB_DDR_bit.DDR3
#define PB_DDR_DDR4              PB_DDR_bit.DDR4
#define PB_DDR_DDR5              PB_DDR_bit.DDR5
#define PB_DDR_DDR6              PB_DDR_bit.DDR6
#define PB_DDR_DDR7              PB_DDR_bit.DDR7

#define PB_CR1_C10               PB_CR1_bit.C10
#define PB_CR1_C11               PB_CR1_bit.C11
#define PB_CR1_C12               PB_CR1_bit.C12
#define PB_CR1_C13               PB_CR1_bit.C13
#define PB_CR1_C14               PB_CR1_bit.C14
#define PB_CR1_C15               PB_CR1_bit.C15
#define PB_CR1_C16               PB_CR1_bit.C16
#define PB_CR1_C17               PB_CR1_bit.C17

#define PB_CR2_C20               PB_CR2_bit.C20
#define PB_CR2_C21               PB_CR2_bit.C21
#define PB_CR2_C22               PB_CR2_bit.C22
#define PB_CR2_C23               PB_CR2_bit.C23
#define PB_CR2_C24               PB_CR2_bit.C24
#define PB_CR2_C25               PB_CR2_bit.C25
#define PB_CR2_C26               PB_CR2_bit.C26
#define PB_CR2_C27               PB_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port B bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PB_ODR_ODR0         0x01
#define MASK_PB_ODR_ODR1         0x02
#define MASK_PB_ODR_ODR2         0x04
#define MASK_PB_ODR_ODR3         0x08
#define MASK_PB_ODR_ODR4         0x10
#define MASK_PB_ODR_ODR5         0x20
#define MASK_PB_ODR_ODR6         0x40
#define MASK_PB_ODR_ODR7         0x80

#define MASK_PB_IDR_IDR0         0x01
#define MASK_PB_IDR_IDR1         0x02
#define MASK_PB_IDR_IDR2         0x04
#define MASK_PB_IDR_IDR3         0x08
#define MASK_PB_IDR_IDR4         0x10
#define MASK_PB_IDR_IDR5         0x20
#define MASK_PB_IDR_IDR6         0x40
#define MASK_PB_IDR_IDR7         0x80

#define MASK_PB_DDR_DDR0         0x01
#define MASK_PB_DDR_DDR1         0x02
#define MASK_PB_DDR_DDR2         0x04
#define MASK_PB_DDR_DDR3         0x08
#define MASK_PB_DDR_DDR4         0x10
#define MASK_PB_DDR_DDR5         0x20
#define MASK_PB_DDR_DDR6         0x40
#define MASK_PB_DDR_DDR7         0x80

#define MASK_PB_CR1_C10          0x01
#define MASK_PB_CR1_C11          0x02
#define MASK_PB_CR1_C12          0x04
#define MASK_PB_CR1_C13          0x08
#define MASK_PB_CR1_C14          0x10
#define MASK_PB_CR1_C15          0x20
#define MASK_PB_CR1_C16          0x40
#define MASK_PB_CR1_C17          0x80

#define MASK_PB_CR2_C20          0x01
#define MASK_PB_CR2_C21          0x02
#define MASK_PB_CR2_C22          0x04
#define MASK_PB_CR2_C23          0x08
#define MASK_PB_CR2_C24          0x10
#define MASK_PB_CR2_C25          0x20
#define MASK_PB_CR2_C26          0x40
#define MASK_PB_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Port C register definitions
 *-----------------------------------------------------------------------*/
/* Port C data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PC_ODR;
#endif
__IO_REG8_BIT(PC_ODR,      0x500A, __READ_WRITE, __BITS_PC_ODR);

/* Port C input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PC_IDR;
#endif
__IO_REG8_BIT(PC_IDR,      0x500B, __READ, __BITS_PC_IDR);

/* Port C data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PC_DDR;
#endif
__IO_REG8_BIT(PC_DDR,      0x500C, __READ_WRITE, __BITS_PC_DDR);

/* Port C control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PC_CR1;
#endif
__IO_REG8_BIT(PC_CR1,      0x500D, __READ_WRITE, __BITS_PC_CR1);

/* Port C control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PC_CR2;
#endif
__IO_REG8_BIT(PC_CR2,      0x500E, __READ_WRITE, __BITS_PC_CR2);


/*-------------------------------------------------------------------------
 *      Port C bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PC_ODR_ODR0              PC_ODR_bit.ODR0
#define PC_ODR_ODR1              PC_ODR_bit.ODR1
#define PC_ODR_ODR2              PC_ODR_bit.ODR2
#define PC_ODR_ODR3              PC_ODR_bit.ODR3
#define PC_ODR_ODR4              PC_ODR_bit.ODR4
#define PC_ODR_ODR5              PC_ODR_bit.ODR5
#define PC_ODR_ODR6              PC_ODR_bit.ODR6
#define PC_ODR_ODR7              PC_ODR_bit.ODR7

#define PC_IDR_IDR0              PC_IDR_bit.IDR0
#define PC_IDR_IDR1              PC_IDR_bit.IDR1
#define PC_IDR_IDR2              PC_IDR_bit.IDR2
#define PC_IDR_IDR3              PC_IDR_bit.IDR3
#define PC_IDR_IDR4              PC_IDR_bit.IDR4
#define PC_IDR_IDR5              PC_IDR_bit.IDR5
#define PC_IDR_IDR6              PC_IDR_bit.IDR6
#define PC_IDR_IDR7              PC_IDR_bit.IDR7

#define PC_DDR_DDR0              PC_DDR_bit.DDR0
#define PC_DDR_DDR1              PC_DDR_bit.DDR1
#define PC_DDR_DDR2              PC_DDR_bit.DDR2
#define PC_DDR_DDR3              PC_DDR_bit.DDR3
#define PC_DDR_DDR4              PC_DDR_bit.DDR4
#define PC_DDR_DDR5              PC_DDR_bit.DDR5
#define PC_DDR_DDR6              PC_DDR_bit.DDR6
#define PC_DDR_DDR7              PC_DDR_bit.DDR7

#define PC_CR1_C10               PC_CR1_bit.C10
#define PC_CR1_C11               PC_CR1_bit.C11
#define PC_CR1_C12               PC_CR1_bit.C12
#define PC_CR1_C13               PC_CR1_bit.C13
#define PC_CR1_C14               PC_CR1_bit.C14
#define PC_CR1_C15               PC_CR1_bit.C15
#define PC_CR1_C16               PC_CR1_bit.C16
#define PC_CR1_C17               PC_CR1_bit.C17

#define PC_CR2_C20               PC_CR2_bit.C20
#define PC_CR2_C21               PC_CR2_bit.C21
#define PC_CR2_C22               PC_CR2_bit.C22
#define PC_CR2_C23               PC_CR2_bit.C23
#define PC_CR2_C24               PC_CR2_bit.C24
#define PC_CR2_C25               PC_CR2_bit.C25
#define PC_CR2_C26               PC_CR2_bit.C26
#define PC_CR2_C27               PC_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port C bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PC_ODR_ODR0         0x01
#define MASK_PC_ODR_ODR1         0x02
#define MASK_PC_ODR_ODR2         0x04
#define MASK_PC_ODR_ODR3         0x08
#define MASK_PC_ODR_ODR4         0x10
#define MASK_PC_ODR_ODR5         0x20
#define MASK_PC_ODR_ODR6         0x40
#define MASK_PC_ODR_ODR7         0x80

#define MASK_PC_IDR_IDR0         0x01
#define MASK_PC_IDR_IDR1         0x02
#define MASK_PC_IDR_IDR2         0x04
#define MASK_PC_IDR_IDR3         0x08
#define MASK_PC_IDR_IDR4         0x10
#define MASK_PC_IDR_IDR5         0x20
#define MASK_PC_IDR_IDR6         0x40
#define MASK_PC_IDR_IDR7         0x80

#define MASK_PC_DDR_DDR0         0x01
#define MASK_PC_DDR_DDR1         0x02
#define MASK_PC_DDR_DDR2         0x04
#define MASK_PC_DDR_DDR3         0x08
#define MASK_PC_DDR_DDR4         0x10
#define MASK_PC_DDR_DDR5         0x20
#define MASK_PC_DDR_DDR6         0x40
#define MASK_PC_DDR_DDR7         0x80

#define MASK_PC_CR1_C10          0x01
#define MASK_PC_CR1_C11          0x02
#define MASK_PC_CR1_C12          0x04
#define MASK_PC_CR1_C13          0x08
#define MASK_PC_CR1_C14          0x10
#define MASK_PC_CR1_C15          0x20
#define MASK_PC_CR1_C16          0x40
#define MASK_PC_CR1_C17          0x80

#define MASK_PC_CR2_C20          0x01
#define MASK_PC_CR2_C21          0x02
#define MASK_PC_CR2_C22          0x04
#define MASK_PC_CR2_C23          0x08
#define MASK_PC_CR2_C24          0x10
#define MASK_PC_CR2_C25          0x20
#define MASK_PC_CR2_C26          0x40
#define MASK_PC_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Port D register definitions
 *-----------------------------------------------------------------------*/
/* Port D data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PD_ODR;
#endif
__IO_REG8_BIT(PD_ODR,      0x500F, __READ_WRITE, __BITS_PD_ODR);

/* Port D input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PD_IDR;
#endif
__IO_REG8_BIT(PD_IDR,      0x5010, __READ, __BITS_PD_IDR);

/* Port D data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PD_DDR;
#endif
__IO_REG8_BIT(PD_DDR,      0x5011, __READ_WRITE, __BITS_PD_DDR);

/* Port D control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PD_CR1;
#endif
__IO_REG8_BIT(PD_CR1,      0x5012, __READ_WRITE, __BITS_PD_CR1);

/* Port D control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PD_CR2;
#endif
__IO_REG8_BIT(PD_CR2,      0x5013, __READ_WRITE, __BITS_PD_CR2);


/*-------------------------------------------------------------------------
 *      Port D bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PD_ODR_ODR0              PD_ODR_bit.ODR0
#define PD_ODR_ODR1              PD_ODR_bit.ODR1
#define PD_ODR_ODR2              PD_ODR_bit.ODR2
#define PD_ODR_ODR3              PD_ODR_bit.ODR3
#define PD_ODR_ODR4              PD_ODR_bit.ODR4
#define PD_ODR_ODR5              PD_ODR_bit.ODR5
#define PD_ODR_ODR6              PD_ODR_bit.ODR6
#define PD_ODR_ODR7              PD_ODR_bit.ODR7

#define PD_IDR_IDR0              PD_IDR_bit.IDR0
#define PD_IDR_IDR1              PD_IDR_bit.IDR1
#define PD_IDR_IDR2              PD_IDR_bit.IDR2
#define PD_IDR_IDR3              PD_IDR_bit.IDR3
#define PD_IDR_IDR4              PD_IDR_bit.IDR4
#define PD_IDR_IDR5              PD_IDR_bit.IDR5
#define PD_IDR_IDR6              PD_IDR_bit.IDR6
#define PD_IDR_IDR7              PD_IDR_bit.IDR7

#define PD_DDR_DDR0              PD_DDR_bit.DDR0
#define PD_DDR_DDR1              PD_DDR_bit.DDR1
#define PD_DDR_DDR2              PD_DDR_bit.DDR2
#define PD_DDR_DDR3              PD_DDR_bit.DDR3
#define PD_DDR_DDR4              PD_DDR_bit.DDR4
#define PD_DDR_DDR5              PD_DDR_bit.DDR5
#define PD_DDR_DDR6              PD_DDR_bit.DDR6
#define PD_DDR_DDR7              PD_DDR_bit.DDR7

#define PD_CR1_C10               PD_CR1_bit.C10
#define PD_CR1_C11               PD_CR1_bit.C11
#define PD_CR1_C12               PD_CR1_bit.C12
#define PD_CR1_C13               PD_CR1_bit.C13
#define PD_CR1_C14               PD_CR1_bit.C14
#define PD_CR1_C15               PD_CR1_bit.C15
#define PD_CR1_C16               PD_CR1_bit.C16
#define PD_CR1_C17               PD_CR1_bit.C17

#define PD_CR2_C20               PD_CR2_bit.C20
#define PD_CR2_C21               PD_CR2_bit.C21
#define PD_CR2_C22               PD_CR2_bit.C22
#define PD_CR2_C23               PD_CR2_bit.C23
#define PD_CR2_C24               PD_CR2_bit.C24
#define PD_CR2_C25               PD_CR2_bit.C25
#define PD_CR2_C26               PD_CR2_bit.C26
#define PD_CR2_C27               PD_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port D bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PD_ODR_ODR0         0x01
#define MASK_PD_ODR_ODR1         0x02
#define MASK_PD_ODR_ODR2         0x04
#define MASK_PD_ODR_ODR3         0x08
#define MASK_PD_ODR_ODR4         0x10
#define MASK_PD_ODR_ODR5         0x20
#define MASK_PD_ODR_ODR6         0x40
#define MASK_PD_ODR_ODR7         0x80

#define MASK_PD_IDR_IDR0         0x01
#define MASK_PD_IDR_IDR1         0x02
#define MASK_PD_IDR_IDR2         0x04
#define MASK_PD_IDR_IDR3         0x08
#define MASK_PD_IDR_IDR4         0x10
#define MASK_PD_IDR_IDR5         0x20
#define MASK_PD_IDR_IDR6         0x40
#define MASK_PD_IDR_IDR7         0x80

#define MASK_PD_DDR_DDR0         0x01
#define MASK_PD_DDR_DDR1         0x02
#define MASK_PD_DDR_DDR2         0x04
#define MASK_PD_DDR_DDR3         0x08
#define MASK_PD_DDR_DDR4         0x10
#define MASK_PD_DDR_DDR5         0x20
#define MASK_PD_DDR_DDR6         0x40
#define MASK_PD_DDR_DDR7         0x80

#define MASK_PD_CR1_C10          0x01
#define MASK_PD_CR1_C11          0x02
#define MASK_PD_CR1_C12          0x04
#define MASK_PD_CR1_C13          0x08
#define MASK_PD_CR1_C14          0x10
#define MASK_PD_CR1_C15          0x20
#define MASK_PD_CR1_C16          0x40
#define MASK_PD_CR1_C17          0x80

#define MASK_PD_CR2_C20          0x01
#define MASK_PD_CR2_C21          0x02
#define MASK_PD_CR2_C22          0x04
#define MASK_PD_CR2_C23          0x08
#define MASK_PD_CR2_C24          0x10
#define MASK_PD_CR2_C25          0x20
#define MASK_PD_CR2_C26          0x40
#define MASK_PD_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Port E register definitions
 *-----------------------------------------------------------------------*/
/* Port E data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PE_ODR;
#endif
__IO_REG8_BIT(PE_ODR,      0x5014, __READ_WRITE, __BITS_PE_ODR);

/* Port E input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PE_IDR;
#endif
__IO_REG8_BIT(PE_IDR,      0x5015, __READ, __BITS_PE_IDR);

/* Port E data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PE_DDR;
#endif
__IO_REG8_BIT(PE_DDR,      0x5016, __READ_WRITE, __BITS_PE_DDR);

/* Port E control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PE_CR1;
#endif
__IO_REG8_BIT(PE_CR1,      0x5017, __READ_WRITE, __BITS_PE_CR1);

/* Port E control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PE_CR2;
#endif
__IO_REG8_BIT(PE_CR2,      0x5018, __READ_WRITE, __BITS_PE_CR2);


/*-------------------------------------------------------------------------
 *      Port E bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PE_ODR_ODR0              PE_ODR_bit.ODR0
#define PE_ODR_ODR1              PE_ODR_bit.ODR1
#define PE_ODR_ODR2              PE_ODR_bit.ODR2
#define PE_ODR_ODR3              PE_ODR_bit.ODR3
#define PE_ODR_ODR4              PE_ODR_bit.ODR4
#define PE_ODR_ODR5              PE_ODR_bit.ODR5
#define PE_ODR_ODR6              PE_ODR_bit.ODR6
#define PE_ODR_ODR7              PE_ODR_bit.ODR7

#define PE_IDR_IDR0              PE_IDR_bit.IDR0
#define PE_IDR_IDR1              PE_IDR_bit.IDR1
#define PE_IDR_IDR2              PE_IDR_bit.IDR2
#define PE_IDR_IDR3              PE_IDR_bit.IDR3
#define PE_IDR_IDR4              PE_IDR_bit.IDR4
#define PE_IDR_IDR5              PE_IDR_bit.IDR5
#define PE_IDR_IDR6              PE_IDR_bit.IDR6
#define PE_IDR_IDR7              PE_IDR_bit.IDR7

#define PE_DDR_DDR0              PE_DDR_bit.DDR0
#define PE_DDR_DDR1              PE_DDR_bit.DDR1
#define PE_DDR_DDR2              PE_DDR_bit.DDR2
#define PE_DDR_DDR3              PE_DDR_bit.DDR3
#define PE_DDR_DDR4              PE_DDR_bit.DDR4
#define PE_DDR_DDR5              PE_DDR_bit.DDR5
#define PE_DDR_DDR6              PE_DDR_bit.DDR6
#define PE_DDR_DDR7              PE_DDR_bit.DDR7

#define PE_CR1_C10               PE_CR1_bit.C10
#define PE_CR1_C11               PE_CR1_bit.C11
#define PE_CR1_C12               PE_CR1_bit.C12
#define PE_CR1_C13               PE_CR1_bit.C13
#define PE_CR1_C14               PE_CR1_bit.C14
#define PE_CR1_C15               PE_CR1_bit.C15
#define PE_CR1_C16               PE_CR1_bit.C16
#define PE_CR1_C17               PE_CR1_bit.C17

#define PE_CR2_C20               PE_CR2_bit.C20
#define PE_CR2_C21               PE_CR2_bit.C21
#define PE_CR2_C22               PE_CR2_bit.C22
#define PE_CR2_C23               PE_CR2_bit.C23
#define PE_CR2_C24               PE_CR2_bit.C24
#define PE_CR2_C25               PE_CR2_bit.C25
#define PE_CR2_C26               PE_CR2_bit.C26
#define PE_CR2_C27               PE_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port E bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PE_ODR_ODR0         0x01
#define MASK_PE_ODR_ODR1         0x02
#define MASK_PE_ODR_ODR2         0x04
#define MASK_PE_ODR_ODR3         0x08
#define MASK_PE_ODR_ODR4         0x10
#define MASK_PE_ODR_ODR5         0x20
#define MASK_PE_ODR_ODR6         0x40
#define MASK_PE_ODR_ODR7         0x80

#define MASK_PE_IDR_IDR0         0x01
#define MASK_PE_IDR_IDR1         0x02
#define MASK_PE_IDR_IDR2         0x04
#define MASK_PE_IDR_IDR3         0x08
#define MASK_PE_IDR_IDR4         0x10
#define MASK_PE_IDR_IDR5         0x20
#define MASK_PE_IDR_IDR6         0x40
#define MASK_PE_IDR_IDR7         0x80

#define MASK_PE_DDR_DDR0         0x01
#define MASK_PE_DDR_DDR1         0x02
#define MASK_PE_DDR_DDR2         0x04
#define MASK_PE_DDR_DDR3         0x08
#define MASK_PE_DDR_DDR4         0x10
#define MASK_PE_DDR_DDR5         0x20
#define MASK_PE_DDR_DDR6         0x40
#define MASK_PE_DDR_DDR7         0x80

#define MASK_PE_CR1_C10          0x01
#define MASK_PE_CR1_C11          0x02
#define MASK_PE_CR1_C12          0x04
#define MASK_PE_CR1_C13          0x08
#define MASK_PE_CR1_C14          0x10
#define MASK_PE_CR1_C15          0x20
#define MASK_PE_CR1_C16          0x40
#define MASK_PE_CR1_C17          0x80

#define MASK_PE_CR2_C20          0x01
#define MASK_PE_CR2_C21          0x02
#define MASK_PE_CR2_C22          0x04
#define MASK_PE_CR2_C23          0x08
#define MASK_PE_CR2_C24          0x10
#define MASK_PE_CR2_C25          0x20
#define MASK_PE_CR2_C26          0x40
#define MASK_PE_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Port F register definitions
 *-----------------------------------------------------------------------*/
/* Port F data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PF_ODR;
#endif
__IO_REG8_BIT(PF_ODR,      0x5019, __READ_WRITE, __BITS_PF_ODR);

/* Port F input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PF_IDR;
#endif
__IO_REG8_BIT(PF_IDR,      0x501A, __READ, __BITS_PF_IDR);

/* Port F data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PF_DDR;
#endif
__IO_REG8_BIT(PF_DDR,      0x501B, __READ_WRITE, __BITS_PF_DDR);

/* Port F control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PF_CR1;
#endif
__IO_REG8_BIT(PF_CR1,      0x501C, __READ_WRITE, __BITS_PF_CR1);

/* Port F control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PF_CR2;
#endif
__IO_REG8_BIT(PF_CR2,      0x501D, __READ_WRITE, __BITS_PF_CR2);


/*-------------------------------------------------------------------------
 *      Port F bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PF_ODR_ODR0              PF_ODR_bit.ODR0
#define PF_ODR_ODR1              PF_ODR_bit.ODR1
#define PF_ODR_ODR2              PF_ODR_bit.ODR2
#define PF_ODR_ODR3              PF_ODR_bit.ODR3
#define PF_ODR_ODR4              PF_ODR_bit.ODR4
#define PF_ODR_ODR5              PF_ODR_bit.ODR5
#define PF_ODR_ODR6              PF_ODR_bit.ODR6
#define PF_ODR_ODR7              PF_ODR_bit.ODR7

#define PF_IDR_IDR0              PF_IDR_bit.IDR0
#define PF_IDR_IDR1              PF_IDR_bit.IDR1
#define PF_IDR_IDR2              PF_IDR_bit.IDR2
#define PF_IDR_IDR3              PF_IDR_bit.IDR3
#define PF_IDR_IDR4              PF_IDR_bit.IDR4
#define PF_IDR_IDR5              PF_IDR_bit.IDR5
#define PF_IDR_IDR6              PF_IDR_bit.IDR6
#define PF_IDR_IDR7              PF_IDR_bit.IDR7

#define PF_DDR_DDR0              PF_DDR_bit.DDR0
#define PF_DDR_DDR1              PF_DDR_bit.DDR1
#define PF_DDR_DDR2              PF_DDR_bit.DDR2
#define PF_DDR_DDR3              PF_DDR_bit.DDR3
#define PF_DDR_DDR4              PF_DDR_bit.DDR4
#define PF_DDR_DDR5              PF_DDR_bit.DDR5
#define PF_DDR_DDR6              PF_DDR_bit.DDR6
#define PF_DDR_DDR7              PF_DDR_bit.DDR7

#define PF_CR1_C10               PF_CR1_bit.C10
#define PF_CR1_C11               PF_CR1_bit.C11
#define PF_CR1_C12               PF_CR1_bit.C12
#define PF_CR1_C13               PF_CR1_bit.C13
#define PF_CR1_C14               PF_CR1_bit.C14
#define PF_CR1_C15               PF_CR1_bit.C15
#define PF_CR1_C16               PF_CR1_bit.C16
#define PF_CR1_C17               PF_CR1_bit.C17

#define PF_CR2_C20               PF_CR2_bit.C20
#define PF_CR2_C21               PF_CR2_bit.C21
#define PF_CR2_C22               PF_CR2_bit.C22
#define PF_CR2_C23               PF_CR2_bit.C23
#define PF_CR2_C24               PF_CR2_bit.C24
#define PF_CR2_C25               PF_CR2_bit.C25
#define PF_CR2_C26               PF_CR2_bit.C26
#define PF_CR2_C27               PF_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port F bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PF_ODR_ODR0         0x01
#define MASK_PF_ODR_ODR1         0x02
#define MASK_PF_ODR_ODR2         0x04
#define MASK_PF_ODR_ODR3         0x08
#define MASK_PF_ODR_ODR4         0x10
#define MASK_PF_ODR_ODR5         0x20
#define MASK_PF_ODR_ODR6         0x40
#define MASK_PF_ODR_ODR7         0x80

#define MASK_PF_IDR_IDR0         0x01
#define MASK_PF_IDR_IDR1         0x02
#define MASK_PF_IDR_IDR2         0x04
#define MASK_PF_IDR_IDR3         0x08
#define MASK_PF_IDR_IDR4         0x10
#define MASK_PF_IDR_IDR5         0x20
#define MASK_PF_IDR_IDR6         0x40
#define MASK_PF_IDR_IDR7         0x80

#define MASK_PF_DDR_DDR0         0x01
#define MASK_PF_DDR_DDR1         0x02
#define MASK_PF_DDR_DDR2         0x04
#define MASK_PF_DDR_DDR3         0x08
#define MASK_PF_DDR_DDR4         0x10
#define MASK_PF_DDR_DDR5         0x20
#define MASK_PF_DDR_DDR6         0x40
#define MASK_PF_DDR_DDR7         0x80

#define MASK_PF_CR1_C10          0x01
#define MASK_PF_CR1_C11          0x02
#define MASK_PF_CR1_C12          0x04
#define MASK_PF_CR1_C13          0x08
#define MASK_PF_CR1_C14          0x10
#define MASK_PF_CR1_C15          0x20
#define MASK_PF_CR1_C16          0x40
#define MASK_PF_CR1_C17          0x80

#define MASK_PF_CR2_C20          0x01
#define MASK_PF_CR2_C21          0x02
#define MASK_PF_CR2_C22          0x04
#define MASK_PF_CR2_C23          0x08
#define MASK_PF_CR2_C24          0x10
#define MASK_PF_CR2_C25          0x20
#define MASK_PF_CR2_C26          0x40
#define MASK_PF_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Port G register definitions
 *-----------------------------------------------------------------------*/
/* Port G data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PG_ODR;
#endif
__IO_REG8_BIT(PG_ODR,      0x501E, __READ_WRITE, __BITS_PG_ODR);

/* Port G input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PG_IDR;
#endif
__IO_REG8_BIT(PG_IDR,      0x501F, __READ, __BITS_PG_IDR);

/* Port G data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PG_DDR;
#endif
__IO_REG8_BIT(PG_DDR,      0x5020, __READ_WRITE, __BITS_PG_DDR);

/* Port G control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PG_CR1;
#endif
__IO_REG8_BIT(PG_CR1,      0x5021, __READ_WRITE, __BITS_PG_CR1);

/* Port G control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PG_CR2;
#endif
__IO_REG8_BIT(PG_CR2,      0x5022, __READ_WRITE, __BITS_PG_CR2);


/*-------------------------------------------------------------------------
 *      Port G bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PG_ODR_ODR0              PG_ODR_bit.ODR0
#define PG_ODR_ODR1              PG_ODR_bit.ODR1
#define PG_ODR_ODR2              PG_ODR_bit.ODR2
#define PG_ODR_ODR3              PG_ODR_bit.ODR3
#define PG_ODR_ODR4              PG_ODR_bit.ODR4
#define PG_ODR_ODR5              PG_ODR_bit.ODR5
#define PG_ODR_ODR6              PG_ODR_bit.ODR6
#define PG_ODR_ODR7              PG_ODR_bit.ODR7

#define PG_IDR_IDR0              PG_IDR_bit.IDR0
#define PG_IDR_IDR1              PG_IDR_bit.IDR1
#define PG_IDR_IDR2              PG_IDR_bit.IDR2
#define PG_IDR_IDR3              PG_IDR_bit.IDR3
#define PG_IDR_IDR4              PG_IDR_bit.IDR4
#define PG_IDR_IDR5              PG_IDR_bit.IDR5
#define PG_IDR_IDR6              PG_IDR_bit.IDR6
#define PG_IDR_IDR7              PG_IDR_bit.IDR7

#define PG_DDR_DDR0              PG_DDR_bit.DDR0
#define PG_DDR_DDR1              PG_DDR_bit.DDR1
#define PG_DDR_DDR2              PG_DDR_bit.DDR2
#define PG_DDR_DDR3              PG_DDR_bit.DDR3
#define PG_DDR_DDR4              PG_DDR_bit.DDR4
#define PG_DDR_DDR5              PG_DDR_bit.DDR5
#define PG_DDR_DDR6              PG_DDR_bit.DDR6
#define PG_DDR_DDR7              PG_DDR_bit.DDR7

#define PG_CR1_C10               PG_CR1_bit.C10
#define PG_CR1_C11               PG_CR1_bit.C11
#define PG_CR1_C12               PG_CR1_bit.C12
#define PG_CR1_C13               PG_CR1_bit.C13
#define PG_CR1_C14               PG_CR1_bit.C14
#define PG_CR1_C15               PG_CR1_bit.C15
#define PG_CR1_C16               PG_CR1_bit.C16
#define PG_CR1_C17               PG_CR1_bit.C17

#define PG_CR2_C20               PG_CR2_bit.C20
#define PG_CR2_C21               PG_CR2_bit.C21
#define PG_CR2_C22               PG_CR2_bit.C22
#define PG_CR2_C23               PG_CR2_bit.C23
#define PG_CR2_C24               PG_CR2_bit.C24
#define PG_CR2_C25               PG_CR2_bit.C25
#define PG_CR2_C26               PG_CR2_bit.C26
#define PG_CR2_C27               PG_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port G bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PG_ODR_ODR0         0x01
#define MASK_PG_ODR_ODR1         0x02
#define MASK_PG_ODR_ODR2         0x04
#define MASK_PG_ODR_ODR3         0x08
#define MASK_PG_ODR_ODR4         0x10
#define MASK_PG_ODR_ODR5         0x20
#define MASK_PG_ODR_ODR6         0x40
#define MASK_PG_ODR_ODR7         0x80

#define MASK_PG_IDR_IDR0         0x01
#define MASK_PG_IDR_IDR1         0x02
#define MASK_PG_IDR_IDR2         0x04
#define MASK_PG_IDR_IDR3         0x08
#define MASK_PG_IDR_IDR4         0x10
#define MASK_PG_IDR_IDR5         0x20
#define MASK_PG_IDR_IDR6         0x40
#define MASK_PG_IDR_IDR7         0x80

#define MASK_PG_DDR_DDR0         0x01
#define MASK_PG_DDR_DDR1         0x02
#define MASK_PG_DDR_DDR2         0x04
#define MASK_PG_DDR_DDR3         0x08
#define MASK_PG_DDR_DDR4         0x10
#define MASK_PG_DDR_DDR5         0x20
#define MASK_PG_DDR_DDR6         0x40
#define MASK_PG_DDR_DDR7         0x80

#define MASK_PG_CR1_C10          0x01
#define MASK_PG_CR1_C11          0x02
#define MASK_PG_CR1_C12          0x04
#define MASK_PG_CR1_C13          0x08
#define MASK_PG_CR1_C14          0x10
#define MASK_PG_CR1_C15          0x20
#define MASK_PG_CR1_C16          0x40
#define MASK_PG_CR1_C17          0x80

#define MASK_PG_CR2_C20          0x01
#define MASK_PG_CR2_C21          0x02
#define MASK_PG_CR2_C22          0x04
#define MASK_PG_CR2_C23          0x08
#define MASK_PG_CR2_C24          0x10
#define MASK_PG_CR2_C25          0x20
#define MASK_PG_CR2_C26          0x40
#define MASK_PG_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Port H register definitions
 *-----------------------------------------------------------------------*/
/* Port H data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PH_ODR;
#endif
__IO_REG8_BIT(PH_ODR,      0x5023, __READ_WRITE, __BITS_PH_ODR);

/* Port H input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PH_IDR;
#endif
__IO_REG8_BIT(PH_IDR,      0x5024, __READ, __BITS_PH_IDR);

/* Port H data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PH_DDR;
#endif
__IO_REG8_BIT(PH_DDR,      0x5025, __READ_WRITE, __BITS_PH_DDR);

/* Port H control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PH_CR1;
#endif
__IO_REG8_BIT(PH_CR1,      0x5026, __READ_WRITE, __BITS_PH_CR1);

/* Port H control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PH_CR2;
#endif
__IO_REG8_BIT(PH_CR2,      0x5027, __READ_WRITE, __BITS_PH_CR2);


/*-------------------------------------------------------------------------
 *      Port H bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PH_ODR_ODR0              PH_ODR_bit.ODR0
#define PH_ODR_ODR1              PH_ODR_bit.ODR1
#define PH_ODR_ODR2              PH_ODR_bit.ODR2
#define PH_ODR_ODR3              PH_ODR_bit.ODR3
#define PH_ODR_ODR4              PH_ODR_bit.ODR4
#define PH_ODR_ODR5              PH_ODR_bit.ODR5
#define PH_ODR_ODR6              PH_ODR_bit.ODR6
#define PH_ODR_ODR7              PH_ODR_bit.ODR7

#define PH_IDR_IDR0              PH_IDR_bit.IDR0
#define PH_IDR_IDR1              PH_IDR_bit.IDR1
#define PH_IDR_IDR2              PH_IDR_bit.IDR2
#define PH_IDR_IDR3              PH_IDR_bit.IDR3
#define PH_IDR_IDR4              PH_IDR_bit.IDR4
#define PH_IDR_IDR5              PH_IDR_bit.IDR5
#define PH_IDR_IDR6              PH_IDR_bit.IDR6
#define PH_IDR_IDR7              PH_IDR_bit.IDR7

#define PH_DDR_DDR0              PH_DDR_bit.DDR0
#define PH_DDR_DDR1              PH_DDR_bit.DDR1
#define PH_DDR_DDR2              PH_DDR_bit.DDR2
#define PH_DDR_DDR3              PH_DDR_bit.DDR3
#define PH_DDR_DDR4              PH_DDR_bit.DDR4
#define PH_DDR_DDR5              PH_DDR_bit.DDR5
#define PH_DDR_DDR6              PH_DDR_bit.DDR6
#define PH_DDR_DDR7              PH_DDR_bit.DDR7

#define PH_CR1_C10               PH_CR1_bit.C10
#define PH_CR1_C11               PH_CR1_bit.C11
#define PH_CR1_C12               PH_CR1_bit.C12
#define PH_CR1_C13               PH_CR1_bit.C13
#define PH_CR1_C14               PH_CR1_bit.C14
#define PH_CR1_C15               PH_CR1_bit.C15
#define PH_CR1_C16               PH_CR1_bit.C16
#define PH_CR1_C17               PH_CR1_bit.C17

#define PH_CR2_C20               PH_CR2_bit.C20
#define PH_CR2_C21               PH_CR2_bit.C21
#define PH_CR2_C22               PH_CR2_bit.C22
#define PH_CR2_C23               PH_CR2_bit.C23
#define PH_CR2_C24               PH_CR2_bit.C24
#define PH_CR2_C25               PH_CR2_bit.C25
#define PH_CR2_C26               PH_CR2_bit.C26
#define PH_CR2_C27               PH_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port H bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PH_ODR_ODR0         0x01
#define MASK_PH_ODR_ODR1         0x02
#define MASK_PH_ODR_ODR2         0x04
#define MASK_PH_ODR_ODR3         0x08
#define MASK_PH_ODR_ODR4         0x10
#define MASK_PH_ODR_ODR5         0x20
#define MASK_PH_ODR_ODR6         0x40
#define MASK_PH_ODR_ODR7         0x80

#define MASK_PH_IDR_IDR0         0x01
#define MASK_PH_IDR_IDR1         0x02
#define MASK_PH_IDR_IDR2         0x04
#define MASK_PH_IDR_IDR3         0x08
#define MASK_PH_IDR_IDR4         0x10
#define MASK_PH_IDR_IDR5         0x20
#define MASK_PH_IDR_IDR6         0x40
#define MASK_PH_IDR_IDR7         0x80

#define MASK_PH_DDR_DDR0         0x01
#define MASK_PH_DDR_DDR1         0x02
#define MASK_PH_DDR_DDR2         0x04
#define MASK_PH_DDR_DDR3         0x08
#define MASK_PH_DDR_DDR4         0x10
#define MASK_PH_DDR_DDR5         0x20
#define MASK_PH_DDR_DDR6         0x40
#define MASK_PH_DDR_DDR7         0x80

#define MASK_PH_CR1_C10          0x01
#define MASK_PH_CR1_C11          0x02
#define MASK_PH_CR1_C12          0x04
#define MASK_PH_CR1_C13          0x08
#define MASK_PH_CR1_C14          0x10
#define MASK_PH_CR1_C15          0x20
#define MASK_PH_CR1_C16          0x40
#define MASK_PH_CR1_C17          0x80

#define MASK_PH_CR2_C20          0x01
#define MASK_PH_CR2_C21          0x02
#define MASK_PH_CR2_C22          0x04
#define MASK_PH_CR2_C23          0x08
#define MASK_PH_CR2_C24          0x10
#define MASK_PH_CR2_C25          0x20
#define MASK_PH_CR2_C26          0x40
#define MASK_PH_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Port I register definitions
 *-----------------------------------------------------------------------*/
/* Port I data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PI_ODR;
#endif
__IO_REG8_BIT(PI_ODR,      0x5028, __READ_WRITE, __BITS_PI_ODR);

/* Port I input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PI_IDR;
#endif
__IO_REG8_BIT(PI_IDR,      0x5029, __READ, __BITS_PI_IDR);

/* Port I data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PI_DDR;
#endif
__IO_REG8_BIT(PI_DDR,      0x502A, __READ_WRITE, __BITS_PI_DDR);

/* Port I control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PI_CR1;
#endif
__IO_REG8_BIT(PI_CR1,      0x502B, __READ_WRITE, __BITS_PI_CR1);

/* Port I control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PI_CR2;
#endif
__IO_REG8_BIT(PI_CR2,      0x502C, __READ_WRITE, __BITS_PI_CR2);


/*-------------------------------------------------------------------------
 *      Port I bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PI_ODR_ODR0              PI_ODR_bit.ODR0
#define PI_ODR_ODR1              PI_ODR_bit.ODR1
#define PI_ODR_ODR2              PI_ODR_bit.ODR2
#define PI_ODR_ODR3              PI_ODR_bit.ODR3
#define PI_ODR_ODR4              PI_ODR_bit.ODR4
#define PI_ODR_ODR5              PI_ODR_bit.ODR5
#define PI_ODR_ODR6              PI_ODR_bit.ODR6
#define PI_ODR_ODR7              PI_ODR_bit.ODR7

#define PI_IDR_IDR0              PI_IDR_bit.IDR0
#define PI_IDR_IDR1              PI_IDR_bit.IDR1
#define PI_IDR_IDR2              PI_IDR_bit.IDR2
#define PI_IDR_IDR3              PI_IDR_bit.IDR3
#define PI_IDR_IDR4              PI_IDR_bit.IDR4
#define PI_IDR_IDR5              PI_IDR_bit.IDR5
#define PI_IDR_IDR6              PI_IDR_bit.IDR6
#define PI_IDR_IDR7              PI_IDR_bit.IDR7

#define PI_DDR_DDR0              PI_DDR_bit.DDR0
#define PI_DDR_DDR1              PI_DDR_bit.DDR1
#define PI_DDR_DDR2              PI_DDR_bit.DDR2
#define PI_DDR_DDR3              PI_DDR_bit.DDR3
#define PI_DDR_DDR4              PI_DDR_bit.DDR4
#define PI_DDR_DDR5              PI_DDR_bit.DDR5
#define PI_DDR_DDR6              PI_DDR_bit.DDR6
#define PI_DDR_DDR7              PI_DDR_bit.DDR7

#define PI_CR1_C10               PI_CR1_bit.C10
#define PI_CR1_C11               PI_CR1_bit.C11
#define PI_CR1_C12               PI_CR1_bit.C12
#define PI_CR1_C13               PI_CR1_bit.C13
#define PI_CR1_C14               PI_CR1_bit.C14
#define PI_CR1_C15               PI_CR1_bit.C15
#define PI_CR1_C16               PI_CR1_bit.C16
#define PI_CR1_C17               PI_CR1_bit.C17

#define PI_CR2_C20               PI_CR2_bit.C20
#define PI_CR2_C21               PI_CR2_bit.C21
#define PI_CR2_C22               PI_CR2_bit.C22
#define PI_CR2_C23               PI_CR2_bit.C23
#define PI_CR2_C24               PI_CR2_bit.C24
#define PI_CR2_C25               PI_CR2_bit.C25
#define PI_CR2_C26               PI_CR2_bit.C26
#define PI_CR2_C27               PI_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port I bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PI_ODR_ODR0         0x01
#define MASK_PI_ODR_ODR1         0x02
#define MASK_PI_ODR_ODR2         0x04
#define MASK_PI_ODR_ODR3         0x08
#define MASK_PI_ODR_ODR4         0x10
#define MASK_PI_ODR_ODR5         0x20
#define MASK_PI_ODR_ODR6         0x40
#define MASK_PI_ODR_ODR7         0x80

#define MASK_PI_IDR_IDR0         0x01
#define MASK_PI_IDR_IDR1         0x02
#define MASK_PI_IDR_IDR2         0x04
#define MASK_PI_IDR_IDR3         0x08
#define MASK_PI_IDR_IDR4         0x10
#define MASK_PI_IDR_IDR5         0x20
#define MASK_PI_IDR_IDR6         0x40
#define MASK_PI_IDR_IDR7         0x80

#define MASK_PI_DDR_DDR0         0x01
#define MASK_PI_DDR_DDR1         0x02
#define MASK_PI_DDR_DDR2         0x04
#define MASK_PI_DDR_DDR3         0x08
#define MASK_PI_DDR_DDR4         0x10
#define MASK_PI_DDR_DDR5         0x20
#define MASK_PI_DDR_DDR6         0x40
#define MASK_PI_DDR_DDR7         0x80

#define MASK_PI_CR1_C10          0x01
#define MASK_PI_CR1_C11          0x02
#define MASK_PI_CR1_C12          0x04
#define MASK_PI_CR1_C13          0x08
#define MASK_PI_CR1_C14          0x10
#define MASK_PI_CR1_C15          0x20
#define MASK_PI_CR1_C16          0x40
#define MASK_PI_CR1_C17          0x80

#define MASK_PI_CR2_C20          0x01
#define MASK_PI_CR2_C21          0x02
#define MASK_PI_CR2_C22          0x04
#define MASK_PI_CR2_C23          0x08
#define MASK_PI_CR2_C24          0x10
#define MASK_PI_CR2_C25          0x20
#define MASK_PI_CR2_C26          0x40
#define MASK_PI_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Flash register definitions
 *-----------------------------------------------------------------------*/
/* Flash control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char FIX         : 1;
  unsigned char IE          : 1;
  unsigned char AHALT       : 1;
  unsigned char HALT        : 1;
} __BITS_FLASH_CR1;
#endif
__IO_REG8_BIT(FLASH_CR1,   0x505A, __READ_WRITE, __BITS_FLASH_CR1);

/* Flash control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PRG         : 1;
  unsigned char             : 3;
  unsigned char FPRG        : 1;
  unsigned char ERASE       : 1;
  unsigned char WPRG        : 1;
  unsigned char OPT         : 1;
} __BITS_FLASH_CR2;
#endif
__IO_REG8_BIT(FLASH_CR2,   0x505B, __READ_WRITE, __BITS_FLASH_CR2);

/* Flash complementary control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NPRG        : 1;
  unsigned char             : 3;
  unsigned char NFPRG       : 1;
  unsigned char NERASE      : 1;
  unsigned char NWPRG       : 1;
  unsigned char NOPT        : 1;
} __BITS_FLASH_NCR2;
#endif
__IO_REG8_BIT(FLASH_NCR2,  0x505C, __READ_WRITE, __BITS_FLASH_NCR2);

/* Flash protection register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char WPB0        : 1;
  unsigned char WPB1        : 1;
  unsigned char WPB2        : 1;
  unsigned char WPB3        : 1;
  unsigned char WPB4        : 1;
  unsigned char WPB5        : 1;
} __BITS_FLASH_FPR;
#endif
__IO_REG8_BIT(FLASH_FPR,   0x505D, __READ, __BITS_FLASH_FPR);

/* Flash complementary protection register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NWPB0       : 1;
  unsigned char NWPB1       : 1;
  unsigned char NWPB2       : 1;
  unsigned char NWPB3       : 1;
  unsigned char NWPB4       : 1;
  unsigned char NWPB5       : 1;
} __BITS_FLASH_NFPR;
#endif
__IO_REG8_BIT(FLASH_NFPR,  0x505E, __READ, __BITS_FLASH_NFPR);

/* Flash in-application programming status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char WR_PG_DIS   : 1;
  unsigned char PUL         : 1;
  unsigned char EOP         : 1;
  unsigned char DUL         : 1;
  unsigned char             : 2;
  unsigned char HVOFF       : 1;
} __BITS_FLASH_IAPSR;
#endif
__IO_REG8_BIT(FLASH_IAPSR, 0x505F, __READ_WRITE, __BITS_FLASH_IAPSR);

/* Flash program memory unprotection register */
__IO_REG8    (FLASH_PUKR,  0x5062, __READ_WRITE);
/* Data EEPROM unprotection register */
__IO_REG8    (FLASH_DUKR,  0x5064, __READ_WRITE);

/*-------------------------------------------------------------------------
 *      Flash bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__



#endif

/*-------------------------------------------------------------------------
 *      Flash bit masks
 *-----------------------------------------------------------------------*/
#define MASK_FLASH_CR1_FIX       0x01
#define MASK_FLASH_CR1_IE        0x02
#define MASK_FLASH_CR1_AHALT     0x04
#define MASK_FLASH_CR1_HALT      0x08

#define MASK_FLASH_CR2_PRG       0x01
#define MASK_FLASH_CR2_FPRG      0x10
#define MASK_FLASH_CR2_ERASE     0x20
#define MASK_FLASH_CR2_WPRG      0x40
#define MASK_FLASH_CR2_OPT       0x80

#define MASK_FLASH_NCR2_NPRG     0x01
#define MASK_FLASH_NCR2_NFPRG    0x10
#define MASK_FLASH_NCR2_NERASE   0x20
#define MASK_FLASH_NCR2_NWPRG    0x40
#define MASK_FLASH_NCR2_NOPT     0x80

#define MASK_FLASH_FPR_WPB0      0x01
#define MASK_FLASH_FPR_WPB1      0x02
#define MASK_FLASH_FPR_WPB2      0x04
#define MASK_FLASH_FPR_WPB3      0x08
#define MASK_FLASH_FPR_WPB4      0x10
#define MASK_FLASH_FPR_WPB5      0x20

#define MASK_FLASH_NFPR_NWPB0    0x01
#define MASK_FLASH_NFPR_NWPB1    0x02
#define MASK_FLASH_NFPR_NWPB2    0x04
#define MASK_FLASH_NFPR_NWPB3    0x08
#define MASK_FLASH_NFPR_NWPB4    0x10
#define MASK_FLASH_NFPR_NWPB5    0x20

#define MASK_FLASH_IAPSR_WR_PG_DIS 0x01
#define MASK_FLASH_IAPSR_PUL     0x02
#define MASK_FLASH_IAPSR_EOP     0x04
#define MASK_FLASH_IAPSR_DUL     0x08
#define MASK_FLASH_IAPSR_HVOFF   0x40


/*-------------------------------------------------------------------------
 *      ITC - EXTI register definitions
 *-----------------------------------------------------------------------*/
/* External interrupt control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PAIS        : 2;
  unsigned char PBIS        : 2;
  unsigned char PCIS        : 2;
  unsigned char PDIS        : 2;
} __BITS_EXTI_CR1;
#endif
__IO_REG8_BIT(EXTI_CR1,    0x50A0, __READ_WRITE, __BITS_EXTI_CR1);

/* External interrupt control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PEIS        : 2;
  unsigned char TLIS        : 1;
} __BITS_EXTI_CR2;
#endif
__IO_REG8_BIT(EXTI_CR2,    0x50A1, __READ_WRITE, __BITS_EXTI_CR2);


/*-------------------------------------------------------------------------
 *      ITC - EXTI bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__



#endif

/*-------------------------------------------------------------------------
 *      ITC - EXTI bit masks
 *-----------------------------------------------------------------------*/
#define MASK_EXTI_CR1_PAIS       0x03
#define MASK_EXTI_CR1_PBIS       0x0C
#define MASK_EXTI_CR1_PCIS       0x30
#define MASK_EXTI_CR1_PDIS       0xC0

#define MASK_EXTI_CR2_PEIS       0x03
#define MASK_EXTI_CR2_TLIS       0x04


/*-------------------------------------------------------------------------
 *      RST register definitions
 *-----------------------------------------------------------------------*/
/* Reset status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char WWDGF       : 1;
  unsigned char IWDGF       : 1;
  unsigned char ILLOPF      : 1;
  unsigned char SWIMF       : 1;
  unsigned char EMCF        : 1;
} __BITS_RST_SR;
#endif
__IO_REG8_BIT(RST_SR,      0x50B3, __READ_WRITE, __BITS_RST_SR);


/*-------------------------------------------------------------------------
 *      RST bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__



#endif

/*-------------------------------------------------------------------------
 *      RST bit masks
 *-----------------------------------------------------------------------*/
#define MASK_RST_SR_WWDGF        0x01
#define MASK_RST_SR_IWDGF        0x02
#define MASK_RST_SR_ILLOPF       0x04
#define MASK_RST_SR_SWIMF        0x08
#define MASK_RST_SR_EMCF         0x10


/*-------------------------------------------------------------------------
 *      CLK register definitions
 *-----------------------------------------------------------------------*/
/* Internal clock control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char HSIEN       : 1;
  unsigned char HSIRDY      : 1;
  unsigned char FHW         : 1;
  unsigned char LSIEN       : 1;
  unsigned char LSIRDY      : 1;
  unsigned char REGAH       : 1;
} __BITS_CLK_ICKR;
#endif
__IO_REG8_BIT(CLK_ICKR,    0x50C0, __READ_WRITE, __BITS_CLK_ICKR);

/* External clock control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char HSEEN       : 1;
  unsigned char HSERDY      : 1;
} __BITS_CLK_ECKR;
#endif
__IO_REG8_BIT(CLK_ECKR,    0x50C1, __READ_WRITE, __BITS_CLK_ECKR);

/* Clock master status register */
__IO_REG8    (CLK_CMSR,    0x50C3, __READ);
/* Clock master switch register */
__IO_REG8    (CLK_SWR,     0x50C4, __READ_WRITE);
/* Clock switch control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SWBSY       : 1;
  unsigned char SWEN        : 1;
  unsigned char SWIEM       : 1;
  unsigned char SWIF        : 1;
} __BITS_CLK_SWCR;
#endif
__IO_REG8_BIT(CLK_SWCR,    0x50C5, __READ_WRITE, __BITS_CLK_SWCR);

/* Clock divider register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CPUDIV      : 3;
  unsigned char HSIDIV      : 2;
} __BITS_CLK_CKDIVR;
#endif
__IO_REG8_BIT(CLK_CKDIVR,  0x50C6, __READ_WRITE, __BITS_CLK_CKDIVR);

/* Peripheral clock gating register 1 */
__IO_REG8    (CLK_PCKENR1, 0x50C7, __READ_WRITE);
/* Clock security system register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CSSEN       : 1;
  unsigned char AUX         : 1;
  unsigned char CSSD        : 1;
  unsigned char CSSDIE      : 1;
} __BITS_CLK_CSSR;
#endif
__IO_REG8_BIT(CLK_CSSR,    0x50C8, __READ_WRITE, __BITS_CLK_CSSR);

/* Configurable clock control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCOEN       : 1;
  unsigned char CCOSEL      : 4;
  unsigned char CCORDY      : 1;
  unsigned char CC0BSY      : 1;
} __BITS_CLK_CCOR;
#endif
__IO_REG8_BIT(CLK_CCOR,    0x50C9, __READ_WRITE, __BITS_CLK_CCOR);

/* Peripheral clock gating register 2 */
__IO_REG8    (CLK_PCKENR2, 0x50CA, __READ_WRITE);
/* CAN clock control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CANDIV      : 3;
} __BITS_CLK_CANCCR;
#endif
__IO_REG8_BIT(CLK_CANCCR,  0x50CB, __READ_WRITE, __BITS_CLK_CANCCR);

/* HSI clock calibration trimming register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char HSITRIM     : 4;
} __BITS_CLK_HSITRIMR;
#endif
__IO_REG8_BIT(CLK_HSITRIMR, 0x50CC, __READ_WRITE, __BITS_CLK_HSITRIMR);

/* SWIM clock control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SWIMCLK     : 1;
} __BITS_CLK_SWIMCCR;
#endif
__IO_REG8_BIT(CLK_SWIMCCR, 0x50CD, __READ_WRITE, __BITS_CLK_SWIMCCR);


/*-------------------------------------------------------------------------
 *      CLK bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

//#define CLK_ICKR_HSIEN           CLK_ICKR_bit.HSIEN
//#define CLK_ICKR_HSIRDY          CLK_ICKR_bit.HSIRDY
#define CLK_ICKR_FHW             CLK_ICKR_bit.FHW
//#define CLK_ICKR_LSIEN           CLK_ICKR_bit.LSIEN
//#define CLK_ICKR_LSIRDY          CLK_ICKR_bit.LSIRDY
#define CLK_ICKR_REGAH           CLK_ICKR_bit.REGAH

//#define CLK_ECKR_HSEEN           CLK_ECKR_bit.HSEEN
//#define CLK_ECKR_HSERDY          CLK_ECKR_bit.HSERDY

//#define CLK_SWCR_SWBSY           CLK_SWCR_bit.SWBSY
//#define CLK_SWCR_SWEN            CLK_SWCR_bit.SWEN
#define CLK_SWCR_SWIEM           CLK_SWCR_bit.SWIEM
//#define CLK_SWCR_SWIF            CLK_SWCR_bit.SWIF

//#define CLK_CKDIVR_CPUDIV        CLK_CKDIVR_bit.CPUDIV
//#define CLK_CKDIVR_HSIDIV        CLK_CKDIVR_bit.HSIDIV

//#define CLK_CSSR_CSSEN           CLK_CSSR_bit.CSSEN
//#define CLK_CSSR_AUX             CLK_CSSR_bit.AUX
//#define CLK_CSSR_CSSD            CLK_CSSR_bit.CSSD
//#define CLK_CSSR_CSSDIE          CLK_CSSR_bit.CSSDIE

//#define CLK_CCOR_CCOEN           CLK_CCOR_bit.CCOEN
//#define CLK_CCOR_CCOSEL          CLK_CCOR_bit.CCOSEL
//#define CLK_CCOR_CCORDY          CLK_CCOR_bit.CCORDY
#define CLK_CCOR_CC0BSY          CLK_CCOR_bit.CC0BSY

//#define CLK_CANCCR_CANDIV        CLK_CANCCR_bit.CANDIV

//#define CLK_HSITRIMR_HSITRIM     CLK_HSITRIMR_bit.HSITRIM

#define CLK_SWIMCCR_SWIMCLK      CLK_SWIMCCR_bit.SWIMCLK

#endif

/*-------------------------------------------------------------------------
 *      CLK bit masks
 *-----------------------------------------------------------------------*/
#define MASK_CLK_ICKR_HSIEN      0x01
#define MASK_CLK_ICKR_HSIRDY     0x02
#define MASK_CLK_ICKR_FHW        0x04
#define MASK_CLK_ICKR_LSIEN      0x08
#define MASK_CLK_ICKR_LSIRDY     0x10
#define MASK_CLK_ICKR_REGAH      0x20

#define MASK_CLK_ECKR_HSEEN      0x01
#define MASK_CLK_ECKR_HSERDY     0x02

#define MASK_CLK_SWCR_SWBSY      0x01
#define MASK_CLK_SWCR_SWEN       0x02
#define MASK_CLK_SWCR_SWIEM      0x04
#define MASK_CLK_SWCR_SWIF       0x08

#define MASK_CLK_CKDIVR_CPUDIV   0x07
#define MASK_CLK_CKDIVR_HSIDIV   0x18

#define MASK_CLK_CSSR_CSSEN      0x01
#define MASK_CLK_CSSR_AUX        0x02
#define MASK_CLK_CSSR_CSSD       0x04
#define MASK_CLK_CSSR_CSSDIE     0x08

#define MASK_CLK_CCOR_CCOEN      0x01
#define MASK_CLK_CCOR_CCOSEL     0x1E
#define MASK_CLK_CCOR_CCORDY     0x20
#define MASK_CLK_CCOR_CC0BSY     0x40

#define MASK_CLK_CANCCR_CANDIV   0x07

#define MASK_CLK_HSITRIMR_HSITRIM 0x0F

#define MASK_CLK_SWIMCCR_SWIMCLK 0x01


/*-------------------------------------------------------------------------
 *      WWDG register definitions
 *-----------------------------------------------------------------------*/
/* WWDG control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char T0          : 1;
  unsigned char T1          : 1;
  unsigned char T2          : 1;
  unsigned char T3          : 1;
  unsigned char T4          : 1;
  unsigned char T5          : 1;
  unsigned char T6          : 1;
  unsigned char WDGA        : 1;
} __BITS_WWDG_CR;
#endif
__IO_REG8_BIT(WWDG_CR,     0x50D1, __READ_WRITE, __BITS_WWDG_CR);

/* WWDR window register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char W0          : 1;
  unsigned char W1          : 1;
  unsigned char W2          : 1;
  unsigned char W3          : 1;
  unsigned char W4          : 1;
  unsigned char W5          : 1;
  unsigned char W6          : 1;
} __BITS_WWDG_WR;
#endif
__IO_REG8_BIT(WWDG_WR,     0x50D2, __READ_WRITE, __BITS_WWDG_WR);


/*-------------------------------------------------------------------------
 *      WWDG bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__



#endif

/*-------------------------------------------------------------------------
 *      WWDG bit masks
 *-----------------------------------------------------------------------*/
#define MASK_WWDG_CR_T0          0x01
#define MASK_WWDG_CR_T1          0x02
#define MASK_WWDG_CR_T2          0x04
#define MASK_WWDG_CR_T3          0x08
#define MASK_WWDG_CR_T4          0x10
#define MASK_WWDG_CR_T5          0x20
#define MASK_WWDG_CR_T6          0x40
#define MASK_WWDG_CR_WDGA        0x80

#define MASK_WWDG_WR_W0          0x01
#define MASK_WWDG_WR_W1          0x02
#define MASK_WWDG_WR_W2          0x04
#define MASK_WWDG_WR_W3          0x08
#define MASK_WWDG_WR_W4          0x10
#define MASK_WWDG_WR_W5          0x20
#define MASK_WWDG_WR_W6          0x40


/*-------------------------------------------------------------------------
 *      IWDG register definitions
 *-----------------------------------------------------------------------*/
/* IWDG key register */
__IO_REG8    (IWDG_KR,     0x50E0, __WRITE);
/* IWDG prescaler register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PR          : 3;
} __BITS_IWDG_PR;
#endif
__IO_REG8_BIT(IWDG_PR,     0x50E1, __READ_WRITE, __BITS_IWDG_PR);

/* IWDG reload register */
__IO_REG8    (IWDG_RLR,    0x50E2, __READ_WRITE);

/*-------------------------------------------------------------------------
 *      IWDG bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define IWDG_PR_PR               IWDG_PR_bit.PR

#endif

/*-------------------------------------------------------------------------
 *      IWDG bit masks
 *-----------------------------------------------------------------------*/
#define MASK_IWDG_PR_PR          0x07


/*-------------------------------------------------------------------------
 *      AWU register definitions
 *-----------------------------------------------------------------------*/
/* AWU control/status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char MSR         : 1;
  unsigned char             : 3;
  unsigned char AWUEN       : 1;
  unsigned char AWUF        : 1;
} __BITS_AWU_CSR1;
#endif
__IO_REG8_BIT(AWU_CSR1,    0x50F0, __READ_WRITE, __BITS_AWU_CSR1);

/* AWU asynchronous prescaler buffer register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char APR         : 6;
} __BITS_AWU_APR;
#endif
__IO_REG8_BIT(AWU_APR,     0x50F1, __READ_WRITE, __BITS_AWU_APR);

/* AWU timebase selection register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char AWUTB       : 4;
} __BITS_AWU_TBR;
#endif
__IO_REG8_BIT(AWU_TBR,     0x50F2, __READ_WRITE, __BITS_AWU_TBR);


/*-------------------------------------------------------------------------
 *      AWU bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define AWU_CSR1_MSR             AWU_CSR1_bit.MSR
#define AWU_CSR1_AWUEN           AWU_CSR1_bit.AWUEN
#define AWU_CSR1_AWUF            AWU_CSR1_bit.AWUF

//#define AWU_APR_APR              AWU_APR_bit.APR

//#define AWU_TBR_AWUTB            AWU_TBR_bit.AWUTB

#endif

/*-------------------------------------------------------------------------
 *      AWU bit masks
 *-----------------------------------------------------------------------*/
#define MASK_AWU_CSR1_MSR        0x01
#define MASK_AWU_CSR1_AWUEN      0x10
#define MASK_AWU_CSR1_AWUF       0x20

#define MASK_AWU_APR_APR         0x3F

#define MASK_AWU_TBR_AWUTB       0x0F


/*-------------------------------------------------------------------------
 *      BEEP register definitions
 *-----------------------------------------------------------------------*/
/* BEEP control/status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char BEEPDIV     : 5;
  unsigned char BEEPEN      : 1;
  unsigned char BEEPSEL     : 2;
} __BITS_BEEP_CSR;
#endif
__IO_REG8_BIT(BEEP_CSR,    0x50F3, __READ_WRITE, __BITS_BEEP_CSR);


/*-------------------------------------------------------------------------
 *      BEEP bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

//#define BEEP_CSR_BEEPDIV         BEEP_CSR_bit.BEEPDIV
///#define BEEP_CSR_BEEPEN          BEEP_CSR_bit.BEEPEN
//#define BEEP_CSR_BEEPSEL         BEEP_CSR_bit.BEEPSEL

#endif

/*-------------------------------------------------------------------------
 *      BEEP bit masks
 *-----------------------------------------------------------------------*/
#define MASK_BEEP_CSR_BEEPDIV    0x1F
#define MASK_BEEP_CSR_BEEPEN     0x20
#define MASK_BEEP_CSR_BEEPSEL    0xC0


/*-------------------------------------------------------------------------
 *      SPI register definitions
 *-----------------------------------------------------------------------*/
/* SPI control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CPHA        : 1;
  unsigned char CPOL        : 1;
  unsigned char MSTR        : 1;
  unsigned char BR          : 3;
  unsigned char SPE         : 1;
  unsigned char LSBFIRST    : 1;
} __BITS_SPI_CR1;
#endif
__IO_REG8_BIT(SPI_CR1,     0x5200, __READ_WRITE, __BITS_SPI_CR1);

/* SPI control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SSI         : 1;
  unsigned char SSM         : 1;
  unsigned char RXONLY      : 1;
  unsigned char             : 1;
  unsigned char CRCNEXT     : 1;
  unsigned char CECEN       : 1;
  unsigned char BDOE        : 1;
  unsigned char BDM         : 1;
} __BITS_SPI_CR2;
#endif
__IO_REG8_BIT(SPI_CR2,     0x5201, __READ_WRITE, __BITS_SPI_CR2);

/* SPI interrupt control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 4;
  unsigned char WKIE        : 1;
  unsigned char ERRIE       : 1;
  unsigned char RXIE        : 1;
  unsigned char TXIE        : 1;
} __BITS_SPI_ICR;
#endif
__IO_REG8_BIT(SPI_ICR,     0x5202, __READ_WRITE, __BITS_SPI_ICR);

/* SPI status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char RXNE        : 1;
  unsigned char TXE         : 1;
  unsigned char             : 1;
  unsigned char WKUP        : 1;
  unsigned char CRCERR      : 1;
  unsigned char MODF        : 1;
  unsigned char OVR         : 1;
  unsigned char BSY         : 1;
} __BITS_SPI_SR;
#endif
__IO_REG8_BIT(SPI_SR,      0x5203, __READ_WRITE, __BITS_SPI_SR);

/* SPI data register */
__IO_REG8    (SPI_DR,      0x5204, __READ_WRITE);
/* SPI CRC polynomial register */
__IO_REG8    (SPI_CRCPR,   0x5205, __READ_WRITE);
/* SPI Rx CRC register */
__IO_REG8    (SPI_RXCRCR,  0x5206, __READ);
/* SPI Tx CRC register */
__IO_REG8    (SPI_TXCRCR,  0x5207, __READ);

/*-------------------------------------------------------------------------
 *      SPI bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__



#endif

/*-------------------------------------------------------------------------
 *      SPI bit masks
 *-----------------------------------------------------------------------*/
#define MASK_SPI_CR1_CPHA        0x01
#define MASK_SPI_CR1_CPOL        0x02
#define MASK_SPI_CR1_MSTR        0x04
#define MASK_SPI_CR1_BR          0x38
#define MASK_SPI_CR1_SPE         0x40
#define MASK_SPI_CR1_LSBFIRST    0x80

#define MASK_SPI_CR2_SSI         0x01
#define MASK_SPI_CR2_SSM         0x02
#define MASK_SPI_CR2_RXONLY      0x04
#define MASK_SPI_CR2_CRCNEXT     0x10
#define MASK_SPI_CR2_CECEN       0x20
#define MASK_SPI_CR2_BDOE        0x40
#define MASK_SPI_CR2_BDM         0x80

#define MASK_SPI_ICR_WKIE        0x10
#define MASK_SPI_ICR_ERRIE       0x20
#define MASK_SPI_ICR_RXIE        0x40
#define MASK_SPI_ICR_TXIE        0x80

#define MASK_SPI_SR_RXNE         0x01
#define MASK_SPI_SR_TXE          0x02
#define MASK_SPI_SR_WKUP         0x08
#define MASK_SPI_SR_CRCERR       0x10
#define MASK_SPI_SR_MODF         0x20
#define MASK_SPI_SR_OVR          0x40
#define MASK_SPI_SR_BSY          0x80


/*-------------------------------------------------------------------------
 *      I2C register definitions
 *-----------------------------------------------------------------------*/
/* I2C control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PE          : 1;
  unsigned char             : 5;
  unsigned char ENGC        : 1;
  unsigned char NOSTRETCH   : 1;
} __BITS_I2C_CR1;
#endif
__IO_REG8_BIT(I2C_CR1,     0x5210, __READ_WRITE, __BITS_I2C_CR1);

/* I2C control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char START       : 1;
  unsigned char STOP        : 1;
  unsigned char ACK         : 1;
  unsigned char POS         : 1;
  unsigned char             : 3;
  unsigned char SWRST       : 1;
} __BITS_I2C_CR2;
#endif
__IO_REG8_BIT(I2C_CR2,     0x5211, __READ_WRITE, __BITS_I2C_CR2);

/* I2C frequency register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char FREQ        : 6;
} __BITS_I2C_FREQR;
#endif
__IO_REG8_BIT(I2C_FREQR,   0x5212, __READ_WRITE, __BITS_I2C_FREQR);

/* I2C Own address register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ADD0        : 1;
  unsigned char ADD         : 7;
} __BITS_I2C_OARL;
#endif
__IO_REG8_BIT(I2C_OARL,    0x5213, __READ_WRITE, __BITS_I2C_OARL);

/* I2C own address register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char ADD         : 2;
  unsigned char             : 3;
  unsigned char ADDCONF     : 1;
  unsigned char ADDMODE     : 1;
} __BITS_I2C_OARH;
#endif
__IO_REG8_BIT(I2C_OARH,    0x5214, __READ_WRITE, __BITS_I2C_OARH);

/* I2C data register */
__IO_REG8    (I2C_DR,      0x5216, __READ_WRITE);
/* I2C status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SB          : 1;
  unsigned char ADDR        : 1;
  unsigned char BTF         : 1;
  unsigned char ADD10       : 1;
  unsigned char STOPF       : 1;
  unsigned char             : 1;
  unsigned char RXNE        : 1;
  unsigned char TXE         : 1;
} __BITS_I2C_SR1;
#endif
__IO_REG8_BIT(I2C_SR1,     0x5217, __READ, __BITS_I2C_SR1);

/* I2C status register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char BERR        : 1;
  unsigned char ARLO        : 1;
  unsigned char AF          : 1;
  unsigned char OVR         : 1;
  unsigned char             : 1;
  unsigned char WUFH        : 1;
} __BITS_I2C_SR2;
#endif
__IO_REG8_BIT(I2C_SR2,     0x5218, __READ_WRITE, __BITS_I2C_SR2);

/* I2C status register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char MSL         : 1;
  unsigned char BUSY        : 1;
  unsigned char TRA         : 1;
  unsigned char             : 1;
  unsigned char GENCALL     : 1;
} __BITS_I2C_SR3;
#endif
__IO_REG8_BIT(I2C_SR3,     0x5219, __READ, __BITS_I2C_SR3);

/* I2C interrupt control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ITERREN     : 1;
  unsigned char ITEVTEN     : 1;
  unsigned char ITBUFEN     : 1;
} __BITS_I2C_ITR;
#endif
__IO_REG8_BIT(I2C_ITR,     0x521A, __READ_WRITE, __BITS_I2C_ITR);

/* I2C clock control register low */
__IO_REG8    (I2C_CCRL,    0x521B, __READ_WRITE);
/* I2C clock control register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR         : 4;
  unsigned char             : 2;
  unsigned char DUTY        : 1;
  unsigned char F_S         : 1;
} __BITS_I2C_CCRH;
#endif
__IO_REG8_BIT(I2C_CCRH,    0x521C, __READ_WRITE, __BITS_I2C_CCRH);

/* I2C TRISE register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TRISE       : 6;
} __BITS_I2C_TRISER;
#endif
__IO_REG8_BIT(I2C_TRISER,  0x521D, __READ_WRITE, __BITS_I2C_TRISER);

/* I2C packet error checking register */
__IO_REG8    (I2C_PECR,    0x521E, __READ_WRITE);

/*-------------------------------------------------------------------------
 *      I2C bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__



#endif

/*-------------------------------------------------------------------------
 *      I2C bit masks
 *-----------------------------------------------------------------------*/
#define MASK_I2C_CR1_PE          0x01
#define MASK_I2C_CR1_ENGC        0x40
#define MASK_I2C_CR1_NOSTRETCH   0x80

#define MASK_I2C_CR2_START       0x01
#define MASK_I2C_CR2_STOP        0x02
#define MASK_I2C_CR2_ACK         0x04
#define MASK_I2C_CR2_POS         0x08
#define MASK_I2C_CR2_SWRST       0x80

#define MASK_I2C_FREQR_FREQ      0x3F

#define MASK_I2C_OARL_ADD0       0x01
#define MASK_I2C_OARL_ADD        0xFE

#define MASK_I2C_OARH_ADD        0x06
#define MASK_I2C_OARH_ADDCONF    0x40
#define MASK_I2C_OARH_ADDMODE    0x80

#define MASK_I2C_SR1_SB          0x01
#define MASK_I2C_SR1_ADDR        0x02
#define MASK_I2C_SR1_BTF         0x04
#define MASK_I2C_SR1_ADD10       0x08
#define MASK_I2C_SR1_STOPF       0x10
#define MASK_I2C_SR1_RXNE        0x40
#define MASK_I2C_SR1_TXE         0x80

#define MASK_I2C_SR2_BERR        0x01
#define MASK_I2C_SR2_ARLO        0x02
#define MASK_I2C_SR2_AF          0x04
#define MASK_I2C_SR2_OVR         0x08
#define MASK_I2C_SR2_WUFH        0x20

#define MASK_I2C_SR3_MSL         0x01
#define MASK_I2C_SR3_BUSY        0x02
#define MASK_I2C_SR3_TRA         0x04
#define MASK_I2C_SR3_GENCALL     0x10

#define MASK_I2C_ITR_ITERREN     0x01
#define MASK_I2C_ITR_ITEVTEN     0x02
#define MASK_I2C_ITR_ITBUFEN     0x04

#define MASK_I2C_CCRH_CCR        0x0F
#define MASK_I2C_CCRH_DUTY       0x40
#define MASK_I2C_CCRH_F_S        0x80

#define MASK_I2C_TRISER_TRISE    0x3F


/*-------------------------------------------------------------------------
 *      UART2 register definitions
 *-----------------------------------------------------------------------*/
/* UART2 status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PE          : 1;
  unsigned char FE          : 1;
  unsigned char NF          : 1;
  unsigned char OR_LHE      : 1;
  unsigned char IDLE        : 1;
  unsigned char RXNE        : 1;
  unsigned char TC          : 1;
  unsigned char TXE         : 1;
} __BITS_UART2_SR;
#endif
__IO_REG8_BIT(UART2_SR,    0x5240, __READ_WRITE, __BITS_UART2_SR);

/* UART2 data register */
__IO_REG8    (UART2_DR,    0x5241, __READ_WRITE);
/* UART2 baud rate register 1 */
__IO_REG8    (UART2_BRR1,  0x5242, __READ_WRITE);
/* UART2 baud rate register 2 */
__IO_REG8    (UART2_BRR2,  0x5243, __READ_WRITE);
/* UART2 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PIEN        : 1;
  unsigned char PS          : 1;
  unsigned char PCEN        : 1;
  unsigned char WAKE        : 1;
  unsigned char M           : 1;
  unsigned char UART0       : 1;
  unsigned char T8          : 1;
  unsigned char R8          : 1;
} __BITS_UART2_CR1;
#endif
__IO_REG8_BIT(UART2_CR1,   0x5244, __READ_WRITE, __BITS_UART2_CR1);

/* UART2 control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SBK         : 1;
  unsigned char RWU         : 1;
  unsigned char REN         : 1;
  unsigned char TEN         : 1;
  unsigned char ILIEN       : 1;
  unsigned char RIEN        : 1;
  unsigned char TCIEN       : 1;
  unsigned char TIEN        : 1;
} __BITS_UART2_CR2;
#endif
__IO_REG8_BIT(UART2_CR2,   0x5245, __READ_WRITE, __BITS_UART2_CR2);

/* UART2 control register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LBCL        : 1;
  unsigned char CPHA        : 1;
  unsigned char CPOL        : 1;
  unsigned char CKEN        : 1;
  unsigned char STOP        : 2;
  unsigned char             : 1;
  unsigned char LINEN       : 1;
} __BITS_UART2_CR3;
#endif
__IO_REG8_BIT(UART2_CR3,   0x5246, __READ_WRITE, __BITS_UART2_CR3);

/* UART2 control register 4 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ADD         : 4;
  unsigned char LBDF        : 1;
  unsigned char LBDL        : 1;
  unsigned char LBDIEN      : 1;
} __BITS_UART2_CR4;
#endif
__IO_REG8_BIT(UART2_CR4,   0x5247, __READ_WRITE, __BITS_UART2_CR4);

/* UART2 control register 6 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LSF         : 1;
  unsigned char LHDF        : 1;
  unsigned char LHDIEN      : 1;
  unsigned char             : 1;
  unsigned char LASE        : 1;
  unsigned char LSLV        : 1;
  unsigned char             : 1;
  unsigned char LDUM        : 1;
} __BITS_UART2_CR6;
#endif
__IO_REG8_BIT(UART2_CR6,   0x5249, __READ_WRITE, __BITS_UART2_CR6);

/* UART2 guard time register */
__IO_REG8    (UART2_GTR,   0x524A, __READ_WRITE);
/* UART2 prescaler register */
__IO_REG8    (UART2_PSCR,  0x524B, __READ_WRITE);

/*-------------------------------------------------------------------------
 *      UART2 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__


#endif

/*-------------------------------------------------------------------------
 *      UART2 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_UART2_SR_PE         0x01
#define MASK_UART2_SR_FE         0x02
#define MASK_UART2_SR_NF         0x04
#define MASK_UART2_SR_OR_LHE     0x08
#define MASK_UART2_SR_IDLE       0x10
#define MASK_UART2_SR_RXNE       0x20
#define MASK_UART2_SR_TC         0x40
#define MASK_UART2_SR_TXE        0x80

#define MASK_UART2_CR1_PIEN      0x01
#define MASK_UART2_CR1_PS        0x02
#define MASK_UART2_CR1_PCEN      0x04
#define MASK_UART2_CR1_WAKE      0x08
#define MASK_UART2_CR1_M         0x10
#define MASK_UART2_CR1_UART0     0x20
#define MASK_UART2_CR1_T8        0x40
#define MASK_UART2_CR1_R8        0x80

#define MASK_UART2_CR2_SBK       0x01
#define MASK_UART2_CR2_RWU       0x02
#define MASK_UART2_CR2_REN       0x04
#define MASK_UART2_CR2_TEN       0x08
#define MASK_UART2_CR2_ILIEN     0x10
#define MASK_UART2_CR2_RIEN      0x20
#define MASK_UART2_CR2_TCIEN     0x40
#define MASK_UART2_CR2_TIEN      0x80

#define MASK_UART2_CR3_LBCL      0x01
#define MASK_UART2_CR3_CPHA      0x02
#define MASK_UART2_CR3_CPOL      0x04
#define MASK_UART2_CR3_CKEN      0x08
#define MASK_UART2_CR3_STOP      0x30
#define MASK_UART2_CR3_LINEN     0x80

#define MASK_UART2_CR4_ADD       0x0F
#define MASK_UART2_CR4_LBDF      0x10
#define MASK_UART2_CR4_LBDL      0x20
#define MASK_UART2_CR4_LBDIEN    0x40

#define MASK_UART2_CR6_LSF       0x01
#define MASK_UART2_CR6_LHDF      0x02
#define MASK_UART2_CR6_LHDIEN    0x04
#define MASK_UART2_CR6_LASE      0x10
#define MASK_UART2_CR6_LSLV      0x20
#define MASK_UART2_CR6_LDUM      0x80


/*-------------------------------------------------------------------------
 *      TIM1 register definitions
 *-----------------------------------------------------------------------*/
/* TIM1 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CEN         : 1;
  unsigned char UDIS        : 1;
  unsigned char URS         : 1;
  unsigned char OPM         : 1;
  unsigned char DIR         : 1;
  unsigned char CMS         : 2;
  unsigned char ARPE        : 1;
} __BITS_TIM1_CR1;
#endif
__IO_REG8_BIT(TIM1_CR1,    0x5250, __READ_WRITE, __BITS_TIM1_CR1);

/* TIM1 control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCPG        : 1;
  unsigned char             : 1;
  unsigned char COMS        : 1;
  unsigned char             : 1;
  unsigned char MMS         : 3;
} __BITS_TIM1_CR2;
#endif
__IO_REG8_BIT(TIM1_CR2,    0x5251, __READ_WRITE, __BITS_TIM1_CR2);

/* TIM1 slave mode control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SMS         : 3;
  unsigned char             : 1;
  unsigned char TS          : 3;
  unsigned char MSM         : 1;
} __BITS_TIM1_SMCR;
#endif
__IO_REG8_BIT(TIM1_SMCR,   0x5252, __READ_WRITE, __BITS_TIM1_SMCR);

/* TIM1 external trigger register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ETF         : 4;
  unsigned char ETPS        : 2;
  unsigned char ECE         : 1;
  unsigned char ETP         : 1;
} __BITS_TIM1_ETR;
#endif
__IO_REG8_BIT(TIM1_ETR,    0x5253, __READ_WRITE, __BITS_TIM1_ETR);

/* TIM1 interrupt enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIE         : 1;
  unsigned char CC1IE       : 1;
  unsigned char CC2IE       : 1;
  unsigned char CC3IE       : 1;
  unsigned char CC4IE       : 1;
  unsigned char COMIE       : 1;
  unsigned char TIE         : 1;
  unsigned char BIE         : 1;
} __BITS_TIM1_IER;
#endif
__IO_REG8_BIT(TIM1_IER,    0x5254, __READ_WRITE, __BITS_TIM1_IER);

/* TIM1 status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIF         : 1;
  unsigned char CC1IF       : 1;
  unsigned char CC2IF       : 1;
  unsigned char CC3IF       : 1;
  unsigned char CC4IF       : 1;
  unsigned char COMIF       : 1;
  unsigned char TIF         : 1;
  unsigned char BIF         : 1;
} __BITS_TIM1_SR1;
#endif
__IO_REG8_BIT(TIM1_SR1,    0x5255, __READ_WRITE, __BITS_TIM1_SR1);

/* TIM1 status register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char CC1OF       : 1;
  unsigned char CC2OF       : 1;
  unsigned char CC3OF       : 1;
  unsigned char CC4OF       : 1;
} __BITS_TIM1_SR2;
#endif
__IO_REG8_BIT(TIM1_SR2,    0x5256, __READ_WRITE, __BITS_TIM1_SR2);

/* TIM1 event generation register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UG          : 1;
  unsigned char CC1G        : 1;
  unsigned char CC2G        : 1;
  unsigned char CC3G        : 1;
  unsigned char CC4G        : 1;
  unsigned char COMG        : 1;
  unsigned char TG          : 1;
  unsigned char BG          : 1;
} __BITS_TIM1_EGR;
#endif
__IO_REG8_BIT(TIM1_EGR,    0x5257, __WRITE, __BITS_TIM1_EGR);

/* TIM1 capture/compare mode register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC1S        : 2;
  unsigned char OC1FE       : 1;
  unsigned char OC1PE       : 1;
  unsigned char OC1M        : 3;
  unsigned char OC1CE       : 1;
} __BITS_TIM1_CCMR1;
#endif
__IO_REG8_BIT(TIM1_CCMR1,  0x5258, __READ_WRITE, __BITS_TIM1_CCMR1);

/* TIM1 capture/compare mode register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC2S        : 2;
  unsigned char OC2FE       : 1;
  unsigned char OC2PE       : 1;
  unsigned char OC2M        : 3;
  unsigned char OC2CE       : 1;
} __BITS_TIM1_CCMR2;
#endif
__IO_REG8_BIT(TIM1_CCMR2,  0x5259, __READ_WRITE, __BITS_TIM1_CCMR2);

/* TIM1 capture/compare mode register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC3S        : 2;
  unsigned char OC3FE       : 1;
  unsigned char OC3PE       : 1;
  unsigned char OC3M        : 3;
  unsigned char OC3CE       : 1;
} __BITS_TIM1_CCMR3;
#endif
__IO_REG8_BIT(TIM1_CCMR3,  0x525A, __READ_WRITE, __BITS_TIM1_CCMR3);

/* TIM1 capture/compare mode register 4 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC4S        : 2;
  unsigned char OC4FE       : 1;
  unsigned char OC4PE       : 1;
  unsigned char OC4M        : 3;
  unsigned char OC4CE       : 1;
} __BITS_TIM1_CCMR4;
#endif
__IO_REG8_BIT(TIM1_CCMR4,  0x525B, __READ_WRITE, __BITS_TIM1_CCMR4);

/* TIM1 capture/compare enable register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC1E        : 1;
  unsigned char CC1P        : 1;
  unsigned char CC1NE       : 1;
  unsigned char CC1NP       : 1;
  unsigned char CC2E        : 1;
  unsigned char CC2P        : 1;
  unsigned char CC2NE       : 1;
  unsigned char CC2NP       : 1;
} __BITS_TIM1_CCER1;
#endif
__IO_REG8_BIT(TIM1_CCER1,  0x525C, __READ_WRITE, __BITS_TIM1_CCER1);

/* TIM1 capture/compare enable register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC3E        : 1;
  unsigned char CC3P        : 1;
  unsigned char CC3NE       : 1;
  unsigned char CC3NP       : 1;
  unsigned char CC4E        : 1;
  unsigned char CC4P        : 1;
} __BITS_TIM1_CCER2;
#endif
__IO_REG8_BIT(TIM1_CCER2,  0x525D, __READ_WRITE, __BITS_TIM1_CCER2);

/* TIM1 counter high */
__IO_REG8    (TIM1_CNTRH,  0x525E, __READ_WRITE);
/* TIM1 counter low */
__IO_REG8    (TIM1_CNTRL,  0x525F, __READ_WRITE);
/* TIM1 prescaler register high */
__IO_REG8    (TIM1_PSCRH,  0x5260, __READ_WRITE);
/* TIM1 prescaler register low */
__IO_REG8    (TIM1_PSCRL,  0x5261, __READ_WRITE);
/* TIM1 auto-reload register high */
__IO_REG8    (TIM1_ARRH,   0x5262, __READ_WRITE);
/* TIM1 auto-reload register low */
__IO_REG8    (TIM1_ARRL,   0x5263, __READ_WRITE);
/* TIM1 repetition counter register */
__IO_REG8    (TIM1_RCR,    0x5264, __READ_WRITE);
/* TIM1 capture/compare register 1 high */
__IO_REG8    (TIM1_CCR1H,  0x5265, __READ_WRITE);
/* TIM1 capture/compare register 1 low */
__IO_REG8    (TIM1_CCR1L,  0x5266, __READ_WRITE);
/* TIM1 capture/compare register 2 high */
__IO_REG8    (TIM1_CCR2H,  0x5267, __READ_WRITE);
/* TIM1 capture/compare register 2 low */
__IO_REG8    (TIM1_CCR2L,  0x5268, __READ_WRITE);
/* TIM1 capture/compare register 3 high */
__IO_REG8    (TIM1_CCR3H,  0x5269, __READ_WRITE);
/* TIM1 capture/compare register 3 low */
__IO_REG8    (TIM1_CCR3L,  0x526A, __READ_WRITE);
/* TIM1 capture/compare register 4 high */
__IO_REG8    (TIM1_CCR4H,  0x526B, __READ_WRITE);
/* TIM1 capture/compare register 4 low */
__IO_REG8    (TIM1_CCR4L,  0x526C, __READ_WRITE);
/* TIM1 break register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LOCK        : 2;
  unsigned char OSSI        : 1;
  unsigned char OSSR        : 1;
  unsigned char BKE         : 1;
  unsigned char BKP         : 1;
  unsigned char AOE         : 1;
  unsigned char MOE         : 1;
} __BITS_TIM1_BKR;
#endif
__IO_REG8_BIT(TIM1_BKR,    0x526D, __READ_WRITE, __BITS_TIM1_BKR);

/* TIM1 dead-time register */
__IO_REG8    (TIM1_DTR,    0x526E, __READ_WRITE);
/* TIM1 output idle state register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char OIS1        : 1;
  unsigned char OIS1N       : 1;
  unsigned char OIS2        : 1;
  unsigned char OIS2N       : 1;
  unsigned char OIS3        : 1;
  unsigned char OIS3N       : 1;
  unsigned char OIS4        : 1;
} __BITS_TIM1_OISR;
#endif
__IO_REG8_BIT(TIM1_OISR,   0x526F, __READ_WRITE, __BITS_TIM1_OISR);


/*-------------------------------------------------------------------------
 *      TIM1 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__





#endif

/*-------------------------------------------------------------------------
 *      TIM1 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_TIM1_CR1_CEN        0x01
#define MASK_TIM1_CR1_UDIS       0x02
#define MASK_TIM1_CR1_URS        0x04
#define MASK_TIM1_CR1_OPM        0x08
#define MASK_TIM1_CR1_DIR        0x10
#define MASK_TIM1_CR1_CMS        0x60
#define MASK_TIM1_CR1_ARPE       0x80

#define MASK_TIM1_CR2_CCPG       0x01
#define MASK_TIM1_CR2_COMS       0x04
#define MASK_TIM1_CR2_MMS        0x70

#define MASK_TIM1_SMCR_SMS       0x07
#define MASK_TIM1_SMCR_TS        0x70
#define MASK_TIM1_SMCR_MSM       0x80

#define MASK_TIM1_ETR_ETF        0x0F
#define MASK_TIM1_ETR_ETPS       0x30
#define MASK_TIM1_ETR_ECE        0x40
#define MASK_TIM1_ETR_ETP        0x80

#define MASK_TIM1_IER_UIE        0x01
#define MASK_TIM1_IER_CC1IE      0x02
#define MASK_TIM1_IER_CC2IE      0x04
#define MASK_TIM1_IER_CC3IE      0x08
#define MASK_TIM1_IER_CC4IE      0x10
#define MASK_TIM1_IER_COMIE      0x20
#define MASK_TIM1_IER_TIE        0x40
#define MASK_TIM1_IER_BIE        0x80

#define MASK_TIM1_SR1_UIF        0x01
#define MASK_TIM1_SR1_CC1IF      0x02
#define MASK_TIM1_SR1_CC2IF      0x04
#define MASK_TIM1_SR1_CC3IF      0x08
#define MASK_TIM1_SR1_CC4IF      0x10
#define MASK_TIM1_SR1_COMIF      0x20
#define MASK_TIM1_SR1_TIF        0x40
#define MASK_TIM1_SR1_BIF        0x80

#define MASK_TIM1_SR2_CC1OF      0x02
#define MASK_TIM1_SR2_CC2OF      0x04
#define MASK_TIM1_SR2_CC3OF      0x08
#define MASK_TIM1_SR2_CC4OF      0x10

#define MASK_TIM1_EGR_UG         0x01
#define MASK_TIM1_EGR_CC1G       0x02
#define MASK_TIM1_EGR_CC2G       0x04
#define MASK_TIM1_EGR_CC3G       0x08
#define MASK_TIM1_EGR_CC4G       0x10
#define MASK_TIM1_EGR_COMG       0x20
#define MASK_TIM1_EGR_TG         0x40
#define MASK_TIM1_EGR_BG         0x80

#define MASK_TIM1_CCMR1_CC1S     0x03
#define MASK_TIM1_CCMR1_OC1FE    0x04
#define MASK_TIM1_CCMR1_OC1PE    0x08
#define MASK_TIM1_CCMR1_OC1M     0x70
#define MASK_TIM1_CCMR1_OC1CE    0x80

#define MASK_TIM1_CCMR2_CC2S     0x03
#define MASK_TIM1_CCMR2_OC2FE    0x04
#define MASK_TIM1_CCMR2_OC2PE    0x08
#define MASK_TIM1_CCMR2_OC2M     0x70
#define MASK_TIM1_CCMR2_OC2CE    0x80

#define MASK_TIM1_CCMR3_CC3S     0x03
#define MASK_TIM1_CCMR3_OC3FE    0x04
#define MASK_TIM1_CCMR3_OC3PE    0x08
#define MASK_TIM1_CCMR3_OC3M     0x70
#define MASK_TIM1_CCMR3_OC3CE    0x80

#define MASK_TIM1_CCMR4_CC4S     0x03
#define MASK_TIM1_CCMR4_OC4FE    0x04
#define MASK_TIM1_CCMR4_OC4PE    0x08
#define MASK_TIM1_CCMR4_OC4M     0x70
#define MASK_TIM1_CCMR4_OC4CE    0x80

#define MASK_TIM1_CCER1_CC1E     0x01
#define MASK_TIM1_CCER1_CC1P     0x02
#define MASK_TIM1_CCER1_CC1NE    0x04
#define MASK_TIM1_CCER1_CC1NP    0x08
#define MASK_TIM1_CCER1_CC2E     0x10
#define MASK_TIM1_CCER1_CC2P     0x20
#define MASK_TIM1_CCER1_CC2NE    0x40
#define MASK_TIM1_CCER1_CC2NP    0x80

#define MASK_TIM1_CCER2_CC3E     0x01
#define MASK_TIM1_CCER2_CC3P     0x02
#define MASK_TIM1_CCER2_CC3NE    0x04
#define MASK_TIM1_CCER2_CC3NP    0x08
#define MASK_TIM1_CCER2_CC4E     0x10
#define MASK_TIM1_CCER2_CC4P     0x20

#define MASK_TIM1_BKR_LOCK       0x03
#define MASK_TIM1_BKR_OSSI       0x04
#define MASK_TIM1_BKR_OSSR       0x08
#define MASK_TIM1_BKR_BKE        0x10
#define MASK_TIM1_BKR_BKP        0x20
#define MASK_TIM1_BKR_AOE        0x40
#define MASK_TIM1_BKR_MOE        0x80

#define MASK_TIM1_OISR_OIS1      0x01
#define MASK_TIM1_OISR_OIS1N     0x02
#define MASK_TIM1_OISR_OIS2      0x04
#define MASK_TIM1_OISR_OIS2N     0x08
#define MASK_TIM1_OISR_OIS3      0x10
#define MASK_TIM1_OISR_OIS3N     0x20
#define MASK_TIM1_OISR_OIS4      0x40


/*-------------------------------------------------------------------------
 *      TIM2 register definitions
 *-----------------------------------------------------------------------*/
/* TIM2 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CEN         : 1;
  unsigned char UDIS        : 1;
  unsigned char URS         : 1;
  unsigned char OPM         : 1;
  unsigned char             : 3;
  unsigned char ARPE        : 1;
} __BITS_TIM2_CR1;
#endif
__IO_REG8_BIT(TIM2_CR1,    0x5300, __READ_WRITE, __BITS_TIM2_CR1);

/* TIM2 interrupt enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIE         : 1;
  unsigned char CC1IE       : 1;
  unsigned char CC2IE       : 1;
  unsigned char CC3IE       : 1;
  unsigned char             : 2;
  unsigned char TIE         : 1;
} __BITS_TIM2_IER;
#endif
__IO_REG8_BIT(TIM2_IER,    0x5301, __READ_WRITE, __BITS_TIM2_IER);

/* TIM2 status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIF         : 1;
  unsigned char CC1IF       : 1;
  unsigned char CC2IF       : 1;
  unsigned char CC3IF       : 1;
  unsigned char             : 2;
  unsigned char TIF         : 1;
} __BITS_TIM2_SR1;
#endif
__IO_REG8_BIT(TIM2_SR1,    0x5302, __READ_WRITE, __BITS_TIM2_SR1);

/* TIM2 status register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char CC1OF       : 1;
  unsigned char CC2OF       : 1;
  unsigned char CC3OF       : 1;
} __BITS_TIM2_SR2;
#endif
__IO_REG8_BIT(TIM2_SR2,    0x5303, __READ_WRITE, __BITS_TIM2_SR2);

/* TIM2 event generation register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UG          : 1;
  unsigned char CC1G        : 1;
  unsigned char CC2G        : 1;
  unsigned char CC3G        : 1;
  unsigned char             : 2;
  unsigned char TG          : 1;
} __BITS_TIM2_EGR;
#endif
__IO_REG8_BIT(TIM2_EGR,    0x5304, __WRITE, __BITS_TIM2_EGR);

/* TIM2 capture/compare mode register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC1S        : 2;
  unsigned char             : 1;
  unsigned char OC1PE       : 1;
  unsigned char OC1M        : 3;
} __BITS_TIM2_CCMR1;
#endif
__IO_REG8_BIT(TIM2_CCMR1,  0x5305, __READ_WRITE, __BITS_TIM2_CCMR1);

/* TIM2 capture/compare mode register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC2S        : 2;
  unsigned char             : 1;
  unsigned char OC2PE       : 1;
  unsigned char OC2M        : 3;
} __BITS_TIM2_CCMR2;
#endif
__IO_REG8_BIT(TIM2_CCMR2,  0x5306, __READ_WRITE, __BITS_TIM2_CCMR2);

/* TIM2 capture/compare mode register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC3S        : 2;
  unsigned char             : 1;
  unsigned char OC3PE       : 1;
  unsigned char OC3M        : 3;
} __BITS_TIM2_CCMR3;
#endif
__IO_REG8_BIT(TIM2_CCMR3,  0x5307, __READ_WRITE, __BITS_TIM2_CCMR3);

/* TIM2 capture/compare enable register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC1E        : 1;
  unsigned char CC1P        : 1;
  unsigned char             : 2;
  unsigned char CC2E        : 1;
  unsigned char CC2P        : 1;
} __BITS_TIM2_CCER1;
#endif
__IO_REG8_BIT(TIM2_CCER1,  0x5308, __READ_WRITE, __BITS_TIM2_CCER1);

/* TIM2 capture/compare enable register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC3E        : 1;
  unsigned char CC3P        : 1;
} __BITS_TIM2_CCER2;
#endif
__IO_REG8_BIT(TIM2_CCER2,  0x5309, __READ_WRITE, __BITS_TIM2_CCER2);

/* TIM2 counter high */
__IO_REG8    (TIM2_CNTRH,  0x530A, __READ_WRITE);
/* TIM2 counter low */
__IO_REG8    (TIM2_CNTRL,  0x530B, __READ_WRITE);
/* TIM2 prescaler register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PSC         : 4;
} __BITS_TIM2_PSCR;
#endif
__IO_REG8_BIT(TIM2_PSCR,   0x530C, __READ_WRITE, __BITS_TIM2_PSCR);

/* TIM2 auto-reload register high */
__IO_REG8    (TIM2_ARRH,   0x530D, __READ_WRITE);
/* TIM2 auto-reload register low */
__IO_REG8    (TIM2_ARRL,   0x530E, __READ_WRITE);
/* TIM2 capture/compare register 1 high */
__IO_REG8    (TIM2_CCR1H,  0x530F, __READ_WRITE);
/* TIM2 capture/compare register 1 low */
__IO_REG8    (TIM2_CCR1L,  0x5310, __READ_WRITE);
/* TIM2 capture/compare reg */
__IO_REG8    (TIM2_CCR2H,  0x5311, __READ_WRITE);
/* TIM2 capture/compare register 2 low */
__IO_REG8    (TIM2_CCR2L,  0x5312, __READ_WRITE);
/* TIM2 capture/compare register 3 high */
__IO_REG8    (TIM2_CCR3H,  0x5313, __READ_WRITE);
/* TIM2 capture/compare register 3 low */
__IO_REG8    (TIM2_CCR3L,  0x5314, __READ_WRITE);

/*-------------------------------------------------------------------------
 *      TIM2 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__



#endif

/*-------------------------------------------------------------------------
 *      TIM2 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_TIM2_CR1_CEN        0x01
#define MASK_TIM2_CR1_UDIS       0x02
#define MASK_TIM2_CR1_URS        0x04
#define MASK_TIM2_CR1_OPM        0x08
#define MASK_TIM2_CR1_ARPE       0x80

#define MASK_TIM2_IER_UIE        0x01
#define MASK_TIM2_IER_CC1IE      0x02
#define MASK_TIM2_IER_CC2IE      0x04
#define MASK_TIM2_IER_CC3IE      0x08
#define MASK_TIM2_IER_TIE        0x40

#define MASK_TIM2_SR1_UIF        0x01
#define MASK_TIM2_SR1_CC1IF      0x02
#define MASK_TIM2_SR1_CC2IF      0x04
#define MASK_TIM2_SR1_CC3IF      0x08
#define MASK_TIM2_SR1_TIF        0x40

#define MASK_TIM2_SR2_CC1OF      0x02
#define MASK_TIM2_SR2_CC2OF      0x04
#define MASK_TIM2_SR2_CC3OF      0x08

#define MASK_TIM2_EGR_UG         0x01
#define MASK_TIM2_EGR_CC1G       0x02
#define MASK_TIM2_EGR_CC2G       0x04
#define MASK_TIM2_EGR_CC3G       0x08
#define MASK_TIM2_EGR_TG         0x40

#define MASK_TIM2_CCMR1_CC1S     0x03
#define MASK_TIM2_CCMR1_OC1PE    0x08
#define MASK_TIM2_CCMR1_OC1M     0x70

#define MASK_TIM2_CCMR2_CC2S     0x03
#define MASK_TIM2_CCMR2_OC2PE    0x08
#define MASK_TIM2_CCMR2_OC2M     0x70

#define MASK_TIM2_CCMR3_CC3S     0x03
#define MASK_TIM2_CCMR3_OC3PE    0x08
#define MASK_TIM2_CCMR3_OC3M     0x70

#define MASK_TIM2_CCER1_CC1E     0x01
#define MASK_TIM2_CCER1_CC1P     0x02
#define MASK_TIM2_CCER1_CC2E     0x10
#define MASK_TIM2_CCER1_CC2P     0x20

#define MASK_TIM2_CCER2_CC3E     0x01
#define MASK_TIM2_CCER2_CC3P     0x02

#define MASK_TIM2_PSCR_PSC       0x0F


/*-------------------------------------------------------------------------
 *      TIM3 register definitions
 *-----------------------------------------------------------------------*/
/* TIM3 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CEN         : 1;
  unsigned char UDIS        : 1;
  unsigned char URS         : 1;
  unsigned char OPM         : 1;
  unsigned char             : 3;
  unsigned char ARPE        : 1;
} __BITS_TIM3_CR1;
#endif
__IO_REG8_BIT(TIM3_CR1,    0x5320, __READ_WRITE, __BITS_TIM3_CR1);

/* TIM3 interrupt enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIE         : 1;
  unsigned char CC1IE       : 1;
  unsigned char CC2IE       : 1;
  unsigned char CC3IE       : 1;
  unsigned char             : 2;
  unsigned char TIE         : 1;
} __BITS_TIM3_IER;
#endif
__IO_REG8_BIT(TIM3_IER,    0x5321, __READ_WRITE, __BITS_TIM3_IER);

/* TIM3 status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIF         : 1;
  unsigned char CC1IF       : 1;
  unsigned char CC2IF       : 1;
  unsigned char CC3IF       : 1;
  unsigned char             : 2;
  unsigned char TIF         : 1;
} __BITS_TIM3_SR1;
#endif
__IO_REG8_BIT(TIM3_SR1,    0x5322, __READ_WRITE, __BITS_TIM3_SR1);

/* TIM3 status register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char CC1OF       : 1;
  unsigned char CC2OF       : 1;
  unsigned char CC3OF       : 1;
} __BITS_TIM3_SR2;
#endif
__IO_REG8_BIT(TIM3_SR2,    0x5323, __READ_WRITE, __BITS_TIM3_SR2);

/* TIM3 event generation register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UG          : 1;
  unsigned char CC1G        : 1;
  unsigned char CC2G        : 1;
  unsigned char CC3G        : 1;
  unsigned char             : 2;
  unsigned char TG          : 1;
} __BITS_TIM3_EGR;
#endif
__IO_REG8_BIT(TIM3_EGR,    0x5324, __WRITE, __BITS_TIM3_EGR);

/* TIM3 capture/compare mode register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC1S        : 2;
  unsigned char             : 1;
  unsigned char OC1PE       : 1;
  unsigned char OC1M        : 3;
} __BITS_TIM3_CCMR1;
#endif
__IO_REG8_BIT(TIM3_CCMR1,  0x5325, __READ_WRITE, __BITS_TIM3_CCMR1);

/* TIM3 capture/compare mode register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC2S        : 2;
  unsigned char             : 1;
  unsigned char OC2PE       : 1;
  unsigned char OC2M        : 3;
} __BITS_TIM3_CCMR2;
#endif
__IO_REG8_BIT(TIM3_CCMR2,  0x5326, __READ_WRITE, __BITS_TIM3_CCMR2);

/* TIM3 capture/compare enable register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC1E        : 1;
  unsigned char CC1P        : 1;
  unsigned char             : 2;
  unsigned char CC2E        : 1;
  unsigned char CC2P        : 1;
} __BITS_TIM3_CCER1;
#endif
__IO_REG8_BIT(TIM3_CCER1,  0x5327, __READ_WRITE, __BITS_TIM3_CCER1);

/* TIM3 counter high */
__IO_REG8    (TIM3_CNTRH,  0x5328, __READ_WRITE);
/* TIM3 counter low */
__IO_REG8    (TIM3_CNTRL,  0x5329, __READ_WRITE);
/* TIM3 prescaler register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PSC         : 4;
} __BITS_TIM3_PSCR;
#endif
__IO_REG8_BIT(TIM3_PSCR,   0x532A, __READ_WRITE, __BITS_TIM3_PSCR);

/* TIM3 auto-reload register high */
__IO_REG8    (TIM3_ARRH,   0x532B, __READ_WRITE);
/* TIM3 auto-reload register low */
__IO_REG8    (TIM3_ARRL,   0x532C, __READ_WRITE);
/* TIM3 capture/compare register 1 high */
__IO_REG8    (TIM3_CCR1H,  0x532D, __READ_WRITE);
/* TIM3 capture/compare register 1 low */
__IO_REG8    (TIM3_CCR1L,  0x532E, __READ_WRITE);
/* TIM3 capture/compare register 2 high */
__IO_REG8    (TIM3_CCR2H,  0x532F, __READ_WRITE);
/* TIM3 capture/compare register 2 low */
__IO_REG8    (TIM3_CCR2L,  0x5330, __READ_WRITE);

/*-------------------------------------------------------------------------
 *      TIM3 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__


#endif

/*-------------------------------------------------------------------------
 *      TIM3 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_TIM3_CR1_CEN        0x01
#define MASK_TIM3_CR1_UDIS       0x02
#define MASK_TIM3_CR1_URS        0x04
#define MASK_TIM3_CR1_OPM        0x08
#define MASK_TIM3_CR1_ARPE       0x80

#define MASK_TIM3_IER_UIE        0x01
#define MASK_TIM3_IER_CC1IE      0x02
#define MASK_TIM3_IER_CC2IE      0x04
#define MASK_TIM3_IER_CC3IE      0x08
#define MASK_TIM3_IER_TIE        0x40

#define MASK_TIM3_SR1_UIF        0x01
#define MASK_TIM3_SR1_CC1IF      0x02
#define MASK_TIM3_SR1_CC2IF      0x04
#define MASK_TIM3_SR1_CC3IF      0x08
#define MASK_TIM3_SR1_TIF        0x40

#define MASK_TIM3_SR2_CC1OF      0x02
#define MASK_TIM3_SR2_CC2OF      0x04
#define MASK_TIM3_SR2_CC3OF      0x08

#define MASK_TIM3_EGR_UG         0x01
#define MASK_TIM3_EGR_CC1G       0x02
#define MASK_TIM3_EGR_CC2G       0x04
#define MASK_TIM3_EGR_CC3G       0x08
#define MASK_TIM3_EGR_TG         0x40

#define MASK_TIM3_CCMR1_CC1S     0x03
#define MASK_TIM3_CCMR1_OC1PE    0x08
#define MASK_TIM3_CCMR1_OC1M     0x70

#define MASK_TIM3_CCMR2_CC2S     0x03
#define MASK_TIM3_CCMR2_OC2PE    0x08
#define MASK_TIM3_CCMR2_OC2M     0x70

#define MASK_TIM3_CCER1_CC1E     0x01
#define MASK_TIM3_CCER1_CC1P     0x02
#define MASK_TIM3_CCER1_CC2E     0x10
#define MASK_TIM3_CCER1_CC2P     0x20

#define MASK_TIM3_PSCR_PSC       0x0F


/*-------------------------------------------------------------------------
 *      TIM4 register definitions
 *-----------------------------------------------------------------------*/
/* TIM4 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CEN         : 1;
  unsigned char UDIS        : 1;
  unsigned char URS         : 1;
  unsigned char OPM         : 1;
  unsigned char             : 3;
  unsigned char ARPE        : 1;
} __BITS_TIM4_CR1;
#endif
__IO_REG8_BIT(TIM4_CR1,    0x5340, __READ_WRITE, __BITS_TIM4_CR1);

/* TIM4 interrupt enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIE         : 1;
  unsigned char             : 5;
  unsigned char TIE         : 1;
} __BITS_TIM4_IER;
#endif
__IO_REG8_BIT(TIM4_IER,    0x5341, __READ_WRITE, __BITS_TIM4_IER);

/* TIM4 status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIF         : 1;
  unsigned char             : 5;
  unsigned char TIF         : 1;
} __BITS_TIM4_SR;
#endif
__IO_REG8_BIT(TIM4_SR,     0x5342, __READ_WRITE, __BITS_TIM4_SR);

/* TIM4 event generation register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UG          : 1;
  unsigned char             : 5;
  unsigned char TG          : 1;
} __BITS_TIM4_EGR;
#endif
__IO_REG8_BIT(TIM4_EGR,    0x5343, __WRITE, __BITS_TIM4_EGR);

/* TIM4 counter */
__IO_REG8    (TIM4_CNTR,   0x5344, __READ_WRITE);
/* TIM4 prescaler register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PSC         : 3;
} __BITS_TIM4_PSCR;
#endif
__IO_REG8_BIT(TIM4_PSCR,   0x5345, __READ_WRITE, __BITS_TIM4_PSCR);

/* TIM4 auto-reload register */
__IO_REG8    (TIM4_ARR,    0x5346, __READ_WRITE);

/*-------------------------------------------------------------------------
 *      TIM4 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__



#endif

/*-------------------------------------------------------------------------
 *      TIM4 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_TIM4_CR1_CEN        0x01
#define MASK_TIM4_CR1_UDIS       0x02
#define MASK_TIM4_CR1_URS        0x04
#define MASK_TIM4_CR1_OPM        0x08
#define MASK_TIM4_CR1_ARPE       0x80

#define MASK_TIM4_IER_UIE        0x01
#define MASK_TIM4_IER_TIE        0x40

#define MASK_TIM4_SR_UIF         0x01
#define MASK_TIM4_SR_TIF         0x40

#define MASK_TIM4_EGR_UG         0x01
#define MASK_TIM4_EGR_TG         0x40

#define MASK_TIM4_PSCR_PSC       0x07


/*-------------------------------------------------------------------------
 *      ADC1 register definitions
 *-----------------------------------------------------------------------*/
/* ADC data buffer registers */
__IO_REG8    (ADC_DB0RH,   0x53E0, __READ);
/* ADC data buffer registers */
__IO_REG8    (ADC_DB0RL,   0x53E1, __READ);
/* ADC data buffer registers */
__IO_REG8    (ADC_DB1RH,   0x53E2, __READ);
/* ADC data buffer registers */
__IO_REG8    (ADC_DB1RL,   0x53E3, __READ);
/* ADC data buffer registers */
__IO_REG8    (ADC_DB2RH,   0x53E4, __READ);
/* ADC data buffer registers */
__IO_REG8    (ADC_DB2RL,   0x53E5, __READ);
/* ADC data buffer registers */
__IO_REG8    (ADC_DB3RH,   0x53E6, __READ);
/* ADC data buffer registers */
__IO_REG8    (ADC_DB3RL,   0x53E7, __READ);
/* ADC data buffer registers */
__IO_REG8    (ADC_DB4RH,   0x53E8, __READ);
/* ADC data buffer registers */
__IO_REG8    (ADC_DB4RL,   0x53E9, __READ);
/* ADC data buffer registers */
__IO_REG8    (ADC_DB5RH,   0x53EA, __READ);
/* ADC data buffer registers */
__IO_REG8    (ADC_DB5RL,   0x53EB, __READ);
/* ADC data buffer registers */
__IO_REG8    (ADC_DB6RH,   0x53EC, __READ);
/* ADC data buffer registers */
__IO_REG8    (ADC_DB6RL,   0x53ED, __READ);
/* ADC data buffer registers */
__IO_REG8    (ADC_DB7RH,   0x53EE, __READ);
/* ADC data buffer registers */
__IO_REG8    (ADC_DB7RL,   0x53EF, __READ);
/* ADC data buffer registers */
__IO_REG8    (ADC_DB8RH,   0x53F0, __READ);
/* ADC data buffer registers */
__IO_REG8    (ADC_DB8RL,   0x53F1, __READ);
/* ADC data buffer registers */
__IO_REG8    (ADC_DB9RH,   0x53F2, __READ);
/* ADC data buffer registers */
__IO_REG8    (ADC_DB9RL,   0x53F3, __READ);
/* ADC control/status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CH          : 4;
  unsigned char AWDIE       : 1;
  unsigned char EOCIE       : 1;
  unsigned char AWD         : 1;
  unsigned char EOC         : 1;
} __BITS_ADC_CSR;
#endif
__IO_REG8_BIT(ADC_CSR,     0x5400, __READ_WRITE, __BITS_ADC_CSR);

/* ADC configuration register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ADON        : 1;
  unsigned char CONT        : 1;
  unsigned char             : 2;
  unsigned char SPSEL       : 3;
} __BITS_ADC_CR1;
#endif
__IO_REG8_BIT(ADC_CR1,     0x5401, __READ_WRITE, __BITS_ADC_CR1);

/* ADC configuration register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char SCAN        : 1;
  unsigned char             : 1;
  unsigned char ALIGN       : 1;
  unsigned char EXTSEL      : 2;
  unsigned char EXTTRIG     : 1;
} __BITS_ADC_CR2;
#endif
__IO_REG8_BIT(ADC_CR2,     0x5402, __READ_WRITE, __BITS_ADC_CR2);

/* ADC configuration register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 6;
  unsigned char OVR         : 1;
  unsigned char DBUF        : 1;
} __BITS_ADC_CR3;
#endif
__IO_REG8_BIT(ADC_CR3,     0x5403, __READ_WRITE, __BITS_ADC_CR3);

/* ADC data register high */
__IO_REG8    (ADC_DRH,     0x5404, __READ);
/* ADC data register low */
__IO_REG8    (ADC_DRL,     0x5405, __READ);
/* ADC Schmitt trigger disable register high */
__IO_REG8    (ADC_TDRH,    0x5406, __READ_WRITE);
/* ADC Schmitt trigger disable register low */
__IO_REG8    (ADC_TDRL,    0x5407, __READ_WRITE);
/* ADC high threshold register high */
__IO_REG8    (ADC_HTRH,    0x5408, __READ_WRITE);
/* ADC high threshold register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char HT          : 2;
} __BITS_ADC_HTRL;
#endif
__IO_REG8_BIT(ADC_HTRL,    0x5409, __READ_WRITE, __BITS_ADC_HTRL);

/* ADC low threshold register high */
__IO_REG8    (ADC_LTRH,    0x540A, __READ_WRITE);
/* ADC low threshold register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LT          : 2;
} __BITS_ADC_LTRL;
#endif
__IO_REG8_BIT(ADC_LTRL,    0x540B, __READ_WRITE, __BITS_ADC_LTRL);

/* ADC analog watchdog status register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char AWS8        : 1;
  unsigned char AWS9        : 1;
} __BITS_ADC_AWSRH;
#endif
__IO_REG8_BIT(ADC_AWSRH,   0x540C, __READ_WRITE, __BITS_ADC_AWSRH);

/* ADC analog watchdog status register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char AWS0        : 1;
  unsigned char AWS1        : 1;
  unsigned char AWS2        : 1;
  unsigned char AWS3        : 1;
  unsigned char AWS4        : 1;
  unsigned char AWS5        : 1;
  unsigned char AWS6        : 1;
  unsigned char AWS7        : 1;
} __BITS_ADC_AWSRL;
#endif
__IO_REG8_BIT(ADC_AWSRL,   0x540D, __READ_WRITE, __BITS_ADC_AWSRL);

/* ADC analog watchdog control register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char AWEN8       : 1;
  unsigned char AWEN9       : 1;
} __BITS_ADC_AWCRH;
#endif
__IO_REG8_BIT(ADC_AWCRH,   0x540E, __READ_WRITE, __BITS_ADC_AWCRH);

/* ADC analog watchdog control register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char AWEN0       : 1;
  unsigned char AWEN1       : 1;
  unsigned char AWEN2       : 1;
  unsigned char AWEN3       : 1;
  unsigned char AWEN4       : 1;
  unsigned char AWEN5       : 1;
  unsigned char AWEN6       : 1;
  unsigned char AWEN7       : 1;
} __BITS_ADC_AWCRL;
#endif
__IO_REG8_BIT(ADC_AWCRL,   0x540F, __READ_WRITE, __BITS_ADC_AWCRL);


/*-------------------------------------------------------------------------
 *      ADC1 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__



#endif

/*-------------------------------------------------------------------------
 *      ADC1 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_ADC_CSR_CH          0x0F
#define MASK_ADC_CSR_AWDIE       0x10
#define MASK_ADC_CSR_EOCIE       0x20
#define MASK_ADC_CSR_AWD         0x40
#define MASK_ADC_CSR_EOC         0x80

#define MASK_ADC_CR1_ADON        0x01
#define MASK_ADC_CR1_CONT        0x02
#define MASK_ADC_CR1_SPSEL       0x70

#define MASK_ADC_CR2_SCAN        0x02
#define MASK_ADC_CR2_ALIGN       0x08
#define MASK_ADC_CR2_EXTSEL      0x30
#define MASK_ADC_CR2_EXTTRIG     0x40

#define MASK_ADC_CR3_OVR         0x40
#define MASK_ADC_CR3_DBUF        0x80

#define MASK_ADC_HTRL_HT         0x03

#define MASK_ADC_LTRL_LT         0x03

#define MASK_ADC_AWSRH_AWS8      0x01
#define MASK_ADC_AWSRH_AWS9      0x02

#define MASK_ADC_AWSRL_AWS0      0x01
#define MASK_ADC_AWSRL_AWS1      0x02
#define MASK_ADC_AWSRL_AWS2      0x04
#define MASK_ADC_AWSRL_AWS3      0x08
#define MASK_ADC_AWSRL_AWS4      0x10
#define MASK_ADC_AWSRL_AWS5      0x20
#define MASK_ADC_AWSRL_AWS6      0x40
#define MASK_ADC_AWSRL_AWS7      0x80

#define MASK_ADC_AWCRH_AWEN8     0x01
#define MASK_ADC_AWCRH_AWEN9     0x02

#define MASK_ADC_AWCRL_AWEN0     0x01
#define MASK_ADC_AWCRL_AWEN1     0x02
#define MASK_ADC_AWCRL_AWEN2     0x04
#define MASK_ADC_AWCRL_AWEN3     0x08
#define MASK_ADC_AWCRL_AWEN4     0x10
#define MASK_ADC_AWCRL_AWEN5     0x20
#define MASK_ADC_AWCRL_AWEN6     0x40
#define MASK_ADC_AWCRL_AWEN7     0x80


/*-------------------------------------------------------------------------
 *      CPU register definitions
 *-----------------------------------------------------------------------*/
/* Accumulator */
__IO_REG8    (CPU_A,       0x7F00, __READ_WRITE);
/* Program counter extended */
__IO_REG8    (CPU_PCE,     0x7F01, __READ_WRITE);
/* Program counter high */
__IO_REG8    (CPU_PCH,     0x7F02, __READ_WRITE);
/* Program counter low */
__IO_REG8    (CPU_PCL,     0x7F03, __READ_WRITE);
/* X index register high */
__IO_REG8    (CPU_XH,      0x7F04, __READ_WRITE);
/* X index register low */
__IO_REG8    (CPU_XL,      0x7F05, __READ_WRITE);
/* Y index register high */
__IO_REG8    (CPU_YH,      0x7F06, __READ_WRITE);
/* Y index register low */
__IO_REG8    (CPU_YL,      0x7F07, __READ_WRITE);
/* Stack pointer high */
__IO_REG8    (CPU_SPH,     0x7F08, __READ_WRITE);
/* Stack pointer low */
__IO_REG8    (CPU_SPL,     0x7F09, __READ_WRITE);
/* Condition code register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C           : 1;
  unsigned char Z           : 1;
  unsigned char NF          : 1;
  unsigned char I0          : 1;
  unsigned char H           : 1;
  unsigned char I1          : 1;
  unsigned char             : 1;
  unsigned char V           : 1;
} __BITS_CPU_CCR;
#endif
__IO_REG8_BIT(CPU_CCR,     0x7F0A, __READ_WRITE, __BITS_CPU_CCR);

/* Global configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SWO         : 1;
  unsigned char AL          : 1;
} __BITS_CPU_CFG_GCR;
#endif
__IO_REG8_BIT(CPU_CFG_GCR, 0x7F60, __READ_WRITE, __BITS_CPU_CFG_GCR);


/*-------------------------------------------------------------------------
 *      CPU bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__



#endif

/*-------------------------------------------------------------------------
 *      CPU bit masks
 *-----------------------------------------------------------------------*/
#define MASK_CPU_CCR_C           0x01
#define MASK_CPU_CCR_Z           0x02
#define MASK_CPU_CCR_NF          0x04
#define MASK_CPU_CCR_I0          0x08
#define MASK_CPU_CCR_H           0x10
#define MASK_CPU_CCR_I1          0x20
#define MASK_CPU_CCR_V           0x80

#define MASK_CPU_CFG_GCR_SWO     0x01
#define MASK_CPU_CFG_GCR_AL      0x02


/*-------------------------------------------------------------------------
 *      ITC - SPR register definitions
 *-----------------------------------------------------------------------*/
/* Interrupt software priority register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT0SPR    : 2;
  unsigned char VECT1SPR    : 2;
  unsigned char VECT2SPR    : 2;
  unsigned char VECT3SPR    : 2;
} __BITS_ITC_SPR1;
#endif
__IO_REG8_BIT(ITC_SPR1,    0x7F70, __READ_WRITE, __BITS_ITC_SPR1);

/* Interrupt software priority register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT4SPR    : 2;
  unsigned char VECT5SPR    : 2;
  unsigned char VECT6SPR    : 2;
  unsigned char VECT7SPR    : 2;
} __BITS_ITC_SPR2;
#endif
__IO_REG8_BIT(ITC_SPR2,    0x7F71, __READ_WRITE, __BITS_ITC_SPR2);

/* Interrupt software priority register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT8SPR    : 2;
  unsigned char VECT9SPR    : 2;
  unsigned char VECT10SPR   : 2;
  unsigned char VECT11SPR   : 2;
} __BITS_ITC_SPR3;
#endif
__IO_REG8_BIT(ITC_SPR3,    0x7F72, __READ_WRITE, __BITS_ITC_SPR3);

/* Interrupt software priority register 4 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT12SPR   : 2;
  unsigned char VECT13SPR   : 2;
  unsigned char VECT14SPR   : 2;
  unsigned char VECT15SPR   : 2;
} __BITS_ITC_SPR4;
#endif
__IO_REG8_BIT(ITC_SPR4,    0x7F73, __READ_WRITE, __BITS_ITC_SPR4);

/* Interrupt software priority register 5 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT16SPR   : 2;
  unsigned char VECT17SPR   : 2;
  unsigned char VECT18SPR   : 2;
  unsigned char VECT19SPR   : 2;
} __BITS_ITC_SPR5;
#endif
__IO_REG8_BIT(ITC_SPR5,    0x7F74, __READ_WRITE, __BITS_ITC_SPR5);

/* Interrupt software priority register 6 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT20SPR   : 2;
  unsigned char VECT21SPR   : 2;
  unsigned char VECT22SPR   : 2;
  unsigned char VECT23SPR   : 2;
} __BITS_ITC_SPR6;
#endif
__IO_REG8_BIT(ITC_SPR6,    0x7F75, __READ_WRITE, __BITS_ITC_SPR6);

/* Interrupt software priority register 7 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT24SPR   : 2;
  unsigned char VECT25SPR   : 2;
  unsigned char VECT26SPR   : 2;
  unsigned char VECT27SPR   : 2;
} __BITS_ITC_SPR7;
#endif
__IO_REG8_BIT(ITC_SPR7,    0x7F76, __READ_WRITE, __BITS_ITC_SPR7);

/* Interrupt software priority register 8 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT28SPR   : 2;
  unsigned char VECT29SPR   : 2;
} __BITS_ITC_SPR8;
#endif
__IO_REG8_BIT(ITC_SPR8,    0x7F77, __READ_WRITE, __BITS_ITC_SPR8);


/*-------------------------------------------------------------------------
 *      ITC - SPR bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__



#endif

/*-------------------------------------------------------------------------
 *      ITC - SPR bit masks
 *-----------------------------------------------------------------------*/
#define MASK_ITC_SPR1_VECT0SPR   0x03
#define MASK_ITC_SPR1_VECT1SPR   0x0C
#define MASK_ITC_SPR1_VECT2SPR   0x30
#define MASK_ITC_SPR1_VECT3SPR   0xC0

#define MASK_ITC_SPR2_VECT4SPR   0x03
#define MASK_ITC_SPR2_VECT5SPR   0x0C
#define MASK_ITC_SPR2_VECT6SPR   0x30
#define MASK_ITC_SPR2_VECT7SPR   0xC0

#define MASK_ITC_SPR3_VECT8SPR   0x03
#define MASK_ITC_SPR3_VECT9SPR   0x0C
#define MASK_ITC_SPR3_VECT10SPR  0x30
#define MASK_ITC_SPR3_VECT11SPR  0xC0

#define MASK_ITC_SPR4_VECT12SPR  0x03
#define MASK_ITC_SPR4_VECT13SPR  0x0C
#define MASK_ITC_SPR4_VECT14SPR  0x30
#define MASK_ITC_SPR4_VECT15SPR  0xC0

#define MASK_ITC_SPR5_VECT16SPR  0x03
#define MASK_ITC_SPR5_VECT17SPR  0x0C
#define MASK_ITC_SPR5_VECT18SPR  0x30
#define MASK_ITC_SPR5_VECT19SPR  0xC0

#define MASK_ITC_SPR6_VECT20SPR  0x03
#define MASK_ITC_SPR6_VECT21SPR  0x0C
#define MASK_ITC_SPR6_VECT22SPR  0x30
#define MASK_ITC_SPR6_VECT23SPR  0xC0

#define MASK_ITC_SPR7_VECT24SPR  0x03
#define MASK_ITC_SPR7_VECT25SPR  0x0C
#define MASK_ITC_SPR7_VECT26SPR  0x30
#define MASK_ITC_SPR7_VECT27SPR  0xC0

#define MASK_ITC_SPR8_VECT28SPR  0x03
#define MASK_ITC_SPR8_VECT29SPR  0x0C


/*-------------------------------------------------------------------------
 *      SWIM register definitions
 *-----------------------------------------------------------------------*/
/* SWIM control status register */
__IO_REG8    (SWIM_CSR,    0x7F80, __READ_WRITE);


/*-------------------------------------------------------------------------
 *      DM register definitions
 *-----------------------------------------------------------------------*/
/* DM breakpoint 1 register extended byte */
__IO_REG8    (DM_BK1RE,    0x7F90, __READ_WRITE);
/* DM breakpoint 1 register high byte */
__IO_REG8    (DM_BK1RH,    0x7F91, __READ_WRITE);
/* DM breakpoint 1 register low byte */
__IO_REG8    (DM_BK1RL,    0x7F92, __READ_WRITE);
/* DM breakpoint 2 register extended byte */
__IO_REG8    (DM_BK2RE,    0x7F93, __READ_WRITE);
/* DM breakpoint 2 register high byte */
__IO_REG8    (DM_BK2RH,    0x7F94, __READ_WRITE);
/* DM breakpoint 2 register low byte */
__IO_REG8    (DM_BK2RL,    0x7F95, __READ_WRITE);
/* DM debug module control register 1 */
__IO_REG8    (DM_CR1,      0x7F96, __READ_WRITE);
/* DM debug module control register 2 */
__IO_REG8    (DM_CR2,      0x7F97, __READ_WRITE);
/* DM debug module control/status register 1 */
__IO_REG8    (DM_CSR1,     0x7F98, __READ_WRITE);
/* DM debug module control/status register 2 */
__IO_REG8    (DM_CSR2,     0x7F99, __READ_WRITE);
/* DM enable function register */
__IO_REG8    (DM_ENFCTR,   0x7F9A, __READ_WRITE);


/*-------------------------------------------------------------------------
 *      Interrupt vector numbers
 *-----------------------------------------------------------------------*/
#define SPI_TXE_vector                       0x0C
#define SPI_RXNE_vector                      0x0C
#define SPI_WKUP_vector                      0x0C
#define SPI_MODF_vector                      0x0C
#define SPI_CRCERR_vector                    0x0C
#define SPI_OVR_vector                       0x0C
#define TIM1_OVR_TIF_vector                  0x0D
#define TIM1_OVR_BIF_vector                  0x0D
#define TIM1_OVR_UIF_vector                  0x0D
#define TIM1_CAPCOM_CC1IF_vector             0x0E
#define TIM1_CAPCOM_CC2IF_vector             0x0E
#define TIM1_CAPCOM_COMIF_vector             0x0E
#define TIM1_CAPCOM_CC4IF_vector             0x0E
#define TIM1_CAPCOM_CC3IF_vector             0x0E
#define TIM2_OVR_UIF_vector                  0x0F
#define TIM2_CAPCOM_CC1IF_vector             0x10
#define TIM2_CAPCOM_CC2IF_vector             0x10
#define TIM2_CAPCOM_CC3IF_vector             0x10
#define TIM2_CAPCOM_TIF_vector               0x10
#define TIM3_OVR_UIF_vector                  0x11
#define TIM3_CAPCOM_TIF_vector               0x12
#define TIM3_CAPCOM_CC1IF_vector             0x12
#define TIM3_CAPCOM_CC2IF_vector             0x12
#define TIM3_CAPCOM_CC3IF_vector             0x12

#define I2C_SB_vector                        0x15
#define I2C_ADDR_vector                      0x15
#define I2C_ADD10_vector                     0x15
#define I2C_STOPF_vector                     0x15
#define I2C_BTF_vector                       0x15
#define I2C_OVR_vector                       0x15
#define I2C_RXNE_vector                      0x15
#define I2C_TXE_vector                       0x15
#define I2C_BERR_vector                      0x15
#define I2C_ARLO_vector                      0x15
#define I2C_AF_vector                        0x15
#define I2C_WUFH_vector                      0x15
#define UART2_T_TXE_vector                   0x16
#define UART2_T_TC_vector                    0x16
#define UART2_R_OR_vector                    0x17
#define UART2_R_RXNE_vector                  0x17
#define UART2_R_IDLE_vector                  0x17
#define UART2_R_PE_vector                    0x17
#define UART2_R_LBDF_vector                  0x17
#define ADC1_AWS2_vector                     0x18
#define ADC1_AWS1_vector                     0x18
#define ADC1_AWS0_vector                     0x18
#define ADC1_AWS3_vector                     0x18
#define ADC1_EOC_vector                      0x18
#define ADC1_AWS5_vector                     0x18
#define ADC1_AWS6_vector                     0x18
#define ADC1_AWS7_vector                     0x18
#define ADC1_AWS8_vector                     0x18
#define ADC1_AWS9_vector                     0x18
#define ADC1_AWDG_vector                     0x18
#define ADC1_AWS4_vector                     0x18
#define TIM4_OVR_UIF_vector                  0x19
#define FLASH_EOP_vector                     0x1A
#define FLASH_WR_PG_DIS_vector               0x1A

#ifdef __IAR_SYSTEMS_ICC__
#pragma language=restore
#endif

#endif    /* __IOSTM8S105C4_H__ */

/*----------------------------------------------
 *      End of file
 *--------------------------------------------*/
