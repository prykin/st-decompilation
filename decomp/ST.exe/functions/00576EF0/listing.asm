GameSystemC::InitSystem:
00576EF0  55                        PUSH EBP
00576EF1  8B EC                     MOV EBP,ESP
00576EF3  81 EC 8C 00 00 00         SUB ESP,0x8c
00576EF9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00576EFE  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00576F01  56                        PUSH ESI
00576F02  8D 55 BC                  LEA EDX,[EBP + -0x44]
00576F05  8D 4D B8                  LEA ECX,[EBP + -0x48]
00576F08  6A 00                     PUSH 0x0
00576F0A  52                        PUSH EDX
00576F0B  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00576F0E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00576F14  E8 D7 68 1B 00            CALL 0x0072d7f0
00576F19  8B F0                     MOV ESI,EAX
00576F1B  83 C4 08                  ADD ESP,0x8
00576F1E  85 F6                     TEST ESI,ESI
00576F20  0F 85 FC 00 00 00         JNZ 0x00577022
00576F26  A1 54 67 80 00            MOV EAX,[0x00806754]
00576F2B  68 E4 A1 7C 00            PUSH 0x7ca1e4
00576F30  50                        PUSH EAX
00576F31  E8 DC B1 E8 FF            CALL 0x00402112
00576F36  83 C4 08                  ADD ESP,0x8
00576F39  A3 50 67 80 00            MOV [0x00806750],EAX
00576F3E  68 F2 04 00 00            PUSH 0x4f2
00576F43  E8 88 95 13 00            CALL 0x006b04d0
00576F48  85 C0                     TEST EAX,EAX
00576F4A  74 09                     JZ 0x00576f55
00576F4C  8B C8                     MOV ECX,EAX
00576F4E  E8 4D 4D 16 00            CALL 0x006dbca0
00576F53  EB 02                     JMP 0x00576f57
LAB_00576f55:
00576F55  33 C0                     XOR EAX,EAX
LAB_00576f57:
00576F57  8B 15 50 67 80 00         MOV EDX,dword ptr [0x00806750]
00576F5D  8B C8                     MOV ECX,EAX
00576F5F  A3 98 75 80 00            MOV [0x00807598],EAX
00576F64  89 91 80 02 00 00         MOV dword ptr [ECX + 0x280],EDX
00576F6A  0F BF 02                  MOVSX EAX,word ptr [EDX]
00576F6D  99                        CDQ
00576F6E  2B C2                     SUB EAX,EDX
00576F70  D1 F8                     SAR EAX,0x1
00576F72  8B D0                     MOV EDX,EAX
00576F74  89 81 84 02 00 00         MOV dword ptr [ECX + 0x284],EAX
00576F7A  0F AF D0                  IMUL EDX,EAX
00576F7D  89 91 88 02 00 00         MOV dword ptr [ECX + 0x288],EDX
00576F83  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00576F86  E8 65 E2 16 00            CALL 0x006e51f0
00576F8B  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00576F90  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00576F96  50                        PUSH EAX
00576F97  E8 E4 15 17 00            CALL 0x006e8580
00576F9C  8B 0D 70 67 80 00         MOV ECX,dword ptr [0x00806770]
00576FA2  6A 01                     PUSH 0x1
00576FA4  6A 00                     PUSH 0x0
00576FA6  6A 00                     PUSH 0x0
00576FA8  6A 00                     PUSH 0x0
00576FAA  68 10 AC 7C 00            PUSH 0x7cac10
00576FAF  51                        PUSH ECX
00576FB0  E8 AB 3E 19 00            CALL 0x0070ae60
00576FB5  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
00576FBB  A3 24 67 80 00            MOV [0x00806724],EAX
00576FC0  8D 8D 78 FF FF FF         LEA ECX,[EBP + 0xffffff78]
00576FC6  8D 85 74 FF FF FF         LEA EAX,[EBP + 0xffffff74]
00576FCC  6A 00                     PUSH 0x0
00576FCE  51                        PUSH ECX
00576FCF  89 95 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDX
00576FD5  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00576FDA  E8 11 68 1B 00            CALL 0x0072d7f0
00576FDF  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00576FE2  83 C4 20                  ADD ESP,0x20
00576FE5  85 C0                     TEST EAX,EAX
00576FE7  75 1D                     JNZ 0x00577006
00576FE9  8B 15 A8 B1 79 00         MOV EDX,dword ptr [0x0079b1a8]
00576FEF  A1 60 67 80 00            MOV EAX,[0x00806760]
00576FF4  6A 00                     PUSH 0x0
00576FF6  52                        PUSH EDX
00576FF7  50                        PUSH EAX
00576FF8  E8 53 E5 1A 00            CALL 0x00725550
00576FFD  83 C4 0C                  ADD ESP,0xc
00577000  89 86 31 04 00 00         MOV dword ptr [ESI + 0x431],EAX
LAB_00577006:
00577006  8B 0D 84 87 80 00         MOV ECX,dword ptr [0x00808784]
0057700C  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0057700F  89 8E 2C 04 00 00         MOV dword ptr [ESI + 0x42c],ECX
00577015  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0057701B  33 C0                     XOR EAX,EAX
0057701D  5E                        POP ESI
0057701E  8B E5                     MOV ESP,EBP
00577020  5D                        POP EBP
00577021  C3                        RET
LAB_00577022:
00577022  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00577025  68 F4 AB 7C 00            PUSH 0x7cabf4
0057702A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0057702F  56                        PUSH ESI
00577030  6A 00                     PUSH 0x0
00577032  68 86 00 00 00            PUSH 0x86
00577037  68 5C AB 7C 00            PUSH 0x7cab5c
0057703C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00577041  E8 8A 64 13 00            CALL 0x006ad4d0
00577046  83 C4 18                  ADD ESP,0x18
00577049  85 C0                     TEST EAX,EAX
0057704B  74 01                     JZ 0x0057704e
0057704D  CC                        INT3
LAB_0057704e:
0057704E  68 86 00 00 00            PUSH 0x86
00577053  68 5C AB 7C 00            PUSH 0x7cab5c
00577058  6A 00                     PUSH 0x0
0057705A  56                        PUSH ESI
0057705B  E8 E0 ED 12 00            CALL 0x006a5e40
00577060  B8 FC FF FF FF            MOV EAX,0xfffffffc
00577065  5E                        POP ESI
00577066  8B E5                     MOV ESP,EBP
00577068  5D                        POP EBP
00577069  C3                        RET
