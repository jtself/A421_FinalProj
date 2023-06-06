function q = C2quat_altVersion(C)
% This is to replace rotm2quat() from Robotics Toolbox
% Inspiration =  https://www.euclideanspace.com/maths/geometry/rotations/conversions/matrixToQuaternion/
% C = 3x3 rotation matrix
% q = [w x y z] ROW VECTOR - ETA FIRST

epsilon = zeros(3,1);
eta = 0;

tr  = trace(C);

if (tr > 0)
    S = sqrt(tr+1.0)*2; % S = 4*qw
    eta = 0.25*S;
    epsilon(1,1) = (C(2,3) - C(3,2))/S;
    epsilon(2,1) = (C(3,1) - C(1,3))/S;
    epsilon(3,1) = (C(1,2) - C(2,1))/S;
elseif (C(1,1) > C(2,2)) && (C(1,1) > C(3,3))
    S = sqrt(1.0 + C(1,1) - C(2,2) - C(3,3)) * 2; % S = 4*qx
    eta = (C(3,2) - C(2,3))/S;
    epsilon(1,1) = 0.25*S;
    epsilon(2,1) = (C(1,2) + C(3,1))/S;
    epsilon(3,1) = (C(1,3) + C(3,1))/S;
elseif (C(2,2) > C(3,3))
    S = sqrt(1.0 + C(2,2) - C(1,1) - C(3,3)) * 2; % S = 4*qy
    eta = (C(1,3) - C(3,1))/S;
    epsilon(1,1) = (C(1,2) + C(2,1))/S;
    epsilon(2,1) = 0.25*S;
    epsilon(3,1) = (C(2,3) + C(3,2))/S;
else
    S = sqrt(1.0 + C(3,3) - C(1,1) - C(2,2)) * 2; % S = 4*qz
    eta = (C(2,1) - C(1,2))/S;
    epsilon(1,1) = (C(1,3) + C(3,1))/S;
    epsilon(2,1) = (C(2,3) + C(3,2))/S;
    epsilon(3,1) = 0.25*S;
end

q = [eta, epsilon'];

end
