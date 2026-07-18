FUN_00748e2b:
00748E2B  55                        PUSH EBP
00748E2C  8B EC                     MOV EBP,ESP
00748E2E  83 EC 30                  SUB ESP,0x30
00748E31  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00748E34  56                        PUSH ESI
00748E35  85 C0                     TEST EAX,EAX
00748E37  57                        PUSH EDI
00748E38  0F 84 84 00 00 00         JZ 0x00748ec2
00748E3E  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00748E41  85 FF                     TEST EDI,EDI
00748E43  75 07                     JNZ 0x00748e4c
00748E45  B8 03 40 00 80            MOV EAX,0x80004003
00748E4A  EB 78                     JMP 0x00748ec4
LAB_00748e4c:
00748E4C  6A 30                     PUSH 0x30
00748E4E  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00748E51  59                        POP ECX
00748E52  3B C1                     CMP EAX,ECX
00748E54  72 03                     JC 0x00748e59
00748E56  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
LAB_00748e59:
00748E59  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00748E5C  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00748E5F  8B D1                     MOV EDX,ECX
00748E61  83 E2 DF                  AND EDX,0xffffffdf
00748E64  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00748E67  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00748E6A  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
00748E6D  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
00748E70  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00748E73  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
00748E76  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00748E79  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
00748E7C  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
00748E7F  8B 50 20                  MOV EDX,dword ptr [EAX + 0x20]
00748E82  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00748E85  8B 50 24                  MOV EDX,dword ptr [EAX + 0x24]
00748E88  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00748E8B  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
00748E8E  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00748E91  8B 50 2C                  MOV EDX,dword ptr [EAX + 0x2c]
00748E94  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00748E97  8B 50 40                  MOV EDX,dword ptr [EAX + 0x40]
00748E9A  F6 C1 08                  TEST CL,0x8
00748E9D  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00748EA0  74 08                     JZ 0x00748eaa
00748EA2  8B 40 3C                  MOV EAX,dword ptr [EAX + 0x3c]
00748EA5  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00748EA8  EB 04                     JMP 0x00748eae
LAB_00748eaa:
00748EAA  83 65 F4 00               AND dword ptr [EBP + -0xc],0x0
LAB_00748eae:
00748EAE  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00748EB1  8D 75 D0                  LEA ESI,[EBP + -0x30]
00748EB4  8B C1                     MOV EAX,ECX
00748EB6  C1 E9 02                  SHR ECX,0x2
00748EB9  F3 A5                     MOVSD.REP ES:EDI,ESI
00748EBB  8B C8                     MOV ECX,EAX
00748EBD  83 E1 03                  AND ECX,0x3
00748EC0  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00748ec2:
00748EC2  33 C0                     XOR EAX,EAX
LAB_00748ec4:
00748EC4  5F                        POP EDI
00748EC5  5E                        POP ESI
00748EC6  C9                        LEAVE
00748EC7  C2 0C 00                  RET 0xc
