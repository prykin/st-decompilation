FUN_004c6c70:
004C6C70  55                        PUSH EBP
004C6C71  8B EC                     MOV EBP,ESP
004C6C73  56                        PUSH ESI
004C6C74  8B F1                     MOV ESI,ECX
004C6C76  8B 86 DC 03 00 00         MOV EAX,dword ptr [ESI + 0x3dc]
004C6C7C  85 C0                     TEST EAX,EAX
004C6C7E  74 46                     JZ 0x004c6cc6
004C6C80  E8 19 E2 F3 FF            CALL 0x00404e9e
004C6C85  85 C0                     TEST EAX,EAX
004C6C87  74 50                     JZ 0x004c6cd9
004C6C89  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004C6C8C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004C6C8F  B8 01 00 00 00            MOV EAX,0x1
004C6C94  C7 86 00 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x400],0x0
004C6C9E  89 86 FC 03 00 00         MOV dword ptr [ESI + 0x3fc],EAX
004C6CA4  89 86 EC 03 00 00         MOV dword ptr [ESI + 0x3ec],EAX
004C6CAA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004C6CAD  89 8E F4 03 00 00         MOV dword ptr [ESI + 0x3f4],ECX
004C6CB3  89 86 F0 03 00 00         MOV dword ptr [ESI + 0x3f0],EAX
004C6CB9  89 96 F8 03 00 00         MOV dword ptr [ESI + 0x3f8],EDX
004C6CBF  33 C0                     XOR EAX,EAX
004C6CC1  5E                        POP ESI
004C6CC2  5D                        POP EBP
004C6CC3  C2 10 00                  RET 0x10
LAB_004c6cc6:
004C6CC6  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004C6CC9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004C6CCC  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004C6CCF  50                        PUSH EAX
004C6CD0  51                        PUSH ECX
004C6CD1  52                        PUSH EDX
004C6CD2  8B CE                     MOV ECX,ESI
004C6CD4  E8 E4 EF F3 FF            CALL 0x00405cbd
LAB_004c6cd9:
004C6CD9  33 C0                     XOR EAX,EAX
004C6CDB  5E                        POP ESI
004C6CDC  5D                        POP EBP
004C6CDD  C2 10 00                  RET 0x10
