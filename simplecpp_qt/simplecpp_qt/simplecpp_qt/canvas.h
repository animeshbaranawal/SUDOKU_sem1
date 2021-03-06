#ifndef _CANVAS_INCLUDED
#define _CANVAS_INCLUDED

#include <string>
#include "common_def.h"

#include "qpoint.h"
#include "qpen.h"

namespace simplecpp{
	class Sprite;

	/*! \brief Generates a random number between u and v
	* @param u - lower bound 
	* @param v - upper bound
	* @return double random number between u and v
	*/
	double randuv(double u, double v);

	/*! \brief suspends the application
	* @param duration - suspend time in seconds
	*/
	void wait(float duration);
	
	//!< Abort the application
	void abort();

	/*! \brief Creates a graphic window
	* @param window_title - title of the graphics window
	* @param w - width of the canvas
	* @param h - height of the canvas
	* @return int - return status of the API.. success if 0 else failed.
	*/
	int initCanvas(const char window_title[] = "Simplecpp QT Canvas", int w = 500, int h = 500);

	/*! \brief closes the graphic window
	* @return int - return status of the API.. success if 0 else failed.
	*/
	int closeCanvas();

	/*! \brief Width of the canvas
	* @return int - width of the canvas
	*/
	int canvas_width();

	/*! \brief Height of the canvas
	* @return int - height of the canvas
	*/
	int canvas_height();

	void drawLine(QPointF start, QPointF end, Color line_color, unsigned int line_width = 0);

	void drawPoint(QPointF point, Color point_color);

	void drawCircle(QPointF centre, int radius, Color fill_color, bool fill = true, unsigned int line_width = 0,
		Qt::PenStyle line_style = Qt::SolidLine, Qt::PenCapStyle cap_style = Qt::FlatCap, Qt::PenJoinStyle join_style = Qt::MiterJoin);

	void drawEllipse(QPointF centre, int width, int height, Color fill_color, bool fill = true, unsigned int line_width = 1,
		Qt::PenStyle line_style = Qt::SolidLine, Qt::PenCapStyle cap_style = Qt::FlatCap, Qt::PenJoinStyle join_style = Qt::MiterJoin);

	void drawPolygon(QPointF *points, int npoints, Color fill_color, bool fill = true, unsigned int line_width = 0,
		Qt::PenStyle line_style = Qt::SolidLine, Qt::PenCapStyle cap_style = Qt::FlatCap, Qt::PenJoinStyle join_style = Qt::MiterJoin, Qt::FillRule fill_rule = Qt::WindingFill);

	void drawText(float x, float y, std::string text, Color clr);

	void drawText(QPointF position, string message, Color clr);

	int textWidth(std::string text);
	int textWidth(char op);
	int textHeight();
	int textDescent();

	void addSprite(Sprite *t);  // adds *t into the list of active sprites
								// does not repaint immediately?
	void removeSprite(Sprite *t);

	void c_imprint(Sprite* s);  // paints *s into the background
	void repaint();  // paint the current screen into new buffer, then transfer.
	void beginFrame();  // suspend painting.  set flag appropriately.
	void endFrame();    // resume painting.  reset flag.

	/*
	void addSprite(Sprite *t);  // adds *t into the list of active sprites
								// does not repaint immediately?
	void removeSprite(Sprite *t);

	Color COLOR(const char *color_string);  // creates a colour.
	Color COLOR(unsigned int red, unsigned int green, unsigned int blue);

	void imprintLine(short x1, short y1, short x2, short y2, 
			Color line_color=COLOR(0,0,0), unsigned int line_width=2);
	// paints the line into the the background

	/* draw... : draw ... onto the current buffer. 

	void c_imprint(Sprite* s);  // paints *s into the background
	void repaint();  // paint the current screen into new buffer, then transfer.
	void beginFrame();  // suspend painting.  set flag appropriately.
	void endFrame();    // resume painting.  reset flag.

	void nextEvent(XEvent &event);  // wait for an event: mouseclick, keypress.
	bool mouseDragEvent(XEvent &event);  // true if event is drag
	bool keyPressEvent(XEvent &event);
	bool mouseButtonPressEvent(XEvent &event);
	bool mouseButtonReleaseEvent(XEvent &event);
	char charFromEvent(XEvent &event);  // return char whose key was pressed.
	bool checkEvent(XEvent &event); 
	true if some event happened since last nextEvent.

	void echoKey(XEvent &event, Color clr = Color("blue"));  // print value on screen
	void spriteStatus();
	int getClick();  // wait for a click, and return xclickpos*65536+yclickpos.
	*/
}

#endif
