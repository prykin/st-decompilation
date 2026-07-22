VisibleClassTy::sub_00558140:
00558140  57                        PUSH EDI
00558141  8B F9                     MOV EDI,ECX
00558143  8B 4F 38                  MOV ECX,dword ptr [EDI + 0x38]
00558146  8D 47 38                  LEA EAX,[EDI + 0x38]
00558149  85 C9                     TEST ECX,ECX
0055814B  74 06                     JZ 0x00558153
0055814D  50                        PUSH EAX
0055814E  E8 0D 2F 15 00            CALL 0x006ab060
LAB_00558153:
00558153  8B 4F 4C                  MOV ECX,dword ptr [EDI + 0x4c]
00558156  8D 47 4C                  LEA EAX,[EDI + 0x4c]
00558159  85 C9                     TEST ECX,ECX
0055815B  74 06                     JZ 0x00558163
0055815D  50                        PUSH EAX
0055815E  E8 FD 2E 15 00            CALL 0x006ab060
LAB_00558163:
00558163  8B 4F 50                  MOV ECX,dword ptr [EDI + 0x50]
00558166  8D 47 50                  LEA EAX,[EDI + 0x50]
00558169  85 C9                     TEST ECX,ECX
0055816B  74 06                     JZ 0x00558173
0055816D  50                        PUSH EAX
0055816E  E8 ED 2E 15 00            CALL 0x006ab060
LAB_00558173:
00558173  53                        PUSH EBX
00558174  56                        PUSH ESI
00558175  8D 77 54                  LEA ESI,[EDI + 0x54]
00558178  BB 08 00 00 00            MOV EBX,0x8
LAB_0055817d:
0055817D  83 3E 00                  CMP dword ptr [ESI],0x0
00558180  74 06                     JZ 0x00558188
00558182  56                        PUSH ESI
00558183  E8 D8 2E 15 00            CALL 0x006ab060
LAB_00558188:
00558188  83 C6 04                  ADD ESI,0x4
0055818B  4B                        DEC EBX
0055818C  75 EF                     JNZ 0x0055817d
0055818E  8D 77 74                  LEA ESI,[EDI + 0x74]
00558191  BB 08 00 00 00            MOV EBX,0x8
LAB_00558196:
00558196  83 3E 00                  CMP dword ptr [ESI],0x0
00558199  74 06                     JZ 0x005581a1
0055819B  56                        PUSH ESI
0055819C  E8 BF 2E 15 00            CALL 0x006ab060
LAB_005581a1:
005581A1  83 C6 04                  ADD ESI,0x4
005581A4  4B                        DEC EBX
005581A5  75 EF                     JNZ 0x00558196
005581A7  8D B7 94 00 00 00         LEA ESI,[EDI + 0x94]
005581AD  BB 08 00 00 00            MOV EBX,0x8
LAB_005581b2:
005581B2  83 3E 00                  CMP dword ptr [ESI],0x0
005581B5  74 06                     JZ 0x005581bd
005581B7  56                        PUSH ESI
005581B8  E8 A3 2E 15 00            CALL 0x006ab060
LAB_005581bd:
005581BD  83 C6 04                  ADD ESI,0x4
005581C0  4B                        DEC EBX
005581C1  75 EF                     JNZ 0x005581b2
005581C3  8D B7 B4 00 00 00         LEA ESI,[EDI + 0xb4]
005581C9  BB 08 00 00 00            MOV EBX,0x8
LAB_005581ce:
005581CE  83 3E 00                  CMP dword ptr [ESI],0x0
005581D1  74 06                     JZ 0x005581d9
005581D3  56                        PUSH ESI
005581D4  E8 87 2E 15 00            CALL 0x006ab060
LAB_005581d9:
005581D9  83 C6 04                  ADD ESI,0x4
005581DC  4B                        DEC EBX
005581DD  75 EF                     JNZ 0x005581ce
005581DF  8D B7 D4 00 00 00         LEA ESI,[EDI + 0xd4]
005581E5  BB 08 00 00 00            MOV EBX,0x8
LAB_005581ea:
005581EA  83 3E 00                  CMP dword ptr [ESI],0x0
005581ED  74 06                     JZ 0x005581f5
005581EF  56                        PUSH ESI
005581F0  E8 6B 2E 15 00            CALL 0x006ab060
LAB_005581f5:
005581F5  83 C6 04                  ADD ESI,0x4
005581F8  4B                        DEC EBX
005581F9  75 EF                     JNZ 0x005581ea
005581FB  8D 77 3C                  LEA ESI,[EDI + 0x3c]
005581FE  BB 04 00 00 00            MOV EBX,0x4
LAB_00558203:
00558203  83 3E 00                  CMP dword ptr [ESI],0x0
00558206  74 06                     JZ 0x0055820e
00558208  56                        PUSH ESI
00558209  E8 52 2E 15 00            CALL 0x006ab060
LAB_0055820e:
0055820E  83 C6 04                  ADD ESI,0x4
00558211  4B                        DEC EBX
00558212  75 EF                     JNZ 0x00558203
00558214  8B 87 F4 00 00 00         MOV EAX,dword ptr [EDI + 0xf4]
0055821A  5E                        POP ESI
0055821B  85 C0                     TEST EAX,EAX
0055821D  5B                        POP EBX
0055821E  74 10                     JZ 0x00558230
00558220  50                        PUSH EAX
00558221  E8 EA 5E 15 00            CALL 0x006ae110
00558226  C7 87 F4 00 00 00 00 00 00 00  MOV dword ptr [EDI + 0xf4],0x0
LAB_00558230:
00558230  8B 87 10 01 00 00         MOV EAX,dword ptr [EDI + 0x110]
00558236  85 C0                     TEST EAX,EAX
00558238  74 10                     JZ 0x0055824a
0055823A  50                        PUSH EAX
0055823B  E8 D0 5E 15 00            CALL 0x006ae110
00558240  C7 87 10 01 00 00 00 00 00 00  MOV dword ptr [EDI + 0x110],0x0
LAB_0055824a:
0055824A  5F                        POP EDI
0055824B  C3                        RET
