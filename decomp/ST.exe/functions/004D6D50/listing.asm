FUN_004d6d50:
004D6D50  55                        PUSH EBP
004D6D51  8B EC                     MOV EBP,ESP
004D6D53  56                        PUSH ESI
004D6D54  8B F1                     MOV ESI,ECX
004D6D56  57                        PUSH EDI
004D6D57  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004D6D5A  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004D6D5D  89 07                     MOV dword ptr [EDI],EAX
004D6D5F  8B 8E 59 02 00 00         MOV ECX,dword ptr [ESI + 0x259]
004D6D65  89 4F 04                  MOV dword ptr [EDI + 0x4],ECX
004D6D68  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004D6D6B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004D6D71  52                        PUSH EDX
004D6D72  E8 40 DC F2 FF            CALL 0x004049b7
004D6D77  88 47 08                  MOV byte ptr [EDI + 0x8],AL
004D6D7A  81 C6 71 02 00 00         ADD ESI,0x271
004D6D80  6A 0E                     PUSH 0xe
004D6D82  83 C7 09                  ADD EDI,0x9
004D6D85  56                        PUSH ESI
004D6D86  57                        PUSH EDI
004D6D87  E8 B4 75 25 00            CALL 0x0072e340
004D6D8C  83 C4 0C                  ADD ESP,0xc
004D6D8F  5F                        POP EDI
004D6D90  5E                        POP ESI
004D6D91  5D                        POP EBP
004D6D92  C2 04 00                  RET 0x4
