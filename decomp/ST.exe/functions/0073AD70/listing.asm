FUN_0073ad70:
0073AD70  55                        PUSH EBP
0073AD71  8B EC                     MOV EBP,ESP
0073AD73  83 EC 7C                  SUB ESP,0x7c
0073AD76  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073AD79  50                        PUSH EAX
0073AD7A  E8 A1 05 00 00            CALL 0x0073b320
0073AD7F  83 C4 04                  ADD ESP,0x4
0073AD82  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
0073AD85  6A 78                     PUSH 0x78
0073AD87  8D 4D 88                  LEA ECX,[EBP + -0x78]
0073AD8A  51                        PUSH ECX
0073AD8B  8B 15 80 72 85 00         MOV EDX,dword ptr [0x00857280]
0073AD91  F7 DA                     NEG EDX
0073AD93  1B D2                     SBB EDX,EDX
0073AD95  81 E2 02 F0 FF FF         AND EDX,0xfffff002
0073AD9B  81 C2 01 10 00 00         ADD EDX,0x1001
0073ADA1  52                        PUSH EDX
0073ADA2  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0073ADA5  50                        PUSH EAX
0073ADA6  FF 15 94 72 85 00         CALL dword ptr [0x00857294]
0073ADAC  85 C0                     TEST EAX,EAX
0073ADAE  75 14                     JNZ 0x0073adc4
0073ADB0  C7 05 8C 72 85 00 00 00 00 00  MOV dword ptr [0x0085728c],0x0
0073ADBA  B8 01 00 00 00            MOV EAX,0x1
0073ADBF  E9 C5 00 00 00            JMP 0x0073ae89
LAB_0073adc4:
0073ADC4  8D 4D 88                  LEA ECX,[EBP + -0x78]
0073ADC7  51                        PUSH ECX
0073ADC8  8B 15 84 72 85 00         MOV EDX,dword ptr [0x00857284]
0073ADCE  52                        PUSH EDX
0073ADCF  E8 4C 38 FF FF            CALL 0x0072e620
0073ADD4  83 C4 08                  ADD ESP,0x8
0073ADD7  85 C0                     TEST EAX,EAX
0073ADD9  75 3E                     JNZ 0x0073ae19
0073ADDB  83 3D 80 72 85 00 00      CMP dword ptr [0x00857280],0x0
0073ADE2  75 12                     JNZ 0x0073adf6
0073ADE4  6A 01                     PUSH 0x1
0073ADE6  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0073ADE9  50                        PUSH EAX
0073ADEA  E8 C1 02 00 00            CALL 0x0073b0b0
0073ADEF  83 C4 08                  ADD ESP,0x8
0073ADF2  85 C0                     TEST EAX,EAX
0073ADF4  74 21                     JZ 0x0073ae17
LAB_0073adf6:
0073ADF6  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
0073ADF9  89 0D 90 72 85 00         MOV dword ptr [0x00857290],ECX
0073ADFF  8B 15 90 72 85 00         MOV EDX,dword ptr [0x00857290]
0073AE05  89 15 74 72 85 00         MOV dword ptr [0x00857274],EDX
0073AE0B  A1 8C 72 85 00            MOV EAX,[0x0085728c]
0073AE10  0C 04                     OR AL,0x4
0073AE12  A3 8C 72 85 00            MOV [0x0085728c],EAX
LAB_0073ae17:
0073AE17  EB 63                     JMP 0x0073ae7c
LAB_0073ae19:
0073AE19  83 3D 80 72 85 00 00      CMP dword ptr [0x00857280],0x0
0073AE20  75 5A                     JNZ 0x0073ae7c
0073AE22  83 3D 7C 72 85 00 00      CMP dword ptr [0x0085727c],0x0
0073AE29  74 51                     JZ 0x0073ae7c
0073AE2B  8B 0D 7C 72 85 00         MOV ECX,dword ptr [0x0085727c]
0073AE31  51                        PUSH ECX
0073AE32  8D 55 88                  LEA EDX,[EBP + -0x78]
0073AE35  52                        PUSH EDX
0073AE36  A1 84 72 85 00            MOV EAX,[0x00857284]
0073AE3B  50                        PUSH EAX
0073AE3C  E8 5F 7E 00 00            CALL 0x00742ca0
0073AE41  83 C4 0C                  ADD ESP,0xc
0073AE44  85 C0                     TEST EAX,EAX
0073AE46  75 34                     JNZ 0x0073ae7c
0073AE48  6A 00                     PUSH 0x0
0073AE4A  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
0073AE4D  51                        PUSH ECX
0073AE4E  E8 5D 02 00 00            CALL 0x0073b0b0
0073AE53  83 C4 08                  ADD ESP,0x8
0073AE56  85 C0                     TEST EAX,EAX
0073AE58  74 22                     JZ 0x0073ae7c
0073AE5A  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
0073AE5D  89 15 90 72 85 00         MOV dword ptr [0x00857290],EDX
0073AE63  A1 90 72 85 00            MOV EAX,[0x00857290]
0073AE68  A3 74 72 85 00            MOV [0x00857274],EAX
0073AE6D  8B 0D 8C 72 85 00         MOV ECX,dword ptr [0x0085728c]
0073AE73  83 C9 04                  OR ECX,0x4
0073AE76  89 0D 8C 72 85 00         MOV dword ptr [0x0085728c],ECX
LAB_0073ae7c:
0073AE7C  A1 8C 72 85 00            MOV EAX,[0x0085728c]
0073AE81  83 E0 04                  AND EAX,0x4
0073AE84  F7 D8                     NEG EAX
0073AE86  1B C0                     SBB EAX,EAX
0073AE88  40                        INC EAX
LAB_0073ae89:
0073AE89  8B E5                     MOV ESP,EBP
0073AE8B  5D                        POP EBP
0073AE8C  C2 04 00                  RET 0x4
