# Application of  Number Theory
* __Def__ |  let ![](https://latex.codecogs.com/gif.latex?a,b&space;\in&space;\mathbb{Z}) we say `a` __divides__ `b` or `b` is __divisible__ by `a` and we writ `a|b`, if ![](https://latex.codecogs.com/gif.latex?\frac{a}{b}=n) where ![](https://latex.codecogs.com/gif.latex?n\in&space;\mathbb{Z}) 
> ![](https://latex.codecogs.com/gif.latex?b=a\cdot{n}), for some ![](https://latex.codecogs.com/gif.latex?n\in\mathbb{Z})

+ __Ex:__ which statement is true?
    1. `2 | 5` : _False_, because ![](https://latex.codecogs.com/gif.latex?\forall&n\in&\mathbb{Z},\space&\space)   ![](https://latex.codecogs.com/gif.latex?5\neq2n).
    2. `4 |24` : _True_, because ![](https://latex.codecogs.com/gif.latex?24=4\times6,\space6\in&\mathbb{Z})
+ |__*Remark*__: |     ![](https://latex.codecogs.com/gif.latex?a|0&space;) ,  ![](https://latex.codecogs.com/gif.latex?\forall&a\in&\mathbb{Z})
##- Properties:
1. If `a X b`, then ![](https://latex.codecogs.com/gif.latex?\exists) `c, r` ![](https://latex.codecogs.com/gif.latex?\in&\mathbb{Z}) such that :
    ![](https://latex.codecogs.com/gif.latex?b=ac+r) , ![](https://latex.codecogs.com/gif.latex?r\neq0)
``
r: remainder,
b: dividend,
a: divisor,
c: quotient
``

    + _Example:_
    1. `3 X 4`, ![](https://latex.codecogs.com/gif.latex?4=3\times&1+1) 
    2. `14 X 102`, ![](https://latex.codecogs.com/gif.latex?102=13\times7+11)
2. If `a | c` and `a | b` the ![](https://latex.codecogs.com/gif.latex?a|(\alpha&a+\beta&b)),  α, β ∈ ℤ
    + Example: 3 | 6 and 3 | 15:
        + `3| ( α6 + β15 ), ∀ α,β ∈ ℤ`
  
        | positive      |    negative   |
        | ---           | ----          |
        | α = 2, β = 5  | α = -3, β = 4 |
        | 3 \| 12 + 75  | 3 \| -45 + 24 |
        | 3 \| 87  √    | 3 \| -21  √   |        
