function myAtoi(str: string): number {
    let interator = 0;
    const length = str.length;

    const INT_MAX = 2147483647;
    const INT_MIN = -2147483648;

    // 1. skip spaces
    while (interator < length && str[interator] === " ") interator++;

    // 2. sign
    let sign = 1;
    if (str[interator] === "+" || str[interator] === "-") {
        if (str[interator] === "-") sign = -1;
        interator++;
    }

    // 3. build number
    let num = 0;
    while (
        interator < length &&
        str[interator] >= "0" &&
        str[interator] <= "9"
    ) {
        let digit = str.charCodeAt(interator) - 48;

        // 4. overflow check
        if (
            num > Math.floor(INT_MAX / 10) ||
            (num === Math.floor(INT_MAX / 10) && digit > 7)
        ) {
            return sign === 1 ? INT_MAX : INT_MIN;
        }

        num = num * 10 + digit;
        interator++;
    }

    return num * sign;
}
