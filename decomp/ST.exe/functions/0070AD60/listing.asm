mfJpgLoadToDib:
0070AD60  55                        PUSH EBP
0070AD61  8B EC                     MOV EBP,ESP
0070AD63  83 EC 4C                  SUB ESP,0x4c
0070AD66  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070AD6B  56                        PUSH ESI
0070AD6C  8D 55 B8                  LEA EDX,[EBP + -0x48]
0070AD6F  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0070AD72  6A 00                     PUSH 0x0
0070AD74  52                        PUSH EDX
0070AD75  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0070AD7C  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0070AD83  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0070AD86  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070AD8C  E8 5F 2A 02 00            CALL 0x0072d7f0
0070AD91  8B F0                     MOV ESI,EAX
0070AD93  83 C4 08                  ADD ESP,0x8
0070AD96  85 F6                     TEST ESI,ESI
0070AD98  75 5F                     JNZ 0x0070adf9
0070AD9A  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0070AD9D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0070ADA0  50                        PUSH EAX
0070ADA1  56                        PUSH ESI
0070ADA2  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0070ADA5  51                        PUSH ECX
0070ADA6  56                        PUSH ESI
0070ADA7  E8 94 FF FF FF            CALL 0x0070ad40
0070ADAC  83 C4 10                  ADD ESP,0x10
0070ADAF  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070ADB2  85 C0                     TEST EAX,EAX
0070ADB4  75 0E                     JNZ 0x0070adc4
0070ADB6  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0070ADB9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070ADBF  5E                        POP ESI
0070ADC0  8B E5                     MOV ESP,EBP
0070ADC2  5D                        POP EBP
0070ADC3  C3                        RET
LAB_0070adc4:
0070ADC4  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0070ADC7  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0070ADCA  51                        PUSH ECX
0070ADCB  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070ADCE  52                        PUSH EDX
0070ADCF  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0070ADD2  51                        PUSH ECX
0070ADD3  52                        PUSH EDX
0070ADD4  50                        PUSH EAX
0070ADD5  E8 66 6E 04 00            CALL 0x00751c40
0070ADDA  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070ADDD  8D 45 F8                  LEA EAX,[EBP + -0x8]
0070ADE0  50                        PUSH EAX
0070ADE1  8B CE                     MOV ECX,ESI
0070ADE3  E8 F8 72 FE FF            CALL 0x006f20e0
0070ADE8  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0070ADEB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070ADEE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070ADF4  5E                        POP ESI
0070ADF5  8B E5                     MOV ESP,EBP
0070ADF7  5D                        POP EBP
0070ADF8  C3                        RET
LAB_0070adf9:
0070ADF9  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0070ADFC  68 70 00 7F 00            PUSH 0x7f0070
0070AE01  68 CC 4C 7A 00            PUSH 0x7a4ccc
0070AE06  56                        PUSH ESI
0070AE07  6A 00                     PUSH 0x0
0070AE09  68 90 01 00 00            PUSH 0x190
0070AE0E  68 E0 FF 7E 00            PUSH 0x7effe0
0070AE13  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070AE19  E8 B2 26 FA FF            CALL 0x006ad4d0
0070AE1E  83 C4 18                  ADD ESP,0x18
0070AE21  85 C0                     TEST EAX,EAX
0070AE23  74 01                     JZ 0x0070ae26
0070AE25  CC                        INT3
LAB_0070ae26:
0070AE26  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0070AE29  8D 45 F8                  LEA EAX,[EBP + -0x8]
0070AE2C  50                        PUSH EAX
0070AE2D  E8 AE 72 FE FF            CALL 0x006f20e0
0070AE32  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070AE35  85 C0                     TEST EAX,EAX
0070AE37  74 09                     JZ 0x0070ae42
0070AE39  8D 4D FC                  LEA ECX,[EBP + -0x4]
0070AE3C  51                        PUSH ECX
0070AE3D  E8 1E 02 FA FF            CALL 0x006ab060
LAB_0070ae42:
0070AE42  68 95 01 00 00            PUSH 0x195
0070AE47  68 E0 FF 7E 00            PUSH 0x7effe0
0070AE4C  6A 00                     PUSH 0x0
0070AE4E  56                        PUSH ESI
0070AE4F  E8 EC AF F9 FF            CALL 0x006a5e40
0070AE54  33 C0                     XOR EAX,EAX
0070AE56  5E                        POP ESI
0070AE57  8B E5                     MOV ESP,EBP
0070AE59  5D                        POP EBP
0070AE5A  C3                        RET
