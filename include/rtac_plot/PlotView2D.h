#ifndef _DEF_RTAC_PLOT_PLOT_VIEW_2D_H_
#define _DEF_RTAC_PLOT_PLOT_VIEW_2D_H_

#include <memory>

#include <rtac_base/types/Bounds.h>

#include <rtac_display/views/View.h>

namespace rtac { namespace plot {

class PlotView2D : public rtac::display::View
{
    public:

    using Ptr      = std::shared_ptr<PlotView2D>;
    using ConstPtr = std::shared_ptr<const PlotView2D>;

    using View   = rtac::display::View;
    using Mat4   = View::Mat4;
    using Shape  = View::Shape;
    using Extent = rtac::types::Bounds<float,2>;

    protected:

    PlotView2D(const Extent& extent);

    public:

    static Ptr Create(const Extent& extent = Extent{{{-1.0f,1.0f},
                                                     {-1.0f,1.0f}}});

    void update(const Extent& extent);
};

} //namespace plot
} //namespace rtac

#endif //_DEF_RTAC_PLOT_PLOT_VIEW_2D_H_
