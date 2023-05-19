function [dstate] = non_impulsive_COAST(state,mu)
%{ 

*FOR COAST PHASE ONLY*

**This function assumes that thrust is exactly parallel to initial velocity
direction.

This function is for numerical integration (i.e., plug into ode45).
NOTE: only use this function for the BURN PHASE of the non-impulsive
maneuver. For the BURN phase, use "non_impulsive_BURN"

INPUTS: 
    INITIAL CONDITIONS
    state vector(1:3) = position (rx,ry,rz)
    state vector(4:6) = velocity (vx,vy,vz)

OUTPUT: New state vector after integration.
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
Justin Self, Cal Poly, Fall 2022; Introduction to Orbital Mechanics.
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%}

g0 = 9.807; % m/s2
g0 = g0/1000; % to correct the units; km/s2

rx = state(1);
ry = state(2);
rz = state(3);
vx = state(4);
vy = state(5);
vz = state(6);

r_vect = [rx ry rz];
r = norm(r_vect);

v_vect = [vx vy vz];
v = norm(v_vect);

xdot = vx;
ydot = vy;
zdot = vz;
xddot = (-mu*rx)/(r^3);
yddot = (-mu*ry)/(r^3);
zddot = (-mu*rz)/(r^3);

dstate = [xdot; ydot; zdot; xddot; yddot; zddot];

end


