// student.h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef STUDENT_H
#define STUDENT_H

#define MAX_STUDENTS 30
#define MAX_SUBJECTS 10

typedef struct
{
  int id;
  char name[50];
  float scores[MAX_SUBJECTS];
} Student;

typedef struct
{
  int classSize;
  char subjectNames[MAX_SUBJECTS][50];
  int subjectCount;
} SystemInfo;

extern SystemInfo systemInfo;

extern Student students[MAX_STUDENTS];
extern int studentCount;

void InputScores();
void CalculateCourseTotalAndAverage();
void CalculateStudentTotalAndAverage();
void SortStudentsByTotalScoreDesc();
void SortStudentsByTotalScoreAsc();
void DisplayScoresByIDAsc();
void DisplayScoresByNameAsc();
void SearchRankingByID();
void SearchRankingByName();
void StatisticsByCategory();
void DisplayAllStudentScores();
void SetSystemInfo();

#endif