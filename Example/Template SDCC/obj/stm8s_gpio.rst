                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ISO C Compiler 
                                      3 ; Version 4.3.0 #14184 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module stm8s_gpio
                                      6 	.optsdcc -mstm8
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _GPIO_DeInit
                                     12 	.globl _GPIO_Init
                                     13 	.globl _GPIO_Write
                                     14 	.globl _GPIO_WriteHigh
                                     15 	.globl _GPIO_WriteLow
                                     16 	.globl _GPIO_WriteReverse
                                     17 	.globl _GPIO_ReadOutputData
                                     18 	.globl _GPIO_ReadInputData
                                     19 	.globl _GPIO_ReadInputPin
                                     20 	.globl _GPIO_ExternalPullUpConfig
                                     21 ;--------------------------------------------------------
                                     22 ; ram data
                                     23 ;--------------------------------------------------------
                                     24 	.area DATA
                                     25 ;--------------------------------------------------------
                                     26 ; ram data
                                     27 ;--------------------------------------------------------
                                     28 	.area INITIALIZED
                                     29 ;--------------------------------------------------------
                                     30 ; absolute external ram data
                                     31 ;--------------------------------------------------------
                                     32 	.area DABS (ABS)
                                     33 
                                     34 ; default segment ordering for linker
                                     35 	.area HOME
                                     36 	.area GSINIT
                                     37 	.area GSFINAL
                                     38 	.area CONST
                                     39 	.area INITIALIZER
                                     40 	.area CODE
                                     41 
                                     42 ;--------------------------------------------------------
                                     43 ; global & static initialisations
                                     44 ;--------------------------------------------------------
                                     45 	.area HOME
                                     46 	.area GSINIT
                                     47 	.area GSFINAL
                                     48 	.area GSINIT
                                     49 ;--------------------------------------------------------
                                     50 ; Home
                                     51 ;--------------------------------------------------------
                                     52 	.area HOME
                                     53 	.area HOME
                                     54 ;--------------------------------------------------------
                                     55 ; code
                                     56 ;--------------------------------------------------------
                                     57 	.area CODE
                                     58 ;	lib/src/stm8s_gpio.c: 53: void GPIO_DeInit(GPIO_TypeDef* GPIOx)
                                     59 ;	-----------------------------------------
                                     60 ;	 function GPIO_DeInit
                                     61 ;	-----------------------------------------
      00808C                         62 _GPIO_DeInit:
      00808C 51               [ 1]   63 	exgw	x, y
                                     64 ;	lib/src/stm8s_gpio.c: 55: GPIOx->ODR = GPIO_ODR_RESET_VALUE; /* Reset Output Data Register */
      00808D 90 7F            [ 1]   65 	clr	(y)
                                     66 ;	lib/src/stm8s_gpio.c: 56: GPIOx->DDR = GPIO_DDR_RESET_VALUE; /* Reset Data Direction Register */
      00808F 93               [ 1]   67 	ldw	x, y
      008090 5C               [ 1]   68 	incw	x
      008091 5C               [ 1]   69 	incw	x
      008092 7F               [ 1]   70 	clr	(x)
                                     71 ;	lib/src/stm8s_gpio.c: 57: GPIOx->CR1 = GPIO_CR1_RESET_VALUE; /* Reset Control Register 1 */
      008093 93               [ 1]   72 	ldw	x, y
      008094 6F 03            [ 1]   73 	clr	(0x0003, x)
                                     74 ;	lib/src/stm8s_gpio.c: 58: GPIOx->CR2 = GPIO_CR2_RESET_VALUE; /* Reset Control Register 2 */
      008096 93               [ 1]   75 	ldw	x, y
      008097 6F 04            [ 1]   76 	clr	(0x0004, x)
                                     77 ;	lib/src/stm8s_gpio.c: 59: }
      008099 81               [ 4]   78 	ret
                                     79 ;	lib/src/stm8s_gpio.c: 71: void GPIO_Init(GPIO_TypeDef* GPIOx, GPIO_Pin_TypeDef GPIO_Pin, GPIO_Mode_TypeDef GPIO_Mode)
                                     80 ;	-----------------------------------------
                                     81 ;	 function GPIO_Init
                                     82 ;	-----------------------------------------
      00809A                         83 _GPIO_Init:
      00809A 52 06            [ 2]   84 	sub	sp, #6
      00809C 51               [ 1]   85 	exgw	x, y
      00809D 6B 06            [ 1]   86 	ld	(0x06, sp), a
                                     87 ;	lib/src/stm8s_gpio.c: 81: GPIOx->CR2 &= (uint8_t)(~(GPIO_Pin));
      00809F 93               [ 1]   88 	ldw	x, y
      0080A0 1C 00 04         [ 2]   89 	addw	x, #0x0004
      0080A3 1F 01            [ 2]   90 	ldw	(0x01, sp), x
      0080A5 F6               [ 1]   91 	ld	a, (x)
      0080A6 88               [ 1]   92 	push	a
      0080A7 7B 07            [ 1]   93 	ld	a, (0x07, sp)
      0080A9 43               [ 1]   94 	cpl	a
      0080AA 6B 04            [ 1]   95 	ld	(0x04, sp), a
      0080AC 84               [ 1]   96 	pop	a
      0080AD 14 03            [ 1]   97 	and	a, (0x03, sp)
      0080AF 1E 01            [ 2]   98 	ldw	x, (0x01, sp)
      0080B1 F7               [ 1]   99 	ld	(x), a
                                    100 ;	lib/src/stm8s_gpio.c: 98: GPIOx->DDR |= (uint8_t)GPIO_Pin;
      0080B2 93               [ 1]  101 	ldw	x, y
      0080B3 5C               [ 1]  102 	incw	x
      0080B4 5C               [ 1]  103 	incw	x
      0080B5 1F 04            [ 2]  104 	ldw	(0x04, sp), x
                                    105 ;	lib/src/stm8s_gpio.c: 87: if ((((uint8_t)(GPIO_Mode)) & (uint8_t)0x80) != (uint8_t)0x00) /* Output mode */
      0080B7 0D 09            [ 1]  106 	tnz	(0x09, sp)
      0080B9 2A 1E            [ 1]  107 	jrpl	00105$
                                    108 ;	lib/src/stm8s_gpio.c: 91: GPIOx->ODR |= (uint8_t)GPIO_Pin;
      0080BB 90 F6            [ 1]  109 	ld	a, (y)
                                    110 ;	lib/src/stm8s_gpio.c: 89: if ((((uint8_t)(GPIO_Mode)) & (uint8_t)0x10) != (uint8_t)0x00) /* High level */
      0080BD 88               [ 1]  111 	push	a
      0080BE 7B 0A            [ 1]  112 	ld	a, (0x0a, sp)
      0080C0 A5 10            [ 1]  113 	bcp	a, #0x10
      0080C2 84               [ 1]  114 	pop	a
      0080C3 27 06            [ 1]  115 	jreq	00102$
                                    116 ;	lib/src/stm8s_gpio.c: 91: GPIOx->ODR |= (uint8_t)GPIO_Pin;
      0080C5 1A 06            [ 1]  117 	or	a, (0x06, sp)
      0080C7 90 F7            [ 1]  118 	ld	(y), a
      0080C9 20 04            [ 2]  119 	jra	00103$
      0080CB                        120 00102$:
                                    121 ;	lib/src/stm8s_gpio.c: 95: GPIOx->ODR &= (uint8_t)(~(GPIO_Pin));
      0080CB 14 03            [ 1]  122 	and	a, (0x03, sp)
      0080CD 90 F7            [ 1]  123 	ld	(y), a
      0080CF                        124 00103$:
                                    125 ;	lib/src/stm8s_gpio.c: 98: GPIOx->DDR |= (uint8_t)GPIO_Pin;
      0080CF 1E 04            [ 2]  126 	ldw	x, (0x04, sp)
      0080D1 F6               [ 1]  127 	ld	a, (x)
      0080D2 1A 06            [ 1]  128 	or	a, (0x06, sp)
      0080D4 1E 04            [ 2]  129 	ldw	x, (0x04, sp)
      0080D6 F7               [ 1]  130 	ld	(x), a
      0080D7 20 08            [ 2]  131 	jra	00106$
      0080D9                        132 00105$:
                                    133 ;	lib/src/stm8s_gpio.c: 103: GPIOx->DDR &= (uint8_t)(~(GPIO_Pin));
      0080D9 1E 04            [ 2]  134 	ldw	x, (0x04, sp)
      0080DB F6               [ 1]  135 	ld	a, (x)
      0080DC 14 03            [ 1]  136 	and	a, (0x03, sp)
      0080DE 1E 04            [ 2]  137 	ldw	x, (0x04, sp)
      0080E0 F7               [ 1]  138 	ld	(x), a
      0080E1                        139 00106$:
                                    140 ;	lib/src/stm8s_gpio.c: 112: GPIOx->CR1 |= (uint8_t)GPIO_Pin;
      0080E1 93               [ 1]  141 	ldw	x, y
      0080E2 1C 00 03         [ 2]  142 	addw	x, #0x0003
      0080E5 F6               [ 1]  143 	ld	a, (x)
                                    144 ;	lib/src/stm8s_gpio.c: 110: if ((((uint8_t)(GPIO_Mode)) & (uint8_t)0x40) != (uint8_t)0x00) /* Pull-Up or Push-Pull */
      0080E6 88               [ 1]  145 	push	a
      0080E7 7B 0A            [ 1]  146 	ld	a, (0x0a, sp)
      0080E9 A5 40            [ 1]  147 	bcp	a, #0x40
      0080EB 84               [ 1]  148 	pop	a
      0080EC 27 05            [ 1]  149 	jreq	00108$
                                    150 ;	lib/src/stm8s_gpio.c: 112: GPIOx->CR1 |= (uint8_t)GPIO_Pin;
      0080EE 1A 06            [ 1]  151 	or	a, (0x06, sp)
      0080F0 F7               [ 1]  152 	ld	(x), a
      0080F1 20 03            [ 2]  153 	jra	00109$
      0080F3                        154 00108$:
                                    155 ;	lib/src/stm8s_gpio.c: 116: GPIOx->CR1 &= (uint8_t)(~(GPIO_Pin));
      0080F3 14 03            [ 1]  156 	and	a, (0x03, sp)
      0080F5 F7               [ 1]  157 	ld	(x), a
      0080F6                        158 00109$:
                                    159 ;	lib/src/stm8s_gpio.c: 81: GPIOx->CR2 &= (uint8_t)(~(GPIO_Pin));
      0080F6 1E 01            [ 2]  160 	ldw	x, (0x01, sp)
      0080F8 F6               [ 1]  161 	ld	a, (x)
                                    162 ;	lib/src/stm8s_gpio.c: 123: if ((((uint8_t)(GPIO_Mode)) & (uint8_t)0x20) != (uint8_t)0x00) /* Interrupt or Slow slope */
      0080F9 88               [ 1]  163 	push	a
      0080FA 7B 0A            [ 1]  164 	ld	a, (0x0a, sp)
      0080FC A5 20            [ 1]  165 	bcp	a, #0x20
      0080FE 84               [ 1]  166 	pop	a
      0080FF 27 07            [ 1]  167 	jreq	00111$
                                    168 ;	lib/src/stm8s_gpio.c: 125: GPIOx->CR2 |= (uint8_t)GPIO_Pin;
      008101 1A 06            [ 1]  169 	or	a, (0x06, sp)
      008103 1E 01            [ 2]  170 	ldw	x, (0x01, sp)
      008105 F7               [ 1]  171 	ld	(x), a
      008106 20 05            [ 2]  172 	jra	00113$
      008108                        173 00111$:
                                    174 ;	lib/src/stm8s_gpio.c: 129: GPIOx->CR2 &= (uint8_t)(~(GPIO_Pin));
      008108 14 03            [ 1]  175 	and	a, (0x03, sp)
      00810A 1E 01            [ 2]  176 	ldw	x, (0x01, sp)
      00810C F7               [ 1]  177 	ld	(x), a
      00810D                        178 00113$:
                                    179 ;	lib/src/stm8s_gpio.c: 131: }
      00810D 5B 06            [ 2]  180 	addw	sp, #6
      00810F 85               [ 2]  181 	popw	x
      008110 84               [ 1]  182 	pop	a
      008111 FC               [ 2]  183 	jp	(x)
                                    184 ;	lib/src/stm8s_gpio.c: 141: void GPIO_Write(GPIO_TypeDef* GPIOx, uint8_t PortVal)
                                    185 ;	-----------------------------------------
                                    186 ;	 function GPIO_Write
                                    187 ;	-----------------------------------------
      008112                        188 _GPIO_Write:
                                    189 ;	lib/src/stm8s_gpio.c: 143: GPIOx->ODR = PortVal;
      008112 F7               [ 1]  190 	ld	(x), a
                                    191 ;	lib/src/stm8s_gpio.c: 144: }
      008113 81               [ 4]  192 	ret
                                    193 ;	lib/src/stm8s_gpio.c: 154: void GPIO_WriteHigh(GPIO_TypeDef* GPIOx, GPIO_Pin_TypeDef PortPins)
                                    194 ;	-----------------------------------------
                                    195 ;	 function GPIO_WriteHigh
                                    196 ;	-----------------------------------------
      008114                        197 _GPIO_WriteHigh:
      008114 88               [ 1]  198 	push	a
      008115 6B 01            [ 1]  199 	ld	(0x01, sp), a
                                    200 ;	lib/src/stm8s_gpio.c: 156: GPIOx->ODR |= (uint8_t)PortPins;
      008117 F6               [ 1]  201 	ld	a, (x)
      008118 1A 01            [ 1]  202 	or	a, (0x01, sp)
      00811A F7               [ 1]  203 	ld	(x), a
                                    204 ;	lib/src/stm8s_gpio.c: 157: }
      00811B 84               [ 1]  205 	pop	a
      00811C 81               [ 4]  206 	ret
                                    207 ;	lib/src/stm8s_gpio.c: 167: void GPIO_WriteLow(GPIO_TypeDef* GPIOx, GPIO_Pin_TypeDef PortPins)
                                    208 ;	-----------------------------------------
                                    209 ;	 function GPIO_WriteLow
                                    210 ;	-----------------------------------------
      00811D                        211 _GPIO_WriteLow:
      00811D 88               [ 1]  212 	push	a
                                    213 ;	lib/src/stm8s_gpio.c: 169: GPIOx->ODR &= (uint8_t)(~PortPins);
      00811E 88               [ 1]  214 	push	a
      00811F F6               [ 1]  215 	ld	a, (x)
      008120 6B 02            [ 1]  216 	ld	(0x02, sp), a
      008122 84               [ 1]  217 	pop	a
      008123 43               [ 1]  218 	cpl	a
      008124 14 01            [ 1]  219 	and	a, (0x01, sp)
      008126 F7               [ 1]  220 	ld	(x), a
                                    221 ;	lib/src/stm8s_gpio.c: 170: }
      008127 84               [ 1]  222 	pop	a
      008128 81               [ 4]  223 	ret
                                    224 ;	lib/src/stm8s_gpio.c: 180: void GPIO_WriteReverse(GPIO_TypeDef* GPIOx, GPIO_Pin_TypeDef PortPins)
                                    225 ;	-----------------------------------------
                                    226 ;	 function GPIO_WriteReverse
                                    227 ;	-----------------------------------------
      008129                        228 _GPIO_WriteReverse:
      008129 88               [ 1]  229 	push	a
      00812A 6B 01            [ 1]  230 	ld	(0x01, sp), a
                                    231 ;	lib/src/stm8s_gpio.c: 182: GPIOx->ODR ^= (uint8_t)PortPins;
      00812C F6               [ 1]  232 	ld	a, (x)
      00812D 18 01            [ 1]  233 	xor	a, (0x01, sp)
      00812F F7               [ 1]  234 	ld	(x), a
                                    235 ;	lib/src/stm8s_gpio.c: 183: }
      008130 84               [ 1]  236 	pop	a
      008131 81               [ 4]  237 	ret
                                    238 ;	lib/src/stm8s_gpio.c: 191: uint8_t GPIO_ReadOutputData(GPIO_TypeDef* GPIOx)
                                    239 ;	-----------------------------------------
                                    240 ;	 function GPIO_ReadOutputData
                                    241 ;	-----------------------------------------
      008132                        242 _GPIO_ReadOutputData:
                                    243 ;	lib/src/stm8s_gpio.c: 193: return ((uint8_t)GPIOx->ODR);
      008132 F6               [ 1]  244 	ld	a, (x)
                                    245 ;	lib/src/stm8s_gpio.c: 194: }
      008133 81               [ 4]  246 	ret
                                    247 ;	lib/src/stm8s_gpio.c: 202: uint8_t GPIO_ReadInputData(GPIO_TypeDef* GPIOx)
                                    248 ;	-----------------------------------------
                                    249 ;	 function GPIO_ReadInputData
                                    250 ;	-----------------------------------------
      008134                        251 _GPIO_ReadInputData:
                                    252 ;	lib/src/stm8s_gpio.c: 204: return ((uint8_t)GPIOx->IDR);
      008134 E6 01            [ 1]  253 	ld	a, (0x1, x)
                                    254 ;	lib/src/stm8s_gpio.c: 205: }
      008136 81               [ 4]  255 	ret
                                    256 ;	lib/src/stm8s_gpio.c: 213: BitStatus GPIO_ReadInputPin(GPIO_TypeDef* GPIOx, GPIO_Pin_TypeDef GPIO_Pin)
                                    257 ;	-----------------------------------------
                                    258 ;	 function GPIO_ReadInputPin
                                    259 ;	-----------------------------------------
      008137                        260 _GPIO_ReadInputPin:
      008137 88               [ 1]  261 	push	a
      008138 6B 01            [ 1]  262 	ld	(0x01, sp), a
                                    263 ;	lib/src/stm8s_gpio.c: 215: return ((BitStatus)(GPIOx->IDR & (uint8_t)GPIO_Pin));
      00813A E6 01            [ 1]  264 	ld	a, (0x1, x)
      00813C 14 01            [ 1]  265 	and	a, (0x01, sp)
      00813E 40               [ 1]  266 	neg	a
      00813F 4F               [ 1]  267 	clr	a
      008140 49               [ 1]  268 	rlc	a
                                    269 ;	lib/src/stm8s_gpio.c: 216: }
      008141 5B 01            [ 2]  270 	addw	sp, #1
      008143 81               [ 4]  271 	ret
                                    272 ;	lib/src/stm8s_gpio.c: 225: void GPIO_ExternalPullUpConfig(GPIO_TypeDef* GPIOx, GPIO_Pin_TypeDef GPIO_Pin, FunctionalState NewState)
                                    273 ;	-----------------------------------------
                                    274 ;	 function GPIO_ExternalPullUpConfig
                                    275 ;	-----------------------------------------
      008144                        276 _GPIO_ExternalPullUpConfig:
      008144 88               [ 1]  277 	push	a
                                    278 ;	lib/src/stm8s_gpio.c: 233: GPIOx->CR1 |= (uint8_t)GPIO_Pin;
      008145 1C 00 03         [ 2]  279 	addw	x, #0x0003
      008148 88               [ 1]  280 	push	a
      008149 F6               [ 1]  281 	ld	a, (x)
      00814A 6B 02            [ 1]  282 	ld	(0x02, sp), a
      00814C 84               [ 1]  283 	pop	a
                                    284 ;	lib/src/stm8s_gpio.c: 231: if (NewState != DISABLE) /* External Pull-Up Set*/
      00814D 0D 04            [ 1]  285 	tnz	(0x04, sp)
      00814F 27 05            [ 1]  286 	jreq	00102$
                                    287 ;	lib/src/stm8s_gpio.c: 233: GPIOx->CR1 |= (uint8_t)GPIO_Pin;
      008151 1A 01            [ 1]  288 	or	a, (0x01, sp)
      008153 F7               [ 1]  289 	ld	(x), a
      008154 20 04            [ 2]  290 	jra	00104$
      008156                        291 00102$:
                                    292 ;	lib/src/stm8s_gpio.c: 236: GPIOx->CR1 &= (uint8_t)(~(GPIO_Pin));
      008156 43               [ 1]  293 	cpl	a
      008157 14 01            [ 1]  294 	and	a, (0x01, sp)
      008159 F7               [ 1]  295 	ld	(x), a
      00815A                        296 00104$:
                                    297 ;	lib/src/stm8s_gpio.c: 238: }
      00815A 84               [ 1]  298 	pop	a
      00815B 85               [ 2]  299 	popw	x
      00815C 84               [ 1]  300 	pop	a
      00815D FC               [ 2]  301 	jp	(x)
                                    302 	.area CODE
                                    303 	.area CONST
                                    304 	.area INITIALIZER
                                    305 	.area CABS (ABS)
