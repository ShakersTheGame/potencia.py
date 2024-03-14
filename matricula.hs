import Data.Char


-- não modifique estas definições!
type Letras = (Char,Char)          -- um bloco de letras
type Digitos = (Int,Int)           -- um bloco de algarismos
type Matricula = (Letras, Digitos, Letras)  -- uma matrícula


blocoletras :: Letras -> Bool
blocoletras (a,b) = (isLetter a && isUpper a) && (isLetter b && isUpper b)

bloconumeros :: Digitos -> Bool
bloconumeros (c,d) = (c >= 0 && c<= 9) && (d >= 0 && d <= 9) && isDigit (intToDigit c) && isDigit (intToDigit d)

valida :: Matricula -> Bool
valida ((a,b),(c,d),(e,f)) = blocoletras (a,b) && bloconumeros (c,d) && blocoletras (e,f)

incNumeros :: Digitos -> Digitos
incNumeros (0,d) = (0,d+1)
    
    if (0,d) then (0,d+1) else
                        if (0,9) then (c+1,0) else 
                            if (9,9) then (0,0) else 
                                