#ifndef MODULERPEAKS_H
#define MODULERPEAKS_H

#include <QObject>
#include "module.h"

enum Method{ PanTompkins, Hilbert };

class ModuleRPeaks : public Module
{
public:

    Method method;
    QList<double> inputData;
    QList<double> outputData;

    ModuleRPeaks();
    ~ModuleRPeaks();

    void AnalyzeSignal(); // wywoluje metode pantompkins lub hilbetrt
    void PanTompkins();
    void Hilbert();
};

#endif // MODULERPEAKS_H

