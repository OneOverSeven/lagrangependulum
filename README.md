http://rlguy.com/lagrangeexample

A simple pendulum of mass m and length b is driven horizontally by x = a sin wt.

  The problem is modelled under a Lagrangian system using the pendulum angle as the only generalized
  coordinate. The system is solved for the angular acceleration. Once the angular acceleration is found,
  angular velocity and angular position are computed by using the Euler method of integration.

The Lagrangian system solved for angular acceleration:
  
  Acceleration = Q/(l*l*m)

  where Q = a*l*m*(w^2)*cos(c)*sin(t*w) - g*l*m*sin(c) 

  a = amplitude of horizontal motion
  w = speed of horizontal motion
  l = length of pendulum
  m = mass of point at end of pendulum
  h = angular velocity
  c = angular position
  t = current time of simulation
  
User Interface:
  
  The user interface allows the user to change the initial angle, length, and mass of the pendulum and also
  the amplitude and speed of the horizontal driven motion.