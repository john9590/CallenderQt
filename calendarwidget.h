#ifndef CALENDARWIDGET_H
#define CALENDARWIDGET_H

#include <QVector>
#include <QDateTime>
#include <QMap>

struct Schedule {
    int l;
};

class CalendarWidget
{
public:
    CalendarWidget();
    void load_all_schedule(QString& path);
    void getday(QVector<QVector<Schedule>> a, QDateTime date);
private:
    QMap<QDateTime,QVector<Schedule>> schedules;
};

#endif // CALENDARWIDGET_H
