FUN_004e9050:
004E9050  56                        PUSH ESI
004E9051  8B F1                     MOV ESI,ECX
004E9053  57                        PUSH EDI
004E9054  83 BE AC 05 00 00 37      CMP dword ptr [ESI + 0x5ac],0x37
004E905B  0F 85 E9 00 00 00         JNZ 0x004e914a
004E9061  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004E9064  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E906A  50                        PUSH EAX
004E906B  E8 47 B9 F1 FF            CALL 0x004049b7
004E9070  25 FF 00 00 00            AND EAX,0xff
004E9075  48                        DEC EAX
004E9076  74 12                     JZ 0x004e908a
004E9078  48                        DEC EAX
004E9079  74 04                     JZ 0x004e907f
004E907B  33 C9                     XOR ECX,ECX
004E907D  EB 24                     JMP 0x004e90a3
LAB_004e907f:
004E907F  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004E9082  68 8C 00 00 00            PUSH 0x8c
004E9087  51                        PUSH ECX
004E9088  EB 06                     JMP 0x004e9090
LAB_004e908a:
004E908A  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004E908D  6A 21                     PUSH 0x21
004E908F  52                        PUSH EDX
LAB_004e9090:
004E9090  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E9096  E8 D0 87 F1 FF            CALL 0x0040186b
004E909B  8B C8                     MOV ECX,EAX
004E909D  F7 D9                     NEG ECX
004E909F  1B C9                     SBB ECX,ECX
004E90A1  F7 D9                     NEG ECX
LAB_004e90a3:
004E90A3  53                        PUSH EBX
004E90A4  8B 9E D0 04 00 00         MOV EBX,dword ptr [ESI + 0x4d0]
004E90AA  83 FB 64                  CMP EBX,0x64
004E90AD  7D 57                     JGE 0x004e9106
004E90AF  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004E90B4  8B B8 E4 00 00 00         MOV EDI,dword ptr [EAX + 0xe4]
004E90BA  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004E90BF  F7 24 8D FC A9 79 00      MUL dword ptr [ECX*0x4 + 0x79a9fc]
004E90C6  8B 8E D4 04 00 00         MOV ECX,dword ptr [ESI + 0x4d4]
004E90CC  C1 EA 05                  SHR EDX,0x5
004E90CF  03 D1                     ADD EDX,ECX
004E90D1  3B FA                     CMP EDI,EDX
004E90D3  72 31                     JC 0x004e9106
004E90D5  8D 43 01                  LEA EAX,[EBX + 0x1]
004E90D8  89 BE D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EDI
004E90DE  83 F8 64                  CMP EAX,0x64
004E90E1  89 86 D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EAX
004E90E7  7C 1D                     JL 0x004e9106
004E90E9  8B 86 F4 04 00 00         MOV EAX,dword ptr [ESI + 0x4f4]
004E90EF  85 C0                     TEST EAX,EAX
004E90F1  75 13                     JNZ 0x004e9106
004E90F3  6A 01                     PUSH 0x1
004E90F5  8B CE                     MOV ECX,ESI
004E90F7  C7 86 F4 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4f4],0x1
004E9101  E8 F1 9B F1 FF            CALL 0x00402cf7
LAB_004e9106:
004E9106  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004E910C  5B                        POP EBX
004E910D  83 F8 64                  CMP EAX,0x64
004E9110  7D 38                     JGE 0x004e914a
004E9112  8B 86 F4 04 00 00         MOV EAX,dword ptr [ESI + 0x4f4]
004E9118  85 C0                     TEST EAX,EAX
004E911A  74 2E                     JZ 0x004e914a
004E911C  6A 0C                     PUSH 0xc
004E911E  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004E9124  E8 86 B1 F1 FF            CALL 0x004042af
004E9129  8B 8E F5 01 00 00         MOV ECX,dword ptr [ESI + 0x1f5]
004E912F  3B 81 C4 01 00 00         CMP EAX,dword ptr [ECX + 0x1c4]
004E9135  75 13                     JNZ 0x004e914a
004E9137  6A 01                     PUSH 0x1
004E9139  8B CE                     MOV ECX,ESI
004E913B  C7 86 F4 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4f4],0x0
004E9145  E8 AD 9B F1 FF            CALL 0x00402cf7
LAB_004e914a:
004E914A  83 BE AC 05 00 00 6C      CMP dword ptr [ESI + 0x5ac],0x6c
004E9151  75 37                     JNZ 0x004e918a
004E9153  8B 86 1B 06 00 00         MOV EAX,dword ptr [ESI + 0x61b]
004E9159  33 FF                     XOR EDI,EDI
004E915B  3B C7                     CMP EAX,EDI
004E915D  74 2B                     JZ 0x004e918a
004E915F  39 BE FC 04 00 00         CMP dword ptr [ESI + 0x4fc],EDI
004E9165  75 23                     JNZ 0x004e918a
004E9167  8B 96 F8 04 00 00         MOV EDX,dword ptr [ESI + 0x4f8]
004E916D  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004E9173  57                        PUSH EDI
004E9174  52                        PUSH EDX
004E9175  E8 56 D1 1F 00            CALL 0x006e62d0
004E917A  85 C0                     TEST EAX,EAX
004E917C  74 0C                     JZ 0x004e918a
004E917E  89 BE F8 04 00 00         MOV dword ptr [ESI + 0x4f8],EDI
004E9184  89 BE 1B 06 00 00         MOV dword ptr [ESI + 0x61b],EDI
LAB_004e918a:
004E918A  5F                        POP EDI
004E918B  33 C0                     XOR EAX,EAX
004E918D  5E                        POP ESI
004E918E  C3                        RET
