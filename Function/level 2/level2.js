function cekGanjilGenap(angka) {
    if (angka % 2 === 0) {
        return "Genap";
    } else {
        return "Ganjil";
    }
}

console.log(cekGanjilGenap(2));
console.log(cekGanjilGenap(1));