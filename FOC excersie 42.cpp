 #include<stdio.h>
 
print("Enter the correct answers for each question:")
for i in range(20):
answer = input("Question {}: ".format(i+1))
correctScores.append(answer)
bestScore = 0
bestScoreIndex = -1
numStudents = int(input("Enter the number of students: "))
for i in range(numStudents):
studentID = input("Enter student ID: ")
studentIDs.append(studentID)
score = 0
print("Enter the answers for student ID {}: ".format(studentID))
for j in range(20):
answer = input("Question {}: ".format(j+1))
if answer == correctScores[j]:
score += 1
numCorrect.append(score)
grades.append('F') 
if score > bestScore:
bestScore = score
bestScoreIndex = i
bestScoreRange = bestScore - 8
grades[bestScoreIndex] = 'A'
for i in range(numStudents):
if grades[i] == 'F':
if numCorrect[i] >= bestScoreRange:
grades[i] = 'D'
elif numCorrect[i] >= bestScoreRange - 2:
grades[i] = 'C'
elif numCorrect[i] >= bestScoreRange - 4:
grades[i] = 'B'
print("Student ID: {}".format(studentIDs[i]))
print("Number correct: {}".format(numCorrect[i]))
print("Grade: {}".format(grades[i]))
print()
print("Single highest score for the class: {}".format(bestScore))
