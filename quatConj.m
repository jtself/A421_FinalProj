function quat_conj = quatConj(q) 
% eta first 
eta = q(1); 
eps = q(2:end); 
eps_vect = -eps; 
quat_conj = [eta, eps_vect]; 
end 
