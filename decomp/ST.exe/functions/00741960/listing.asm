FUN_00741960:
00741960  55                        PUSH EBP
00741961  8B EC                     MOV EBP,ESP
00741963  83 EC 10                  SUB ESP,0x10
00741966  83 7D 18 00               CMP dword ptr [EBP + 0x18],0x0
0074196A  75 0A                     JNZ 0x00741976
0074196C  A1 40 26 7F 00            MOV EAX,[0x007f2640]
00741971  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00741974  EB 06                     JMP 0x0074197c
LAB_00741976:
00741976  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00741979  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_0074197c:
0074197C  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0074197F  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00741982  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00741985  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00741988:
00741988  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
0074198C  0F 86 E7 00 00 00         JBE 0x00741a79
00741992  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00741995  8A 11                     MOV DL,byte ptr [ECX]
00741997  88 55 F0                  MOV byte ptr [EBP + -0x10],DL
0074199A  80 7D F0 00               CMP byte ptr [EBP + -0x10],0x0
0074199E  74 08                     JZ 0x007419a8
007419A0  80 7D F0 25               CMP byte ptr [EBP + -0x10],0x25
007419A4  74 07                     JZ 0x007419ad
007419A6  EB 5F                     JMP 0x00741a07
LAB_007419a8:
007419A8  E9 CC 00 00 00            JMP 0x00741a79
LAB_007419ad:
007419AD  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007419B0  83 C0 01                  ADD EAX,0x1
007419B3  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
007419B6  C7 05 2C 8E 85 00 00 00 00 00  MOV dword ptr [0x00858e2c],0x0
007419C0  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
007419C3  0F BE 11                  MOVSX EDX,byte ptr [ECX]
007419C6  83 FA 23                  CMP EDX,0x23
007419C9  75 13                     JNZ 0x007419de
007419CB  C7 05 2C 8E 85 00 01 00 00 00  MOV dword ptr [0x00858e2c],0x1
007419D5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007419D8  83 C0 01                  ADD EAX,0x1
007419DB  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_007419de:
007419DE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007419E1  51                        PUSH ECX
007419E2  8D 55 F8                  LEA EDX,[EBP + -0x8]
007419E5  52                        PUSH EDX
007419E6  8D 45 08                  LEA EAX,[EBP + 0x8]
007419E9  50                        PUSH EAX
007419EA  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
007419ED  51                        PUSH ECX
007419EE  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
007419F1  8A 02                     MOV AL,byte ptr [EDX]
007419F3  50                        PUSH EAX
007419F4  E8 A7 00 00 00            CALL 0x00741aa0
007419F9  83 C4 14                  ADD ESP,0x14
007419FC  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
007419FF  83 C1 01                  ADD ECX,0x1
00741A02  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
00741A05  EB 6D                     JMP 0x00741a74
LAB_00741a07:
00741A07  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00741A0A  33 C0                     XOR EAX,EAX
00741A0C  8A 02                     MOV AL,byte ptr [EDX]
00741A0E  8B 0D 80 12 7F 00         MOV ECX,dword ptr [0x007f1280]
00741A14  33 D2                     XOR EDX,EDX
00741A16  66 8B 14 41               MOV DX,word ptr [ECX + EAX*0x2]
00741A1A  81 E2 00 80 00 00         AND EDX,0x8000
00741A20  85 D2                     TEST EDX,EDX
00741A22  74 2B                     JZ 0x00741a4f
00741A24  83 7D F8 01               CMP dword ptr [EBP + -0x8],0x1
00741A28  76 25                     JBE 0x00741a4f
00741A2A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00741A2D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00741A30  8A 11                     MOV DL,byte ptr [ECX]
00741A32  88 10                     MOV byte ptr [EAX],DL
00741A34  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00741A37  83 C0 01                  ADD EAX,0x1
00741A3A  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00741A3D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00741A40  83 C1 01                  ADD ECX,0x1
00741A43  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
00741A46  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00741A49  83 EA 01                  SUB EDX,0x1
00741A4C  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_00741a4f:
00741A4F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00741A52  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00741A55  8A 11                     MOV DL,byte ptr [ECX]
00741A57  88 10                     MOV byte ptr [EAX],DL
00741A59  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00741A5C  83 C0 01                  ADD EAX,0x1
00741A5F  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00741A62  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00741A65  83 C1 01                  ADD ECX,0x1
00741A68  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
00741A6B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00741A6E  83 EA 01                  SUB EDX,0x1
00741A71  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_00741a74:
00741A74  E9 0F FF FF FF            JMP 0x00741988
LAB_00741a79:
00741A79  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
00741A7D  76 0E                     JBE 0x00741a8d
00741A7F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00741A82  C6 00 00                  MOV byte ptr [EAX],0x0
00741A85  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00741A88  2B 45 F8                  SUB EAX,dword ptr [EBP + -0x8]
00741A8B  EB 02                     JMP 0x00741a8f
LAB_00741a8d:
00741A8D  33 C0                     XOR EAX,EAX
LAB_00741a8f:
00741A8F  8B E5                     MOV ESP,EBP
00741A91  5D                        POP EBP
00741A92  C3                        RET
