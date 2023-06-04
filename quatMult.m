function quat = quatMult(p,q)

%{
Quaternion Multiplier Code

p times q

*INPUT QUATERNIONS MUST BE: [eta;epsilon]

Self, Justin
California Polytechnic State University, SLO
June 3, 2023
%}

% Extract eta, epsilon from input vectors
eps_p = p(2:4);
eta_p = p(1);

eps_q = q(2:4);
eta_q = q(1);

epsilon = eta_p * eps_q + eta_q * eps_p + cross(eps_p,eps_q);
eta = (eta_p*eta_q) - eps_p'*eps_q;

quat = [eta;epsilon];


end