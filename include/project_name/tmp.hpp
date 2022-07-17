/** 
 *  @file   IGraphicsContext.hpp 
 *  @brief  Graphics Context Interface 
 *  @author Somebody else 
 *  @date   2012-02-20 
 ***********************************************/

class IGraphicsContext 
{
    virtual ~IGraphicsContext() = default;
    virtual void draw() const = 0;
    virtual void dawLine(const Point& p1, Point& p2) = 0;
};  
