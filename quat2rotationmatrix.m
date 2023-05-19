    function [C21] = quat2rotationmatrix(epsilon,eta)
    
    %{
    quaternion to associated rotation matrix function
    %}
    
    epsilon_cross = vector_cross(epsilon);
    
    C21 = (2*eta^2 - 1)*eye(3) + 2*(epsilon*epsilon') - 2*eta*epsilon_cross;