let nilai = 100;
switch(true){
    case (nilai >= 90):
        console.log('Nilai A');
        break;
    case (nilai >= 80 && nilai <= 89):
        console.log('Nilai B');
        break;
    case (nilai >= 70 && nilai <= 79):
        console.log('Nilai C');
        break;
    case (nilai >= 60 && nilai <= 69):
        console.log('Nilai D');
        break;
    default:
        console.log('Nilai E');
}