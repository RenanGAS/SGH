#include "RelatorioDvo.h"

DATA *RelatorioDvo::stringToData(string varData)
{
    DATA *newDATA = new DATA();

    string limite = "/";

    size_t posDia = varData.find("/");
    newDATA->dia = stoi(varData.substr(0, posDia));

    varData.erase(0, posDia + limite.length());

    size_t posMes = varData.find("/");
    newDATA->mes = stoi(varData.substr(0, posMes));

    varData.erase(0, posMes + limite.length());

    size_t posAno = varData.find("/");
    newDATA->ano = stoi(varData.substr(0, posAno));

    return newDATA;
}

bool RelatorioDvo::verificarDataInicio(string dataInicio)
{
    DATA *dtInicio = stringToData(dataInicio);

    for (size_t i = 0; i < MAX_RESERVAS; i++)
    {
        DATA *dtInicioReserva = stringToData(reservas[i]->getDataEntrada());

        if ((dtInicioReserva->ano >= dtInicio->ano) && (dtInicioReserva->mes >= dtInicio->mes) && (dtInicioReserva->dia >= dtInicio->dia))
        {
            return true;
        }
    }

    return false;
}

bool RelatorioDvo::verificarDataFinal(string dataFinal)
{
    DATA *dtFinal = stringToData(dataFinal);

    for (size_t i = 0; i < MAX_RESERVAS; i++)
    {
        DATA *dtFinalReserva = stringToData(reservas[i]->getDataSaida());

        if ((dtFinalReserva->ano <= dtFinal->ano) && (dtFinalReserva->mes <= dtFinal->mes) && (dtFinalReserva->dia <= dtFinal->dia))
        {
            return true;
        }
    }

    return false;
}

bool RelatorioDvo::verificarPeriodo(string dataInicio, string dataFinal)
{
    DATA *dtInicio = stringToData(dataInicio);
    DATA *dtFinal = stringToData(dataFinal);

    if ((dtInicio->ano > dtFinal->ano) || (dtInicio->mes > dtFinal->mes) || (dtInicio->dia > dtFinal->dia))
    {
        return false;
    }
    else
    {
        if (!verificarDataInicio(dataInicio) && !verificarDataFinal(dataFinal))
        {
            return false;
        }
    }

    return true;
}