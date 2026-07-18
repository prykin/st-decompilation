FUN_006c2980:
006C2980  55                        PUSH EBP
006C2981  8B EC                     MOV EBP,ESP
006C2983  56                        PUSH ESI
006C2984  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006C2987  85 F6                     TEST ESI,ESI
006C2989  57                        PUSH EDI
006C298A  75 08                     JNZ 0x006c2994
006C298C  5F                        POP EDI
006C298D  33 C0                     XOR EAX,EAX
006C298F  5E                        POP ESI
006C2990  5D                        POP EBP
006C2991  C2 08 00                  RET 0x8
LAB_006c2994:
006C2994  8B FE                     MOV EDI,ESI
006C2996  83 C9 FF                  OR ECX,0xffffffff
006C2999  33 C0                     XOR EAX,EAX
006C299B  F2 AE                     SCASB.REPNE ES:EDI
006C299D  F7 D1                     NOT ECX
006C299F  49                        DEC ECX
006C29A0  03 CE                     ADD ECX,ESI
006C29A2  3B F1                     CMP ESI,ECX
006C29A4  73 18                     JNC 0x006c29be
006C29A6  72 04                     JC 0x006c29ac
006C29A8  33 C9                     XOR ECX,ECX
006C29AA  EB 01                     JMP 0x006c29ad
LAB_006c29ac:
006C29AC  49                        DEC ECX
LAB_006c29ad:
006C29AD  8A 01                     MOV AL,byte ptr [ECX]
006C29AF  3C 20                     CMP AL,0x20
006C29B1  74 04                     JZ 0x006c29b7
006C29B3  3C 09                     CMP AL,0x9
006C29B5  75 06                     JNZ 0x006c29bd
LAB_006c29b7:
006C29B7  3B F1                     CMP ESI,ECX
006C29B9  72 F1                     JC 0x006c29ac
006C29BB  EB 01                     JMP 0x006c29be
LAB_006c29bd:
006C29BD  41                        INC ECX
LAB_006c29be:
006C29BE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C29C1  85 C0                     TEST EAX,EAX
006C29C3  74 26                     JZ 0x006c29eb
006C29C5  3B C6                     CMP EAX,ESI
006C29C7  74 22                     JZ 0x006c29eb
006C29C9  8B D1                     MOV EDX,ECX
006C29CB  53                        PUSH EBX
006C29CC  2B D6                     SUB EDX,ESI
006C29CE  8B F8                     MOV EDI,EAX
006C29D0  8B CA                     MOV ECX,EDX
006C29D2  8B D9                     MOV EBX,ECX
006C29D4  C1 E9 02                  SHR ECX,0x2
006C29D7  F3 A5                     MOVSD.REP ES:EDI,ESI
006C29D9  8B CB                     MOV ECX,EBX
006C29DB  5B                        POP EBX
006C29DC  83 E1 03                  AND ECX,0x3
006C29DF  F3 A4                     MOVSB.REP ES:EDI,ESI
006C29E1  5F                        POP EDI
006C29E2  C6 04 02 00               MOV byte ptr [EDX + EAX*0x1],0x0
006C29E6  5E                        POP ESI
006C29E7  5D                        POP EBP
006C29E8  C2 08 00                  RET 0x8
LAB_006c29eb:
006C29EB  8B C6                     MOV EAX,ESI
006C29ED  5F                        POP EDI
006C29EE  C6 01 00                  MOV byte ptr [ECX],0x0
006C29F1  5E                        POP ESI
006C29F2  5D                        POP EBP
006C29F3  C2 08 00                  RET 0x8
