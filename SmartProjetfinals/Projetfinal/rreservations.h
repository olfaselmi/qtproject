#ifndef RRESERVATIONS_H
#define RRESERVATIONS_H

#include <QMainWindow>
#include "reservation.h"
#include "horaire.h"

namespace Ui {
class RRESERVATIONS;
}

class RRESERVATIONS : public QMainWindow
{
    Q_OBJECT

public:
    explicit RRESERVATIONS(QWidget *parent = nullptr);
    ~RRESERVATIONS();

private slots:
    void showTime();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_OK_ajouter_reservation_2_clicked();

    void on_OK_ajouter_reservation_6_clicked();

    void on_pushButton_chercher_reservation_2_clicked();

    void on_pushButton_chercher_reservation_clicked();

    void on_numero_client_rechireservation_textChanged(const QString &arg1);

    void on_supprimerres_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_5_clicked();

    void on_supprimerres_3_clicked();

    void on_pushButton_chercher_reservation_3_clicked();

    void on_OK_ajouter_reservation_4_clicked();

    void on_supprimerres_2_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::RRESERVATIONS *ui;
    Reservation tmpreservation;
    Horaire tmph;
};

#endif // RRESERVATIONS_H
