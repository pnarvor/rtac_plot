#ifndef _DEF_RTAC_PLOT_PLOT_EVENT_HANDLER_H_
#define _DEF_RTAC_PLOT_PLOT_EVENT_HANDLER_H_

#include <memory>

#include <rtac_display/EventHandler.h>

#include <rtac_plot/Canvas.h>

namespace rtac { namespace plot {

class CanvasEventHandler : public rtac::display::EventHandler
{
    public:

    using Ptr      = std::shared_ptr<CanvasEventHandler>;
    using ConstPtr = std::shared_ptr<const CanvasEventHandler>;

    protected:

    Canvas::Ptr canvas_;

    CanvasEventHandler(Canvas::Ptr canvas);

    public:

    static Ptr Create(Canvas::Ptr canvas);

    virtual void mouse_position_callback(double x, double y);
    virtual void mouse_button_callback(int button, int action, int modes);
};

} //namespace plot
} //namespace rtac

#endif //_DEF_RTAC_PLOT_PLOT_EVENT_HANDLER_H_
