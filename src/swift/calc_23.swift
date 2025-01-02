import Foundation

let TOTAL = 100000
let MAX_PEOPLE = 23
var count = 0

let start = Date()

for _ in 0..<TOTAL {
    var days = Set<Int>()

    for _ in 0..<MAX_PEOPLE {
        let birthday = Int.random(in: 0..<365)

        if days.contains(birthday) {
            count += 1
            break
        }

        days.insert(birthday)
    }
}

let end = Date().timeIntervalSince(start)

print("Probability of \(Double(count) / Double(TOTAL))")
print("The calculations took \(end) seconds")
