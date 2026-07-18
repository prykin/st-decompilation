FUN_0074caa4:
0074CAA4  55                        PUSH EBP
0074CAA5  8B EC                     MOV EBP,ESP
0074CAA7  83 EC 20                  SUB ESP,0x20
0074CAAA  8B 81 8C 00 00 00         MOV EAX,dword ptr [ECX + 0x8c]
0074CAB0  56                        PUSH ESI
0074CAB1  57                        PUSH EDI
0074CAB2  6A 01                     PUSH 0x1
0074CAB4  83 78 18 00               CMP dword ptr [EAX + 0x18],0x0
0074CAB8  5E                        POP ESI
0074CAB9  74 16                     JZ 0x0074cad1
0074CABB  8B 80 9C 00 00 00         MOV EAX,dword ptr [EAX + 0x9c]
0074CAC1  8D 55 F0                  LEA EDX,[EBP + -0x10]
0074CAC4  52                        PUSH EDX
0074CAC5  50                        PUSH EAX
0074CAC6  8B 08                     MOV ECX,dword ptr [EAX]
0074CAC8  FF 51 10                  CALL dword ptr [ECX + 0x10]
0074CACB  85 C0                     TEST EAX,EAX
0074CACD  7D 11                     JGE 0x0074cae0
0074CACF  EB 5D                     JMP 0x0074cb2e
LAB_0074cad1:
0074CAD1  33 C0                     XOR EAX,EAX
0074CAD3  8D 7D F0                  LEA EDI,[EBP + -0x10]
0074CAD6  AB                        STOSD ES:EDI
0074CAD7  AB                        STOSD ES:EDI
0074CAD8  AB                        STOSD ES:EDI
0074CAD9  AB                        STOSD ES:EDI
0074CADA  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0074CADD  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
LAB_0074cae0:
0074CAE0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0074CAE3  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0074CAE6  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0074CAE9  85 C9                     TEST ECX,ECX
0074CAEB  89 08                     MOV dword ptr [EAX],ECX
0074CAED  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0074CAF0  7F 02                     JG 0x0074caf4
0074CAF2  89 30                     MOV dword ptr [EAX],ESI
LAB_0074caf4:
0074CAF4  85 D2                     TEST EDX,EDX
0074CAF6  7F 03                     JG 0x0074cafb
0074CAF8  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
LAB_0074cafb:
0074CAFB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074CAFE  8D 75 E0                  LEA ESI,[EBP + -0x20]
0074CB01  56                        PUSH ESI
0074CB02  50                        PUSH EAX
0074CB03  8B 11                     MOV EDX,dword ptr [ECX]
0074CB05  51                        PUSH ECX
0074CB06  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0074CB09  85 C0                     TEST EAX,EAX
0074CB0B  7C 21                     JL 0x0074cb2e
0074CB0D  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0074CB10  3B 45 E0                  CMP EAX,dword ptr [EBP + -0x20]
0074CB13  7F 14                     JG 0x0074cb29
0074CB15  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0074CB18  3B 45 E4                  CMP EAX,dword ptr [EBP + -0x1c]
0074CB1B  7F 0C                     JG 0x0074cb29
0074CB1D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0074CB20  3B 45 E8                  CMP EAX,dword ptr [EBP + -0x18]
0074CB23  7F 04                     JG 0x0074cb29
0074CB25  33 C0                     XOR EAX,EAX
0074CB27  EB 05                     JMP 0x0074cb2e
LAB_0074cb29:
0074CB29  B8 05 40 00 80            MOV EAX,0x80004005
LAB_0074cb2e:
0074CB2E  5F                        POP EDI
0074CB2F  5E                        POP ESI
0074CB30  C9                        LEAVE
0074CB31  C2 08 00                  RET 0x8
