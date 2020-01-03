%% Capture the Velocity of a Bouncing Ball with the Memory Block
% The |sldemo_bounce| example shows how to 
% use the Second-Order Integrator and Memory blocks to capture the 
% velocity of a bouncing ball just before it hits the ground. 
open_system('sldemo_bounce');
%% 
% Because *Inherit sample time* is not selected for the Memory block, the
% block sample time depends on the type of solver for simulating the model. 
% In this case, the model uses a variable-step (ode23) solver. Therefore,
% the sample time of the Memory block is continuous but fixed in minor time 
% step: [0, 1]. When you run the model, you get the following results:
sim('sldemo_bounce');
%%
% If you replace the Memory block with a Unit Delay block, you get the same
% results. However, a warning also appears due to the discrete Unit Delay 
% block inheriting a continuous sample time.
%%
% For more information, see the
% <matlab:showExample('simulink_general/sldemo_bounceExample') model description>.