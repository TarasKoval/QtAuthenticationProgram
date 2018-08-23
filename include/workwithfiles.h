#ifndef WORK_WITH_FILES_H
#define WORK_WITH_FILES_H

#include<QString>

void Write(QString fileName, const std::vector<ulong> &outputData);

void Read(QString fileName, std::vector<ulong> &outputData);

#endif // WORK_WITH_FILES_H
