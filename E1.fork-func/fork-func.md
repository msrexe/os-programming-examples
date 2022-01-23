# Fork()
-- O an programımız için oluşturulmuş ve çalışan process'in içindeki tüm değişkenleri kopyalayarak birebir kopyasını oluşturur ve bu yeni process'i mevcut process'imizin altına child process olarak ekler.

-- Bu yeni oluşan child ve var olan parent process'i birbirinden ayırmak ve farklı işlemler yaptırabilmek için process id'lerinden (pid) yararlanırız. Fork fonksiyonu çalıştığında child process için 0, parent process için 0'dan farklı bir değer (pid) döner.  
