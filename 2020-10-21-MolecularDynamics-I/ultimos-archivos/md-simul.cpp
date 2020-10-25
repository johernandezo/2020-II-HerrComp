#include "md-simul.h"
#include "md-simul.h"

void initial_conditions(Particle & body)
{
  body.Rx = 0.7654;
  body.Ry = 1.6598;
  body.Rz = 1.1236;
  
  body.Vx = 0.23698;
  body.Vy = 0.56739;
  body.Vz = 1.11418;

  body.rad = 0.235;
  body.mass = 0.29698;
}

void compute_force(Particle & body)
{
  // reset force
  body.Fx = body.Fy = body.Fz = 0.0;

  // gravitational force
  body.Fy += body.mass*G;

  // force with ground
  double delta = body.rad - body.Ry;
  if (delta > 0) {
    body.Fy += K*delta;
    body.Fy -= b*body.Vy;
  }

  // force with ceiling
  delta = body.Ry + body.rad - LY;
  if (delta > 0) {
    body.Fy -= K*delta;
    body.Fy -= b*body.Vy;

  }

  // force with right wall
  delta = body.Rx + body.rad - LX;
  if (delta > 0) {
    body.Fx -= K*delta;
    body.Fx -= b*body.Vx;
  }

  // force with left wall
  delta = body.rad - body.Rx;
  if (delta > 0) {
    body.Fx += K*delta;
    body.Fx -= b*body.Vx;
  }

  //force with back wall
  delta = body.rad - body.Rz;
  if (delta > 0) {
    body.Fz += K*delta;
    body.Fz -= b*body.Vy;
  }

  //force with front wall
  delta = body.Rz + body.rad -LZ;
  if (delta > 0) {
    body.Fz -= K*delta;
    body.Fz -= b*body.Vy;

  }
}


void start_integration(Particle & body, const double & dt)
{
  body.Vx -= body.Fx*dt/(2*body.mass);
  body.Vy -= body.Fy*dt/(2*body.mass);
  body.Vz -= body.Fz*dt/(2*body.mass);
}

void time_integration(Particle & body, const double & dt)
{
  // leap-frog
  body.Vx += body.Fx*dt/(body.mass);
  body.Vy += body.Fy*dt/(body.mass);
  body.Vz += body.Fz*dt/(body.mass);
  body.Rx += body.Vx*dt;
  body.Ry += body.Vy*dt;
  body.Rz += body.Vz*dt;
}

void print(Particle & body, double time)

{
  std::cout << time << "  "
            << body.Rx << "  "
            << body.Ry << "  "
            << body.Rz << "  "
            << body.Vx << "  "
            << body.Vy << "  "
            << body.Vz << "  "
            << "\n";
}
