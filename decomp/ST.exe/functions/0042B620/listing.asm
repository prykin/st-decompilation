FUN_0042b620:
0042B620  55                        PUSH EBP
0042B621  8B EC                     MOV EBP,ESP
0042B623  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0042B626  48                        DEC EAX
0042B627  83 F8 05                  CMP EAX,0x5
0042B62A  0F 87 96 00 00 00         JA 0x0042b6c6
switchD_0042b630::switchD:
0042B630  FF 24 85 FC B6 42 00      JMP dword ptr [EAX*0x4 + 0x42b6fc]
switchD_0042b630::caseD_1:
0042B637  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042B63B  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042B63E  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042B641  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042B644  C1 E1 04                  SHL ECX,0x4
0042B647  03 C8                     ADD ECX,EAX
0042B649  8B 0C 4D 29 4E 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f4e29]
0042B650  85 C9                     TEST ECX,ECX
0042B652  75 50                     JNZ 0x0042b6a4
0042B654  33 C0                     XOR EAX,EAX
0042B656  5D                        POP EBP
0042B657  C2 0C 00                  RET 0xc
switchD_0042b630::caseD_2:
0042B65A  8B 0D 54 A1 7F 00         MOV ECX,dword ptr [0x007fa154]
0042B660  85 C9                     TEST ECX,ECX
0042B662  75 40                     JNZ 0x0042b6a4
0042B664  33 C0                     XOR EAX,EAX
0042B666  5D                        POP EBP
0042B667  C2 0C 00                  RET 0xc
switchD_0042b630::caseD_3:
0042B66A  8B 0D 58 A1 7F 00         MOV ECX,dword ptr [0x007fa158]
0042B670  85 C9                     TEST ECX,ECX
0042B672  75 30                     JNZ 0x0042b6a4
0042B674  33 C0                     XOR EAX,EAX
0042B676  5D                        POP EBP
0042B677  C2 0C 00                  RET 0xc
switchD_0042b630::caseD_4:
0042B67A  8B 0D 5C A1 7F 00         MOV ECX,dword ptr [0x007fa15c]
0042B680  85 C9                     TEST ECX,ECX
0042B682  75 20                     JNZ 0x0042b6a4
0042B684  33 C0                     XOR EAX,EAX
0042B686  5D                        POP EBP
0042B687  C2 0C 00                  RET 0xc
switchD_0042b630::caseD_5:
0042B68A  8B 0D 60 A1 7F 00         MOV ECX,dword ptr [0x007fa160]
0042B690  85 C9                     TEST ECX,ECX
0042B692  75 10                     JNZ 0x0042b6a4
0042B694  33 C0                     XOR EAX,EAX
0042B696  5D                        POP EBP
0042B697  C2 0C 00                  RET 0xc
switchD_0042b630::caseD_6:
0042B69A  8B 0D 64 A1 7F 00         MOV ECX,dword ptr [0x007fa164]
0042B6A0  85 C9                     TEST ECX,ECX
0042B6A2  74 50                     JZ 0x0042b6f4
LAB_0042b6a4:
0042B6A4  8D 55 08                  LEA EDX,[EBP + 0x8]
0042B6A7  52                        PUSH EDX
0042B6A8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0042B6AB  81 E2 FF FF 00 00         AND EDX,0xffff
0042B6B1  E8 BA 15 28 00            CALL 0x006acc70
0042B6B6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0042B6B9  83 E8 FC                  SUB EAX,-0x4
0042B6BC  F7 D8                     NEG EAX
0042B6BE  1B C0                     SBB EAX,EAX
0042B6C0  23 C1                     AND EAX,ECX
0042B6C2  5D                        POP EBP
0042B6C3  C2 0C 00                  RET 0xc
switchD_0042b630::default:
0042B6C6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042B6C9  0F BE 4D 08               MOVSX ECX,byte ptr [EBP + 0x8]
0042B6CD  25 FF FF 00 00            AND EAX,0xffff
0042B6D2  50                        PUSH EAX
0042B6D3  51                        PUSH ECX
0042B6D4  68 9C 60 7A 00            PUSH 0x7a609c
0042B6D9  6A 00                     PUSH 0x0
0042B6DB  6A 00                     PUSH 0x0
0042B6DD  68 7A 01 00 00            PUSH 0x17a
0042B6E2  68 04 60 7A 00            PUSH 0x7a6004
0042B6E7  E8 E4 1D 28 00            CALL 0x006ad4d0
0042B6EC  83 C4 1C                  ADD ESP,0x1c
0042B6EF  85 C0                     TEST EAX,EAX
0042B6F1  74 01                     JZ 0x0042b6f4
0042B6F3  CC                        INT3
LAB_0042b6f4:
0042B6F4  33 C0                     XOR EAX,EAX
0042B6F6  5D                        POP EBP
0042B6F7  C2 0C 00                  RET 0xc
