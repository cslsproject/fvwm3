/* -*-c-*- */
/* This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/* ---------------------------- included header files ----------------------- */

#define FEVENT_C
#include "config.h"

#include <stdio.h>

#include <X11/Xlib.h>
#include "FEvent.h"
#undef FEVENT_C

/* ---------------------------- local definitions --------------------------- */

/* ---------------------------- local macros -------------------------------- */

/* ---------------------------- imports ------------------------------------- */

/* ---------------------------- included code files ------------------------- */

/* ---------------------------- local types --------------------------------- */

/* ---------------------------- forward declarations ------------------------ */

/* ---------------------------- local variables ----------------------------- */

static XEvent fev_event;

/* ---------------------------- exported variables (globals) ---------------- */

/* ---------------------------- local functions ----------------------------- */

/* ---------------------------- interface functions ------------------------- */

XTimeCoord *FGetMotionEvents(
	Display *display, Window w, Time start, Time stop, int *nevents_return)
{
	XTimeCoord *rc;

	/*!!!*/rc = XGetMotionEvents(display, w, start, stop, nevents_return);

	return rc;
}

int FAllowEvents(
	Display *display, int event_mode, Time time)
{
	int rc;

	/*!!!*/rc = XAllowEvents(display, event_mode, time);

	return rc;
}

Bool FCheckIfEvent(
	Display *display, XEvent *event_return,
	Bool (*predicate) (Display *display, XEvent *event, XPointer arg),
	XPointer arg)
{
	Bool rc;

	/*!!!*/rc = XCheckIfEvent(display, &fev_event, predicate, arg);
	*event_return = fev_event;

	return rc;
}

Bool FCheckMaskEvent(
	Display *display, long event_mask, XEvent *event_return)
{
	Bool rc;

	/*!!!*/rc = XCheckMaskEvent(display, event_mask, &fev_event);
	*event_return = fev_event;

	return rc;
}

Bool FCheckTypedEvent(
	Display *display, int event_type, XEvent *event_return)
{
	Bool rc;

	/*!!!*/rc = XCheckTypedEvent(display, event_type, &fev_event);
	*event_return = fev_event;

	return rc;
}

Bool FCheckTypedWindowEvent(
	Display *display, Window w, int event_type, XEvent *event_return)
{
	Bool rc;

	/*!!!*/rc = XCheckTypedWindowEvent(display, w, event_type, &fev_event);
	*event_return = fev_event;

	return rc;
}

Bool FCheckWindowEvent(
	Display *display, Window w, long event_mask, XEvent *event_return)
{
	Bool rc;

	/*!!!*/rc = XCheckWindowEvent(display, w, event_mask, &fev_event);
	*event_return = fev_event;

	return rc;
}

int FEventsQueued(
	Display *display, int mode)
{
	int rc;

	/*!!!*/rc = XEventsQueued(display, mode);

	return rc;
}

int FIfEvent(
	Display *display, XEvent *event_return,
	Bool (*predicate) (Display *display, XEvent *event, XPointer arg),
	XPointer arg)
{
	int rc;

	/*!!!*/rc = XIfEvent(display, &fev_event, predicate, arg);
	*event_return = fev_event;

	return rc;
}

int FMaskEvent(
	Display *display, long event_mask, XEvent *event_return)
{
	int rc;

	/*!!!*/rc = XMaskEvent(display, event_mask, &fev_event);
	*event_return = fev_event;

	return rc;
}

int FNextEvent(
	Display *display, XEvent *event_return)
{
	int rc;

	/*!!!*/rc = XNextEvent(display, &fev_event);
	*event_return = fev_event;

	return rc;
}

int FPeekEvent(
	Display *display, XEvent *event_return)
{
	int rc;

	/*!!!*/rc = XPeekEvent(display, &fev_event);
	*event_return = fev_event;

	return rc;
}

int FPeekIfEvent(
	Display *display, XEvent *event_return,
	Bool (*predicate) (Display *display, XEvent *event, XPointer arg),
	XPointer arg)
{
	int rc;

	/*!!!*/rc = XPeekIfEvent(display, &fev_event, predicate, arg);
	*event_return = fev_event;

	return rc;
}

int FPending(
	Display *display)
{
	int rc;

	/*!!!*/rc = XPending(display);

	return rc;
}

int FPutBackEvent(
	Display *display, XEvent *event)
{
	int rc;

	/*!!!*/rc = XPutBackEvent(display, event);

	return rc;
}

int FQLength(
	Display *display)
{
	int rc;

	/*!!!*/rc = XQLength(display);

	return rc;
}

Bool FQueryPointer(
	Display *display, Window w, Window *root_return, Window *child_return,
	int *root_x_return, int *root_y_return, int *win_x_return,
	int *win_y_return, unsigned int *mask_return)
{
	Bool rc;

	/*!!!*/rc = XQueryPointer(
		display, w, root_return, child_return, root_x_return,
		root_y_return, win_x_return, win_y_return, mask_return);

	return rc;
}

Status FSendEvent(
	Display *display, Window w, Bool propagate, long event_mask,
	XEvent *event_send)
{
	Status rc;

	/*!!!*/rc = XSendEvent(display, w, propagate, event_mask, event_send);

	return rc;
}

int FWarpPointer(
	Display *display, Window src_w, Window dest_w, int src_x, int src_y,
	unsigned int src_width, unsigned int src_height, int dest_x, int dest_y)
{
	int rc;

	/*!!!*/rc = XWarpPointer(
		display, src_w, dest_w, src_x, src_y, src_width, src_height,
		dest_x, dest_y);

	return rc;
}

int FWindowEvent(
	Display *display, Window w, long event_mask, XEvent *event_return)
{
	int rc;

	/*!!!*/rc = XWindowEvent(display, w, event_mask, &fev_event);
	*event_return = fev_event;

	return rc;
}