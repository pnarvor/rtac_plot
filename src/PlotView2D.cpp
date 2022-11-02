#include <rtac_plot/PlotView2D.h>

namespace rtac { namespace plot {

PlotView2D::PlotView2D(const Extent& extent)
{
    this->update(extent);
}

PlotView2D::Ptr PlotView2D::Create(const Extent& extent)
{
    return Ptr(new PlotView2D(extent));
}

void PlotView2D::update(const Extent& extent)
{
    Mat4 mat = Mat4::Identity();

    mat(0,0) = 2.0f / extent[0].length();
    mat(1,1) = 2.0f / extent[1].length();
    mat(0,3) = -1.0f - extent[0].lower * mat(0,0);
    mat(1,3) = -1.0f - extent[1].lower * mat(1,1);
}

} //namespace plot
} //namespace rtac

