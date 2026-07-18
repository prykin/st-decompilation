FUN_006b91a0:
006B91A0  55                        PUSH EBP
006B91A1  8B EC                     MOV EBP,ESP
006B91A3  83 EC 30                  SUB ESP,0x30
006B91A6  53                        PUSH EBX
006B91A7  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006B91AA  57                        PUSH EDI
006B91AB  33 FF                     XOR EDI,EDI
006B91AD  8B 03                     MOV EAX,dword ptr [EBX]
006B91AF  39 78 40                  CMP dword ptr [EAX + 0x40],EDI
006B91B2  75 0D                     JNZ 0x006b91c1
006B91B4  5F                        POP EDI
006B91B5  B8 AF FF FF FF            MOV EAX,0xffffffaf
006B91BA  5B                        POP EBX
006B91BB  8B E5                     MOV ESP,EBP
006B91BD  5D                        POP EBP
006B91BE  C2 08 00                  RET 0x8
LAB_006b91c1:
006B91C1  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006B91C4  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006B91C7  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
006B91CA  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
006B91CD  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
006B91D0  56                        PUSH ESI
006B91D1  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006B91D4  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006B91D7  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
006B91DA  8D 45 F0                  LEA EAX,[EBP + -0x10]
006B91DD  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006B91E0  50                        PUSH EAX
006B91E1  8B D6                     MOV EDX,ESI
006B91E3  8B CE                     MOV ECX,ESI
006B91E5  E8 76 72 FF FF            CALL 0x006b0460
006B91EA  85 C0                     TEST EAX,EAX
006B91EC  0F 84 A1 00 00 00         JZ 0x006b9293
006B91F2  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006B91F5  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
006B91F8  8B 16                     MOV EDX,dword ptr [ESI]
006B91FA  8B 76 04                  MOV ESI,dword ptr [ESI + 0x4]
006B91FD  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006B9200  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006B9203  03 C2                     ADD EAX,EDX
006B9205  03 CE                     ADD ECX,ESI
006B9207  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
006B920A  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006B920D  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006B9210  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006B9213  33 F6                     XOR ESI,ESI
LAB_006b9215:
006B9215  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
006B9218  6A 00                     PUSH 0x0
006B921A  8D 55 E0                  LEA EDX,[EBP + -0x20]
006B921D  68 00 00 00 01            PUSH 0x1000000
006B9222  52                        PUSH EDX
006B9223  8B 13                     MOV EDX,dword ptr [EBX]
006B9225  8B 08                     MOV ECX,dword ptr [EAX]
006B9227  8B 52 40                  MOV EDX,dword ptr [EDX + 0x40]
006B922A  52                        PUSH EDX
006B922B  8D 55 D0                  LEA EDX,[EBP + -0x30]
006B922E  52                        PUSH EDX
006B922F  50                        PUSH EAX
006B9230  FF 51 14                  CALL dword ptr [ECX + 0x14]
006B9233  8B F8                     MOV EDI,EAX
006B9235  85 FF                     TEST EDI,EDI
006B9237  74 3D                     JZ 0x006b9276
006B9239  81 FF C2 01 76 88         CMP EDI,0x887601c2
006B923F  75 13                     JNZ 0x006b9254
006B9241  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
006B9244  50                        PUSH EAX
006B9245  8B 08                     MOV ECX,dword ptr [EAX]
006B9247  FF 51 6C                  CALL dword ptr [ECX + 0x6c]
006B924A  8B 13                     MOV EDX,dword ptr [EBX]
006B924C  52                        PUSH EDX
006B924D  E8 EE 59 01 00            CALL 0x006cec40
006B9252  EB 1C                     JMP 0x006b9270
LAB_006b9254:
006B9254  81 FF A0 00 76 88         CMP EDI,0x887600a0
006B925A  74 08                     JZ 0x006b9264
006B925C  81 FF AE 01 76 88         CMP EDI,0x887601ae
006B9262  75 12                     JNZ 0x006b9276
LAB_006b9264:
006B9264  85 F6                     TEST ESI,ESI
006B9266  75 0E                     JNZ 0x006b9276
006B9268  6A 02                     PUSH 0x2
006B926A  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006b9270:
006B9270  46                        INC ESI
006B9271  83 FE 02                  CMP ESI,0x2
006B9274  7C 9F                     JL 0x006b9215
LAB_006b9276:
006B9276  81 FF A0 00 76 88         CMP EDI,0x887600a0
006B927C  74 08                     JZ 0x006b9286
006B927E  81 FF AE 01 76 88         CMP EDI,0x887601ae
006B9284  75 15                     JNZ 0x006b929b
LAB_006b9286:
006B9286  33 FF                     XOR EDI,EDI
006B9288  5E                        POP ESI
006B9289  8B C7                     MOV EAX,EDI
006B928B  5F                        POP EDI
006B928C  5B                        POP EBX
006B928D  8B E5                     MOV ESP,EBP
006B928F  5D                        POP EBP
006B9290  C2 08 00                  RET 0x8
LAB_006b9293:
006B9293  33 C0                     XOR EAX,EAX
006B9295  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
006B9298  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
LAB_006b929b:
006B929B  8B C7                     MOV EAX,EDI
006B929D  5E                        POP ESI
006B929E  5F                        POP EDI
006B929F  5B                        POP EBX
006B92A0  8B E5                     MOV ESP,EBP
006B92A2  5D                        POP EBP
006B92A3  C2 08 00                  RET 0x8
