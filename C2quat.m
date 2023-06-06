function matrix2quat = C2quat(C) 
% Extract the elements of the DCM for C2quat 
C11 = C(1, 1);
C12 = C(1, 2);
C13 = C(1, 3);
C21 = C(2, 1);
C22 = C(2, 2);
C23 = C(2, 3);
C31 = C(3, 1);
C32 = C(3, 2);
C33 = C(3, 3);

% Calculate the quaternion elements; ETA FIRST 
qw = sqrt(1 + C11 + C22 + C33) / 2;
qx = (C32 - C23) / (4 * qw);
qy = (C13 - C31) / (4 * qw);
qz = (C21 - C12) / (4 * qw);
matrix2quat = [qw, qx, qy, qz]; % ROW vect ETA FIRST
end 

