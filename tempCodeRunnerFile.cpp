      userAnswer.erase(remove_if(userAnswer.begin(), userAnswer.end(), [](unsigned char c) {
          return isspace(c);
      }), userAnswer.end());

      correctAnswer.erase(remove_if(correctAnswer.begin(), correctAnswer.end(), [](unsigned char c) {
          return isspace(c);
      }), correctAnswer.end());
          }