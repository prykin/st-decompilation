ccFntTy::_TxtToSarr:
00712F80  55                        PUSH EBP
00712F81  8B EC                     MOV EBP,ESP
00712F83  83 EC 4C                  SUB ESP,0x4c
00712F86  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00712F89  53                        PUSH EBX
00712F8A  56                        PUSH ESI
00712F8B  57                        PUSH EDI
00712F8C  85 C0                     TEST EAX,EAX
00712F8E  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00712F95  0F 84 D2 00 00 00         JZ 0x0071306d
00712F9B  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00712FA0  8D 55 B8                  LEA EDX,[EBP + -0x48]
00712FA3  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00712FA6  6A 00                     PUSH 0x0
00712FA8  52                        PUSH EDX
00712FA9  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00712FAC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00712FB2  E8 39 A8 01 00            CALL 0x0072d7f0
00712FB7  8B F0                     MOV ESI,EAX
00712FB9  83 C4 08                  ADD ESP,0x8
00712FBC  85 F6                     TEST ESI,ESI
00712FBE  75 61                     JNZ 0x00713021
00712FC0  6A 14                     PUSH 0x14
00712FC2  6A 14                     PUSH 0x14
00712FC4  50                        PUSH EAX
00712FC5  E8 26 25 FA FF            CALL 0x006b54f0
00712FCA  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00712FCD  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00712FD0  80 3F 00                  CMP byte ptr [EDI],0x0
00712FD3  74 37                     JZ 0x0071300c
00712FD5  8A 5D FF                  MOV BL,byte ptr [EBP + -0x1]
LAB_00712fd8:
00712FD8  68 F4 8F 7C 00            PUSH 0x7c8ff4
00712FDD  57                        PUSH EDI
00712FDE  E8 AD D5 01 00            CALL 0x00730590
00712FE3  8B F0                     MOV ESI,EAX
00712FE5  83 C4 08                  ADD ESP,0x8
00712FE8  85 F6                     TEST ESI,ESI
00712FEA  74 08                     JZ 0x00712ff4
00712FEC  8A 1E                     MOV BL,byte ptr [ESI]
00712FEE  C6 06 00                  MOV byte ptr [ESI],0x0
00712FF1  88 5D FF                  MOV byte ptr [EBP + -0x1],BL
LAB_00712ff4:
00712FF4  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00712FF7  57                        PUSH EDI
00712FF8  50                        PUSH EAX
00712FF9  E8 A2 2A FA FF            CALL 0x006b5aa0
00712FFE  85 F6                     TEST ESI,ESI
00713000  74 0A                     JZ 0x0071300c
00713002  8D 7E 01                  LEA EDI,[ESI + 0x1]
00713005  88 1E                     MOV byte ptr [ESI],BL
00713007  80 3F 00                  CMP byte ptr [EDI],0x0
0071300A  75 CC                     JNZ 0x00712fd8
LAB_0071300c:
0071300C  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0071300F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00713012  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00713018  5F                        POP EDI
00713019  5E                        POP ESI
0071301A  5B                        POP EBX
0071301B  8B E5                     MOV ESP,EBP
0071301D  5D                        POP EBP
0071301E  C2 04 00                  RET 0x4
LAB_00713021:
00713021  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00713024  68 64 03 7F 00            PUSH 0x7f0364
00713029  68 CC 4C 7A 00            PUSH 0x7a4ccc
0071302E  56                        PUSH ESI
0071302F  6A 00                     PUSH 0x0
00713031  68 D0 08 00 00            PUSH 0x8d0
00713036  68 90 01 7F 00            PUSH 0x7f0190
0071303B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00713041  E8 8A A4 F9 FF            CALL 0x006ad4d0
00713046  83 C4 18                  ADD ESP,0x18
00713049  85 C0                     TEST EAX,EAX
0071304B  74 01                     JZ 0x0071304e
0071304D  CC                        INT3
LAB_0071304e:
0071304E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00713051  85 C0                     TEST EAX,EAX
00713053  74 06                     JZ 0x0071305b
00713055  50                        PUSH EAX
00713056  E8 15 25 FA FF            CALL 0x006b5570
LAB_0071305b:
0071305B  68 D4 08 00 00            PUSH 0x8d4
00713060  68 90 01 7F 00            PUSH 0x7f0190
00713065  6A 00                     PUSH 0x0
00713067  56                        PUSH ESI
00713068  E8 D3 2D F9 FF            CALL 0x006a5e40
LAB_0071306d:
0071306D  5F                        POP EDI
0071306E  5E                        POP ESI
0071306F  33 C0                     XOR EAX,EAX
00713071  5B                        POP EBX
00713072  8B E5                     MOV ESP,EBP
00713074  5D                        POP EBP
00713075  C2 04 00                  RET 0x4
