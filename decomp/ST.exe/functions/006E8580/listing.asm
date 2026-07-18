FUN_006e8580:
006E8580  55                        PUSH EBP
006E8581  8B EC                     MOV EBP,ESP
006E8583  56                        PUSH ESI
006E8584  57                        PUSH EDI
006E8585  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006E8588  8B F1                     MOV ESI,ECX
006E858A  89 3E                     MOV dword ptr [ESI],EDI
006E858C  C7 87 28 02 00 00 B0 B4 6E 00  MOV dword ptr [EDI + 0x228],0x6eb4b0
006E8596  8B 06                     MOV EAX,dword ptr [ESI]
006E8598  C7 80 30 02 00 00 40 B5 6E 00  MOV dword ptr [EAX + 0x230],0x6eb540
006E85A2  8B 0E                     MOV ECX,dword ptr [ESI]
006E85A4  C7 81 2C 02 00 00 70 B5 6E 00  MOV dword ptr [ECX + 0x22c],0x6eb570
006E85AE  8B 16                     MOV EDX,dword ptr [ESI]
006E85B0  89 B2 34 02 00 00         MOV dword ptr [EDX + 0x234],ESI
006E85B6  A1 AC E1 7E 00            MOV EAX,[0x007ee1ac]
006E85BB  85 C0                     TEST EAX,EAX
006E85BD  7D 27                     JGE 0x006e85e6
006E85BF  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006E85C2  6A FF                     PUSH -0x1
006E85C4  68 FF FF FF 00            PUSH 0xffffff
006E85C9  6A 10                     PUSH 0x10
006E85CB  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
006E85CE  68 FA 00 00 00            PUSH 0xfa
006E85D3  83 E9 0D                  SUB ECX,0xd
006E85D6  51                        PUSH ECX
006E85D7  6A 00                     PUSH 0x0
006E85D9  6A 00                     PUSH 0x0
006E85DB  68 AC E1 7E 00            PUSH 0x7ee1ac
006E85E0  57                        PUSH EDI
006E85E1  E8 2A 79 FE FF            CALL 0x006cff10
LAB_006e85e6:
006E85E6  A1 B0 E1 7E 00            MOV EAX,[0x007ee1b0]
006E85EB  85 C0                     TEST EAX,EAX
006E85ED  7D 2E                     JGE 0x006e861d
006E85EF  8B 76 04                  MOV ESI,dword ptr [ESI + 0x4]
006E85F2  6A FF                     PUSH -0x1
006E85F4  68 FF FF FF 00            PUSH 0xffffff
006E85F9  6A 10                     PUSH 0x10
006E85FB  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
006E85FE  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
006E8601  83 EA 0D                  SUB EDX,0xd
006E8604  68 FA 00 00 00            PUSH 0xfa
006E8609  2D FA 00 00 00            SUB EAX,0xfa
006E860E  52                        PUSH EDX
006E860F  50                        PUSH EAX
006E8610  6A 00                     PUSH 0x0
006E8612  68 B0 E1 7E 00            PUSH 0x7ee1b0
006E8617  57                        PUSH EDI
006E8618  E8 F3 78 FE FF            CALL 0x006cff10
LAB_006e861d:
006E861D  5F                        POP EDI
006E861E  5E                        POP ESI
006E861F  5D                        POP EBP
006E8620  C2 04 00                  RET 0x4
