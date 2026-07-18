FUN_00680e50:
00680E50  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00680E56  8B C1                     MOV EAX,ECX
00680E58  C1 E0 04                  SHL EAX,0x4
00680E5B  03 C1                     ADD EAX,ECX
00680E5D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00680E60  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00680E63  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00680E66  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00680E69  C1 E0 02                  SHL EAX,0x2
00680E6C  8B 88 7C 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c7c]
00680E72  83 F9 04                  CMP ECX,0x4
00680E75  7D 03                     JGE 0x00680e7a
00680E77  33 C0                     XOR EAX,EAX
00680E79  C3                        RET
LAB_00680e7a:
00680E7A  83 F9 05                  CMP ECX,0x5
00680E7D  7D 0A                     JGE 0x00680e89
00680E7F  C7 80 90 1C 81 00 00 00 00 00  MOV dword ptr [EAX + 0x811c90],0x0
LAB_00680e89:
00680E89  8B 88 84 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c84]
00680E8F  85 C9                     TEST ECX,ECX
00680E91  7D 03                     JGE 0x00680e96
00680E93  33 C0                     XOR EAX,EAX
00680E95  C3                        RET
LAB_00680e96:
00680E96  8B 88 88 1C 81 00         MOV ECX,dword ptr [EAX + 0x811c88]
00680E9C  85 C9                     TEST ECX,ECX
00680E9E  7D 03                     JGE 0x00680ea3
00680EA0  33 C0                     XOR EAX,EAX
00680EA2  C3                        RET
LAB_00680ea3:
00680EA3  8B 90 8C 1C 81 00         MOV EDX,dword ptr [EAX + 0x811c8c]
00680EA9  33 C9                     XOR ECX,ECX
00680EAB  85 D2                     TEST EDX,EDX
00680EAD  0F 9D C1                  SETGE CL
00680EB0  8B C1                     MOV EAX,ECX
00680EB2  C3                        RET
