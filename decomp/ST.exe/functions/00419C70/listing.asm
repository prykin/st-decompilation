FUN_00419c70:
00419C70  55                        PUSH EBP
00419C71  8B EC                     MOV EBP,ESP
00419C73  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00419C76  56                        PUSH ESI
00419C77  57                        PUSH EDI
00419C78  8B F1                     MOV ESI,ECX
00419C7A  6A 00                     PUSH 0x0
00419C7C  50                        PUSH EAX
00419C7D  66 8B 4E 30               MOV CX,word ptr [ESI + 0x30]
00419C81  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00419C84  56                        PUSH ESI
00419C85  68 FF FF 00 00            PUSH 0xffff
00419C8A  51                        PUSH ECX
00419C8B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00419C91  52                        PUSH EDX
00419C92  E8 2B B6 FE FF            CALL 0x004052c2
00419C97  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
00419C9A  8B F8                     MOV EDI,EAX
00419C9C  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
00419CA0  50                        PUSH EAX
00419CA1  51                        PUSH ECX
00419CA2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00419CA8  6A 01                     PUSH 0x1
00419CAA  E8 9F AC FE FF            CALL 0x0040494e
00419CAF  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
00419CB3  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00419CB6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00419CBC  52                        PUSH EDX
00419CBD  50                        PUSH EAX
00419CBE  6A 01                     PUSH 0x1
00419CC0  E8 E1 7C FE FF            CALL 0x004019a6
00419CC5  8B C7                     MOV EAX,EDI
00419CC7  5F                        POP EDI
00419CC8  5E                        POP ESI
00419CC9  5D                        POP EBP
00419CCA  C2 04 00                  RET 0x4
