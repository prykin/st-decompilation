FUN_00724fa0:
00724FA0  55                        PUSH EBP
00724FA1  8B EC                     MOV EBP,ESP
00724FA3  8B 51 24                  MOV EDX,dword ptr [ECX + 0x24]
00724FA6  53                        PUSH EBX
00724FA7  56                        PUSH ESI
00724FA8  57                        PUSH EDI
00724FA9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00724FAC  33 C0                     XOR EAX,EAX
00724FAE  3B FA                     CMP EDI,EDX
00724FB0  7C 24                     JL 0x00724fd6
00724FB2  8B 71 2C                  MOV ESI,dword ptr [ECX + 0x2c]
00724FB5  03 F2                     ADD ESI,EDX
00724FB7  3B FE                     CMP EDI,ESI
00724FB9  7D 1B                     JGE 0x00724fd6
00724FBB  8B 71 28                  MOV ESI,dword ptr [ECX + 0x28]
00724FBE  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00724FC1  3B DE                     CMP EBX,ESI
00724FC3  7C 11                     JL 0x00724fd6
00724FC5  8B 59 30                  MOV EBX,dword ptr [ECX + 0x30]
00724FC8  03 DE                     ADD EBX,ESI
00724FCA  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00724FCD  3B F3                     CMP ESI,EBX
00724FCF  7D 05                     JGE 0x00724fd6
00724FD1  B8 01 00 00 00            MOV EAX,0x1
LAB_00724fd6:
00724FD6  F6 81 88 01 00 00 01      TEST byte ptr [ECX + 0x188],0x1
00724FDD  74 2C                     JZ 0x0072500b
00724FDF  85 C0                     TEST EAX,EAX
00724FE1  74 28                     JZ 0x0072500b
00724FE3  8B 59 2C                  MOV EBX,dword ptr [ECX + 0x2c]
00724FE6  8B 71 28                  MOV ESI,dword ptr [ECX + 0x28]
00724FE9  2B DF                     SUB EBX,EDI
00724FEB  33 C0                     XOR EAX,EAX
00724FED  03 DE                     ADD EBX,ESI
00724FEF  03 DA                     ADD EBX,EDX
00724FF1  39 5D 0C                  CMP dword ptr [EBP + 0xc],EBX
00724FF4  7F 10                     JG 0x00725006
00724FF6  8B 49 30                  MOV ECX,dword ptr [ECX + 0x30]
00724FF9  2B CF                     SUB ECX,EDI
00724FFB  03 CE                     ADD ECX,ESI
00724FFD  03 CA                     ADD ECX,EDX
00724FFF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00725002  3B D1                     CMP EDX,ECX
00725004  7D 05                     JGE 0x0072500b
LAB_00725006:
00725006  B8 01 00 00 00            MOV EAX,0x1
LAB_0072500b:
0072500B  5F                        POP EDI
0072500C  5E                        POP ESI
0072500D  5B                        POP EBX
0072500E  5D                        POP EBP
0072500F  C2 08 00                  RET 0x8
