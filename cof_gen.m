clearvars;
order = 20     ;
fc = 0.5;
type = "iir";

if type == "iir"
    [B,A] = butter(order,fc);
elseif type == "fir"
    B = fir1(order,fc);
elseif type == "fir_wrap"
    B = fir1(order,fc,'high');
end

fprintf('[')
for n=1:length(B)
    fprintf('%1.5f  ',B(n))
end
fprintf(']\n')

if type == "iir"
    fprintf('[')
    for n=1:length(A)
        fprintf('%1.10f  ',A(n))
    end
    fprintf(']\n')

elseif type == "fir_wrap"
fprintf('[')
    for n=1:length(B)
        fprintf(' 0 0 ;')
    end
%     fprintf(';')
%     for n=1:length(B)
%         fprintf(' 0')
%     end
    fprintf(']\n')
 
else
    fprintf('[')
    for n=1:length(B)
        fprintf('0  ')
    end
    fprintf(']\n')
end
