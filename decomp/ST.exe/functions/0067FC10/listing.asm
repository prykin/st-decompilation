FUN_0067fc10:
0067FC10  55                        PUSH EBP
0067FC11  8B EC                     MOV EBP,ESP
0067FC13  A1 3C 8A 84 00            MOV EAX,[0x00848a3c]
0067FC18  53                        PUSH EBX
0067FC19  56                        PUSH ESI
0067FC1A  57                        PUSH EDI
0067FC1B  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
0067FC1E  33 FF                     XOR EDI,EDI
0067FC20  85 C0                     TEST EAX,EAX
0067FC22  7E 49                     JLE 0x0067fc6d
0067FC24  3B F8                     CMP EDI,EAX
0067FC26  7D 0E                     JGE 0x0067fc36
LAB_0067fc28:
0067FC28  8B 0D 3C 8A 84 00         MOV ECX,dword ptr [0x00848a3c]
0067FC2E  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
0067FC31  8B 34 BA                  MOV ESI,dword ptr [EDX + EDI*0x4]
0067FC34  EB 02                     JMP 0x0067fc38
LAB_0067fc36:
0067FC36  33 F6                     XOR ESI,ESI
LAB_0067fc38:
0067FC38  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
LAB_0067fc3b:
0067FC3B  8A 19                     MOV BL,byte ptr [ECX]
0067FC3D  8A D3                     MOV DL,BL
0067FC3F  3A 1E                     CMP BL,byte ptr [ESI]
0067FC41  75 1C                     JNZ 0x0067fc5f
0067FC43  84 D2                     TEST DL,DL
0067FC45  74 14                     JZ 0x0067fc5b
0067FC47  8A 59 01                  MOV BL,byte ptr [ECX + 0x1]
0067FC4A  8A D3                     MOV DL,BL
0067FC4C  3A 5E 01                  CMP BL,byte ptr [ESI + 0x1]
0067FC4F  75 0E                     JNZ 0x0067fc5f
0067FC51  83 C1 02                  ADD ECX,0x2
0067FC54  83 C6 02                  ADD ESI,0x2
0067FC57  84 D2                     TEST DL,DL
0067FC59  75 E0                     JNZ 0x0067fc3b
LAB_0067fc5b:
0067FC5B  33 C9                     XOR ECX,ECX
0067FC5D  EB 05                     JMP 0x0067fc64
LAB_0067fc5f:
0067FC5F  1B C9                     SBB ECX,ECX
0067FC61  83 D9 FF                  SBB ECX,-0x1
LAB_0067fc64:
0067FC64  85 C9                     TEST ECX,ECX
0067FC66  74 0D                     JZ 0x0067fc75
0067FC68  47                        INC EDI
0067FC69  3B F8                     CMP EDI,EAX
0067FC6B  7C BB                     JL 0x0067fc28
LAB_0067fc6d:
0067FC6D  5F                        POP EDI
0067FC6E  5E                        POP ESI
0067FC6F  83 C8 FF                  OR EAX,0xffffffff
0067FC72  5B                        POP EBX
0067FC73  5D                        POP EBP
0067FC74  C3                        RET
LAB_0067fc75:
0067FC75  8B C7                     MOV EAX,EDI
0067FC77  5F                        POP EDI
0067FC78  5E                        POP ESI
0067FC79  5B                        POP EBX
0067FC7A  5D                        POP EBP
0067FC7B  C3                        RET
