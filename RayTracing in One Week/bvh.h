#ifndef BVH_H
#define BVH_H
	virtual bool bounding_box(double time0, double time1, aabb& output_box) const override;
{
	return box_compare(a, b, 0);
}
bool box_y_compare(const shared_ptr<hittable> a, const shared_ptr<hittable> b)
{
	return box_compare(a, b, 1);
}
bool box_z_compare(const shared_ptr<hittable> a, const shared_ptr<hittable> b)
{
	return box_compare(a, b, 2);
}