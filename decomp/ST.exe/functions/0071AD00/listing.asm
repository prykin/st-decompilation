FUN_0071ad00:
0071AD00  55                        PUSH EBP
0071AD01  8B EC                     MOV EBP,ESP
0071AD03  83 EC 48                  SUB ESP,0x48
0071AD06  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0071AD0B  56                        PUSH ESI
0071AD0C  8D 55 BC                  LEA EDX,[EBP + -0x44]
0071AD0F  8D 4D B8                  LEA ECX,[EBP + -0x48]
0071AD12  6A 00                     PUSH 0x0
0071AD14  52                        PUSH EDX
0071AD15  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0071AD1C  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0071AD1F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071AD25  E8 C6 2A 01 00            CALL 0x0072d7f0
0071AD2A  8B F0                     MOV ESI,EAX
0071AD2C  83 C4 08                  ADD ESP,0x8
0071AD2F  85 F6                     TEST ESI,ESI
0071AD31  75 32                     JNZ 0x0071ad65
0071AD33  F6 45 10 04               TEST byte ptr [EBP + 0x10],0x4
0071AD37  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0071AD3A  50                        PUSH EAX
0071AD3B  74 0A                     JZ 0x0071ad47
0071AD3D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0071AD40  8D 4D FC                  LEA ECX,[EBP + -0x4]
0071AD43  51                        PUSH ECX
0071AD44  52                        PUSH EDX
0071AD45  EB 06                     JMP 0x0071ad4d
LAB_0071ad47:
0071AD47  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0071AD4A  6A 00                     PUSH 0x0
0071AD4C  51                        PUSH ECX
LAB_0071ad4d:
0071AD4D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0071AD50  6A 00                     PUSH 0x0
0071AD52  E8 89 6F FD FF            CALL 0x006f1ce0
0071AD57  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0071AD5A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0071AD60  5E                        POP ESI
0071AD61  8B E5                     MOV ESP,EBP
0071AD63  5D                        POP EBP
0071AD64  C3                        RET
LAB_0071ad65:
0071AD65  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0071AD68  68 DC 08 7F 00            PUSH 0x7f08dc
0071AD6D  68 CC 4C 7A 00            PUSH 0x7a4ccc
0071AD72  56                        PUSH ESI
0071AD73  6A 00                     PUSH 0x0
0071AD75  6A 19                     PUSH 0x19
0071AD77  68 C8 08 7F 00            PUSH 0x7f08c8
0071AD7C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0071AD81  E8 4A 27 F9 FF            CALL 0x006ad4d0
0071AD86  83 C4 18                  ADD ESP,0x18
0071AD89  85 C0                     TEST EAX,EAX
0071AD8B  74 01                     JZ 0x0071ad8e
0071AD8D  CC                        INT3
LAB_0071ad8e:
0071AD8E  6A 1B                     PUSH 0x1b
0071AD90  68 C8 08 7F 00            PUSH 0x7f08c8
0071AD95  6A 00                     PUSH 0x0
0071AD97  56                        PUSH ESI
0071AD98  E8 A3 B0 F8 FF            CALL 0x006a5e40
0071AD9D  33 C0                     XOR EAX,EAX
0071AD9F  5E                        POP ESI
0071ADA0  8B E5                     MOV ESP,EBP
0071ADA2  5D                        POP EBP
0071ADA3  C3                        RET
