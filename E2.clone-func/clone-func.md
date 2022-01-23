# clone(int (*func), void *yigin, int flag, void *arg, ...)

-- Fork() fonksiyonunun yaptığı işin benzerini yapar. Ama aradaki temel fark oluşan yeni process bir önceki process'in çocuğu değil ikizi olarak konumlandırılabilir.

-- Fonksiyonun yapısını incelediğimizde ise 1. parametre yeni oluşan process'in çalıştıracağı fonksiyondur. 2. parametre ise yeni process'in çocuk olarak çalışacağı durumda kullanacağı stack belleğin başlangıç noktasıdır. 3. parametre az önce bahsettiğim durum olan oluşan process'in ne tür akrabalığa sahip olacağını belirleyen bayraktır. 

-- Ancak clone() (anladığım kadarıyla) macOS veya windows üzerinde bir process oluşturmanıza izin vermiyor çünkü sistem çağrılarında bunun karşılığı yok. Linux üzerine geliştirilmiş bir fonksiyon olduğu için yalnızca linux kerneli üzerinde kullanılabiliyor.
