import 'dart:math';

void main() {
  const TOTAL = 100000;
  const MAX_PEOPLE = 23;
  int count = 0;

  var random = Random();
  var start = DateTime.now();

  for (int i = 0; i < TOTAL; i++) {
    List<int> days = [];

    for (int j = 0; j < MAX_PEOPLE; j++) {
      int birthday = random.nextInt(365);

      if (days.contains(birthday)) {
        count++;
        break;
      }

      days.add(birthday);
    }
  }

  var end = DateTime.now().difference(start).inMicroseconds;

  print('Probability of ${count / TOTAL}');
  print('The calculations took $end microseconds');
}
