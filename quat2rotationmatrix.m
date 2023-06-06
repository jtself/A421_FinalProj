    function [C21] = quat2rotationmatrix(epsilon,eta)
    
    %{
    quaternion to associated rotation matrix function
    %}
    ep = epsilon;
    epsilon_cross = [     0       -ep(3)     ep(2);
                          ep(3)       0      -ep(1);
                         -ep(2)    ep(1)       0   ];
    
    C21 = (2*eta^2 - 1)*eye(3) + 2*(ep*ep') - 2*eta*epsilon_cross;