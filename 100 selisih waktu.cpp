// Program untuk mencari selisih jam, menit, dan detik. by: Najwa Amelia Q.A
#include <stdio.h>
// deklarasi struct
struct TIME {
   int seconds;
   int minutes;
   int hours;
};

void selisih(struct TIME t1, struct TIME t2, struct TIME *diff);

int main() {
   struct TIME startTime, stopTime, diff;
   printf("==start waktu==\n");
   printf("Masukkan jam, menit, dan detik: ");
   // menginputkan nilai jam, menit, dan detik
   scanf("%d %d %d", &startTime.hours,
         &startTime.minutes,
         &startTime.seconds);
   printf("\n==stop waktu==\n");
   printf("Masukkan jam, menit, dan detik: ");
   scanf("%d %d %d", &stopTime.hours,
         &stopTime.minutes,
         &stopTime.seconds);
   // menampilkan waktu dan selisihnya
   selisih(startTime, stopTime, &diff);
   printf("\nSelisih:\n%d:%d:%d - ", startTime.hours,
          startTime.minutes,
          startTime.seconds);
   printf("%d:%d:%d ", stopTime.hours,
          stopTime.minutes,
          stopTime.seconds);
   printf("= %d:%d:%d\n", diff.hours,
          diff.minutes,
          diff.seconds);
   return 0;
}

// menghitung selisih antara waktu start dan stop
void selisih(struct TIME start, struct TIME stop, struct TIME *diff) {
   while (stop.seconds > start.seconds) {
      --start.minutes;
      start.seconds += 60;
   }
   diff->seconds = start.seconds - stop.seconds;
   while (stop.minutes > start.minutes) {
      --start.hours;
      start.minutes += 60;
   }
   diff->minutes = start.minutes - stop.minutes;
   diff->hours = start.hours - stop.hours;
}
