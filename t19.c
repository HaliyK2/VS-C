#include<stdio.h>
#include<math.h>

double distance(double x1, double y1, double x2, double y2) {
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
int main() {
	double x1, x2, x3, y1, y2, y3;
	scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
	double d1 = distance(x1, y1, x2, y2);
	double d2 = distance(x1, y1, x3, y3);
	double d3 = distance(x2, y2, x3, y3);
	double s = (d1 + d2 + d3) / 2;
	double area = sqrt(s * (s - d1) * (s - d2) * (s - d3));//海伦公式
	printf("%.2lf", area);
	return 0;
}

//平面上有一个三角形，它的三个顶点坐标分别为(x1,y1) (x2,y2) (x3,y3)那么请问这个三角形的面积是多少
