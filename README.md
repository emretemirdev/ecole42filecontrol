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

### :eyes: Bir klasörde birden fazla dosya arama

Örnek vermek gerekirse ex00 klasörünün içerisinde ft_ft.c && ft_putstr.c && ft_putstr.c olmak üzere üç dosyanın da kontrolünü sağlamak istiyoruz diyelim.

```

char *dirs[] = {"ex00", "ex01",};
char *files[] = {"ft_strlen.c", "ft_putstr.c",};

```
Yukarıda gördüğünüz kod bloğu Ex00'da -> ft_strlen.c dosyasını aramakta Ex01 -> ft_putstr.c dosyasını aramakta.....

Ben ise Ex00 içerisinde ft_ft.c && ft_putstr.c && ft_putstr.c aramak istiyorum bunun için;

```  

char *dirs[] = {"ex00", "ex00","ex00"};
char *files[] = {"ft_ft.c", "ft_putstr.c","putstr.c"};

```
Yazmam yeterli olacaktır. Şimdilik daha hızlı bir çözüm bulamadım. İlerleyen günlerde bunun daha hızlı çalışan versiyonunu yapacağım.

## Roadmap

- [x] Klasör adı ve içindeki dosyaya göre arama yapma
- [ ] Tüm C projeleri için kontrol sağlanması
- [ ] Dosyaların içerisindeki fonksiyonların kontrolü
