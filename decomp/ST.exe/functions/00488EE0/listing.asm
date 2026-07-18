FUN_00488ee0:
00488EE0  55                        PUSH EBP
00488EE1  8B EC                     MOV EBP,ESP
00488EE3  56                        PUSH ESI
00488EE4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00488EE7  57                        PUSH EDI
00488EE8  8B F9                     MOV EDI,ECX
00488EEA  C6 06 01                  MOV byte ptr [ESI],0x1
00488EED  C6 46 01 01               MOV byte ptr [ESI + 0x1],0x1
00488EF1  8B 87 F7 06 00 00         MOV EAX,dword ptr [EDI + 0x6f7]
00488EF7  89 46 02                  MOV dword ptr [ESI + 0x2],EAX
00488EFA  8B 8F F7 06 00 00         MOV ECX,dword ptr [EDI + 0x6f7]
00488F00  51                        PUSH ECX
00488F01  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00488F07  E8 4E 90 F7 FF            CALL 0x00401f5a
00488F0C  88 46 06                  MOV byte ptr [ESI + 0x6],AL
00488F0F  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
00488F12  89 56 07                  MOV dword ptr [ESI + 0x7],EDX
00488F15  5F                        POP EDI
00488F16  5E                        POP ESI
00488F17  5D                        POP EBP
00488F18  C2 04 00                  RET 0x4
