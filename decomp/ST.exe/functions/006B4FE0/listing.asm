FUN_006b4fe0:
006B4FE0  55                        PUSH EBP
006B4FE1  8B EC                     MOV EBP,ESP
006B4FE3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B4FE6  8B 42 20                  MOV EAX,dword ptr [EDX + 0x20]
006B4FE9  85 C0                     TEST EAX,EAX
006B4FEB  75 16                     JNZ 0x006b5003
006B4FED  33 C9                     XOR ECX,ECX
006B4FEF  66 8B 4A 0E               MOV CX,word ptr [EDX + 0xe]
006B4FF3  85 C9                     TEST ECX,ECX
006B4FF5  74 0C                     JZ 0x006b5003
006B4FF7  83 F9 08                  CMP ECX,0x8
006B4FFA  7F 07                     JG 0x006b5003
006B4FFC  B8 01 00 00 00            MOV EAX,0x1
006B5001  D3 E0                     SHL EAX,CL
LAB_006b5003:
006B5003  5D                        POP EBP
006B5004  C2 04 00                  RET 0x4
