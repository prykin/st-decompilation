FUN_004898c0:
004898C0  55                        PUSH EBP
004898C1  8B EC                     MOV EBP,ESP
004898C3  53                        PUSH EBX
004898C4  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004898C7  56                        PUSH ESI
004898C8  8B F1                     MOV ESI,ECX
004898CA  57                        PUSH EDI
004898CB  B9 06 00 00 00            MOV ECX,0x6
004898D0  33 C0                     XOR EAX,EAX
004898D2  8B FB                     MOV EDI,EBX
004898D4  F3 AB                     STOSD.REP ES:EDI
004898D6  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004898D9  89 03                     MOV dword ptr [EBX],EAX
004898DB  8B 8E F7 06 00 00         MOV ECX,dword ptr [ESI + 0x6f7]
004898E1  89 4B 04                  MOV dword ptr [EBX + 0x4],ECX
004898E4  8B 96 F7 06 00 00         MOV EDX,dword ptr [ESI + 0x6f7]
004898EA  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004898F0  52                        PUSH EDX
004898F1  E8 64 86 F7 FF            CALL 0x00401f5a
004898F6  81 C6 FB 06 00 00         ADD ESI,0x6fb
004898FC  88 43 08                  MOV byte ptr [EBX + 0x8],AL
004898FF  83 C3 09                  ADD EBX,0x9
00489902  5F                        POP EDI
00489903  8B 06                     MOV EAX,dword ptr [ESI]
00489905  89 03                     MOV dword ptr [EBX],EAX
00489907  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0048990A  89 4B 04                  MOV dword ptr [EBX + 0x4],ECX
0048990D  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
00489910  89 53 08                  MOV dword ptr [EBX + 0x8],EDX
00489913  66 8B 46 0C               MOV AX,word ptr [ESI + 0xc]
00489917  66 89 43 0C               MOV word ptr [EBX + 0xc],AX
0048991B  8A 4E 0E                  MOV CL,byte ptr [ESI + 0xe]
0048991E  5E                        POP ESI
0048991F  88 4B 0E                  MOV byte ptr [EBX + 0xe],CL
00489922  5B                        POP EBX
00489923  5D                        POP EBP
00489924  C2 04 00                  RET 0x4
