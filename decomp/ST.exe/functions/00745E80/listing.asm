FUN_00745e80:
00745E80  55                        PUSH EBP
00745E81  8B EC                     MOV EBP,ESP
00745E83  83 EC 18                  SUB ESP,0x18
00745E86  B8 F8 27 7F 00            MOV EAX,0x7f27f8
00745E8B  83 E8 60                  SUB EAX,0x60
00745E8E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00745E91  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
00745E95  75 05                     JNZ 0x00745e9c
00745E97  E9 A3 00 00 00            JMP 0x00745f3f
LAB_00745e9c:
00745E9C  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
00745EA0  7D 13                     JGE 0x00745eb5
00745EA2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00745EA5  F7 D9                     NEG ECX
00745EA7  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00745EAA  BA 58 29 7F 00            MOV EDX,0x7f2958
00745EAF  83 EA 60                  SUB EDX,0x60
00745EB2  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_00745eb5:
00745EB5  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
00745EB9  75 08                     JNZ 0x00745ec3
00745EBB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00745EBE  66 C7 00 00 00            MOV word ptr [EAX],0x0
LAB_00745ec3:
00745EC3  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
00745EC7  74 76                     JZ 0x00745f3f
00745EC9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00745ECC  83 C1 54                  ADD ECX,0x54
00745ECF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00745ED2  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00745ED5  83 E2 07                  AND EDX,0x7
00745ED8  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00745EDB  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00745EDE  C1 F8 03                  SAR EAX,0x3
00745EE1  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00745EE4  83 7D E8 00               CMP dword ptr [EBP + -0x18],0x0
00745EE8  75 02                     JNZ 0x00745eec
00745EEA  EB D7                     JMP 0x00745ec3
LAB_00745eec:
00745EEC  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00745EEF  6B C9 0C                  IMUL ECX,ECX,0xc
00745EF2  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00745EF5  03 D1                     ADD EDX,ECX
00745EF7  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00745EFA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00745EFD  33 C9                     XOR ECX,ECX
00745EFF  66 8B 08                  MOV CX,word ptr [EAX]
00745F02  81 F9 00 80 00 00         CMP ECX,0x8000
00745F08  7C 23                     JL 0x00745f2d
00745F0A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00745F0D  8B 02                     MOV EAX,dword ptr [EDX]
00745F0F  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00745F12  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
00745F15  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00745F18  8B 52 08                  MOV EDX,dword ptr [EDX + 0x8]
00745F1B  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00745F1E  8B 45 EE                  MOV EAX,dword ptr [EBP + -0x12]
00745F21  83 E8 01                  SUB EAX,0x1
00745F24  89 45 EE                  MOV dword ptr [EBP + -0x12],EAX
00745F27  8D 4D EC                  LEA ECX,[EBP + -0x14]
00745F2A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00745f2d:
00745F2D  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00745F30  52                        PUSH EDX
00745F31  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00745F34  50                        PUSH EAX
00745F35  E8 06 FB FF FF            CALL 0x00745a40
00745F3A  83 C4 08                  ADD ESP,0x8
00745F3D  EB 84                     JMP 0x00745ec3
LAB_00745f3f:
00745F3F  8B E5                     MOV ESP,EBP
00745F41  5D                        POP EBP
00745F42  C3                        RET
