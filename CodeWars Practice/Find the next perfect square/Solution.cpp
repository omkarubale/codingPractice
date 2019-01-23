#include<math.h>
long int findNextSquare(long int sq) {
  // Return the next square if sq if a perfect square, -1 otherwise
  long temp = sqrt(sq);
  if(temp*temp == sq)
    return (temp+1)*(temp+1);
  return -1;
}