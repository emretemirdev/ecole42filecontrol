# Evaluations points dostu proje

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
                 
Dosya diziniz bu şekilde olduğu zaman tek yapmanız gerecek gcc(gcc c04control.c) ile kodu derlemek ve oluşan ./a.out dosyanızdan sonuçları görmek.

<img src="https://drive.google.com/drive/u/0/folders/1yKPohBzjgbPitymuLksJiXE-s0H8tT3p" alt="DosyaDizin" width="320" height="180">
## Template özelleştirme

Şimdi artık biraz eğlenip template'inizi özelleştirmeyi deneyebilirsiniz! İşte bunun için faydalı birkaç etiket:

* `<h1>Bir başlık</h1>` en önemli başlığınız (ana başlık)
* `<h2>Bir alt başlık</h2>` - bir sonraki seviyedeki bir başlık için
* `<h3>Bir alt-alt başlık</h3>`…ve böyle `<h6>`'ya kadar gider
* `<p>Metin paragrafı</p>`
* `<em>metin</em>` metni vurgular
* `<strong>metin</strong>` metni iyice vurgular
* `<br>`alt satıra gider (br etiketi ve > işaretinin arasına bir şey konulmaz)
* `<a href="https://djangogirls.org">bağlantı</a>` bağlantı oluşturur
* `<ul><li>ilk madde</li><li>ikinci madde</li></ul>` - tıpkı bunun gibi bir liste yapar!
* `<div></div>` - sayfanın bir bölümünü tanımlar

