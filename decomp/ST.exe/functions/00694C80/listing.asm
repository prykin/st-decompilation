CGenerate::sub_00694C80:
00694C80  56                        PUSH ESI
00694C81  8B F1                     MOV ESI,ECX
00694C83  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00694C86  85 C0                     TEST EAX,EAX
00694C88  74 26                     JZ 0x00694cb0
00694C8A  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00694C8D  85 C0                     TEST EAX,EAX
00694C8F  74 1F                     JZ 0x00694cb0
00694C91  E8 6E D3 D6 FF            CALL 0x00402004
00694C96  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00694C99  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
00694C9C  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
00694C9F  89 4E 0C                  MOV dword ptr [ESI + 0xc],ECX
00694CA2  C7 46 10 00 00 00 00      MOV dword ptr [ESI + 0x10],0x0
00694CA9  C7 46 14 00 00 00 00      MOV dword ptr [ESI + 0x14],0x0
LAB_00694cb0:
00694CB0  5E                        POP ESI
00694CB1  C3                        RET
