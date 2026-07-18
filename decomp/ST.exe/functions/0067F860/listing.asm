FUN_0067f860:
0067F860  55                        PUSH EBP
0067F861  8B EC                     MOV EBP,ESP
0067F863  A1 34 8A 84 00            MOV EAX,[0x00848a34]
0067F868  53                        PUSH EBX
0067F869  56                        PUSH ESI
0067F86A  57                        PUSH EDI
0067F86B  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0067F86E  33 FF                     XOR EDI,EDI
0067F870  85 D2                     TEST EDX,EDX
0067F872  7E 49                     JLE 0x0067f8bd
0067F874  3B FA                     CMP EDI,EDX
0067F876  7D 0E                     JGE 0x0067f886
LAB_0067f878:
0067F878  8B 0D 34 8A 84 00         MOV ECX,dword ptr [0x00848a34]
0067F87E  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
0067F881  8B 34 B8                  MOV ESI,dword ptr [EAX + EDI*0x4]
0067F884  EB 02                     JMP 0x0067f888
LAB_0067f886:
0067F886  33 F6                     XOR ESI,ESI
LAB_0067f888:
0067F888  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_0067f88b:
0067F88B  8A 18                     MOV BL,byte ptr [EAX]
0067F88D  8A CB                     MOV CL,BL
0067F88F  3A 1E                     CMP BL,byte ptr [ESI]
0067F891  75 1C                     JNZ 0x0067f8af
0067F893  84 C9                     TEST CL,CL
0067F895  74 14                     JZ 0x0067f8ab
0067F897  8A 58 01                  MOV BL,byte ptr [EAX + 0x1]
0067F89A  8A CB                     MOV CL,BL
0067F89C  3A 5E 01                  CMP BL,byte ptr [ESI + 0x1]
0067F89F  75 0E                     JNZ 0x0067f8af
0067F8A1  83 C0 02                  ADD EAX,0x2
0067F8A4  83 C6 02                  ADD ESI,0x2
0067F8A7  84 C9                     TEST CL,CL
0067F8A9  75 E0                     JNZ 0x0067f88b
LAB_0067f8ab:
0067F8AB  33 C0                     XOR EAX,EAX
0067F8AD  EB 05                     JMP 0x0067f8b4
LAB_0067f8af:
0067F8AF  1B C0                     SBB EAX,EAX
0067F8B1  83 D8 FF                  SBB EAX,-0x1
LAB_0067f8b4:
0067F8B4  85 C0                     TEST EAX,EAX
0067F8B6  74 0C                     JZ 0x0067f8c4
0067F8B8  47                        INC EDI
0067F8B9  3B FA                     CMP EDI,EDX
0067F8BB  7C BB                     JL 0x0067f878
LAB_0067f8bd:
0067F8BD  5F                        POP EDI
0067F8BE  5E                        POP ESI
0067F8BF  33 C0                     XOR EAX,EAX
0067F8C1  5B                        POP EBX
0067F8C2  5D                        POP EBP
0067F8C3  C3                        RET
LAB_0067f8c4:
0067F8C4  85 FF                     TEST EDI,EDI
0067F8C6  7C F5                     JL 0x0067f8bd
0067F8C8  8B 0D 30 8A 84 00         MOV ECX,dword ptr [0x00848a30]
0067F8CE  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
0067F8D1  73 EA                     JNC 0x0067f8bd
0067F8D3  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0067F8D6  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0067F8D9  0F AF C7                  IMUL EAX,EDI
0067F8DC  5F                        POP EDI
0067F8DD  5E                        POP ESI
0067F8DE  03 C2                     ADD EAX,EDX
0067F8E0  5B                        POP EBX
0067F8E1  5D                        POP EBP
0067F8E2  C3                        RET
