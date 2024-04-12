class Gul:
    def __init__(self, nomi, rangi, kelib_chiqishi, boyi):
        self.nomi = nomi
        self.rangi = rangi
        self.kelib_chiqishi = kelib_chiqishi
        self.boyi = boyi

def gullarni_chiqar(gullar):
    for gul in gullar:
        print("Nomi:", gul.nomi)
        print("Rangi:", gul.rangi)
        print("Kelib chiqishi:", gul.kelib_chiqishi)
        print("Bo'yi:", gul.boyi)
        print()

def gul_qidir(gullar, nomi):
    for gul in gullar:
        if gul.nomi == nomi:
            print()
            print("gul mavjud!")
            print(".............")
            print("Rangi:", gul.rangi)
            print("Kelib chiqishi:", gul.kelib_chiqishi)
            print("Bo'yi:", gul.boyi)
            return
    print("Bunday gul mavjud emas!")

gullar = []
for i in range(1, int(input("gul miqdorini kiriting: "))+1):
    print(f'{i}-gul')
    gullar.append(Gul(input("Nomi: "), input('Rangi: '), input('Kelib chiqishi: '), int(input("Bo'yi: "))))
    print('-----------------')

# gullar ro'yxatini chiqaramiz
print("Barcha gullar:")
print("................")
gullarni_chiqar(gullar)

# gul qidirish
gul_qidir(gullar, input("gul nomi bilan qidiring: "))