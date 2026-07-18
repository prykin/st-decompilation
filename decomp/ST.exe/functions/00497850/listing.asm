FUN_00497850:
00497850  55                        PUSH EBP
00497851  8B EC                     MOV EBP,ESP
00497853  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
00497856  33 C0                     XOR EAX,EAX
00497858  85 D2                     TEST EDX,EDX
0049785A  56                        PUSH ESI
0049785B  7C 6B                     JL 0x004978c8
0049785D  8B 35 70 B2 7F 00         MOV ESI,dword ptr [0x007fb270]
00497863  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00497866  3B D1                     CMP EDX,ECX
00497868  7D 5E                     JGE 0x004978c8
0049786A  73 5C                     JNC 0x004978c8
0049786C  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0049786F  0F AF CA                  IMUL ECX,EDX
00497872  03 4E 1C                  ADD ECX,dword ptr [ESI + 0x1c]
00497875  85 C9                     TEST ECX,ECX
00497877  74 4F                     JZ 0x004978c8
00497879  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
0049787C  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
0049787F  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
00497882  50                        PUSH EAX
00497883  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00497886  52                        PUSH EDX
00497887  8B 91 F1 01 00 00         MOV EDX,dword ptr [ECX + 0x1f1]
0049788D  50                        PUSH EAX
0049788E  8B 81 ED 01 00 00         MOV EAX,dword ptr [ECX + 0x1ed]
00497894  8B 89 E9 01 00 00         MOV ECX,dword ptr [ECX + 0x1e9]
0049789A  83 C0 64                  ADD EAX,0x64
0049789D  52                        PUSH EDX
0049789E  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
004978A1  83 C1 64                  ADD ECX,0x64
004978A4  50                        PUSH EAX
004978A5  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004978A8  51                        PUSH ECX
004978A9  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004978AC  52                        PUSH EDX
004978AD  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004978B0  50                        PUSH EAX
004978B1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004978B4  51                        PUSH ECX
004978B5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004978B8  52                        PUSH EDX
004978B9  50                        PUSH EAX
004978BA  51                        PUSH ECX
004978BB  E8 4A D3 F6 FF            CALL 0x00404c0a
004978C0  83 C4 30                  ADD ESP,0x30
004978C3  5E                        POP ESI
004978C4  5D                        POP EBP
004978C5  C2 28 00                  RET 0x28
LAB_004978c8:
004978C8  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
004978CB  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004978CE  5E                        POP ESI
004978CF  89 0A                     MOV dword ptr [EDX],ECX
004978D1  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
004978D4  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004978D7  89 0A                     MOV dword ptr [EDX],ECX
004978D9  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
004978DC  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
004978DF  89 0A                     MOV dword ptr [EDX],ECX
004978E1  5D                        POP EBP
004978E2  C2 28 00                  RET 0x28
