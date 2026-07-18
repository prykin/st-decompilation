FUN_00695f20:
00695F20  53                        PUSH EBX
00695F21  8B D9                     MOV EBX,ECX
00695F23  8B 83 53 58 00 00         MOV EAX,dword ptr [EBX + 0x5853]
00695F29  85 C0                     TEST EAX,EAX
00695F2B  74 30                     JZ 0x00695f5d
00695F2D  56                        PUSH ESI
00695F2E  57                        PUSH EDI
00695F2F  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
00695F32  33 F6                     XOR ESI,ESI
00695F34  85 FF                     TEST EDI,EDI
00695F36  7E 0D                     JLE 0x00695f45
LAB_00695f38:
00695F38  56                        PUSH ESI
00695F39  8B CB                     MOV ECX,EBX
00695F3B  E8 46 F3 D6 FF            CALL 0x00405286
00695F40  46                        INC ESI
00695F41  3B F7                     CMP ESI,EDI
00695F43  7C F3                     JL 0x00695f38
LAB_00695f45:
00695F45  8B 83 53 58 00 00         MOV EAX,dword ptr [EBX + 0x5853]
00695F4B  50                        PUSH EAX
00695F4C  E8 BF 81 01 00            CALL 0x006ae110
00695F51  5F                        POP EDI
00695F52  C7 83 53 58 00 00 00 00 00 00  MOV dword ptr [EBX + 0x5853],0x0
00695F5C  5E                        POP ESI
LAB_00695f5d:
00695F5D  5B                        POP EBX
00695F5E  C3                        RET
