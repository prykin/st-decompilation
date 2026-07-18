FUN_004ec900:
004EC900  55                        PUSH EBP
004EC901  8B EC                     MOV EBP,ESP
004EC903  53                        PUSH EBX
004EC904  56                        PUSH ESI
004EC905  8B F1                     MOV ESI,ECX
004EC907  57                        PUSH EDI
004EC908  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004EC90E  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004EC914  50                        PUSH EAX
004EC915  E8 9D 80 F1 FF            CALL 0x004049b7
004EC91A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004EC91D  8B 8E 45 02 00 00         MOV ECX,dword ptr [ESI + 0x245]
004EC923  25 FF 00 00 00            AND EAX,0xff
004EC928  8D 7A F8                  LEA EDI,[EDX + -0x8]
004EC92B  48                        DEC EAX
004EC92C  83 FF 06                  CMP EDI,0x6
004EC92F  0F 87 CB 00 00 00         JA 0x004eca00
004EC935  33 D2                     XOR EDX,EDX
004EC937  8A 97 50 CA 4E 00         MOV DL,byte ptr [EDI + 0x4eca50]
switchD_004ec93d::switchD:
004EC93D  FF 24 95 48 CA 4E 00      JMP dword ptr [EDX*0x4 + 0x4eca48]
switchD_004ec93d::caseD_8:
004EC944  8B 96 D0 04 00 00         MOV EDX,dword ptr [ESI + 0x4d0]
004EC94A  83 FA 03                  CMP EDX,0x3
004EC94D  0F 84 AD 00 00 00         JZ 0x004eca00
004EC953  83 FA 04                  CMP EDX,0x4
004EC956  74 7B                     JZ 0x004ec9d3
004EC958  83 FA 06                  CMP EDX,0x6
004EC95B  74 76                     JZ 0x004ec9d3
004EC95D  83 FA 05                  CMP EDX,0x5
004EC960  75 45                     JNZ 0x004ec9a7
004EC962  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004EC968  8B 1C 8D 70 51 7B 00      MOV EBX,dword ptr [ECX*0x4 + 0x7b5170]
004EC96F  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
004EC972  03 D7                     ADD EDX,EDI
004EC974  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004EC977  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
004EC97A  8B 14 D3                  MOV EDX,dword ptr [EBX + EDX*0x8]
004EC97D  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
004EC980  89 13                     MOV dword ptr [EBX],EDX
004EC982  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004EC988  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004EC98B  03 F0                     ADD ESI,EAX
004EC98D  8B 04 8D 70 51 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b5170]
004EC994  8D 14 B7                  LEA EDX,[EDI + ESI*0x4]
004EC997  5F                        POP EDI
004EC998  5E                        POP ESI
004EC999  5B                        POP EBX
004EC99A  8B 4C D0 04               MOV ECX,dword ptr [EAX + EDX*0x8 + 0x4]
004EC99E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004EC9A1  89 0A                     MOV dword ptr [EDX],ECX
004EC9A3  5D                        POP EBP
004EC9A4  C2 10 00                  RET 0x10
LAB_004ec9a7:
004EC9A7  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004EC9AD  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004EC9B0  8B 0C 8D 70 51 7B 00      MOV ECX,dword ptr [ECX*0x4 + 0x7b5170]
004EC9B7  5F                        POP EDI
004EC9B8  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004EC9BB  03 F0                     ADD ESI,EAX
004EC9BD  8D 04 B2                  LEA EAX,[EDX + ESI*0x4]
004EC9C0  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004EC9C3  5E                        POP ESI
004EC9C4  5B                        POP EBX
004EC9C5  8B 04 C1                  MOV EAX,dword ptr [ECX + EAX*0x8]
004EC9C8  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004EC9CB  89 02                     MOV dword ptr [EDX],EAX
004EC9CD  89 01                     MOV dword ptr [ECX],EAX
004EC9CF  5D                        POP EBP
004EC9D0  C2 10 00                  RET 0x10
LAB_004ec9d3:
004EC9D3  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004EC9D9  5F                        POP EDI
004EC9DA  8D 14 70                  LEA EDX,[EAX + ESI*0x2]
004EC9DD  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004EC9E0  03 F2                     ADD ESI,EDX
004EC9E2  8D 14 B0                  LEA EDX,[EAX + ESI*0x4]
004EC9E5  8B 04 8D 70 51 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b5170]
004EC9EC  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004EC9EF  5E                        POP ESI
004EC9F0  8B 44 D0 04               MOV EAX,dword ptr [EAX + EDX*0x8 + 0x4]
004EC9F4  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004EC9F7  89 01                     MOV dword ptr [ECX],EAX
004EC9F9  5B                        POP EBX
004EC9FA  89 02                     MOV dword ptr [EDX],EAX
004EC9FC  5D                        POP EBP
004EC9FD  C2 10 00                  RET 0x10
switchD_004ec93d::caseD_a:
004ECA00  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004ECA06  8B 1C 8D 70 51 7B 00      MOV EBX,dword ptr [ECX*0x4 + 0x7b5170]
004ECA0D  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
004ECA10  03 D7                     ADD EDX,EDI
004ECA12  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004ECA15  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
004ECA18  8B 14 D3                  MOV EDX,dword ptr [EBX + EDX*0x8]
004ECA1B  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004ECA1E  89 13                     MOV dword ptr [EBX],EDX
004ECA20  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004ECA26  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004ECA29  03 F0                     ADD ESI,EAX
004ECA2B  8B 04 8D 70 51 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b5170]
004ECA32  8D 14 B7                  LEA EDX,[EDI + ESI*0x4]
004ECA35  5F                        POP EDI
004ECA36  5E                        POP ESI
004ECA37  5B                        POP EBX
004ECA38  8B 4C D0 04               MOV ECX,dword ptr [EAX + EDX*0x8 + 0x4]
004ECA3C  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004ECA3F  89 0A                     MOV dword ptr [EDX],ECX
004ECA41  5D                        POP EBP
004ECA42  C2 10 00                  RET 0x10
