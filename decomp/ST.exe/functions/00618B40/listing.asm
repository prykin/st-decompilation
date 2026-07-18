FUN_00618b40:
00618B40  55                        PUSH EBP
00618B41  8B EC                     MOV EBP,ESP
00618B43  56                        PUSH ESI
00618B44  57                        PUSH EDI
00618B45  8B F9                     MOV EDI,ECX
00618B47  8B 4F 5E                  MOV ECX,dword ptr [EDI + 0x5e]
00618B4A  85 C9                     TEST ECX,ECX
00618B4C  74 63                     JZ 0x00618bb1
00618B4E  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00618B51  33 F6                     XOR ESI,ESI
00618B53  85 C0                     TEST EAX,EAX
00618B55  7E 46                     JLE 0x00618b9d
00618B57  53                        PUSH EBX
00618B58  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00618B5B  3B F0                     CMP ESI,EAX
LAB_00618b5d:
00618B5D  73 22                     JNC 0x00618b81
00618B5F  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00618B62  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00618B65  0F AF C6                  IMUL EAX,ESI
00618B68  03 C2                     ADD EAX,EDX
00618B6A  85 C0                     TEST EAX,EAX
00618B6C  74 13                     JZ 0x00618b81
00618B6E  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
00618B71  85 C0                     TEST EAX,EAX
00618B73  74 0C                     JZ 0x00618b81
00618B75  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00618B78  53                        PUSH EBX
00618B79  51                        PUSH ECX
00618B7A  8B C8                     MOV ECX,EAX
00618B7C  E8 D0 A1 DE FF            CALL 0x00402d51
LAB_00618b81:
00618B81  8B 4F 5E                  MOV ECX,dword ptr [EDI + 0x5e]
00618B84  46                        INC ESI
00618B85  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00618B88  3B F0                     CMP ESI,EAX
00618B8A  7C D1                     JL 0x00618b5d
00618B8C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00618B8F  66 89 5F 58               MOV word ptr [EDI + 0x58],BX
00618B93  89 57 20                  MOV dword ptr [EDI + 0x20],EDX
00618B96  5B                        POP EBX
00618B97  5F                        POP EDI
00618B98  5E                        POP ESI
00618B99  5D                        POP EBP
00618B9A  C2 08 00                  RET 0x8
LAB_00618b9d:
00618B9D  66 8B 45 0C               MOV AX,word ptr [EBP + 0xc]
00618BA1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00618BA4  66 89 47 58               MOV word ptr [EDI + 0x58],AX
00618BA8  89 4F 20                  MOV dword ptr [EDI + 0x20],ECX
00618BAB  5F                        POP EDI
00618BAC  5E                        POP ESI
00618BAD  5D                        POP EBP
00618BAE  C2 08 00                  RET 0x8
LAB_00618bb1:
00618BB1  66 8B 55 0C               MOV DX,word ptr [EBP + 0xc]
00618BB5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00618BB8  66 89 57 58               MOV word ptr [EDI + 0x58],DX
00618BBC  89 47 20                  MOV dword ptr [EDI + 0x20],EAX
00618BBF  5F                        POP EDI
00618BC0  5E                        POP ESI
00618BC1  5D                        POP EBP
00618BC2  C2 08 00                  RET 0x8
