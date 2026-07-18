FUN_007479cd:
007479CD  55                        PUSH EBP
007479CE  8B EC                     MOV EBP,ESP
007479D0  83 EC 48                  SUB ESP,0x48
007479D3  53                        PUSH EBX
007479D4  56                        PUSH ESI
007479D5  33 F6                     XOR ESI,ESI
007479D7  57                        PUSH EDI
007479D8  39 75 10                  CMP dword ptr [EBP + 0x10],ESI
007479DB  75 0A                     JNZ 0x007479e7
007479DD  B8 03 40 00 80            MOV EAX,0x80004003
007479E2  E9 A6 00 00 00            JMP 0x00747a8d
LAB_007479e7:
007479E7  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
007479EA  8B CB                     MOV ECX,EBX
007479EC  E8 4A 05 00 00            CALL 0x00747f3b
007479F1  83 F8 01                  CMP EAX,0x1
007479F4  75 0A                     JNZ 0x00747a00
007479F6  B8 03 02 04 80            MOV EAX,0x80040203
007479FB  E9 8D 00 00 00            JMP 0x00747a8d
LAB_00747a00:
00747A00  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00747A03  3B C6                     CMP EAX,ESI
00747A05  0F 84 89 00 00 00         JZ 0x00747a94
00747A0B  89 30                     MOV dword ptr [EAX],ESI
LAB_00747a0d:
00747A0D  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
LAB_00747a10:
00747A10  39 75 0C                  CMP dword ptr [EBP + 0xc],ESI
00747A13  74 64                     JZ 0x00747a79
00747A15  8D 4D B8                  LEA ECX,[EBP + -0x48]
00747A18  E8 00 3F 00 00            CALL 0x0074b91d
00747A1D  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
00747A20  8D 75 B8                  LEA ESI,[EBP + -0x48]
00747A23  56                        PUSH ESI
00747A24  50                        PUSH EAX
00747A25  8D 48 01                  LEA ECX,[EAX + 0x1]
00747A28  89 4B 04                  MOV dword ptr [EBX + 0x4],ECX
00747A2B  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
00747A2E  8B 11                     MOV EDX,dword ptr [ECX]
00747A30  FF 52 34                  CALL dword ptr [EDX + 0x34]
00747A33  85 C0                     TEST EAX,EAX
00747A35  75 3A                     JNZ 0x00747a71
00747A37  6A 48                     PUSH 0x48
00747A39  FF 15 D8 C0 85 00         CALL dword ptr [0x0085c0d8]
00747A3F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00747A42  85 C0                     TEST EAX,EAX
00747A44  89 01                     MOV dword ptr [ECX],EAX
00747A46  74 29                     JZ 0x00747a71
00747A48  83 45 10 04               ADD dword ptr [EBP + 0x10],0x4
00747A4C  6A 12                     PUSH 0x12
00747A4E  59                        POP ECX
00747A4F  8D 75 B8                  LEA ESI,[EBP + -0x48]
00747A52  8B F8                     MOV EDI,EAX
00747A54  F3 A5                     MOVSD.REP ES:EDI,ESI
00747A56  33 F6                     XOR ESI,ESI
00747A58  FF 45 08                  INC dword ptr [EBP + 0x8]
00747A5B  FF 4D 0C                  DEC dword ptr [EBP + 0xc]
00747A5E  8D 4D B8                  LEA ECX,[EBP + -0x48]
00747A61  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00747A64  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00747A67  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00747A6A  E8 A7 3E 00 00            CALL 0x0074b916
00747A6F  EB 9F                     JMP 0x00747a10
LAB_00747a71:
00747A71  8D 4D B8                  LEA ECX,[EBP + -0x48]
00747A74  E8 9D 3E 00 00            CALL 0x0074b916
LAB_00747a79:
00747A79  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00747A7C  85 C0                     TEST EAX,EAX
00747A7E  74 05                     JZ 0x00747a85
00747A80  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00747A83  89 08                     MOV dword ptr [EAX],ECX
LAB_00747a85:
00747A85  33 C0                     XOR EAX,EAX
00747A87  39 45 0C                  CMP dword ptr [EBP + 0xc],EAX
00747A8A  0F 95 C0                  SETNZ AL
LAB_00747a8d:
00747A8D  5F                        POP EDI
00747A8E  5E                        POP ESI
00747A8F  5B                        POP EBX
00747A90  C9                        LEAVE
00747A91  C2 10 00                  RET 0x10
LAB_00747a94:
00747A94  83 7D 0C 01               CMP dword ptr [EBP + 0xc],0x1
00747A98  0F 86 6F FF FF FF         JBE 0x00747a0d
00747A9E  B8 57 00 07 80            MOV EAX,0x80070057
00747AA3  EB E8                     JMP 0x00747a8d
