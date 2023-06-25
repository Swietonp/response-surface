#include <QPushButton>
#include <QFileDialog>
#include <QTextStream>
#include <QDebug>
#include "ResponseSurface.h"

struct CSVData {
    float x;
    float y;
    float z;
};

ResponseSurface::ResponseSurface(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    QPushButton* button = ui.input_btn;

    connect(button, &QPushButton::clicked, this, &ResponseSurface::handleButtonClicked);
}

ResponseSurface::~ResponseSurface()
{}

class PlotWidget : public QWidget {
public:
    explicit PlotWidget(const QVector<CSVData>& data, QWidget* parent = nullptr)
        : QWidget(parent), csvData(data)
    {
    }

private:
    QVector<CSVData> csvData;
};

void ResponseSurface::handleButtonClicked()
{
    // Open a file dialog to select the CSV file
    QString filePath = QFileDialog::getOpenFileName(this, "Select CSV file", "", "CSV Files (*.csv)");

    // Check if a file was selected
    if (!filePath.isEmpty()) {
        QFile file(filePath);

        // Try to open the file in read-only mode
        if (file.open(QIODevice::ReadOnly)) {
            QTextStream in(&file);

            // Skip the header line
            QString headerLine = in.readLine();

            // Vector to hold the converted CSV data
            QVector<CSVData> csvData;

            // Read and process the CSV file
            while (!in.atEnd()) {
                QString line = in.readLine();
                // Split the line into columns using a delimiter (e.g., comma)
                QStringList columns = line.split(",");

                // Create a CSVData structure and populate its fields
                CSVData data;
                data.x = columns.value(0).toFloat();
                data.y = columns.value(1).toFloat();
                data.z = columns.value(2).toFloat();

                // Add the data structure to the vector
                csvData.append(data);
            }

            file.close();

            // Now you have the CSV data in the 'csvData' vector
            // You can process or use it as per your requirements

        }
        else {
            qDebug() << "Failed to open the file:" << file.errorString();
        }
    }
}