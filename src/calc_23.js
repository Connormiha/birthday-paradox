'use strict';

const TOTAL = 1e5;
const MAX_PEOPLE = 23;
let count = 0;

let start = Date.now();

for (let i = 0; i < TOTAL; i++) {
    let days = [];

    for (let j = 0; j < MAX_PEOPLE; j++) {
        let birthday = Math.floor(Math.random() * 365);

        if (days.includes(birthday)) {
            count++;
            break;
        }

        days.push(birthday);
    }
}

let end = (Date.now() - start) / 1000;

console.log(`Probability of ${count / TOTAL}`);
console.log(`The calculations took ${end} seconds`);
