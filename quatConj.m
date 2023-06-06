function quat_conj = quatConj(q) 
% eta first ; ROW VECT
eta = q(1); 
eps = q(2:4); 
eps_vect = -eps; 
quat_conj = [eta, eps_vect]; 
end 
