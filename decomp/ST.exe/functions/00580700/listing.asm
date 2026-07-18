FUN_00580700:
00580700  55                        PUSH EBP
00580701  8B EC                     MOV EBP,ESP
00580703  56                        PUSH ESI
00580704  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00580707  57                        PUSH EDI
00580708  8B F9                     MOV EDI,ECX
0058070A  C6 06 04                  MOV byte ptr [ESI],0x4
0058070D  8A 87 1D 02 00 00         MOV AL,byte ptr [EDI + 0x21d]
00580713  C6 46 02 00               MOV byte ptr [ESI + 0x2],0x0
00580717  88 46 01                  MOV byte ptr [ESI + 0x1],AL
0058071A  8B 17                     MOV EDX,dword ptr [EDI]
0058071C  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0058071F  89 46 03                  MOV dword ptr [ESI + 0x3],EAX
00580722  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00580725  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0058072B  50                        PUSH EAX
0058072C  E8 86 42 E8 FF            CALL 0x004049b7
00580731  88 46 07                  MOV byte ptr [ESI + 0x7],AL
00580734  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
00580737  89 4E 08                  MOV dword ptr [ESI + 0x8],ECX
0058073A  8B 87 4D 02 00 00         MOV EAX,dword ptr [EDI + 0x24d]
00580740  8B D6                     MOV EDX,ESI
00580742  5F                        POP EDI
00580743  2B D0                     SUB EDX,EAX
00580745  B0 01                     MOV AL,0x1
00580747  88 42 2E                  MOV byte ptr [EDX + 0x2e],AL
0058074A  C6 46 1B 64               MOV byte ptr [ESI + 0x1b],0x64
0058074E  88 46 1D                  MOV byte ptr [ESI + 0x1d],AL
00580751  5E                        POP ESI
00580752  5D                        POP EBP
00580753  C2 04 00                  RET 0x4
