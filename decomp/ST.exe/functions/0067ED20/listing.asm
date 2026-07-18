FUN_0067ed20:
0067ED20  55                        PUSH EBP
0067ED21  8B EC                     MOV EBP,ESP
0067ED23  A1 1C 8A 84 00            MOV EAX,[0x00848a1c]
0067ED28  53                        PUSH EBX
0067ED29  56                        PUSH ESI
0067ED2A  57                        PUSH EDI
0067ED2B  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
0067ED2E  33 FF                     XOR EDI,EDI
0067ED30  85 C0                     TEST EAX,EAX
0067ED32  7E 49                     JLE 0x0067ed7d
0067ED34  3B F8                     CMP EDI,EAX
0067ED36  7D 0E                     JGE 0x0067ed46
LAB_0067ed38:
0067ED38  8B 0D 1C 8A 84 00         MOV ECX,dword ptr [0x00848a1c]
0067ED3E  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
0067ED41  8B 34 BA                  MOV ESI,dword ptr [EDX + EDI*0x4]
0067ED44  EB 02                     JMP 0x0067ed48
LAB_0067ed46:
0067ED46  33 F6                     XOR ESI,ESI
LAB_0067ed48:
0067ED48  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
LAB_0067ed4b:
0067ED4B  8A 19                     MOV BL,byte ptr [ECX]
0067ED4D  8A D3                     MOV DL,BL
0067ED4F  3A 1E                     CMP BL,byte ptr [ESI]
0067ED51  75 1C                     JNZ 0x0067ed6f
0067ED53  84 D2                     TEST DL,DL
0067ED55  74 14                     JZ 0x0067ed6b
0067ED57  8A 59 01                  MOV BL,byte ptr [ECX + 0x1]
0067ED5A  8A D3                     MOV DL,BL
0067ED5C  3A 5E 01                  CMP BL,byte ptr [ESI + 0x1]
0067ED5F  75 0E                     JNZ 0x0067ed6f
0067ED61  83 C1 02                  ADD ECX,0x2
0067ED64  83 C6 02                  ADD ESI,0x2
0067ED67  84 D2                     TEST DL,DL
0067ED69  75 E0                     JNZ 0x0067ed4b
LAB_0067ed6b:
0067ED6B  33 C9                     XOR ECX,ECX
0067ED6D  EB 05                     JMP 0x0067ed74
LAB_0067ed6f:
0067ED6F  1B C9                     SBB ECX,ECX
0067ED71  83 D9 FF                  SBB ECX,-0x1
LAB_0067ed74:
0067ED74  85 C9                     TEST ECX,ECX
0067ED76  74 0D                     JZ 0x0067ed85
0067ED78  47                        INC EDI
0067ED79  3B F8                     CMP EDI,EAX
0067ED7B  7C BB                     JL 0x0067ed38
LAB_0067ed7d:
0067ED7D  5F                        POP EDI
0067ED7E  5E                        POP ESI
0067ED7F  83 C8 FF                  OR EAX,0xffffffff
0067ED82  5B                        POP EBX
0067ED83  5D                        POP EBP
0067ED84  C3                        RET
LAB_0067ed85:
0067ED85  8B C7                     MOV EAX,EDI
0067ED87  5F                        POP EDI
0067ED88  5E                        POP ESI
0067ED89  5B                        POP EBX
0067ED8A  5D                        POP EBP
0067ED8B  C3                        RET
