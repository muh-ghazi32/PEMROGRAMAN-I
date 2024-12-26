angka1, angka2, angka3 = map(int, input("Input: ").split())

if angka1 <= angka2 and angka1 <= angka3:
    terkecil = angka1
    if angka2 <= angka3:
        tengah = angka2
        terbesar = angka3
    else:
        tengah = angka3
        terbesar = angka2
elif angka2 <= angka1 and angka2 <= angka3:
    terkecil = angka2
    if angka1 <= angka3:
        tengah = angka1
        terbesar = angka3
    else:
        tengah = angka3
        terbesar = angka1
else:
    terkecil = angka3
    if angka1 <= angka2:
        tengah = angka1
        terbesar = angka2
    else:
        tengah = angka2
        terbesar = angka1

print(f"Output: {terkecil} {tengah} {terbesar}")