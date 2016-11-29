/*
Displays the open task as a detailed view.
*/

#ifndef TASKWIDGET_H
#define TASKWIDGET_H

#include "task.h"
#include <QWidget>
#include <QLabel>

namespace Ui {
class TaskWidget;
}

class TaskWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TaskWidget(QWidget *parent = 0);
    ~TaskWidget();
    QLabel *name;
    QLabel *date;
    int widget_task_number;
private:
    Ui::TaskWidget *ui;
    void mousePressEvent(QMouseEvent * event);
    Task temp_task;
};

#endif // TASKWIDGET_H
