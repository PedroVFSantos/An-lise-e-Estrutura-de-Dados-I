import qualified Data.Set as Set

-- Função que encontra os pares cuja soma é 10
encontrarParesComSoma10 :: [Int] -> [(Int, Int)]
encontrarParesComSoma10 nums = encontrar nums Set.empty
  where
    encontrar [] _ = []
    encontrar (x:xs) set =
      let complemento = 10 - x
      in if complemento `Set.member` set
         then (x, complemento) : encontrar xs set
         else encontrar xs (Set.insert x set)

-- Função principal para testar
main :: IO ()
main = do
    let numeros = [2, 8, 5, 1, 10, 7, 3, 9, 4, 6]
    let pares = encontrarParesComSoma10(numeros)
    mapM_ print pares

