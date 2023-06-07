%{
A421_FinalProject_Team9
Crooks, Will
Self, Justin
Singh, Shaniya

California Polytechnic State University, SLO
AERO421, Spring 2023
Spacecraft Attitude Dynamics and Control
Final Project Group #9
%}
clear all; close all; clc; 

tic % for fun

% Introduction to the Main Script
%{
This script provides the framework for the AERO 421 Final Project.
Outside functions are called within this script.
The script is organized by section by deliverable in chronological order.
1. Mass Properties          -- complete
2. Torque Free Motion       -- complete
3. Detumble Simulation      -- complete
4. Disturbance Simulation   -- complete
5. Reaction Wheel Control   -- complete!
6. Reaction Wheel Sizing    -- WORKING 6/6
7. Visualization            -- not done
8. Final Reflection         -- not done
%}

%% Deliverable 1: April 14, 2023 | Mass Properties


% disp("Deliverable #1: Mass Properties")
% disp("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
% 
for deliverable = 1
% 
% % DETUMBLE PHASE ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
% 
% 
% disp("PHASE I: Detumble Phase")
% disp("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
%{
Mass properties, kg
MASS MATRIX DESCRIPTION: 
1: bus
2: L solar panel
3: R solar panel
4: sensor
%}
mass = [500; 20; 20; 100]; % knowns
totalmass = sum(mass);
L = 2; % length of bus

% Call function to find CM and J matrix for DETUMBLE phase
[detumble.cm,J.detumble] = A421_FinalProj_MassProperties_function(L,totalmass);

% % Print results for DETUMBLE phase
% disp("Spacecraft total mass is: " + totalmass + " kg (DETUMBLE PHASE)")
% disp("Center of mass [meters] relative to the bus center is: ")
% disp(detumble.cm)
% disp("Inertia Matrix [kg*m2] of s/c about CM (in DETUMBLE) is: ")
% disp(J.detumble)


% NORMAL OPERATIONS ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


% disp("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
% disp("PHASE II: Normal Operations (unfolded) Phase")
% disp("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
% % Spacecraft Center of Mass (NORMAL OPS)
% % Lpanel is in the negative y-direction
% % Rpanel is in the positive y-direction

% Call function for location of center of mass UNFOLDED configuration
% (NORMAL OPS)
[normal.cm] = compositebody_cm(mass);

% Call function to find J_Normal_Operations
[J.normal] = find_J_normalops(mass,L,normal.cm);

% % Print results
% disp("Spacecraft mass is: " + totalmass + " kg (NORMAL PHASE)")
% disp("Center of mass [meters] for NORMAL OPERATIONS relative to bus center is: ")
% disp(normal.cm')
% 
% disp("Inertia Matrix [kg*m2] of s/c about CM (in NORMAL OPS) is: ")
% disp(J.normal)

end % collapse deliv 1
%% Deliverable 2: April 21, 2023 | Torque-Free Motion
disp("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
disp("Deliverable #2: Torque-Free Motion")
disp("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")



for deliverable = 2

%{
DELIVERABLE DESCRIPTION:
Write a MATLAB initialization file and Simulink code to model:
    1. The torque-free orbital motion
    2. The torque-free attitude motion
of the s/c.

MATLAB and Simulink code and plots of: 
1. Euler angles and Quaternions relating Body to ECI reference frames
2. Angular velocity of s/c in BODY components for ONE ORBIT of the NORMAL
OPERATIONS PHASE of the mission. 
%}

% Conversions
min2sec = 60; % min to sec

% ORBITAL PARAMETERS and COORDINATE FRAME TRANSFORMATIONS

mu = 398600; % km3/s2
T = 100*min2sec; % in sec
a = (T*sqrt(mu) / (2*pi)) ^ (2/3); % km
inc = deg2rad(98.43);
orbitalelements = [53335.2; 0; 0; inc; 0; 0; T; a];
%{
Nomenclature for 'orbitalelements' vector:
Column  |   Description  |  Units
1           h               km2/s
2           e               --
3           RAAN            rad
4           inc             rad
5           omega, w        rad
6           TA, theta       rad
7           Period          seconds
8           s.m. sxis, a    km
%}

% Convert Perifocal Frame to ECI
[r_ECI,v_ECI,C_ECI_perifocal,C_LVLH_ECI] = perifocal_to_LVLH(orbitalelements);

% Cb_LVLH
% b_LVLH quaternions known!
epsilon_b_LVLH = [0;0;0];
eta_b_LVLH = 1;

[Cb_LVLH] = quat2rotationmatrix(epsilon_b_LVLH,eta_b_LVLH);

% Initial conditions of Euler angles from C_b_LVLH & C_LVLH_ECI
% body and LVLH

% Call function 
euler_init = eulerinitial_from_LVLH_ECI_frames(Cb_LVLH,C_LVLH_ECI);

% b to ECI rotation matrix
Cb_ECI = Cb_LVLH*C_LVLH_ECI;
[epsilon_b_ECI,eta_b_ECI] = quaternionParam(Cb_ECI);

% Normal ops initial conditions
normal.wb_given = [0.001; -0.001; 0.002]; % rad/s

% For NORMAL OPS
normal.state = [normal.wb_given; euler_init; epsilon_b_ECI; eta_b_ECI ];

% For output scope (used later)
euler_b_LVLH = euler_body_LVLH(Cb_LVLH);


end % collapse for deliv. 2

%% Deliverable 3: Date May 5: Detumble Simulation


k = 0.2; % unitless gain chosen
detumble.wb_given = [-0.05;0.03;0.2]; % rad/sec
detumble.state = [detumble.wb_given; euler_init; epsilon_b_ECI; eta_b_ECI; ];
tspan = T * 5; % five orbits; seconds

for deliv = 3 % detumble
% Uh... why is this deleted???

end % detumble deliverable 3

%% Deliverable 4: May 19, 2023 | Disturbance Torques 
disp("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
disp("Deliverable #4: Disturbance Torques")
disp("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")



for deliverable = 4

% Initialze position/veloc vectors
rv_initial = [r_ECI;v_ECI]; 

% Detumble after the detumble phase
normal.wb_AfterDetumble = [0.001; -0.001; 0.002]; % rad/s;
normal.state = [normal.wb_AfterDetumble; euler_init; epsilon_b_ECI; eta_b_ECI]; % 16x1 state vector

% Adding more stuff from Mehiel's Code for ease. I am sure a lot of this is
% redundant but we can clean up later after I get this stuff working. 

%{
h = 53335.2;
ecc = 0; 
Omega = 0;
inclination = 98.43*pi/180; 
omega = 0;
nu = 0; 

[r_ECI_0, v_ECI_0] = coe2rv(h, ecc, Omega, inclination, omega, nu);
[r_ECI_0,v_ECI_0] = r_and_v_from_COEs(Omega,inclination,omega,h,ecc,nu);

z_LVLH = -r_ECI_0/norm(r_ECI_0);
y_LVLH = -cross(r_ECI_0, v_ECI_0)/norm(cross(r_ECI_0, v_ECI_0));
x_LVLH = cross(y_LVLH, z_LVLH);

% Euler angles from body to LVLH
phi_0 = 0;
theta_0 = 0;
psi_0 = 0;
E_b_LVLH_0 = [phi_0; theta_0; psi_0];

% Calculate Initial Kinematics
C_LVLH_ECI_0 = [x_LVLH'; y_LVLH'; z_LVLH'];
%C_b_LVLH_0 = Cx(phi_0)*Cy(theta_0)*Cz(psi_0);
Cx = axang2rotm([1 0 0 phi_0]);
Cy = axang2rotm([0 1 0 theta_0]);
Cz = axang2rotm([0 0 1 psi_0]);
C_b_LVLH_0 = Cx*Cy*Cz; 

q_LVLH_ECI_0 = C2quat(C_LVLH_ECI_0);
C_b_ECI_0 = C_b_LVLH_0*C_LVLH_ECI_0;
q_b_LVLH_0 = [0; 0; 0; 1]; 
%q_b_ECI_0 = C2quat(C_b_ECI_0);
q_b_ECI_0 = quatMult(q_b_LVLH_0, q_LVLH_ECI_0);
% Euler angles from body to ECI
E_b_ECI_0 = C2EulerAngles(C_b_ECI_0); 

% Initial body rates of spacecraft
w_LVLH_ECI_0 = C_b_ECI_0*cross(r_ECI_0, v_ECI_0)/norm(r_ECI_0)^2; 
w_b_ECI_0 = [0.001; -0.001; 0.002];
%w_b_LVLH_0 = w_b_ECI_0 - w_LVLH_ECI_0; % also dont think need rn

%}

% actual part four starts 
num_revs = 1;
sun_ECI = [1; 0; 0];
m_b = 0.5*[0; 0; -1];
% First get rhos vectors with respect to the center of the spacecraft bus
%bus
Areas = 4*ones(6,1);
normals = [1 0 0; -1 0 0; 0 1 0; 0 -1 0; 0 0 1; 0 0 -1];
cps = [1 0 0; -1 0 0; 0 1 0; 0 -1 0; 0 0 1; 0 0 -1];
% SP1
Areas = [Areas; 6; 6];
normals = [normals; [0 0 1]; [0 0 -1]];
cps = [cps; 0 2.5 .025; 0 2.5 -.025];
% SP2
Areas = [Areas; 6; 6];
normals = [normals; [0 0 1]; [0 0 -1]];
cps = [cps; 0 -2.5 .025; 0 -2.5 -.025];
% Sensor
Areas = [Areas; .25; .25; .25; .25; .25*.25];
normals = [normals; [1 0 0]; [-1 0 0]; [1 0 0]; [-1 0 0]; [0 0 1]];
cps = [cps; .125 0 1.5; -.125 0 1.5; 0 .125 1.5; -.125 0 1.5; 0 0 2];
% now subtract the center of mass to get the location of the rho vectors
% with respect to the center of mass
for i = 1:length(cps)
    cps(i,:) = cps(i,:) - normal.cm;
end
% Now build the matrix
surfaceProperties = [Areas cps normals];
load aerowmm2020

dyear_0 = decyear(2019, 3, 20, 12, 0, 0);

% % RUN SIMULATION
% Td_Sim = sim('DisturbanceTorques.slx');
% 
% % Extract data from sim  (torques) 
% atmos_torq.time = Td_Sim.aero_drag_data.time; 
% atmos_torq.data = squeeze(Td_Sim.aero_drag_data.signals.values); 
% 
% srp_torq.time = Td_Sim.SRP_data.time; 
% srp_torq.data = Td_Sim.SRP_data.signals.values; 
% 
% gg_torq.time = Td_Sim.gg_data.time; 
% gg_torq.data = squeeze(Td_Sim.gg_data.signals.values); 
% 
% mag_torq.time = Td_Sim.mag_data.time; 
% mag_torq.data = squeeze(Td_Sim.mag_data.signals.values); 
% 
% % Start torque plots 
% figure() 
% subplot(2,2,1)
% plot(atmos_torq.time, atmos_torq.data(1,:)); 
% hold on 
% plot(atmos_torq.time, atmos_torq.data(2,:)); 
% plot(atmos_torq.time, atmos_torq.data(3,:)); 
% ylim padded 
% xlim tight 
% xLab = xlabel('Time, s','Interpreter','latex'); 
% yLab = ylabel('Atmospheric Drag Torque, [$\frac{N}{m}$]','Interpreter','latex');  
% set(gca,'FontName','Palatino Linotype') 
% set([xLab, yLab],'FontName','Palatino Linotype') 
% set(gca,'FontSize', 9) 
% set([xLab, yLab],'FontSize', 9) 
% grid on 
% legend('T_ax','T_ay','T_az', 'interpreter','latex','Location', 'northeast')
% 
% subplot(2,2,2)
% plot(srp_torq.time, srp_torq.data(1,:)); 
% hold on 
% plot(srp_torq.time, srp_torq.data(2,:)); 
% plot(srp_torq.time, srp_torq.data(3,:)); 
% ylim padded 
% xlim tight 
% xLab = xlabel('Time, s','Interpreter','latex'); 
% yLab = ylabel('Solar Radiation Pressure Torque, [$\frac{N}{m}$]','Interpreter','latex'); 
% set(gca,'FontName','Palatino Linotype') 
% set([xLab, yLab],'FontName','Palatino Linotype') 
% set(gca,'FontSize', 9) 
% set([xLab, yLab],'FontSize', 9) 
% grid on 
% legend('T_sx','T_sy','T_sz', 'interpreter','latex','Location', 'northeast')
% 
% subplot(2,2,3)
% plot(gg_torq.time, gg_torq.data(1,:)); 
% hold on 
% plot(gg_torq.time, gg_torq.data(2,:)); 
% plot(gg_torq.time, gg_torq.data(3,:)); 
% ylim padded 
% xlim tight 
% xLab = xlabel('Time, s','Interpreter','latex'); 
% yLab = ylabel('Gravity Gradient Torque, [$\frac{N}{m}$]','Interpreter','latex'); 
% set(gca,'FontName','Palatino Linotype') 
% set([xLab, yLab],'FontName','Palatino Linotype') 
% set(gca,'FontSize', 9) 
% set([xLab, yLab],'FontSize', 9) 
% grid on 
% legend('T_ggx','T_ggy','T_ggz', 'interpreter','latex','Location', 'northeast')
% 
% subplot(2,2,4)
% plot(mag_torq.time, mag_torq.data(1,:)); 
% hold on 
% plot(mag_torq.time, mag_torq.data(2,:)); 
% plot(mag_torq.time, mag_torq.data(3,:)); 
% ylim padded 
% xlim tight 
% 
% xLab = xlabel('Time, s','Interpreter','latex'); 
% yLab = ylabel('Magnetic Torque, [$\frac{N}{m}$]','Interpreter','latex'); 
% set(gca,'FontName','Palatino Linotype') 
% set([xLab, yLab],'FontName','Palatino Linotype') 
% set(gca,'FontSize', 9) 
% set([xLab, yLab],'FontSize', 9) 
% grid on 
% legend('T_bx','T_by','T_bz', 'interpreter','latex','Location', 'northeast')
% 
% sgtitle("Disturbance Torques")
% 
% 
% 
% % % Extract Simulink data for euler/ang/quat 
% Td_Sim.time = Td_Sim.tout;
% Td_Sim.data = squeeze(Td_Sim.scopedata.signals.values);
% 
% 
% Td_Sim.w = Td_Sim.data(1:3,:);
% Td_Sim.w = Td_Sim.w';
% Td_Sim.euler = rad2deg(Td_Sim.data(4:6,:));
% Td_Sim.euler = Td_Sim.euler';
% Td_Sim.quat = Td_Sim.data(7:10,:); % epsx epsy epsz eta
% Td_Sim.quat = Td_Sim.quat';
% 
% 
% figure()
% subplot(3,1,1)
% plot(Td_Sim.time,Td_Sim.w(:,1)) % wx
% hold on
% plot(Td_Sim.time,Td_Sim.w(:,2)) % wy
% plot(Td_Sim.time,Td_Sim.w(:,3)) % wz
% 
% % Graph pretty 
% ylim padded 
% xlim tight 
% 
% xLab = xlabel('Time, s','Interpreter','latex'); 
% yLab = ylabel('Angular Velocity, [$\frac{rad}{s}$]','Interpreter','latex'); 
% plotTitle = title('Angular Velocity as a function of time','interpreter','latex'); 
% set(plotTitle,'FontSize',14,'FontWeight','bold') 
% set(gca,'FontName','Palatino Linotype') 
% set([xLab, yLab],'FontName','Palatino Linotype') 
% set(gca,'FontSize', 9) 
% set([xLab, yLab],'FontSize', 9) 
% grid on 
% legend('$\omega_x$','$\omega_y$','$\omega_z$', 'interpreter','latex','Location', 'EastOutside')
% 
% 
% subplot(3,1,2)
% plot(Td_Sim.time,Td_Sim.quat(:,1)) % ex
% hold on
% plot(Td_Sim.time,Td_Sim.quat(:,2)) % ey
% plot(Td_Sim.time,Td_Sim.quat(:,3)) % ez
% plot(Td_Sim.time,Td_Sim.quat(:,4)) % eta
% 
% % Graph pretty 
% ylim padded 
% xlim tight 
% xLab = xlabel('Time, s','Interpreter','latex'); 
% yLab = ylabel('Quaternions','Interpreter','latex'); 
% plotTitle = title('Quaternions as a function of time','interpreter','latex'); 
% set(plotTitle,'FontSize',14,'FontWeight','bold') 
% set(gca,'FontName','Palatino Linotype') 
% set([xLab, yLab],'FontName','Palatino Linotype') 
% set(gca,'FontSize', 9) 
% set([xLab, yLab],'FontSize', 9) 
% grid on 
% legend('$\epsilon_x$','$\epsilon_y$','$\epsilon_z$','$\eta$', 'interpreter','latex','Location', 'EastOutside')
% 
% subplot(3,1,3)
% plot(Td_Sim.time,Td_Sim.euler(:,1)) % phi
% hold on
% plot(Td_Sim.time,Td_Sim.euler(:,2)) % theta
% plot(Td_Sim.time,Td_Sim.euler(:,3)) % psi
% % Graph pretty 
% ylim padded 
% xlim tight 
% xLab = xlabel('Time, s','Interpreter','latex'); 
% yLab = ylabel('Euler angles, degrees','Interpreter','latex'); 
% plotTitle = title('Euler angles as a function of time','interpreter','latex'); 
% set(plotTitle,'FontSize',14,'FontWeight','bold') 
% set(gca,'FontName','Palatino Linotype') 
% set([xLab, yLab],'FontName','Palatino Linotype') 
% set(gca,'FontSize', 9) 
% set([xLab, yLab],'FontSize', 9) 
% grid on 
% legend('$\phi$','$\theta$','$\psi$', 'interpreter','latex','Location', 'EastOutside')


end % deliverable 4; disturbance torques

%% Deliverable 5: Reaction Wheel Control (Due Friday, June 2, 2023)
disp("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
disp("Deliverable #5: Reaction Wheel Control")
disp("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")



for deliv = 5 % start collapse loop

% Find control gains for FSFC for a 3-axis reaction wheel control system.

% Givens
% damping ratio
zeta = 0.65;
% settling time, s
ts = 30;
ts_required = 0.02; % 2 percent settling time

% wheel mass, kg
mw = 1; 

% wheel inertia, kg/m2
Is = 1.2; 
It = 0.6; 

% Find control gains, k

% Using above values, can find omega_n
wn = (log(ts_required * sqrt(1 - zeta^2))) / (-zeta*ts);

% Knowing wn, can find kd and kp
kd = 2 * zeta * wn .* J.normal;
kp = wn^2 * 2 .* J.normal;

disp("Gain matrices are (with units of kg*m2): ")
kd
kp

% Nonlinear case quaternion commanded input into Simulink
qc = [0;0;0;1]; 

% New inertia matrix with reaction wheels taken into account
Is_matrix = [Is 0 0; 0 Is 0; 0 0 Is];

I_ReactionWheels = J.normal + (2 * It + Is + 2 * mw) * eye(3);

% Run simulation
% At T = 100 minutes, s/c completes 14.4 orbits per 24 hour day. <-------

num_of_revs = 5;

tspan = T * num_of_revs; 

out = sim('ReactionWheelControl.slx');

% Extract Simulation Data
RW.time = out.tout;
RW.Mc = squeeze(out.MomentCommanded.signals.values);
RW.Mc_time = squeeze(out.MomentCommanded.time);
RW.Mcx = RW.Mc(1,:);
RW.Mcy = RW.Mc(2,:);
RW.Mcz = RW.Mc(3,:);


RW.omegab_eci = squeeze(out.omega_b_ECI.signals.values); 
RW.omegab_eci_time = squeeze(out.omega_b_ECI.time)'; 
RW.eulb_eci = squeeze(out.eulers_quats_b_ECI.signals(1).values); %row
RW.eulb_eci_time = squeeze(out.eulers_quats_b_ECI.time)'; 
RW.quatb_eci = squeeze(out.eulers_quats_b_ECI.signals(2).values); %column
RW.quatb_eci_time = squeeze(out.eulers_quats_b_ECI.time)'; 

RW.omegab_lvlh = squeeze(out.omega_b_LVLH.signals.values); 
RW.omegab_lvlh_time = squeeze(out.omega_b_LVLH.time)'; 
RW.eulb_lvlh = squeeze(out.eulers_quats_b_LVLH.signals(1).values); 
RW.eulb_lvlh_time = squeeze(out.eulers_quats_b_LVLH.time)'; 
RW.quatb_lvlh = squeeze(out.eulers_quats_b_LVLH.signals(2).values); 
RW.quatb_lvlh_time = squeeze(out.eulers_quats_b_LVLH.time)'; 
RW.wheel_speeds = squeeze(out.wheelspeeds.signals.values); 
RW.wheel_speeds_time = squeeze(out.wheelspeeds.time)'; 

% Extract for each component of the data extracted; note that moment
% commanded is already taken care of 

RW.omegab_eci_x = RW.omegab_eci(1,:);
RW.omegab_eci_y = RW.omegab_eci(2,:); 
RW.omegab_eci_z = RW.omegab_eci(3,:); 

RW.eulb_eci_x = RW.eulb_eci(1,:);  
RW.eulb_eci_y = RW.eulb_eci(2,:);  
RW.eulb_eci_z = RW.eulb_eci(3,:);  

RW.quatb_eci_eta = RW.quatb_eci(1,:); 
RW.quatb_eci_x = RW.quatb_eci(2,:); 
RW.quatb_eci_y = RW.quatb_eci(3,:); 
RW.quatb_eci_z = RW.quatb_eci(4,:); 

RW.omegab_lvlh_x = RW.omegab_lvlh(1,:);
RW.omegab_lvlh_y = RW.omegab_lvlh(2,:); 
RW.omegab_lvlh_z = RW.omegab_lvlh(3,:); 

RW.eulb_lvlh_x = RW.eulb_lvlh(1,:);  
RW.eulb_lvlh_y = RW.eulb_lvlh(2,:);  
RW.eulb_lvlh_z = RW.eulb_lvlh(3,:);  

RW.quatb_lvlh_eta = RW.quatb_lvlh(1,:); 
RW.quatb_lvlh_x = RW.quatb_lvlh(2,:); 
RW.quatb_lvlh_y = RW.quatb_lvlh(3,:); 
RW.quatb_lvlh_z = RW.quatb_lvlh(4,:); 

RW.wheel_speeds_x = RW.wheel_speeds(1,:); 
RW.wheel_speeds_y = RW.wheel_speeds(2,:); 
RW.wheel_speeds_z = RW.wheel_speeds(3,:); 

% ECI omega, euler and quaternion 
figure() 
subplot(3,1,1)
plot(RW.omegab_eci_time, RW.omegab_eci_x)
hold on 
plot(RW.omegab_eci_time, RW.omegab_eci_y)
plot(RW.omegab_eci_time, RW.omegab_eci_z)
% Graph pretty 
ylim padded 
xlim([0, 40]) 
xLab = xlabel('Time, s','Interpreter','latex'); 
yLab = ylabel('Angular Velocity','Interpreter','latex'); 
plotTitle = title('Angular Velocity as a Function of Time (Zoomed)','interpreter','latex'); 
set(plotTitle,'FontSize',14,'FontWeight','bold') 
set(gca,'FontName','Palatino Linotype') 
set([xLab, yLab],'FontName','Palatino Linotype') 
set(gca,'FontSize', 9) 
set([xLab, yLab],'FontSize', 9) 
grid on 
legend('$\omega_x$','$\omega_y$','$\omega_z$', 'interpreter','latex','Location', 'best')

subplot(3,1,2)
plot(RW.eulb_eci_time, RW.eulb_eci_x)
hold on 
plot(RW.eulb_eci_time, RW.eulb_eci_y)
plot(RW.eulb_eci_time, RW.eulb_eci_z)
% Graph pretty 
ylim padded 
xlim tight 
xLab = xlabel('Time, s','Interpreter','latex'); 
yLab = ylabel('Euler Angles','Interpreter','latex'); 
plotTitle = title('Euler Angles as a Function of Time','interpreter','latex'); 
set(plotTitle,'FontSize',14,'FontWeight','bold') 
set(gca,'FontName','Palatino Linotype') 
set([xLab, yLab],'FontName','Palatino Linotype') 
set(gca,'FontSize', 9) 
set([xLab, yLab],'FontSize', 9) 
grid on 
legend('$\phi$','$\theta$','$\psi$', 'interpreter','latex','Location', 'best')

subplot(3,1,3)
plot(RW.quatb_eci_time, RW.quatb_eci_eta)
hold on 
plot(RW.quatb_eci_time, RW.quatb_eci_x)
plot(RW.quatb_eci_time, RW.quatb_eci_y)
plot(RW.quatb_eci_time, RW.quatb_eci_z)
% Graph pretty 
ylim padded 
xlim tight 
xLab = xlabel('Time, s','Interpreter','latex'); 
yLab = ylabel('Quaternions','Interpreter','latex'); 
plotTitle = title('Quaternions as a Function of Time','interpreter','latex'); 
set(plotTitle,'FontSize',14,'FontWeight','bold') 
set(gca,'FontName','Palatino Linotype') 
set([xLab, yLab],'FontName','Palatino Linotype') 
set(gca,'FontSize', 9) 
set([xLab, yLab],'FontSize', 9) 
grid on 
legend('$\eta$','$\epsilon_x$','$\epsilon_y$','$\epsilon_z$', 'interpreter','latex','Location', 'best')

sgtitle('Relating Body to ECI Frame')
% LVLH omega, euler and quaternion 
figure() 
subplot(3,1,1)
plot(RW.omegab_lvlh_time, RW.omegab_lvlh_x)
hold on 
plot(RW.omegab_lvlh_time, RW.omegab_lvlh_y)
plot(RW.omegab_lvlh_time, RW.omegab_lvlh_z)
% Graph pretty 
ylim padded 
xlim([0, 40]) 
xLab = xlabel('Time, s','Interpreter','latex'); 
yLab = ylabel('Angular Velocity','Interpreter','latex'); 
plotTitle = title('Angular Velocity as a Function of Time (Zoomed)','interpreter','latex'); 
set(plotTitle,'FontSize',14,'FontWeight','bold') 
set(gca,'FontName','Palatino Linotype') 
set([xLab, yLab],'FontName','Palatino Linotype') 
set(gca,'FontSize', 9) 
set([xLab, yLab],'FontSize', 9) 
grid on 
legend('$\omega_x$','$\omega_y$','$\omega_z$', 'interpreter','latex','Location', 'best')

subplot(3,1,2)
plot(RW.eulb_lvlh_time, RW.eulb_lvlh_x)
hold on 
plot(RW.eulb_lvlh_time, RW.eulb_lvlh_y)
plot(RW.eulb_lvlh_time, RW.eulb_lvlh_z)
% Graph pretty 
ylim padded 
xlim([0, 40]) 
xLab = xlabel('Time, s','Interpreter','latex'); 
yLab = ylabel('Euler Angles','Interpreter','latex'); 
plotTitle = title('Euler Angles as a Function of Time (Zoomed)','interpreter','latex'); 
set(plotTitle,'FontSize',14,'FontWeight','bold') 
set(gca,'FontName','Palatino Linotype') 
set([xLab, yLab],'FontName','Palatino Linotype') 
set(gca,'FontSize', 9) 
set([xLab, yLab],'FontSize', 9) 
grid on 
legend('$\phi$','$\theta$','$\psi$', 'interpreter','latex','Location', 'best')

subplot(3,1,3)
plot(RW.quatb_lvlh_time, RW.quatb_lvlh_eta)
hold on 
plot(RW.quatb_lvlh_time, RW.quatb_lvlh_x)
plot(RW.quatb_lvlh_time, RW.quatb_lvlh_y)
plot(RW.quatb_lvlh_time, RW.quatb_lvlh_z)
% Graph pretty 
ylim padded 
xlim([0, 40])  
xLab = xlabel('Time, s','Interpreter','latex'); 
yLab = ylabel('Quaternions','Interpreter','latex'); 
plotTitle = title('Quaternions as a Function of Time (Zoomed)','interpreter','latex'); 
set(plotTitle,'FontSize',14,'FontWeight','bold') 
set(gca,'FontName','Palatino Linotype') 
set([xLab, yLab],'FontName','Palatino Linotype') 
set(gca,'FontSize', 9) 
set([xLab, yLab],'FontSize', 9) 
grid on 
legend('$\eta$','$\epsilon_x$','$\epsilon_y$','$\epsilon_z$', 'interpreter','latex','Location', 'best')
sgtitle('Relating Body to LVLH Frame')

% Lets plot the commanded moment and wheel speeds 
figure()
plot(RW.wheel_speeds_time, RW.wheel_speeds_x)
hold on 
plot(RW.wheel_speeds_time, RW.wheel_speeds_y)
plot(RW.wheel_speeds_time, RW.wheel_speeds_z)
% Graph pretty 
ylim padded 
xlim tight 
xLab = xlabel('Time, s','Interpreter','latex'); 
yLab = ylabel('Wheel Speed','Interpreter','latex'); 
%plotTitle = title('Wheel Speed vs Time','interpreter','latex'); 
%set(plotTitle,'FontSize',14,'FontWeight','bold') 
set(gca,'FontName','Palatino Linotype') 
set([xLab, yLab],'FontName','Palatino Linotype') 
set(gca,'FontSize', 9) 
set([xLab, yLab],'FontSize', 9) 
grid on 
legend('Wheel 1','Wheel 2','Wheel 3', 'interpreter','latex')
sgtitle('Wheel Speed for each Reaction Wheel')



% Plot results
figure()
subplot(2,1,1)
plot(RW.time,RW.Mcx) % For full 24 hours
hold on
plot(RW.time,RW.Mcy)
plot(RW.time,RW.Mcz)
% Graph pretty 
ylim padded
xlim tight
xLab = xlabel('Time, s','Interpreter','latex'); 
yLab = ylabel('Commanded Moment [N-m]','Interpreter','latex'); 
plotTitle = title('Commanded Moment vs Time Over the Full 24 Hour Period with Correction','interpreter','latex'); 
set(plotTitle,'FontSize',14,'FontWeight','bold') 
set(gca,'FontName','Palatino Linotype') 
set([xLab, yLab],'FontName','Palatino Linotype') 
set(gca,'FontSize', 9) 
set([xLab, yLab],'FontSize', 14) 
grid on 
legend('$Mc_x$','$Mc_y$','$Mc_z$', 'interpreter','latex','Location', 'best')

subplot(2,1,2)
plot(RW.time,RW.Mcx) % For full 24 hours
hold on
plot(RW.time,RW.Mcy)
plot(RW.time,RW.Mcz)
% Graph pretty 
ylim padded
xlim([0, 40]) 
xLab = xlabel('Time, s','Interpreter','latex'); 
yLab = ylabel('Commanded Moment [N-m]','Interpreter','latex'); 
plotTitle = title('Commanded Moment vs Time (Zoomed)','interpreter','latex'); 
set(plotTitle,'FontSize',14,'FontWeight','bold') 
set(gca,'FontName','Palatino Linotype') 
set([xLab, yLab],'FontName','Palatino Linotype') 
set(gca,'FontSize', 9) 
set([xLab, yLab],'FontSize', 14) 
grid on 
legend('$Mc_x$','$Mc_y$','$Mc_z$', 'interpreter','latex','Location', 'best')
sgtitle('Commanded Moment from Control Law')


% %  Determine Total Commanded Moment for 24 hours without corrections
% clc
% RW.TotalMcx = trapz(RW.Mcx);
% RW.TotalMcy = trapz(RW.Mcy);
% RW.TotalMcz = trapz(RW.Mcz);
% disp("Total Mcx is: " + RW.TotalMcx + " N-m")
% disp("Total Mcy is: " + RW.TotalMcy + " N-m")
% disp("Total Mcz is: " + RW.TotalMcz + " N-m")
% disp("These are the total cumulated moments needed for a reaction wheel system over 24 hours.")


end % deliv 5

toc % for fun








%% Functions used



% Deliverable #1

    function [detumble_CM,detumble_J] = A421_FinalProj_MassProperties_function(busLength,totalmass)
    %{
    Description
    %}
    
    % Center of mass (it is a cube)
    detumble_CM = [0;0;0]; % since it is all folded up
    L = busLength;
    
    % Inertia matrix
    Jx = (totalmass*L^2)/6; % equation of Moment of Inertia for cube
    Jy = Jx;
    Jz = Jx;
    
    detumble_J = [Jx 0 0; 0 Jy 0; 0 0 Jz];
    
    end % mass properties function
    
    function[CM] = compositebody_cm(mass)
    %{
    Self, Justin
    California Polytechnic State University, SLO
    
    The purpose of this function is to determine the location of the
    centroid of a composite body. 
    
    OUTPUTS: xcm, ycm = (location of the CM of the composite body)
    INPUTS:  V = vector containing part volumes
             xbar = vector: x-distance from the origin of PART centroid to
             point of interest
             ybar = vector: y-distance from the origin of PART centroid to
             point of interest
             zbar = vector: z-distance from the origin of PART centroid to
             point of interest
    %}
    
    % Input parameters
    
    % x-bar of each part WITH RESPECT TO (x',y',z'). See schematic. 
    % (x',y',z') = center of mass of the s/c bus. 
    
    bus.xbar = 0;
    Lpanel.xbar = 0;
    Rpanel.xbar = 0;
    sensor.xbar = 0;
    xbar = [bus.xbar; Lpanel.xbar; Rpanel.xbar; sensor.xbar];
    
    % ybar of each part from CM part to CM bus (x',y',z')
    bus.ybar = 0;
    Lpanel.ybar = -2.5;
    Rpanel.ybar = 2.5;
    sensor.ybar = 0;
    ybar = [bus.ybar; Lpanel.ybar; Rpanel.ybar; sensor.ybar];
    
    % zbar of each part from CM part to CM bus (x',y',z')
    bus.zbar = 0;
    Lpanel.zbar = 0;
    Rpanel.zbar = 0;
    sensor.zbar = 1.5;
    zbar = [bus.zbar; Lpanel.zbar; Rpanel.zbar; sensor.zbar];
    
    % x bar, y bar, z bar for each part in composite structure
    xyz_bar = [xbar, ybar zbar];
    
    % Now get to business
    xbar = xyz_bar(:,1);
    ybar = xyz_bar(:,2);
    zbar = xyz_bar(:,3);
    
    % Vixi, Aiyi, Aizi
        for i = 1:length(mass)
            Vixi(i) = mass(i)*xbar(i);
            Viyi(i) = mass(i)*ybar(i);
            Vizi(i) = mass(i)*zbar(i);
        end
    
    % Finally, solving for (xbar,ybar) of COMPOSITE body
    CM(1) = sum(Vixi) / sum(mass);
    CM(2) = sum(Viyi) / sum(mass);
    CM(3) = sum(Vizi) / sum(mass);
    
    end % composite body function
    
    function [J_normal] = find_J_normalops(mass,busLength,CM_Normal)
    
    %{
    Description
    
    %}
    % Define inputs
    L = busLength; % length of s/c bus
    normal.cm = CM_Normal;
    
    % Moments of inertia for NORMAL OPS
    % Need in vector form, so mult scalar qties by eye(3)
    % PARALLEL AXIS theorem. Icm = I_part - mass*dist^2
    
    % distances from each part to the s/c CM (body frame origin)
    % TAKE INTO ACCOUNT ONLY THE PERPENDICULAR BASIS VECTORS FOR DISTANCE (per
    % parallel axis theorem definition for distance part)
    
    % xx: take only yz bases into account
    bus.distxx = norm([0,0,normal.cm(3)]);
    Lpanel.distxx = norm([0,2.5,-normal.cm(3)]); % (x,y,z) dist from part origin to Fb origin
    Rpanel.distxx = norm([0,-2.5,-normal.cm(3)]);
    sensor.distxx = norm([0,0,-(1.5-normal.cm(3))]);
    
    distxx = [bus.distxx;Lpanel.distxx; Rpanel.distxx; sensor.distxx];
    
    % yy: take only x and z bases into account
    bus.distyy = bus.distxx;
    Lpanel.distyy = normal.cm(3);
    Rpanel.distyy = normal.cm(3); 
    sensor.distyy = sensor.distxx;
    
    distyy = [bus.distyy;Lpanel.distyy; Rpanel.distyy; sensor.distyy];
    
    % zz: take only x and y bases into account 
    bus.distzz = 0;
    Lpanel.distzz = 2.5;
    Rpanel.distzz = -2.5;
    sensor.distzz = 0;
    
    distzz = [bus.distzz;Lpanel.distzz; Rpanel.distzz; sensor.distzz];
    
    distVect = [distxx, distyy, distzz];
    
    distxx = distVect(:,1);
    distyy = distVect(:,2);
    distzz = distVect(:,3);
    
    bus.distxx = distxx(1);
    Lpanel.distxx = distxx(2);
    Rpanel.distxx = distxx(3);
    sensor.distxx = distxx(4);
    
    bus.distyy = distyy(1);
    Lpanel.distyy = distyy(2);
    Rpanel.distyy = distyy(3);
    sensor.distyy = distyy(4);
    
    bus.distzz = distzz(1);
    Lpanel.distzz = distzz(2);
    Rpanel.distzz = distzz(3);
    sensor.distzz = distzz(4);
    
    % Computes components of J matrix individually
    Jxx.bus = (1/6)*(mass(1)*L^2) + mass(1)*bus.distxx^2; % I_cube eqn
    Jxx.Lpanel = (1/12)*(mass(2)*(3^2+0.05^2)) + mass(2)*Lpanel.distxx^2;
    Jxx.Rpanel = (1/12)*(mass(3)*(3^2+0.05^2)) + mass(3)*Rpanel.distxx^2;
    Jxx.sensor = (1/12)*(mass(4)*(0.25^2+1^2)) + mass(4)*sensor.distxx^2; % using rect prism Ixx
    
    Jyy.bus = Jxx.bus;
    Jyy.Lpanel = (1/12)*(mass(2)*(0.05^2+2^2)) + mass(2)*Lpanel.distyy^2;
    Jyy.Rpanel = (1/12)*(mass(3)*(0.05^2+2^2)) + mass(3)*Rpanel.distyy^2;
    Jyy.sensor = Jxx.sensor;
    
    Jzz.bus = (1/6)*(mass(1)*L^2) + mass(1)*bus.distzz^2;
    Jzz.Lpanel = (1/12)*(mass(2)*(3^2+2^2)) + mass(2)*Lpanel.distzz^2;
    Jzz.Rpanel = (1/12)*(mass(2)*(3^2+2^2)) + mass(2)*Rpanel.distzz^2;
    Jzz.sensor = (1/12)*(mass(4)*(0.25^2+0.25^2)) + mass(4)*sensor.distzz^2;
    
    % Put it all together
    Jxx.total = Jxx.bus + Jxx.Lpanel + Jxx.Rpanel + Jxx.sensor;
    Jyy.total = Jyy.bus + Jyy.Lpanel + Jyy.Rpanel + Jyy.sensor;
    Jzz.total = Jzz.bus + Jzz.Lpanel + Jzz.Rpanel + Jzz.sensor;
    
    % final ouput
    J_normal = [Jxx.total 0 0; 0 Jyy.total 0; 0 0 Jzz.total];
    
    end % find J normal ops function
    
% Deliverable #2
    
    function[r_eci,v_eci,C_ECI_perifocal,C_LVLH_ECI] = perifocal_to_LVLH(orbitalelements)
    
    %{
    This function takes known orbital elements and outputs the transformation
    matrix from ECI to LVLH for the AERO 421 Final Project.
    %}
    
    mu = 398600; % km3/s2
    h_mag = orbitalelements(1);
    e = orbitalelements(2);
    RAAN = orbitalelements(3);
    inc = orbitalelements(4);
    w = orbitalelements(5);
    ta = orbitalelements(6);
    
    % Need to find the transformation matrix from LVLH to ECI
    
    % inputting in rad
    C_ECI_perifocal = peri2geo_313_rotation_matrix(RAAN,inc,w); % in rad
    
    % perifocal frame is the orbital frame with respect to the earth. 
    % This is the rotation matrix from perifocal (orbit) to ECI frame. 
    
    % From ECI to LVLH.
    % rmagcheck = a*((1-e^2) / (1 + e*cosd(ta)) ); % good
    % THESE ARE IN PERIFOCAL
    r = (h_mag^2/mu) * (1 / (1 + e* cos(ta)) ).* [cos(ta); sin(ta); 0]; 
    v = (mu/h_mag) * [-sin(ta); (e + cos(ta)); 0];
    h = cross(r,v);
    
    % Transform r, v from Perifocal into ECI
    r_eci = C_ECI_perifocal*r;
    v_eci = C_ECI_perifocal*v;
    
    rmag_eci = norm(r_eci);
    h_eci = cross(r_eci,v_eci);
    hmag_eci = norm(h_eci);
    
    hmagcheck = norm(h_eci); % good
    
    % ECI to LVLH
    z = -r_eci/rmag_eci;
    y = -h_eci/hmag_eci;
    x = cross(y,z);
    
    C_LVLH_ECI = [x'; y'; z']; % From ECI to LVLH
    disp("Transformation matrix from ECI to LVLH is: ")
    disp(C_LVLH_ECI)
    
    end % perifocal to LVLH function
    
    function [C21] = quat2rotationmatrix(epsilon,eta)
    
    %{
    description
    %}
    
    epsilon_cross = vector_cross(epsilon);
    
    C21 = (2*eta^2 - 1)*eye(3) + 2*(epsilon*epsilon') - 2*eta*epsilon_cross;
    
    end % quat to rot mat function
    
    function [dstate] = non_impulsive_COAST(time,state,mu)
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
    
    
    end % non impulsive coast funct
    
    function euler_init = eulerinitial_from_LVLH_ECI_frames(Cb_LVLH,C_LVLH_ECI)
    %{
    description
    %}
    
    M = Cb_LVLH; % easy name
    N = C_LVLH_ECI; % easy name
    
    euler_b_LVLH = [atan2(M(2,3),M(3,3)); -asin(M(1,3)); atan2(M(1,2),M(1,1))]; 
    euler_LVLH_ECI = [atan2(N(2,3),N(3,3)); -asin(N(1,3)); atan2(N(1,2),N(1,1))];
    
    euler_init = (euler_b_LVLH + euler_LVLH_ECI);
    
    end % euler initial from... funct

    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    function euler_b_LVLH = euler_body_LVLH(Cb_LVLH)
    %{
    description
    %}
    
    M = Cb_LVLH; % easy name
    euler_b_LVLH = [atan2(M(2,3),M(3,3)); -asin(M(1,3)); atan2(M(1,2),M(1,1))]; 
    
    end % euler initial from... funct
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    
    function [epsilon,eta] = quaternionParam(M)
    % Justin Self
    % Fall 2022
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    % This function takes a square matrix, M, and determines the quaternion
    % parameterization in terms of vector epsilon and scalar eta.
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    % First, check that M is square
    [nRow,nCol] = size(M);
    
        if nRow == nCol
            % If M is square, continue
             else % if M is not square
            warning("M is not a square matrix.")
        end % square check
    
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    
    % Finding eta and epsilon from known rotation matrix, M
    eta = 0.5 * sqrt(1 + trace(M));
    
        if eta == 0 
            %disp("Eta is zero.")
            epsilon = [ sqrt((M(1,1) + 1) / 2 ); % epsilon x 
                        sqrt((M(2,2) + 1) / 2 ); % epsilon y
                        sqrt((M(2,2) + 1) / 2 ); % epsilon z
                      ];
           % disp("The quaternion is:")
            %disp("Epsilon:")
            %disp(epsilon)
            %disp("Eta: " + eta)
        
        else % if eta ~= 0
            %disp("Eta is nonzero.")
            epsilon = [ (M(2,3) - M(3,2) ) / (4*eta); % epsilon x 
                        (M(3,1) - M(1,3) ) / (4*eta); % epsilon y
                        (M(1,2) - M(2,1) ) / (4*eta); % epsilon z
                      ];
            %disp("The quaternion is:")
            %disp("Epsilon:")
            %disp(epsilon)
            %disp("Eta: " + eta)
        end
    
    
    % Check the quaternion
    epcheck = epsilon'*epsilon + eta^2;
    
    TOL = 1e-5; % ensure test passes even if not exactly 1.0000000000000000...
        if (epcheck + TOL) || (epcheck - TOL)
           % disp("Quaternion test passed.")
        else
            disp("Quaternion test failed.")
        end 
    end % quat param funct
    
    function [Q] = peri2geo_313_rotation_matrix(RAAN,inc,w)
    
    % This function produces a transformation matrix, Q, from the PERIFOCAL to
    % the GEOCENTRIC frames.
    
    % Self, Justin
    % Fall 2022
    
    Cz_RAAN =        [  cos(RAAN)     sin(RAAN)     0;
                       -sin(RAAN)     cos(RAAN)     0;
                        0             0             1]; % 3
    
    Cx_inc =        [   1             0             0;
                        0             cos(inc)      sin(inc);
                        0             -sin(inc)     cos(inc)]; % 1
    
    Cz_w =        [     cos(w)        sin(w)        0;
                        -sin(w)       cos(w)        0;
                        0             0             1]; % 3
    
    Q = Cz_RAAN * Cx_inc * Cz_w;
    Q = Q';
    end % 313 funct
    
    function dstate  = angularvelocity_ODE(time,state,I,T)
    
    %{
    This function is created for use in MATLAB's ode45 solver to compute the
    following: 
        i.      Euler angle changes with time
        ii.     Quaternion changes with time
        iii.    Omega dot (change in angular velocity w.r.t time
    
    INPUTS: 
        time = timespan for ode45
        state = mega state vector that contains all pertinent initial
        conditions. I.E., [omega; eulerangles, quaternion] 
    
    state(1) = wx
    state(2) = wy
    state(3) = wz
    state(4) = phi
    state(5) = theta
    state(6) = psi
    state(7) = epsilonx
    state(8) = epsilony
    state(9) = epsilonz
    state(10) = eta
    
    I = inertia matrix (3x3) for the rigid body under consideration
    T = net external torque (col vect) for system
    
    
    OUTPUTS: derivative of the state for ode45 computation.
    %}
    
    % Preallocate vector
    dstate = zeros(10,1);
    
    % Omega Dot
    % The relationship for wdot needs:
        % i. center of mass inertia matrix I
        % ii. omega cross matrix
    
        w = [state(1);
             state(2);
             state(3)];
    
    % Find omega cross matrix
    w_cross =   [   0      -w(3)     w(2);
                    w(3)    0        -w(1);
                   -w(2)    w(1)      0   ];
    
    wdot = inv(I) * (T - w_cross * I * w);
    
    dstate(1:3) = wdot;
    
    % Euler Angles
    
    phi = state(4);
    theta = state(5);
    psi = state(6);
    
    dstate(4:6) = cos(theta)^(-1) * [   cos(theta)      sin(phi)*sin(theta)     cos(phi)*sin(theta); 
                                    0               cos(phi)*cos(theta)     -sin(phi)*cos(theta);
                                    0               sin(phi)                 cos(phi)           ] * w;
    
    
    % Quaternion Parameterization
    
    epx = state(7);
    epy = state(8);
    epz = state(9);
    eta = state(10);
    
    epsilon = [epx; epy; epz];
    
    epsilon_cross = [   0       -epz     epy;
                        epz     0        -epx;
                        -epy    epx      0    ];
    
    % Derivatives of epsilon and eta
    depsilon = 0.5 * (eta*eye(3) + epsilon_cross) * w;
    deta = -0.5 * epsilon' * w;
    
    % tell matlab to integrate this 
    % MUST BE COLUMN VECT for ode45 to work
    
    dstate(7:10) = [depsilon(1); depsilon(2); depsilon(3);deta];
    
    %dstate = dstate';
    
    end % ang veloc ode funct
    
    function [vector_cross] = vector_cross(vector)
    
    % This function takes a 3x1 column vector and outputs its "cross"
    
    % INPUT: 3x1 column vector
    % OUTPUT: 3x3 matrix, "cross" version
    
    % Self, Justin
    % Fall 2022
    
    vector_cross = [   0            -vector(3)     vector(2);
                       vector(3)    0             -vector(1);
                      -vector(2)    vector(1)      0         ];
    
    end % vect cross
    
    function [xx,yy,zz] = earth_sphere(varargin)
    %
    % 
    % 
    % EARTH_SPHERE Generate an earth-sized sphere.
    %   [X,Y,Z] = EARTH_SPHERE(N) generates three (N+1)-by-(N+1)
    %   matrices so that SURFACE(X,Y,Z) produces a sphere equal to 
    %   the radius of the earth in kilometers. The continents will be
    %   displayed.
    %
    %   [X,Y,Z] = EARTH_SPHERE uses N = 50.
    %
    %   EARTH_SPHERE(N) and just EARTH_SPHERE graph the earth as a 
    %   SURFACE and do not return anything.
    %
    %   EARTH_SPHERE(N,'mile') graphs the earth with miles as the unit rather
    %   than kilometers. Other valid inputs are 'ft' 'm' 'nm' 'miles' and 'AU'
    %   for feet, meters, nautical miles, miles, and astronomical units
    %   respectively.
    %
    %   EARTH_SPHERE(AX,...) plots into AX instead of GCA.
    % 
    %  Examples: 
    %    earth_sphere('nm') produces an earth-sized sphere in nautical miles
    %
    %    earth_sphere(10,'AU') produces 10 point mesh of the Earth in
    %    astronomical units
    %
    %    h1 = gca;
    %    earth_sphere(h1,'mile')
    %    hold on
    %    plot3(x,y,z)
    %      produces the Earth in miles on axis h1 and plots a trajectory from
    %      variables x, y, and z
    %   Clay M. Thompson 4-24-1991, CBM 8-21-92.
    %   Will Campbell, 3-30-2010
    %   Copyright 1984-2010 The MathWorks, Inc. 
    % Input Handling
    [cax,args,nargs] = axescheck(varargin{:}); % Parse possible Axes input
    error(nargchk(0,2,nargs)); % Ensure there are a valid number of inputs
    % Handle remaining inputs.
    % Should have 0 or 1 string input, 0 or 1 numeric input
    j = 0;
    k = 0;
    n = 50; % default value
    units = 'km'; % default value
        for i = 1:nargs
            if ischar(args{i})
                units = args{i};
                j = j+1;
            elseif isnumeric(args{i})
                n = args{i};
                k = k+1;
            end
        end
        if j > 1 || k > 1
            error('Invalid input types')
        end
    % Calculations
    % Scale factors
    Scale = {'km' 'm'  'mile'            'miles'           'nm'              'au'                 'ft';
             1    1000 0.621371192237334 0.621371192237334 0.539956803455724 6.6845871226706e-009 3280.839895};
    % Identify which scale to use
        try
            myscale = 6378.1363*Scale{2,strcmpi(Scale(1,:),units)};
        catch %#ok<*CTCH>
            error('Invalid units requested. Please use m, km, ft, mile, miles, nm, or AU')
        end
         
    % -pi <= theta <= pi is a row vector.
    % -pi/2 <= phi <= pi/2 is a column vector.
    theta = (-n:2:n)/n*pi;
    phi = (-n:2:n)'/n*pi/2;
    cosphi = cos(phi); cosphi(1) = 0; cosphi(n+1) = 0;
    sintheta = sin(theta); sintheta(1) = 0; sintheta(n+1) = 0;
    x = myscale*cosphi*cos(theta);
    y = myscale*cosphi*sintheta;
    z = myscale*sin(phi)*ones(1,n+1);
    % Plotting
    if nargout == 0
        cax = newplot(cax);
        % Load and define topographic data
        load('topo.mat','topo','topomap1');
        % Rotate data to be consistent with the Earth-Centered-Earth-Fixed
        % coordinate conventions. X axis goes through the prime meridian.
        % http://en.wikipedia.org/wiki/Geodetic_system#Earth_Centred_Earth_Fixed_.28ECEF_or_ECF.29_coordinates
        %
        % Note that if you plot orbit trajectories in the Earth-Centered-
        % Inertial, the orientation of the contintents will be misleading.
        topo2 = [topo(:,181:360) topo(:,1:180)]; %#ok<NODEF>
        
        % Define surface settings
        props.FaceColor= 'texture';
        props.EdgeColor = 'none';
        props.FaceLighting = 'phong';
        props.Cdata = topo2;
        % Create the sphere with Earth topography and adjust colormap
        surface(x,y,z,props,'parent',cax)
        colormap(topomap1)
    % Replace the calls to surface and colormap with these lines if you do 
    % not want the Earth's topography displayed.
    %     surf(x,y,z,'parent',cax)
    %     shading flat
    %     colormap gray
        
        % Refine figure
        axis equal
        xlabel(['X [' units ']'])
        ylabel(['Y [' units ']'])
        zlabel(['Z [' units ']'])
        view(127.5,30)
    else
        xx = x; yy = y; zz = z;
    end 
    end % end earth sphere plot code.
    
% Deliverable #4
 
    function [r_ECI_0, v_ECI_0] = coe2rv(h, ecc, Omega, inclination, omega, nu)
    %compute r and v from COES
    theta = omega; 
    omega = Omega; 
    inc = inclination; 
    raan = nu;
    mu = 1.327124e11; %km3/s2 for da sun !! this code is messed


    theta = theta*pi/180;
    omega = omega*pi/180;
    raan = raan*pi/180;

    
    rvectx = (h^2/mu)*(1/(1+ecc*cos(theta))).*[cos(theta);sin(theta);0];
    vvectx = (mu/h).*[-sin(theta);ecc+cos(theta);0];

    %matrix conversion back into geocentric

    term1 =[cos(omega) sin(omega) 0;-sin(omega) cos(omega) 0; 0 0 1];
    term2 =[1 0 0; 0 cosd(inc) sind(inc); 0 -sind(inc) cosd(inc)];
    term3 =[cos(raan) sin(raan) 0;-sin(raan) cos(raan) 0; 0 0 1];
    convmat = term1*term2*term3;
    
    r_ECI_0 = convmat\rvectx;
    v_ECI_0 = convmat\vvectx;
    end

% Deliverable 5 

function quat_conj = quatConj(q) 
% eta first 
eta = q(1); 
eps = q(2:end); 
eps_vect = -eps; 
quat_conj = [eta, eps_vect]; 
end 


function matrix2quat = C2quat(C)

% Extract the elements of the DCM for C2quat -- will turn into a function.
% i m just impatient ok 
C11 = C(1, 1);
C12 = C(1, 2);
C13 = C(1, 3);
C21 = C(2, 1);
C22 = C(2, 2);
C23 = C(2, 3);
C31 = C(3, 1);
C32 = C(3, 2);
C33 = C(3, 3);

% Calculate the quaternion elements; eta last !! 
qw = sqrt(1 + C11 + C22 + C33) / 2;
qx = (C32 - C23) / (4 * qw);
qy = (C13 - C31) / (4 * qw);
qz = (C21 - C12) / (4 * qw);

matrix2quat = [qx; qy; qz; qw];

end 


function euler_angles = C2EulerAngles(C)
    % Extract the elements of the direction cosine matrix
    C11 = C(1, 1);
    C12 = C(1, 2);
    C13 = C(1, 3);
    C21 = C(2, 1);
    C22 = C(2, 2);
    C23 = C(2, 3);
    C31 = C(3, 1);
    C32 = C(3, 2);
    C33 = C(3, 3);

    % Calculate the Euler angles
    phi = atan2(C32, C33);
    theta = -asin(C31);
    psi = atan2(C21, C11);

    euler_angles = [phi; theta; psi];
end

function [r_ECI,v_ECI] = r_and_v_from_COEs(RAAN,inc,w,h,Ecc,theta)
% Finds the r and v vectors in an Earth Centered Inertial reference frame
% Inputs
    % inc = inclination [rad]
    % w = argiment of perigee [rad]
    % RAAN = right ascension of the ascending node [rad]
    % h = angular momentum [km2/s]
    % Ecc = eccentricity
    % theta = true anomaly [rad]
% Outputs
    % r_vect = position vector in ECI frame [km]
    % v_vect = velocity vector in ECI frame [km/s]

% constant    
muEarth = 398600;

% determine perifocal to GEO rotation matrix
Cz_RAAN =        [  cos(RAAN)     sin(RAAN)     0;
                   -sin(RAAN)     cos(RAAN)     0;
                    0             0             1]; % 3

Cx_inc =         [  1             0             0;
                    0             cos(inc)      sin(inc);
                    0             -sin(inc)     cos(inc)]; % 1

Cz_w =           [  cos(w)        sin(w)        0;
                   -sin(w)        cos(w)        0;
                    0             0             1]; % 3

Qgeo2peri = Cz_w * Cx_inc * Cz_RAAN;
Qperi2geo = Qgeo2peri';

% find r and v (Perifocal)
r_PF = (((h^2)/muEarth)*(1/(1+Ecc*cos(theta))))*[cos(theta);sin(theta);0];
v_PF = (muEarth/h)*[-sin(theta); (Ecc+cos(theta)); 0];

% calc r and v relative to the geocentric reference frame
% GEO = ECI
r_ECI = Qperi2geo*r_PF;
v_ECI = Qperi2geo*v_PF;
end

