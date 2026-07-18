FUN_005f89f0:
005F89F0  55                        PUSH EBP
005F89F1  8B EC                     MOV EBP,ESP
005F89F3  53                        PUSH EBX
005F89F4  8B D9                     MOV EBX,ECX
005F89F6  33 D2                     XOR EDX,EDX
005F89F8  B9 05 00 00 00            MOV ECX,0x5
005F89FD  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
005F8A00  56                        PUSH ESI
005F8A01  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
005F8A07  05 39 30 00 00            ADD EAX,0x3039
005F8A0C  57                        PUSH EDI
005F8A0D  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
005F8A10  BF 05 00 00 00            MOV EDI,0x5
005F8A15  C1 E8 10                  SHR EAX,0x10
005F8A18  F7 F1                     DIV ECX
005F8A1A  8B 83 7D 02 00 00         MOV EAX,dword ptr [EBX + 0x27d]
005F8A20  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005F8A23  8B F2                     MOV ESI,EDX
005F8A25  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
005F8A28  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
005F8A2E  03 F0                     ADD ESI,EAX
005F8A30  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
005F8A36  33 D2                     XOR EDX,EDX
005F8A38  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
005F8A3B  2B F1                     SUB ESI,ECX
005F8A3D  C1 E8 10                  SHR EAX,0x10
005F8A40  F7 F7                     DIV EDI
005F8A42  8B 83 81 02 00 00         MOV EAX,dword ptr [EBX + 0x281]
005F8A48  8B FA                     MOV EDI,EDX
005F8A4A  03 F8                     ADD EDI,EAX
005F8A4C  2B F9                     SUB EDI,ECX
005F8A4E  85 F6                     TEST ESI,ESI
005F8A50  7D 02                     JGE 0x005f8a54
005F8A52  33 F6                     XOR ESI,ESI
LAB_005f8a54:
005F8A54  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
005F8A5B  3B F0                     CMP ESI,EAX
005F8A5D  7C 03                     JL 0x005f8a62
005F8A5F  8D 70 FF                  LEA ESI,[EAX + -0x1]
LAB_005f8a62:
005F8A62  85 FF                     TEST EDI,EDI
005F8A64  7D 02                     JGE 0x005f8a68
005F8A66  33 FF                     XOR EDI,EDI
LAB_005f8a68:
005F8A68  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
005F8A6F  3B F8                     CMP EDI,EAX
005F8A71  7C 03                     JL 0x005f8a76
005F8A73  8D 78 FF                  LEA EDI,[EAX + -0x1]
LAB_005f8a76:
005F8A76  8B 83 85 02 00 00         MOV EAX,dword ptr [EBX + 0x285]
005F8A7C  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_005f8a7f:
005F8A7F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005F8A82  51                        PUSH ECX
005F8A83  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005F8A89  57                        PUSH EDI
005F8A8A  56                        PUSH ESI
005F8A8B  E8 AB C2 E0 FF            CALL 0x00404d3b
005F8A90  85 C0                     TEST EAX,EAX
005F8A92  74 58                     JZ 0x005f8aec
005F8A94  66 85 F6                  TEST SI,SI
005F8A97  7C 70                     JL 0x005f8b09
005F8A99  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
005F8AA0  66 3B F1                  CMP SI,CX
005F8AA3  7D 64                     JGE 0x005f8b09
005F8AA5  66 85 FF                  TEST DI,DI
005F8AA8  7C 5F                     JL 0x005f8b09
005F8AAA  66 3B 3D 42 B2 7F 00      CMP DI,word ptr [0x007fb242]
005F8AB1  7D 56                     JGE 0x005f8b09
005F8AB3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F8AB6  66 85 C0                  TEST AX,AX
005F8AB9  7C 51                     JL 0x005f8b0c
005F8ABB  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
005F8AC2  7D 48                     JGE 0x005f8b0c
005F8AC4  0F BF D0                  MOVSX EDX,AX
005F8AC7  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
005F8ACE  0F AF D0                  IMUL EDX,EAX
005F8AD1  0F BF C9                  MOVSX ECX,CX
005F8AD4  0F BF C7                  MOVSX EAX,DI
005F8AD7  0F AF C8                  IMUL ECX,EAX
005F8ADA  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
005F8ADF  03 D1                     ADD EDX,ECX
005F8AE1  0F BF CE                  MOVSX ECX,SI
005F8AE4  03 D1                     ADD EDX,ECX
005F8AE6  83 3C D0 00               CMP dword ptr [EAX + EDX*0x8],0x0
005F8AEA  74 1D                     JZ 0x005f8b09
LAB_005f8aec:
005F8AEC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F8AEF  40                        INC EAX
005F8AF0  83 F8 05                  CMP EAX,0x5
005F8AF3  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
005F8AF6  7D 11                     JGE 0x005f8b09
005F8AF8  8B 8B 85 02 00 00         MOV ECX,dword ptr [EBX + 0x285]
005F8AFE  83 C1 02                  ADD ECX,0x2
005F8B01  3B C1                     CMP EAX,ECX
005F8B03  0F 8E 76 FF FF FF         JLE 0x005f8a7f
LAB_005f8b09:
005F8B09  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_005f8b0c:
005F8B0C  85 C0                     TEST EAX,EAX
005F8B0E  7C 23                     JL 0x005f8b33
005F8B10  83 F8 05                  CMP EAX,0x5
005F8B13  7D 1E                     JGE 0x005f8b33
005F8B15  89 BB 95 02 00 00         MOV dword ptr [EBX + 0x295],EDI
005F8B1B  89 B3 91 02 00 00         MOV dword ptr [EBX + 0x291],ESI
005F8B21  5F                        POP EDI
005F8B22  89 83 99 02 00 00         MOV dword ptr [EBX + 0x299],EAX
005F8B28  5E                        POP ESI
005F8B29  B8 01 00 00 00            MOV EAX,0x1
005F8B2E  5B                        POP EBX
005F8B2F  5D                        POP EBP
005F8B30  C2 04 00                  RET 0x4
LAB_005f8b33:
005F8B33  5F                        POP EDI
005F8B34  5E                        POP ESI
005F8B35  33 C0                     XOR EAX,EAX
005F8B37  5B                        POP EBX
005F8B38  5D                        POP EBP
005F8B39  C2 04 00                  RET 0x4
