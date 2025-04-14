#include "calendarwidget.h"
#include <QFile>
#include <QTextStream>

CalendarWidget::CalendarWidget() {
    QString path = "awe";
    load_all_schedule(path);
}

void CalendarWidget::load_all_schedule(QString& path)
{
    QFile file(path);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine();
            qDebug() << line;
        }
        file.close();
    } else {
        qDebug() << "파일을 열 수 없습니다.";
    }
}

void CalendarWidget::getday(QVector<QVector<Schedule> > a, QDateTime date)
{

}
