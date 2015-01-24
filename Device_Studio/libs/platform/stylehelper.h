#ifndef STYLEHELPER_H
#define STYLEHELPER_H

#include "platformlibglobal.h"

#include <QColor>
#include <QPalette>
#include <QStyle>

class PLATFORM_EXPORT StyleHelper
{
public:
    static QIcon drawIndicatorIcon(const QPalette &palette,QStyle *style);
    static int navigationWidgetHeight();//��ȡĬ�Ͽؼ��߶�
    static qreal sidebarFontSize();//�����С
    static QPalette sidebarFontPalette(const QPalette &original);//���û���

    static QColor baseColor(bool lightColored = false);//��ȡ��ɫ
    static QColor panelTextColor(bool lightColored = false);//��ȡ������ɫ
        static QColor highlightColor(bool lightColored = false);//��ȡ������ɫ
    static QColor shadowColor(bool lightColored = false);//��ȡ��Ӱ��ɫ
    static QColor borderColor(bool lightColored = false);//��ȡ������ɫ
    static QColor buttonTextColor();//��ȡ��ť������ɫ
    static QColor mergedColors(const QColor &colorA, const QColor &colorB, int factor = 50);//��ȡ�м�ɫ

    static QColor sidebarHighlight();//��ȡ�߿������ɫ
    static QColor sidebarShadow();//��ȡ�߿���Ӱ��ɫ
    static void setBaseColor(const QColor &color);//���û�ɫ

    //���Ƽ�ͷ
    static void drawArrow(QStyle::PrimitiveElement element, QPainter *painter, const QStyleOption *option);

    //���ƺ��򽥱�ɫ
    static void horizontalGradient(QPainter *painter, const QRect &spanRect, const QRect &clipRect, bool lightColored = false);
    //�������򽥱�ɫ
    static void verticalGradient(QPainter *painter, const QRect &spanRect, const QRect &clipRect, bool lightColored = false);
    //���Ʋ˵�����ɫ
    static void menuGradient(QPainter *painter, const QRect &spanRect, const QRect &clipRect);
    //�Ƿ�ʹ�û������
    static bool usePixmapCache();
    //���ƴ�����Ӱ��ͼ��
    static void drawIconWithShadow(const QIcon &icon, const QRect &rect, QPainter *p, QIcon::Mode iconMode,
                                   int radius = 3, const QColor &color = QColor(0, 0, 0, 130),
                                   const QPoint &offset = QPoint(1, -2));
    //���ƾ��е�ͼƬ
    static void drawCornerImage(const QImage &img, QPainter *painter, QRect rect,
                         int left = 0, int top = 0, int right = 0, int bottom = 0);
    //��ͼƬȾɫ
    static void tintImage(QImage &img, const QColor &tintColor);
    //���Ʊ�������ɫ
    static void backgroundGradient(QPainter *painter, const QRect &spanRect, const QRect &clipRect);

protected:
    //���򽥱�ɫʵ�ʻ��ƺ���
    static void verticalGradientHelper(QPainter *p, const QRect &spanRect, const QRect &rect, bool lightColored);
    //���򽥱�ɫʵ�ʻ��ƺ���
    static void horizontalGradientHelper(QPainter *p, const QRect &spanRect, const QRect &rect, bool lightColored);
    //�˵�����ɫʵ�ʻ��ƺ���
    static void menuGradientHelper(QPainter *p, const QRect &spanRect, const QRect &rect);
private:
    static QColor m_baseColor;//��ɫ��������ɫ���Ǵ�����ת����ȥ��
};
#endif // STYLEHELPER_H
