/*   CSC 473 Assignment 3
     Ryan Guy
*/

#ifndef UTILS_H
#define UTILS_H

#include <GL/glu.h>
#include <glm/glm.hpp>
#include <vector>
#include "camera3d.h"

void utils_drawCircle(glm::vec3 pos, float r, glm::vec3 axis);
void utils_drawHalfCircle(glm::vec3 pos, float r,
                          glm::vec3 axis, glm::vec3 plane);
void utils_getHalfCirclePoints(glm::vec3 pos, float r,
                               glm::vec3 axis, glm::vec3 plane,
                               std::vector<glm::vec3> *points);

float utils_pointToLineDistance(glm::vec3 p, glm::vec3 o, glm::vec3 dir);
glm::vec3 utils_closestPointOnLineFromPoint(glm::vec3 p, glm::vec3 o, glm::vec3 dir);
float utils_lerp(float x1, float x2, float t);
float utils_easeInOut(float t, float t1, float t2);
glm::vec3 utils_linePlaneIntersection(glm::vec3 lOrigin, glm::vec3 lDir,
                                       glm::vec3 pOrigin, glm::vec3 pNormal);

#endif // UTILS_H
