# push_swap

```
100 = less than 700 : 5
      less than 900 : 4
      less than 1100 : 3
      less than 1300 : 2
      less than 1500 : 1

500 = less than 5500 : 5
      less than 7000 : 4
      less than 8500 : 3
      less than 10000 : 2
      less than 11500 : 1
```

## Testers

- [push_swap_tester](https://github.com/LeoFu9487/push_swap_tester)
- [push_swap_visualizer](https://github.com/o-reo/push_swap_visualizer)

## Leaks

```
valgrind -s --track-origins=yes
```

## My own tests
### parsing and error tests

```
NOT ERRORS :
./push_swap 
./push_swap 1
./push_swap 1 2 3
./push_swap 1 2 3 4 5 6 7 8 9 10
./push_swap " 33 2 1"
./push_swap "33 2 1"
./push_swap "33 2 1 "
./push_swap "33 2     1 "
./push_swap "33 2     1             "
./push_swap "3 2 1"
./push_swap "2 1"
./push_swap "3 2 1  5 4 3     66 77        "
./push_swap "3 2 -1"
./push_swap 2147483647 0 -2147483648
./push_swap "2147483647 0 -2147483648"
```

```
ERRORS :
./push_swap "3 2 1-"
./push_swap "3 2 1 -"
./push_swap "3 2 - 1"
./push_swap "33 2     1            a"
./push_swap "33 2     a1            a"
./push_swap "a33 2     1            "
./push_swap "33 2     a1            "
```

### sort_five behavior examples

```
ab ab ab ab ab ab ab ab
4  1  41 21 42 32 21 1 
3  4  3  4  31 41 3  2
5  3  5  3  5  5  4  3
2  5  2  5        5  4
1  2                 5

ab ab ab ab ab ab ab ab ab
5  1  41 21 32 42 32 21 1
1  4  2  3  51 31 41 3  2
4  2  3  5  4  5  5  4  3
2  3  5  4           5  4
3  5                    5

ab ab ab ab ab 
4  1  41 21 1 
2  4  2  3  2
3  2  3  4  3
1  3        4
```

### sort_100 ranges 

```
Median = 50
block = 15
Range 1 = 30 : min = median - block, max = median + block
Range 2 = 30 : 
Range 3 = 30 : 
Range 4 = 10: min and max remaining numbers
	TOP BLOCK	DOWN BLOCK	are push in stack B than rotate if < median
1 : 65 to 50  | 35 to 51 
2 : 66 to 80  | 20 to 34
3 : 81 to 95  | 5 to 19
4 : 96 to 100 | 1 to 4
```

### Number generator

[Random number generator](https://www.calculatorsoup.com/calculators/statistics/random-number-generator.php)

#### sort_100

```
./push_swap 84 67 71 14 82 58 95 60 85 92 15 31 9 45 97 73 26 13 39 86 61 80 6 24 79 35 93 44 17 52 37 75 87 56 29 59 90 81 53 77 3 46 22 2 28 83 68 70 11 99 16 19 43 5 12 57 76 98 64 51 25 18 94 48 63 74 50 96 78 23 54 30 10 42 34 69 33 89 41 66 8 38 100 36 32 47 55 21 88 27 4 65 1 62 40 7 49 72 91 20
```

#### sort_500

```
./push_swap 23 414 219 430 39 499 371 283 422 113 361 275 328 226 161 394 21 424 183 367 309 338 321 261 250 78 442 5 6 57 363 122 143 140 129 496 258 190 300 390 41 70 133 431 302 10 299 348 112 318 495 464 44 346 255 444 241 68 62 227 40 293 284 483 47 71 222 184 460 32 307 93 151 429 253 322 155 316 435 391 462 185 331 473 335 213 475 156 114 211 500 238 94 115 349 19 298 439 135 245 486 487 38 409 9 426 301 172 141 389 317 205 276 415 223 88 485 334 242 396 207 405 402 233 36 3 66 465 87 243 42 427 356 468 478 420 401 386 260 109 102 4 180 476 95 314 358 381 132 174 234 330 158 148 277 169 163 440 425 237 248 165 166 212 432 11 257 343 139 350 327 407 342 296 116 423 111 291 285 79 369 351 344 325 206 490 142 377 436 382 225 7 198 37 411 89 104 214 197 265 61 365 176 215 125 383 449 216 491 458 187 493 202 290 150 244 45 24 52 97 224 51 360 479 152 305 445 128 74 313 50 304 171 398 452 463 159 347 380 77 103 403 209 461 59 119 64 454 450 86 470 419 229 413 489 146 191 340 288 311 81 186 134 368 20 320 145 175 280 273 324 178 123 201 294 387 25 378 232 337 55 149 181 384 451 262 366 271 82 208 270 167 100 218 107 306 76 240 27 195 210 421 373 326 26 456 31 1 144 268 477 118 160 110 126 92 482 170 221 67 127 28 73 370 106 408 168 418 399 236 443 90 22 49 374 329 397 416 179 323 228 48 364 96 164 272 488 446 281 379 199 2 203 46 494 259 438 30 130 447 43 12 196 312 404 480 345 292 332 121 18 17 412 91 131 441 13 193 105 189 437 310 65 492 33 267 406 194 231 124 410 433 84 279 319 336 99 69 85 400 63 472 154 315 466 182 341 120 35 359 474 75 354 385 303 286 247 249 375 264 417 251 235 101 138 297 239 14 498 395 448 72 15 481 269 53 357 8 392 29 428 295 230 204 117 278 192 352 173 157 355 376 108 372 469 147 388 274 457 98 282 16 339 467 56 289 266 153 459 220 263 54 393 254 308 188 353 246 434 256 177 217 453 497 471 60 362 136 58 80 484 455 34 333 137 252 83 200 162 287
```

## print fonctions
### print_stack

```
void print_stack(t_stack *numbers, char a, char b)
{
	if (a == 'a')
	{
		printf("stack AAAAAA : \n");
		print_number(numbers->a, numbers->size_a);
		printf("size_a : %zu\n", numbers->size_a);
	}
	if (b == 'b')
	{
		printf("stack BBBBBB : \n");
		print_number(numbers->b, numbers->size_b);
		printf("size_b : %zu\n", numbers->size_b);
	}
}
```
### print_moves

```
void	print_moves(t_stack *stack)
{
	int	i;

	i = -1;
	printf("\033[0;32mSTACK A  \033[0;37m");
	while (stack->a[++i] != 0)
		printf("[\033[0;36m%03d\033[0;37m]", stack->a[i]);
	printf("\n");
	i = -1;
	printf("\033[0;33mSTACK B  \033[0;37m");
	while (stack->b[++i] != 0)
		printf("[\033[0;36m%03d\033[0;37m]", stack->b[i]);
	printf("\n");
}
```
