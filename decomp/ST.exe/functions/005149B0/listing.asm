FUN_005149b0:
005149B0  55                        PUSH EBP
005149B1  8B EC                     MOV EBP,ESP
005149B3  83 EC 50                  SUB ESP,0x50
005149B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005149BB  53                        PUSH EBX
005149BC  56                        PUSH ESI
005149BD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005149C0  57                        PUSH EDI
005149C1  8D 55 B4                  LEA EDX,[EBP + -0x4c]
005149C4  8D 4D B0                  LEA ECX,[EBP + -0x50]
005149C7  6A 00                     PUSH 0x0
005149C9  52                        PUSH EDX
005149CA  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
005149CD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005149D3  E8 18 8E 21 00            CALL 0x0072d7f0
005149D8  8B F0                     MOV ESI,EAX
005149DA  83 C4 08                  ADD ESP,0x8
005149DD  85 F6                     TEST ESI,ESI
005149DF  0F 85 02 01 00 00         JNZ 0x00514ae7
005149E5  8B 0D 18 C1 85 00         MOV ECX,dword ptr [0x0085c118]
005149EB  8B 09                     MOV ECX,dword ptr [ECX]
005149ED  85 C9                     TEST ECX,ECX
005149EF  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005149F2  0F 86 DD 00 00 00         JBE 0x00514ad5
005149F8  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_005149fb:
005149FB  8B 93 C7 01 00 00         MOV EDX,dword ptr [EBX + 0x1c7]
00514A01  8B F0                     MOV ESI,EAX
00514A03  C1 E6 04                  SHL ESI,0x4
00514A06  03 F0                     ADD ESI,EAX
00514A08  8A 4C 32 08               MOV CL,byte ptr [EDX + ESI*0x1 + 0x8]
00514A0C  8D 3C 32                  LEA EDI,[EDX + ESI*0x1]
00514A0F  8B D1                     MOV EDX,ECX
00514A11  81 E2 FF 00 00 00         AND EDX,0xff
00514A17  4A                        DEC EDX
00514A18  83 FA 0B                  CMP EDX,0xb
00514A1B  0F 87 A8 00 00 00         JA 0x00514ac9
00514A21  33 DB                     XOR EBX,EBX
00514A23  8A 9A 38 4B 51 00         MOV BL,byte ptr [EDX + 0x514b38]
switchD_00514a29::switchD:
00514A29  FF 24 9D 30 4B 51 00      JMP dword ptr [EBX*0x4 + 0x514b30]
switchD_00514a29::caseD_1:
00514A30  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00514A33  8B 5F 09                  MOV EBX,dword ptr [EDI + 0x9]
00514A36  3B DA                     CMP EBX,EDX
00514A38  0F 85 88 00 00 00         JNZ 0x00514ac6
00514A3E  80 F9 03                  CMP CL,0x3
00514A41  74 0F                     JZ 0x00514a52
00514A43  80 F9 0C                  CMP CL,0xc
00514A46  74 0A                     JZ 0x00514a52
00514A48  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00514A4B  8B 57 0D                  MOV EDX,dword ptr [EDI + 0xd]
00514A4E  3B D1                     CMP EDX,ECX
00514A50  75 74                     JNZ 0x00514ac6
LAB_00514a52:
00514A52  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00514A55  50                        PUSH EAX
00514A56  8B CB                     MOV ECX,EBX
00514A58  E8 DA CF EE FF            CALL 0x00401a37
00514A5D  8B 93 B3 01 00 00         MOV EDX,dword ptr [EBX + 0x1b3]
00514A63  33 C9                     XOR ECX,ECX
00514A65  8B 7A 0C                  MOV EDI,dword ptr [EDX + 0xc]
00514A68  85 FF                     TEST EDI,EDI
00514A6A  76 4D                     JBE 0x00514ab9
00514A6C  8B 83 C7 01 00 00         MOV EAX,dword ptr [EBX + 0x1c7]
00514A72  03 F0                     ADD ESI,EAX
00514A74  3B CF                     CMP ECX,EDI
00514A76  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00514A79  8B 06                     MOV EAX,dword ptr [ESI]
00514A7B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00514A7E  73 0D                     JNC 0x00514a8d
LAB_00514a80:
00514A80  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00514A83  8B 72 1C                  MOV ESI,dword ptr [EDX + 0x1c]
00514A86  0F AF C1                  IMUL EAX,ECX
00514A89  03 C6                     ADD EAX,ESI
00514A8B  EB 02                     JMP 0x00514a8f
LAB_00514a8d:
00514A8D  33 C0                     XOR EAX,EAX
LAB_00514a8f:
00514A8F  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00514A92  39 30                     CMP dword ptr [EAX],ESI
00514A94  75 0B                     JNZ 0x00514aa1
00514A96  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00514A99  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00514A9C  3B 46 04                  CMP EAX,dword ptr [ESI + 0x4]
00514A9F  74 12                     JZ 0x00514ab3
LAB_00514aa1:
00514AA1  41                        INC ECX
00514AA2  3B CF                     CMP ECX,EDI
00514AA4  72 DA                     JC 0x00514a80
00514AA6  8B 0D 18 C1 85 00         MOV ECX,dword ptr [0x0085c118]
00514AAC  8B 01                     MOV EAX,dword ptr [ECX]
00514AAE  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00514AB1  EB 16                     JMP 0x00514ac9
LAB_00514ab3:
00514AB3  89 8B B7 01 00 00         MOV dword ptr [EBX + 0x1b7],ECX
LAB_00514ab9:
00514AB9  8B 0D 18 C1 85 00         MOV ECX,dword ptr [0x0085c118]
00514ABF  8B 01                     MOV EAX,dword ptr [ECX]
00514AC1  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00514AC4  EB 03                     JMP 0x00514ac9
switchD_00514a29::caseD_5:
00514AC6  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
switchD_00514a29::default:
00514AC9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00514ACC  40                        INC EAX
00514ACD  3B C1                     CMP EAX,ECX
00514ACF  0F 82 26 FF FF FF         JC 0x005149fb
LAB_00514ad5:
00514AD5  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00514AD8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00514ADE  5F                        POP EDI
00514ADF  5E                        POP ESI
00514AE0  5B                        POP EBX
00514AE1  8B E5                     MOV ESP,EBP
00514AE3  5D                        POP EBP
00514AE4  C2 08 00                  RET 0x8
LAB_00514ae7:
00514AE7  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00514AEA  68 20 3B 7C 00            PUSH 0x7c3b20
00514AEF  68 CC 4C 7A 00            PUSH 0x7a4ccc
00514AF4  56                        PUSH ESI
00514AF5  6A 00                     PUSH 0x0
00514AF7  68 50 03 00 00            PUSH 0x350
00514AFC  68 3C 38 7C 00            PUSH 0x7c383c
00514B01  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00514B06  E8 C5 89 19 00            CALL 0x006ad4d0
00514B0B  83 C4 18                  ADD ESP,0x18
00514B0E  85 C0                     TEST EAX,EAX
00514B10  74 01                     JZ 0x00514b13
00514B12  CC                        INT3
LAB_00514b13:
00514B13  68 50 03 00 00            PUSH 0x350
00514B18  68 3C 38 7C 00            PUSH 0x7c383c
00514B1D  6A 00                     PUSH 0x0
00514B1F  56                        PUSH ESI
00514B20  E8 1B 13 19 00            CALL 0x006a5e40
00514B25  5F                        POP EDI
00514B26  5E                        POP ESI
00514B27  5B                        POP EBX
00514B28  8B E5                     MOV ESP,EBP
00514B2A  5D                        POP EBP
00514B2B  C2 08 00                  RET 0x8
