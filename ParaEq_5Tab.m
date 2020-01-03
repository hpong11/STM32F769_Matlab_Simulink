clear all
Fs = 44100;

Profile = 3;
switch Profile   %[LP P1 P2 P3 HP]
    case 1
        G_dB =  [-5     13      -13     10      3];
        fc =    [200    300     1000    2000    7000];
        Q =     [0      24      24      2       0];
    case 2
        G_dB =  [3      12.6    -2.6    -5.4    -10.3];
        fc =    [150    250     621     2048    7551];
        Q =     [0      4       3.91    5.83    0];
    case 3
        G_dB =  [-2     5       -10     14      5];
        fc =    [100    150     220     689     8000];
        Q =     [0      10      3.47    3       0];
end

G = 10.^(G_dB./20);
fl = logspace(0,log10(Fs/2),1000);

OM0 = tan(pi.*fc./Fs);
pascal = [ 1  1  1;
    2  0 -2;
    1 -1  1];

for i=1:length(fc)
    if i==1 %low
        if G(i)>1 %boot
            BA = [G(i)*OM0(i)^2; sqrt(2*G(i))*OM0(i) ; 1];
            BAnalog(:,i) = pascal*BA(:,1);
            AA = [OM0(i)^2; sqrt(2)*OM0(i) ; 1];
            AAnalog(:,i) = pascal*AA(:,1);
        end
        if G(i)<1 %cut
            BA = [OM0(i)^2; sqrt(2)*OM0(i) ; 1];
            BAnalog(:,i) = pascal*BA(:,1);
            AA = [OM0(i)^2/G(i); sqrt(2/G(i))*OM0(i) ; 1];
            AAnalog(:,i) = pascal*AA(:,1);
        end
    elseif i==length(fc) %hi
        if G(i)>1 %boot
            BA = [OM0(i)^2; sqrt(2*G(i))*OM0(i) ; G(i)];
            BAnalog(:,i) = pascal*BA(:,1);
            AA = [OM0(i)^2; sqrt(2)*OM0(i) ; 1];
            AAnalog(:,i) = pascal*AA(:,1);
        end
        if G(i)<1 %cut
            BA = [OM0(i)^2; sqrt(2)*OM0(i) ; 1];
            BAnalog(:,i) = pascal*BA(:,1);
            AA = [OM0(i)^2; sqrt(2/G(i))*OM0(i) ; 1/G(i)];
            AAnalog(:,i) = pascal*AA(:,1);
        end
    else %Peak
        if G(i)>1 %boot
            BA = [OM0(i)^2; G(i)*OM0(i)/Q(i) ; 1];
            BAnalog(:,i) = pascal*BA(:,1);
            AA = [OM0(i)^2; OM0(i)/Q(i) ; 1];
            AAnalog(:,i) = pascal*AA(:,1);
        end
        if G(i)<1 %cut
            BA = [OM0(i)^2; OM0(i)/Q(i) ; 1];
            BAnalog(:,i) = pascal*BA(:,1);
            AA = [OM0(i)^2; OM0(i)/(G(i)*Q(i)) ; 1];
            AAnalog(:,i) = pascal*AA(:,1);
        end
    end
end
BAnalog = BAnalog./AAnalog(1,:);
AAnalog = AAnalog./AAnalog(1,:);
H_Mix = ones(1,length(fl));
for i = 1:length(fc)
    H_Ana(:,i) = freqz(BAnalog(:,i),AAnalog(:,i),fl,Fs);
    H_Mix = H_Mix.*H_Ana(:,i);
%     figure(i);
%     semilogx(fl,20*log10(abs(H_Ana(:,i))));
%     grid on
%     xlim([16,25600]);
%     ylim([-10 10]);
%     xlabel('Frequency (Hz)')
%     ylabel('Gain (dB)')
%     switch i
%         case 1
%             fprintf('Low Pass Shilving\n')
%         case 2
%             fprintf('Peak filter 1\n')
%         case 3
%             fprintf('Peak filter 2\n')
%         case 4
%             fprintf('Peak filter 3\n')
%         case 5
%             fprintf('Hight Pass Shilving\n')
%     end
%     fprintf('[')
%     for n=1:length(BAnalog(:,i))
%         fprintf('%1.5f  ',BAnalog(n,i))
%     end
%     fprintf(']\n[')
%     for n=1:length(AAnalog(:,i))
%         fprintf('%1.5f  ',AAnalog(n,i))
%     end
%     fprintf(']\n\n')
end
figure(i+1);
semilogx(fl,20*log10(abs(H_Mix)));
grid on
xlim([16,25600]);
ylim([-15 15]);
xlabel('Frequency (Hz)')
ylabel('Gain (dB)')

for i=1:length(fc)
    
end


BAnalog = BAnalog';
AAnalog = AAnalog';
set_param('AnalogBilinearParaEq/Constant1','Value','BAnalog(1,:)');
set_param('AnalogBilinearParaEq/Constant2','Value','AAnalog(1,:)');
set_param('AnalogBilinearParaEq/Constant3','Value','BAnalog(2,:)');
set_param('AnalogBilinearParaEq/Constant4','Value','AAnalog(2,:)');
set_param('AnalogBilinearParaEq/Constant5','Value','BAnalog(3,:)');
set_param('AnalogBilinearParaEq/Constant6','Value','AAnalog(3,:)');
set_param('AnalogBilinearParaEq/Constant7','Value','BAnalog(4,:)');
set_param('AnalogBilinearParaEq/Constant8','Value','AAnalog(4,:)');
set_param('AnalogBilinearParaEq/Constant9','Value','BAnalog(5,:)');
set_param('AnalogBilinearParaEq/Constant10','Value','AAnalog(5,:)');
% Sos = [BAnalog AAnalog];
