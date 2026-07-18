FUN_00423d80:
00423D80  55                        PUSH EBP
00423D81  8B EC                     MOV EBP,ESP
00423D83  83 EC 08                  SUB ESP,0x8
00423D86  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00423D89  53                        PUSH EBX
00423D8A  56                        PUSH ESI
00423D8B  57                        PUSH EDI
00423D8C  8B 70 0C                  MOV ESI,dword ptr [EAX + 0xc]
00423D8F  33 C0                     XOR EAX,EAX
00423D91  85 F6                     TEST ESI,ESI
00423D93  8B D9                     MOV EBX,ECX
00423D95  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00423D98  76 3A                     JBE 0x00423dd4
00423D9A  33 FF                     XOR EDI,EDI
00423D9C  85 F6                     TEST ESI,ESI
00423D9E  76 34                     JBE 0x00423dd4
00423DA0  33 D2                     XOR EDX,EDX
LAB_00423da2:
00423DA2  8D 4D F8                  LEA ECX,[EBP + -0x8]
00423DA5  51                        PUSH ECX
00423DA6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00423DA9  E8 C2 8E 28 00            CALL 0x006acc70
00423DAE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00423DB1  8B 13                     MOV EDX,dword ptr [EBX]
00423DB3  50                        PUSH EAX
00423DB4  8B CB                     MOV ECX,EBX
00423DB6  FF 52 04                  CALL dword ptr [EDX + 0x4]
00423DB9  85 C0                     TEST EAX,EAX
00423DBB  75 07                     JNZ 0x00423dc4
00423DBD  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
LAB_00423dc4:
00423DC4  47                        INC EDI
00423DC5  8B D7                     MOV EDX,EDI
00423DC7  81 E2 FF FF 00 00         AND EDX,0xffff
00423DCD  3B D6                     CMP EDX,ESI
00423DCF  72 D1                     JC 0x00423da2
00423DD1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00423dd4:
00423DD4  5F                        POP EDI
00423DD5  5E                        POP ESI
00423DD6  5B                        POP EBX
00423DD7  8B E5                     MOV ESP,EBP
00423DD9  5D                        POP EBP
00423DDA  C2 04 00                  RET 0x4
