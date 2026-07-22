CreateList:
00720960  56                        PUSH ESI
00720961  57                        PUSH EDI
00720962  68 0C 02 00 00            PUSH 0x20c
00720967  E8 64 FB F8 FF            CALL 0x006b04d0
0072096C  8B F0                     MOV ESI,EAX
0072096E  33 FF                     XOR EDI,EDI
00720970  3B F7                     CMP ESI,EDI
00720972  74 2A                     JZ 0x0072099e
00720974  8B CE                     MOV ECX,ESI
00720976  E8 85 AD 00 00            CALL 0x0072b700
0072097B  89 BE E8 01 00 00         MOV dword ptr [ESI + 0x1e8],EDI
00720981  89 BE E4 01 00 00         MOV dword ptr [ESI + 0x1e4],EDI
00720987  89 BE E0 01 00 00         MOV dword ptr [ESI + 0x1e0],EDI
0072098D  89 BE F8 01 00 00         MOV dword ptr [ESI + 0x1f8],EDI
00720993  C7 06 A4 E2 79 00         MOV dword ptr [ESI],0x79e2a4
00720999  8B C6                     MOV EAX,ESI
0072099B  5F                        POP EDI
0072099C  5E                        POP ESI
0072099D  C3                        RET
LAB_0072099e:
0072099E  5F                        POP EDI
0072099F  33 C0                     XOR EAX,EAX
007209A1  5E                        POP ESI
007209A2  C3                        RET
