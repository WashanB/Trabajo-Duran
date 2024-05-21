#include <stddef.h>

  
  
  int main(){
  int score = 0;

  for(int i=0; i < n; i++){
    if (answers[i] == student[i]){
      score += 4;
    } else if (student[i] != ' '){
      score--;
    }
  }
  return score > 0 ? score : 0;
}    
  
