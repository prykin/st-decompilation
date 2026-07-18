FUN_006ba9e0:
006BA9E0  55                        PUSH EBP
006BA9E1  8B EC                     MOV EBP,ESP
006BA9E3  81 EC 94 00 00 00         SUB ESP,0x94
006BA9E9  56                        PUSH ESI
006BA9EA  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006BA9ED  57                        PUSH EDI
006BA9EE  33 FF                     XOR EDI,EDI
006BA9F0  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006BA9F3  25 00 11 00 00            AND EAX,0x1100
006BA9F8  3D 00 01 00 00            CMP EAX,0x100
006BA9FD  0F 84 44 01 00 00         JZ 0x006bab47
006BAA03  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
006BAA06  85 C0                     TEST EAX,EAX
006BAA08  0F 84 39 01 00 00         JZ 0x006bab47
006BAA0E  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006BAA11  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006BAA14  A9 00 00 00 04            TEST EAX,0x4000000
006BAA19  C7 85 6C FF FF FF 64 00 00 00  MOV dword ptr [EBP + 0xffffff6c],0x64
006BAA23  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
006BAA26  74 0D                     JZ 0x006baa35
006BAA28  8D 96 F0 04 00 00         LEA EDX,[ESI + 0x4f0]
006BAA2E  52                        PUSH EDX
006BAA2F  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006baa35:
006BAA35  53                        PUSH EBX
006BAA36  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006BAA39  85 DB                     TEST EBX,EBX
006BAA3B  75 03                     JNZ 0x006baa40
006BAA3D  8B 5E 18                  MOV EBX,dword ptr [ESI + 0x18]
LAB_006baa40:
006BAA40  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006BAA43  85 D2                     TEST EDX,EDX
006BAA45  75 03                     JNZ 0x006baa4a
006BAA47  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
LAB_006baa4a:
006BAA4A  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006BAA4D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006BAA50  03 C1                     ADD EAX,ECX
006BAA52  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006BAA55  03 4D 10                  ADD ECX,dword ptr [EBP + 0x10]
006BAA58  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006BAA5B  03 C3                     ADD EAX,EBX
006BAA5D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006BAA60  03 CA                     ADD ECX,EDX
006BAA62  8B 96 8C 04 00 00         MOV EDX,dword ptr [ESI + 0x48c]
006BAA68  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006BAA6B  8B 86 84 04 00 00         MOV EAX,dword ptr [ESI + 0x484]
006BAA71  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006BAA74  8B 8E 88 04 00 00         MOV ECX,dword ptr [ESI + 0x488]
006BAA7A  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006BAA7D  8B 86 90 04 00 00         MOV EAX,dword ptr [ESI + 0x490]
006BAA83  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006BAA86  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
006BAA89  8D 4D E0                  LEA ECX,[EBP + -0x20]
006BAA8C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006BAA8F  8D 55 F0                  LEA EDX,[EBP + -0x10]
006BAA92  51                        PUSH ECX
006BAA93  8D 45 D0                  LEA EAX,[EBP + -0x30]
006BAA96  52                        PUSH EDX
006BAA97  50                        PUSH EAX
006BAA98  FF 15 50 BE 85 00         CALL dword ptr [0x0085be50]
006BAA9E  85 C0                     TEST EAX,EAX
006BAAA0  74 69                     JZ 0x006bab0b
006BAAA2  33 DB                     XOR EBX,EBX
LAB_006baaa4:
006BAAA4  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
006BAAA7  8D 95 6C FF FF FF         LEA EDX,[EBP + 0xffffff6c]
006BAAAD  52                        PUSH EDX
006BAAAE  68 00 04 00 01            PUSH 0x1000400
006BAAB3  8B 08                     MOV ECX,dword ptr [EAX]
006BAAB5  6A 00                     PUSH 0x0
006BAAB7  8D 55 D0                  LEA EDX,[EBP + -0x30]
006BAABA  6A 00                     PUSH 0x0
006BAABC  52                        PUSH EDX
006BAABD  50                        PUSH EAX
006BAABE  FF 51 14                  CALL dword ptr [ECX + 0x14]
006BAAC1  8B F8                     MOV EDI,EAX
006BAAC3  85 FF                     TEST EDI,EDI
006BAAC5  74 32                     JZ 0x006baaf9
006BAAC7  81 FF C2 01 76 88         CMP EDI,0x887601c2
006BAACD  75 08                     JNZ 0x006baad7
006BAACF  56                        PUSH ESI
006BAAD0  E8 6B 41 01 00            CALL 0x006cec40
006BAAD5  EB 1C                     JMP 0x006baaf3
LAB_006baad7:
006BAAD7  81 FF A0 00 76 88         CMP EDI,0x887600a0
006BAADD  74 08                     JZ 0x006baae7
006BAADF  81 FF AE 01 76 88         CMP EDI,0x887601ae
006BAAE5  75 12                     JNZ 0x006baaf9
LAB_006baae7:
006BAAE7  85 DB                     TEST EBX,EBX
006BAAE9  75 0E                     JNZ 0x006baaf9
006BAAEB  6A 02                     PUSH 0x2
006BAAED  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006baaf3:
006BAAF3  43                        INC EBX
006BAAF4  83 FB 02                  CMP EBX,0x2
006BAAF7  72 AB                     JC 0x006baaa4
LAB_006baaf9:
006BAAF9  81 FF A0 00 76 88         CMP EDI,0x887600a0
006BAAFF  74 08                     JZ 0x006bab09
006BAB01  81 FF AE 01 76 88         CMP EDI,0x887601ae
006BAB07  75 02                     JNZ 0x006bab0b
LAB_006bab09:
006BAB09  33 FF                     XOR EDI,EDI
LAB_006bab0b:
006BAB0B  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006BAB0E  5B                        POP EBX
006BAB0F  A9 00 00 00 04            TEST EAX,0x4000000
006BAB14  74 0D                     JZ 0x006bab23
006BAB16  81 C6 F0 04 00 00         ADD ESI,0x4f0
006BAB1C  56                        PUSH ESI
006BAB1D  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006bab23:
006BAB23  85 FF                     TEST EDI,EDI
006BAB25  74 20                     JZ 0x006bab47
006BAB27  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006BAB2C  68 ED 02 00 00            PUSH 0x2ed
006BAB31  68 48 DC 7E 00            PUSH 0x7edc48
006BAB36  50                        PUSH EAX
006BAB37  57                        PUSH EDI
006BAB38  E8 03 B3 FE FF            CALL 0x006a5e40
006BAB3D  8B C7                     MOV EAX,EDI
006BAB3F  5F                        POP EDI
006BAB40  5E                        POP ESI
006BAB41  8B E5                     MOV ESP,EBP
006BAB43  5D                        POP EBP
006BAB44  C2 18 00                  RET 0x18
LAB_006bab47:
006BAB47  5F                        POP EDI
006BAB48  33 C0                     XOR EAX,EAX
006BAB4A  5E                        POP ESI
006BAB4B  8B E5                     MOV ESP,EBP
006BAB4D  5D                        POP EBP
006BAB4E  C2 18 00                  RET 0x18
