TradePanelTy::sub_00551B10:
00551B10  56                        PUSH ESI
00551B11  8B F1                     MOV ESI,ECX
00551B13  8B 86 C0 01 00 00         MOV EAX,dword ptr [ESI + 0x1c0]
00551B19  85 C0                     TEST EAX,EAX
00551B1B  74 5C                     JZ 0x00551b79
00551B1D  57                        PUSH EDI
00551B1E  8D 7E 18                  LEA EDI,[ESI + 0x18]
00551B21  57                        PUSH EDI
00551B22  50                        PUSH EAX
00551B23  6A 02                     PUSH 0x2
00551B25  C7 46 28 26 00 00 00      MOV dword ptr [ESI + 0x28],0x26
00551B2C  E8 4F 45 19 00            CALL 0x006e6080
00551B31  33 C0                     XOR EAX,EAX
00551B33  8B 56 2C                  MOV EDX,dword ptr [ESI + 0x2c]
00551B36  8A 86 D0 01 00 00         MOV AL,byte ptr [ESI + 0x1d0]
00551B3C  33 C9                     XOR ECX,ECX
00551B3E  66 8B 8C 46 BC 01 00 00   MOV CX,word ptr [ESI + EAX*0x2 + 0x1bc]
00551B46  8D 84 46 BC 01 00 00      LEA EAX,[ESI + EAX*0x2 + 0x1bc]
00551B4D  3B D1                     CMP EDX,ECX
00551B4F  74 20                     JZ 0x00551b71
00551B51  33 D2                     XOR EDX,EDX
00551B53  C7 46 28 22 00 00 00      MOV dword ptr [ESI + 0x28],0x22
00551B5A  66 8B 10                  MOV DX,word ptr [EAX]
00551B5D  8B 86 C0 01 00 00         MOV EAX,dword ptr [ESI + 0x1c0]
00551B63  57                        PUSH EDI
00551B64  50                        PUSH EAX
00551B65  6A 02                     PUSH 0x2
00551B67  8B CE                     MOV ECX,ESI
00551B69  89 56 2C                  MOV dword ptr [ESI + 0x2c],EDX
00551B6C  E8 0F 45 19 00            CALL 0x006e6080
LAB_00551b71:
00551B71  8B CE                     MOV ECX,ESI
00551B73  E8 13 3C EB FF            CALL 0x0040578b
00551B78  5F                        POP EDI
LAB_00551b79:
00551B79  5E                        POP ESI
00551B7A  C3                        RET
