close all
alpha = 0.8;
Gdb = [-5:1:5];
G = 10.^(Gdb./20);
bl = 0.5*[1-alpha 1-alpha];
a = [1 -alpha];

bh = 0.5*[1+alpha -1+alpha];
%     
% figure(1)
% plot(abs(freqz(bl,a,1000)));
% 
% figure(2)
% plot(abs(freqz(bh,a,1000)));

y = log10(0:1001/1000:1000);
for i=1:length(G)
figure(3)
hold on;
plot(20*log10(abs(freqz(bl*G(i)+bh,a,1000))));
grid on
hold off;

figure(4)
hold on;
semilogx(y,20*log10(abs(freqz(bl*G(i)+bh,a,1000))));
grid on
hold off;
end
hold off

