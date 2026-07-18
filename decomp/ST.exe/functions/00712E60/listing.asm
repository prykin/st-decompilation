ccFntTy::VisLineSarr:
00712E60  55                        PUSH EBP
00712E61  8B EC                     MOV EBP,ESP
00712E63  83 EC 54                  SUB ESP,0x54
00712E66  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00712E69  53                        PUSH EBX
00712E6A  56                        PUSH ESI
00712E6B  57                        PUSH EDI
00712E6C  33 FF                     XOR EDI,EDI
00712E6E  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00712E71  3B C7                     CMP EAX,EDI
00712E73  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00712E76  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00712E79  75 0B                     JNZ 0x00712e86
00712E7B  33 C0                     XOR EAX,EAX
00712E7D  5F                        POP EDI
00712E7E  5E                        POP ESI
00712E7F  5B                        POP EBX
00712E80  8B E5                     MOV ESP,EBP
00712E82  5D                        POP EBP
00712E83  C2 08 00                  RET 0x8
LAB_00712e86:
00712E86  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
00712E89  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00712E8C  3B C8                     CMP ECX,EAX
00712E8E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00712E91  7C 0B                     JL 0x00712e9e
00712E93  33 C0                     XOR EAX,EAX
00712E95  5F                        POP EDI
00712E96  5E                        POP ESI
00712E97  5B                        POP EBX
00712E98  8B E5                     MOV ESP,EBP
00712E9A  5D                        POP EBP
00712E9B  C2 08 00                  RET 0x8
LAB_00712e9e:
00712E9E  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00712EA3  8D 55 B0                  LEA EDX,[EBP + -0x50]
00712EA6  8D 4D AC                  LEA ECX,[EBP + -0x54]
00712EA9  57                        PUSH EDI
00712EAA  52                        PUSH EDX
00712EAB  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00712EAE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00712EB4  E8 37 A9 01 00            CALL 0x0072d7f0
00712EB9  8B F0                     MOV ESI,EAX
00712EBB  83 C4 08                  ADD ESP,0x8
00712EBE  3B F7                     CMP ESI,EDI
00712EC0  75 62                     JNZ 0x00712f24
00712EC2  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00712EC5  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00712EC8  3B F0                     CMP ESI,EAX
00712ECA  7D 43                     JGE 0x00712f0f
00712ECC  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00712ECF  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_00712ed2:
00712ED2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00712ED5  3B 70 08                  CMP ESI,dword ptr [EAX + 0x8]
00712ED8  7D 08                     JGE 0x00712ee2
00712EDA  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
00712EDD  8B 04 B0                  MOV EAX,dword ptr [EAX + ESI*0x4]
00712EE0  EB 02                     JMP 0x00712ee4
LAB_00712ee2:
00712EE2  33 C0                     XOR EAX,EAX
LAB_00712ee4:
00712EE4  50                        PUSH EAX
00712EE5  8B CB                     MOV ECX,EBX
00712EE7  E8 D4 E2 FF FF            CALL 0x007111c0
00712EEC  03 F8                     ADD EDI,EAX
00712EEE  85 F6                     TEST ESI,ESI
00712EF0  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00712EF3  7E 06                     JLE 0x00712efb
00712EF5  03 7B 5C                  ADD EDI,dword ptr [EBX + 0x5c]
00712EF8  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_00712efb:
00712EFB  3B 7B 6C                  CMP EDI,dword ptr [EBX + 0x6c]
00712EFE  7F 0F                     JG 0x00712f0f
00712F00  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00712F03  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00712F06  42                        INC EDX
00712F07  46                        INC ESI
00712F08  3B F0                     CMP ESI,EAX
00712F0A  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00712F0D  7C C3                     JL 0x00712ed2
LAB_00712f0f:
00712F0F  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00712F12  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00712F15  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00712F1B  5F                        POP EDI
00712F1C  5E                        POP ESI
00712F1D  5B                        POP EBX
00712F1E  8B E5                     MOV ESP,EBP
00712F20  5D                        POP EBP
00712F21  C2 08 00                  RET 0x8
LAB_00712f24:
00712F24  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00712F27  68 4C 03 7F 00            PUSH 0x7f034c
00712F2C  68 CC 4C 7A 00            PUSH 0x7a4ccc
00712F31  56                        PUSH ESI
00712F32  57                        PUSH EDI
00712F33  68 B3 08 00 00            PUSH 0x8b3
00712F38  68 90 01 7F 00            PUSH 0x7f0190
00712F3D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00712F43  E8 88 A5 F9 FF            CALL 0x006ad4d0
00712F48  83 C4 18                  ADD ESP,0x18
00712F4B  85 C0                     TEST EAX,EAX
00712F4D  74 01                     JZ 0x00712f50
00712F4F  CC                        INT3
LAB_00712f50:
00712F50  68 B5 08 00 00            PUSH 0x8b5
00712F55  68 90 01 7F 00            PUSH 0x7f0190
00712F5A  57                        PUSH EDI
00712F5B  56                        PUSH ESI
00712F5C  E8 DF 2E F9 FF            CALL 0x006a5e40
00712F61  3B F7                     CMP ESI,EDI
00712F63  8B C6                     MOV EAX,ESI
00712F65  7C 05                     JL 0x00712f6c
00712F67  B8 FA FF FF FF            MOV EAX,0xfffffffa
LAB_00712f6c:
00712F6C  5F                        POP EDI
00712F6D  5E                        POP ESI
00712F6E  5B                        POP EBX
00712F6F  8B E5                     MOV ESP,EBP
00712F71  5D                        POP EBP
00712F72  C2 08 00                  RET 0x8
