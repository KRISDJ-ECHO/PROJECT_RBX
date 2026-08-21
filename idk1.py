nilai2 = input("Masukkan nilai: ")
nilai = int(nilai2)
match nilai:
    case n if n >= 90:
        print('Nilai A')
    case n if n >= 80 and n <= 89:
        print('Nilai B')
    case n if n >= 70 and n <= 79:
        print('Nilai C')
    case n if n >= 60 and n <= 69:
        print('Nilai D')
    case n if n < 60:
        print('Nilai E')