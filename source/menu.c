// menu.c
#include "../header/menu.h"
#include "core.c"

void Menu()
{
  int choice;
  // 清屏
  system("cls");

  // 显示菜单
  showMenu();

  // 接收用户输入
  choice = getChoice();

  // 路由
  system("cls");
  route(choice);

  printf("按下任意键继续...\n");
  getchar();
  getchar();

  return;
}

void showMenu()
{
  printf("----------学生成绩管理系统 v0.2----------\n");
  printf("1.  录入学生每门课程成绩\n");
  printf("2.  计算总分和平均分（按每门课程）\n");
  printf("3.  计算总分和平均分（按每个学生）\n");
  printf("4.  按每个学生的总分排序（降序）\n");
  printf("5.  按每个学生的总分排序（升序）\n");
  printf("6.  显示学生成绩（按学号升序）\n");
  printf("7.  显示学生成绩（按姓名的字典顺序）\n");
  printf("8.  查询学生排名及各科成绩（按学号查询）\n");
  printf("9.  查询学生排名及各科成绩（按姓名查询）\n");
  printf("10. 统计每门课程各分数段人数与百分比\n");
  printf("11. 显示每个学生每门课程成绩\n");
  printf("12. 设置系统基础信息\n");
  printf("0.  退出系统\n");
  printf("------------------------------\n");
  printf("请输入要操作的序号 >>");
}

int getChoice()
{
  int choice;
  while (scanf("%d", &choice) != 1)
  {
    // 清空输入缓冲区
    while (getchar() != '\n')
      ;
    printf("输入有误，请重新输入 >>");
  }
  return choice;
}

void route(int choice)
{
  switch (choice)
  {
  case 1:
    InputScores();
    break;
  case 2:
    CalculateCourseTotalAndAverage();
    break;
  case 3:
    CalculateStudentTotalAndAverage();
    break;
  case 4:
    SortStudentsByTotalScoreDesc();
    break;
  case 5:
    SortStudentsByTotalScoreAsc();
    break;
  case 6:
    DisplayScoresByIDAsc();
    break;
  case 7:
    DisplayScoresByNameAsc();
    break;
  case 8:
    SearchRankingByID();
    break;
  case 9:
    SearchRankingByName();
    break;
  case 10:
    StatisticsByCategory();
    break;
  case 11:
    DisplayAllStudentScores();
    break;
  case 12:
    SetSystemInfo();
    break;
  case 0:
    printf("感谢使用，再见！\n");
    exit(0);
    break;
  default:
    printf("无效的选择，请重新输入。\n");
    break;
  }
  return;
}