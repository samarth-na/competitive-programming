function launchFuel(payload) {
    let fuel = payload / 5; //10
    while ((fuel / 5) % 5 > 1) {
        // 12/5= 2.4
        console.log(fuel, payload);
        payload = payload + fuel; // 50+10=60
        fuel = payload / 5; // 60/5=12
    }
    return fuel;
}
launchFuel(50);
//
//
