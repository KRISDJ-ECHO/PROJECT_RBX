let jumlah_buku = 3;
let harga_buku = 45000;
let jumlah_pensil = 2;
let harga_pensil = 7500;
let jumlah_tas = 1;
let harga_tas = 120000;

let total_sebelum_diskon = (jumlah_buku * harga_buku) + (jumlah_pensil * harga_pensil) + (jumlah_tas * harga_tas);
let diskon = total_sebelum_diskon * 0.1;
let total_setelah_diskon = total_sebelum_diskon - diskon;
console.log("Total harga sebelum diskon adalah: " + total_sebelum_diskon);
console.log("Total harga setelah diskon adalah: " + total_setelah_diskon);
