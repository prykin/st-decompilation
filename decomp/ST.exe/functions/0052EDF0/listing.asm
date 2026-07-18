FUN_0052edf0:
0052EDF0  55                        PUSH EBP
0052EDF1  8B EC                     MOV EBP,ESP
0052EDF3  83 EC 58                  SUB ESP,0x58
0052EDF6  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
0052EDF9  53                        PUSH EBX
0052EDFA  F6 D8                     NEG AL
0052EDFC  1B C0                     SBB EAX,EAX
0052EDFE  56                        PUSH ESI
0052EDFF  24 FC                     AND AL,0xfc
0052EE01  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0052EE04  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0052EE0A  83 C0 04                  ADD EAX,0x4
0052EE0D  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0052EE10  57                        PUSH EDI
0052EE11  8D 45 AC                  LEA EAX,[EBP + -0x54]
0052EE14  8D 55 A8                  LEA EDX,[EBP + -0x58]
0052EE17  6A 00                     PUSH 0x0
0052EE19  50                        PUSH EAX
0052EE1A  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
0052EE1D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0052EE23  E8 C8 E9 1F 00            CALL 0x0072d7f0
0052EE28  8B F0                     MOV ESI,EAX
0052EE2A  83 C4 08                  ADD ESP,0x8
0052EE2D  85 F6                     TEST ESI,ESI
0052EE2F  0F 85 D3 00 00 00         JNZ 0x0052ef08
0052EE35  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0052EE38  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
0052EE3B  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0052EE3E  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
0052EE41  84 C9                     TEST CL,CL
0052EE43  76 56                     JBE 0x0052ee9b
0052EE45  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0052EE48  8B C3                     MOV EAX,EBX
0052EE4A  25 FF 00 00 00            AND EAX,0xff
0052EE4F  03 F8                     ADD EDI,EAX
0052EE51  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
0052EE54  8D 44 97 5F               LEA EAX,[EDI + EDX*0x4 + 0x5f]
0052EE58  BF 80 00 00 00            MOV EDI,0x80
0052EE5D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0052EE60  8B C1                     MOV EAX,ECX
0052EE62  25 FF 00 00 00            AND EAX,0xff
0052EE67  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0052EE6A  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
LAB_0052ee6d:
0052EE6D  8B 8E 98 01 00 00         MOV ECX,dword ptr [ESI + 0x198]
0052EE73  6A 06                     PUSH 0x6
0052EE75  51                        PUSH ECX
0052EE76  E8 25 C5 1D 00            CALL 0x0070b3a0
0052EE7B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0052EE7E  50                        PUSH EAX
0052EE7F  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
0052EE82  6A 01                     PUSH 0x1
0052EE84  52                        PUSH EDX
0052EE85  57                        PUSH EDI
0052EE86  50                        PUSH EAX
0052EE87  E8 9D 43 ED FF            CALL 0x00403229
0052EE8C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0052EE8F  83 C4 1C                  ADD ESP,0x1c
0052EE92  83 C7 04                  ADD EDI,0x4
0052EE95  48                        DEC EAX
0052EE96  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0052EE99  75 D2                     JNZ 0x0052ee6d
LAB_0052ee9b:
0052EE9B  80 7D FC 1E               CMP byte ptr [EBP + -0x4],0x1e
0052EE9F  73 55                     JNC 0x0052eef6
0052EEA1  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0052EEA4  81 E3 FF 00 00 00         AND EBX,0xff
0052EEAA  8B C3                     MOV EAX,EBX
0052EEAC  BF 1E 00 00 00            MOV EDI,0x1e
0052EEB1  03 D0                     ADD EDX,EAX
0052EEB3  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0052EEB6  8D 44 8A 5F               LEA EAX,[EDX + ECX*0x4 + 0x5f]
0052EEBA  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0052EEBD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0052EEC0  25 FF 00 00 00            AND EAX,0xff
0052EEC5  2B F8                     SUB EDI,EAX
0052EEC7  8D 1C 85 80 00 00 00      LEA EBX,[EAX*0x4 + 0x80]
LAB_0052eece:
0052EECE  8B 8E 98 01 00 00         MOV ECX,dword ptr [ESI + 0x198]
0052EED4  6A 00                     PUSH 0x0
0052EED6  51                        PUSH ECX
0052EED7  E8 C4 C4 1D 00            CALL 0x0070b3a0
0052EEDC  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0052EEDF  50                        PUSH EAX
0052EEE0  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
0052EEE3  6A 01                     PUSH 0x1
0052EEE5  52                        PUSH EDX
0052EEE6  53                        PUSH EBX
0052EEE7  50                        PUSH EAX
0052EEE8  E8 3C 43 ED FF            CALL 0x00403229
0052EEED  83 C4 1C                  ADD ESP,0x1c
0052EEF0  83 C3 04                  ADD EBX,0x4
0052EEF3  4F                        DEC EDI
0052EEF4  75 D8                     JNZ 0x0052eece
LAB_0052eef6:
0052EEF6  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
0052EEF9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052EEFF  5F                        POP EDI
0052EF00  5E                        POP ESI
0052EF01  5B                        POP EBX
0052EF02  8B E5                     MOV ESP,EBP
0052EF04  5D                        POP EBP
0052EF05  C2 08 00                  RET 0x8
LAB_0052ef08:
0052EF08  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
0052EF0B  68 98 71 7C 00            PUSH 0x7c7198
0052EF10  68 CC 4C 7A 00            PUSH 0x7a4ccc
0052EF15  56                        PUSH ESI
0052EF16  6A 00                     PUSH 0x0
0052EF18  68 AC 00 00 00            PUSH 0xac
0052EF1D  68 A0 70 7C 00            PUSH 0x7c70a0
0052EF22  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0052EF28  E8 A3 E5 17 00            CALL 0x006ad4d0
0052EF2D  83 C4 18                  ADD ESP,0x18
0052EF30  85 C0                     TEST EAX,EAX
0052EF32  74 01                     JZ 0x0052ef35
0052EF34  CC                        INT3
LAB_0052ef35:
0052EF35  68 AC 00 00 00            PUSH 0xac
0052EF3A  68 A0 70 7C 00            PUSH 0x7c70a0
0052EF3F  6A 00                     PUSH 0x0
0052EF41  56                        PUSH ESI
0052EF42  E8 F9 6E 17 00            CALL 0x006a5e40
0052EF47  5F                        POP EDI
0052EF48  5E                        POP ESI
0052EF49  5B                        POP EBX
0052EF4A  8B E5                     MOV ESP,EBP
0052EF4C  5D                        POP EBP
0052EF4D  C2 08 00                  RET 0x8
