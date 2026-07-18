FUN_006a56b0:
006A56B0  55                        PUSH EBP
006A56B1  8B EC                     MOV EBP,ESP
006A56B3  56                        PUSH ESI
006A56B4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006A56B7  57                        PUSH EDI
006A56B8  56                        PUSH ESI
006A56B9  E8 B0 FA D5 FF            CALL 0x0040516e
006A56BE  83 C4 04                  ADD ESP,0x4
006A56C1  85 C0                     TEST EAX,EAX
006A56C3  74 6D                     JZ 0x006a5732
006A56C5  8B 4E F4                  MOV ECX,dword ptr [ESI + -0xc]
006A56C8  8B C1                     MOV EAX,ECX
006A56CA  25 FF FF 00 00            AND EAX,0xffff
006A56CF  83 F8 04                  CMP EAX,0x4
006A56D2  74 0F                     JZ 0x006a56e3
006A56D4  83 F9 01                  CMP ECX,0x1
006A56D7  74 0A                     JZ 0x006a56e3
006A56D9  83 F8 02                  CMP EAX,0x2
006A56DC  74 05                     JZ 0x006a56e3
006A56DE  83 F9 03                  CMP ECX,0x3
006A56E1  75 4F                     JNZ 0x006a5732
LAB_006a56e3:
006A56E3  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006A56E6  6A 01                     PUSH 0x1
006A56E8  57                        PUSH EDI
006A56E9  56                        PUSH ESI
006A56EA  E8 F3 D6 D5 FF            CALL 0x00402de2
006A56EF  83 C4 0C                  ADD ESP,0xc
006A56F2  85 C0                     TEST EAX,EAX
006A56F4  74 3C                     JZ 0x006a5732
006A56F6  39 7E F0                  CMP dword ptr [ESI + -0x10],EDI
006A56F9  75 37                     JNZ 0x006a5732
006A56FB  8B 46 F8                  MOV EAX,dword ptr [ESI + -0x8]
006A56FE  8B 0D 7C C1 7E 00         MOV ECX,dword ptr [0x007ec17c]
006A5704  3B C1                     CMP EAX,ECX
006A5706  7F 2A                     JG 0x006a5732
006A5708  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006A570B  85 C9                     TEST ECX,ECX
006A570D  74 02                     JZ 0x006a5711
006A570F  89 01                     MOV dword ptr [ECX],EAX
LAB_006a5711:
006A5711  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006A5714  85 C0                     TEST EAX,EAX
006A5716  74 05                     JZ 0x006a571d
006A5718  8B 4E E8                  MOV ECX,dword ptr [ESI + -0x18]
006A571B  89 08                     MOV dword ptr [EAX],ECX
LAB_006a571d:
006A571D  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A5720  85 C0                     TEST EAX,EAX
006A5722  74 05                     JZ 0x006a5729
006A5724  8B 56 EC                  MOV EDX,dword ptr [ESI + -0x14]
006A5727  89 10                     MOV dword ptr [EAX],EDX
LAB_006a5729:
006A5729  5F                        POP EDI
006A572A  B8 01 00 00 00            MOV EAX,0x1
006A572F  5E                        POP ESI
006A5730  5D                        POP EBP
006A5731  C3                        RET
LAB_006a5732:
006A5732  5F                        POP EDI
006A5733  33 C0                     XOR EAX,EAX
006A5735  5E                        POP ESI
006A5736  5D                        POP EBP
006A5737  C3                        RET
