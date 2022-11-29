#include <cmath>
#include <cstdlib>
#include <iostream>

struct Point3D {
  double x = 0.0;
  double y = 0.0;
  double z = 0.0;
};

double calc3dDistance(const Point3D &a, const Point3D &b) {
  const double dx = a.x - b.x;
  const double dy = a.y - b.y;
  const double dz = a.z - b.z;
  const double distance = std::sqrt(dx * dx + dy * dy + dz * dz);

  return std::round(distance * 100.0) / 100;
}

int main() {
  Point3D point1;
  Point3D point2;
  Point3D point3;
  Point3D point4;

  point1.x = 3.0;
  point1.y = 6.0;
  point1.z = 8.0;

  point2.x = 2.0;
  point2.y = 1.0;
  point2.z = -7.0;

  point3.x = 7.0;
  point3.y = -5.0;
  point3.z = 0.0;

  point4.x = 1.0;
  point4.y = -1.0;
  point4.z = 9.0;

  std::cout << "calc3dDistance({3, 6, 8}, {2, 1, -7}): " << calc3dDistance(point1, point2) << std::endl
            << "calc3dDistance({7, -5, 0}, {1, -1, 9}): " << calc3dDistance(point3, point4) << std::endl;

  return EXIT_SUCCESS;
}
