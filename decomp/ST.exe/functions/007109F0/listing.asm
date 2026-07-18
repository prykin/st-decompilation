FUN_007109f0:
007109F0  55                        PUSH EBP
007109F1  8B EC                     MOV EBP,ESP
007109F3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007109F6  85 C0                     TEST EAX,EAX
007109F8  0F 84 84 00 00 00         JZ 0x00710a82
007109FE  8B 10                     MOV EDX,dword ptr [EAX]
00710A00  56                        PUSH ESI
00710A01  89 51 44                  MOV dword ptr [ECX + 0x44],EDX
00710A04  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00710A07  89 51 48                  MOV dword ptr [ECX + 0x48],EDX
00710A0A  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00710A0D  89 51 4C                  MOV dword ptr [ECX + 0x4c],EDX
00710A10  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
00710A13  89 51 50                  MOV dword ptr [ECX + 0x50],EDX
00710A16  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
00710A19  89 51 54                  MOV dword ptr [ECX + 0x54],EDX
00710A1C  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
00710A1F  89 51 58                  MOV dword ptr [ECX + 0x58],EDX
00710A22  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
00710A25  89 51 5C                  MOV dword ptr [ECX + 0x5c],EDX
00710A28  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
00710A2B  89 51 60                  MOV dword ptr [ECX + 0x60],EDX
00710A2E  8B 50 20                  MOV EDX,dword ptr [EAX + 0x20]
00710A31  89 51 64                  MOV dword ptr [ECX + 0x64],EDX
00710A34  8B 50 24                  MOV EDX,dword ptr [EAX + 0x24]
00710A37  89 51 68                  MOV dword ptr [ECX + 0x68],EDX
00710A3A  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
00710A3D  89 51 6C                  MOV dword ptr [ECX + 0x6c],EDX
00710A40  66 8B 50 2C               MOV DX,word ptr [EAX + 0x2c]
00710A44  66 89 51 70               MOV word ptr [ECX + 0x70],DX
00710A48  8B 50 2E                  MOV EDX,dword ptr [EAX + 0x2e]
00710A4B  89 51 72                  MOV dword ptr [ECX + 0x72],EDX
00710A4E  8B 50 32                  MOV EDX,dword ptr [EAX + 0x32]
00710A51  89 51 76                  MOV dword ptr [ECX + 0x76],EDX
00710A54  8B 50 36                  MOV EDX,dword ptr [EAX + 0x36]
00710A57  89 51 7A                  MOV dword ptr [ECX + 0x7a],EDX
00710A5A  8B 50 3A                  MOV EDX,dword ptr [EAX + 0x3a]
00710A5D  89 51 7E                  MOV dword ptr [ECX + 0x7e],EDX
00710A60  8D 50 3E                  LEA EDX,[EAX + 0x3e]
00710A63  8D B1 9E 00 00 00         LEA ESI,[ECX + 0x9e]
00710A69  66 8B 12                  MOV DX,word ptr [EDX]
00710A6C  66 89 16                  MOV word ptr [ESI],DX
00710A6F  8B 50 40                  MOV EDX,dword ptr [EAX + 0x40]
00710A72  89 91 82 00 00 00         MOV dword ptr [ECX + 0x82],EDX
00710A78  8B 40 44                  MOV EAX,dword ptr [EAX + 0x44]
00710A7B  89 81 96 00 00 00         MOV dword ptr [ECX + 0x96],EAX
00710A81  5E                        POP ESI
LAB_00710a82:
00710A82  5D                        POP EBP
00710A83  C2 04 00                  RET 0x4
