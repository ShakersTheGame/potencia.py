import Data.Char

binom :: Integer -> Integer -> Integer
binom n k = (product [1..n]) `div` (product [1..k] * product[1..n-k])

-- usar `...` em funcoes que ja estao definidas em haskell ~


pascal :: Integer -> [[Integer]]
pascal n = [[binom x y | y<- [0..x]] | x <- [0..n]]

{- uso duas listas em compreensao pois eu quero uma lista de listas 
a lista de dentro  é para o Y e a lista de fora é para o X

1 lista em compreensao é semellhante a um for loop -}

-- definir a funcao or 

forte :: String -> Bool
forte s = (length s >= 8 )
    && or [isUpper c | c <- s ]
    && or [isLower c | c <- s]
    && or [isDigit c | c <- s]

-- password é forte se: += 8 caracteres min 1 letra maiuscula min 1 letra minuscula min 1 algarismo

myor :: [Bool] -> Bool
myor [] = False
myor (x:xs)| x == True  = True
           | otherwise  = myor xs


myand :: [Bool] -> Bool
myand [] = True
myand (x:xs) | x == True && myand xs == True    = True
             | otherwise    = False

myconcat :: [[a]] -> [a]
myconcat [] = []
myconcat (x:xs) = x ++ myconcat xs

myreplicate :: Int -> a -> [a]
myreplicate 0 x = []
myreplicate n x = x : myreplicate (n-1) x

