# Evaluation points dostu proje

## Nasıl Çalışır?
Öncelikle hangi proje için kullanılacaksa o projenin dosyası indirilir.

Biz `C04` için kullanacağımızı varsayalım ve `c04control.c` dosyamızı indirelim.

Kodun doğru çalışması için dosya dizininiz şu şekilde olmalı;

    users(emtemir)
        └───desktop
            └───c04   
                 └───c04control.c
                 └───ex00
                 └───ex01
                 └───ex02
                 └───ex03
                 └───ex04
                 └───ex05
<img src="https://i.hizliresim.com/spf8es3.png" alt="alt text" width="961" height="546">
                 
`Dosya diziniz bu şekilde olduğu zaman tek yapmanız gereken gcc(gcc c04control.c) ile kodu derlemek ve oluşan ./a.out dosyanızdan sonuçları görmek.`

<img src="https://i.hizliresim.com/3py9ci4.png" alt="DosyaDizin" width="1011" height="530">

`Sadece ex00 klasörünün içindeki dosyanın adını doğru, geri kalanlarının yanlış yazdım ve sonuç yukarıda gördüğünüz gibi.`

## Kişiselleştirme
Bu kodun kullanım amacı belirtilen dizinlerdeki belirtilen dosyaların varlığını kontrol etmek ve dosyaların varlığı durumuna göre bir mesaj göstermektir. Bu kodu kişiselleştirmek için aşağıdaki adımları uygulayabilirsiniz:

Dizin ve dosya isimlerini değiştirin: Öncelikle, `dirs` ve `files` dizilerindeki dosya ve dizin isimlerini kendi isteklerinize göre değiştirin.

Dizin ve dosya sayısını değiştirin: `for` döngüsündeki 6 değerini, kontrol etmek istediğiniz dizin ve dosya sayısına göre değiştirin.

Mesajları değiştirin: `printf` fonksiyonlarındaki mesajları kendi isteklerinize göre değiştirin.

Bu şekilde, bu kodu kişiselleştirebilir ve kendi ihtiyaçlarınıza göre kullanabilirsiniz.

## Roadmap

- [x] Klasör adı ve içindeki dosyaya göre arama yapma
- [ ] Tüm C projeleri için kontrol sağlanması
- [ ] Dosyaların içerisindeki fonksiyonların kontrolü
