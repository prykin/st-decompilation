FUN_007489f8:
007489F8  55                        PUSH EBP
007489F9  8B EC                     MOV EBP,ESP
007489FB  51                        PUSH ECX
007489FC  53                        PUSH EBX
007489FD  56                        PUSH ESI
007489FE  8B F1                     MOV ESI,ECX
00748A00  57                        PUSH EDI
00748A01  8B 46 74                  MOV EAX,dword ptr [ESI + 0x74]
00748A04  85 C0                     TEST EAX,EAX
00748A06  74 24                     JZ 0x00748a2c
00748A08  8B 76 70                  MOV ESI,dword ptr [ESI + 0x70]
00748A0B  85 F6                     TEST ESI,ESI
00748A0D  74 05                     JZ 0x00748a14
00748A0F  8D 56 0C                  LEA EDX,[ESI + 0xc]
00748A12  EB 02                     JMP 0x00748a16
LAB_00748a14:
00748A14  33 D2                     XOR EDX,EDX
LAB_00748a16:
00748A16  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00748A19  8B 18                     MOV EBX,dword ptr [EAX]
00748A1B  83 EC 18                  SUB ESP,0x18
00748A1E  6A 06                     PUSH 0x6
00748A20  59                        POP ECX
00748A21  8B FC                     MOV EDI,ESP
00748A23  52                        PUSH EDX
00748A24  F3 A5                     MOVSD.REP ES:EDI,ESI
00748A26  50                        PUSH EAX
00748A27  FF 53 0C                  CALL dword ptr [EBX + 0xc]
00748A2A  EB 50                     JMP 0x00748a7c
LAB_00748a2c:
00748A2C  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00748A2F  BF 16 02 04 80            MOV EDI,0x80040216
00748A34  85 C0                     TEST EAX,EAX
00748A36  74 42                     JZ 0x00748a7a
00748A38  8B 08                     MOV ECX,dword ptr [EAX]
00748A3A  8D 55 FC                  LEA EDX,[EBP + -0x4]
00748A3D  52                        PUSH EDX
00748A3E  68 40 1B 7A 00            PUSH 0x7a1b40
00748A43  50                        PUSH EAX
00748A44  FF 11                     CALL dword ptr [ECX]
00748A46  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00748A49  85 D2                     TEST EDX,EDX
00748A4B  74 2D                     JZ 0x00748a7a
00748A4D  8B 76 70                  MOV ESI,dword ptr [ESI + 0x70]
00748A50  85 F6                     TEST ESI,ESI
00748A52  74 05                     JZ 0x00748a59
00748A54  8D 46 0C                  LEA EAX,[ESI + 0xc]
00748A57  EB 02                     JMP 0x00748a5b
LAB_00748a59:
00748A59  33 C0                     XOR EAX,EAX
LAB_00748a5b:
00748A5B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00748A5E  8B 1A                     MOV EBX,dword ptr [EDX]
00748A60  83 EC 18                  SUB ESP,0x18
00748A63  6A 06                     PUSH 0x6
00748A65  59                        POP ECX
00748A66  8B FC                     MOV EDI,ESP
00748A68  50                        PUSH EAX
00748A69  F3 A5                     MOVSD.REP ES:EDI,ESI
00748A6B  52                        PUSH EDX
00748A6C  FF 53 0C                  CALL dword ptr [EBX + 0xc]
00748A6F  8B F8                     MOV EDI,EAX
00748A71  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00748A74  50                        PUSH EAX
00748A75  8B 08                     MOV ECX,dword ptr [EAX]
00748A77  FF 51 08                  CALL dword ptr [ECX + 0x8]
LAB_00748a7a:
00748A7A  8B C7                     MOV EAX,EDI
LAB_00748a7c:
00748A7C  5F                        POP EDI
00748A7D  5E                        POP ESI
00748A7E  5B                        POP EBX
00748A7F  C9                        LEAVE
00748A80  C2 04 00                  RET 0x4
