#ifndef COLORPICKER_H
#define COLORPICKER_H

#include <QWidget>
/**
 * @brief A classe ColorDraw é responsável pela amostra de cores no canto inferior esquerdo da janela;
 */
class ColorPicker : public QWidget
{
    Q_OBJECT
private:
    /**
     * @brief r armazena o valor de r para amostagem;
     */
    int r;
    /**
     * @brief g armazena o valor de g para amostagem;
     */
    int g;
    /**
     * @brief b armazena o valor de b para amostagem;
     */
    int b;
    /**
     * @brief a armazena o valor de a para amostagem;
     */
    int a;
public:
    explicit ColorPicker(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
signals:

public slots:
    /// Altera o valor de r para o valor escolhido pelo usuário;
    void set_r(int _r);
    /// Altera o valor de g para o valor escolhido pelo usuário;
    void set_g(int _g);
    /// Altera o valor de b para o valor escolhido pelo usuário;
    void set_b(int _b);
    /// Altera o valor de a para o valor escolhido pelo usuário;
    void set_a(int _a);
};

#endif // COLORPICKER_H
