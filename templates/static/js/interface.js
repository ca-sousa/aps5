function container() {
    var id = document.getElementById('graf_litros');
    var container = new Chart(id, {
        type: 'line',
        data: {
            labels: [00, 01, 02, 03, 04, 05, 06, 07, 08, 09, 10, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23],
            datasets: [{
                data:[57, 60, 62, 64, 60, 59, 62, 63, 64, 67, 70, 68, 72, 74, 76, 80, 75, 70, 65, 60, 55, 50, 45, 40],
                label: "Tanque Principal",
                borderColor: "blue",
                fill: false,
        },
        {
                data:[30, 31, 32, 30, 31, 30, 31, 30, 31, 30, 31, 31, 34, 36, 33, 35, 40, 45, 50, 55, 60, 65, 71, 76],
                label: "Tanque Secundário",
                borderColor: "red",
                fill: false,
        }
    ]
        },
        options: {
            title: {
                display: true,
                text: "Litros (1KK) X Hora"     
            }
        }
    });
} 

container()