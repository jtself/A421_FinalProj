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