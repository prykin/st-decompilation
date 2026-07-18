FUN_0067f4f0:
0067F4F0  55                        PUSH EBP
0067F4F1  8B EC                     MOV EBP,ESP
0067F4F3  A1 2C 8A 84 00            MOV EAX,[0x00848a2c]
0067F4F8  53                        PUSH EBX
0067F4F9  56                        PUSH ESI
0067F4FA  57                        PUSH EDI
0067F4FB  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0067F4FE  33 FF                     XOR EDI,EDI
0067F500  85 D2                     TEST EDX,EDX
0067F502  7E 49                     JLE 0x0067f54d
0067F504  3B FA                     CMP EDI,EDX
0067F506  7D 0E                     JGE 0x0067f516
LAB_0067f508:
0067F508  8B 0D 2C 8A 84 00         MOV ECX,dword ptr [0x00848a2c]
0067F50E  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
0067F511  8B 34 B8                  MOV ESI,dword ptr [EAX + EDI*0x4]
0067F514  EB 02                     JMP 0x0067f518
LAB_0067f516:
0067F516  33 F6                     XOR ESI,ESI
LAB_0067f518:
0067F518  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_0067f51b:
0067F51B  8A 18                     MOV BL,byte ptr [EAX]
0067F51D  8A CB                     MOV CL,BL
0067F51F  3A 1E                     CMP BL,byte ptr [ESI]
0067F521  75 1C                     JNZ 0x0067f53f
0067F523  84 C9                     TEST CL,CL
0067F525  74 14                     JZ 0x0067f53b
0067F527  8A 58 01                  MOV BL,byte ptr [EAX + 0x1]
0067F52A  8A CB                     MOV CL,BL
0067F52C  3A 5E 01                  CMP BL,byte ptr [ESI + 0x1]
0067F52F  75 0E                     JNZ 0x0067f53f
0067F531  83 C0 02                  ADD EAX,0x2
0067F534  83 C6 02                  ADD ESI,0x2
0067F537  84 C9                     TEST CL,CL
0067F539  75 E0                     JNZ 0x0067f51b
LAB_0067f53b:
0067F53B  33 C0                     XOR EAX,EAX
0067F53D  EB 05                     JMP 0x0067f544
LAB_0067f53f:
0067F53F  1B C0                     SBB EAX,EAX
0067F541  83 D8 FF                  SBB EAX,-0x1
LAB_0067f544:
0067F544  85 C0                     TEST EAX,EAX
0067F546  74 0C                     JZ 0x0067f554
0067F548  47                        INC EDI
0067F549  3B FA                     CMP EDI,EDX
0067F54B  7C BB                     JL 0x0067f508
LAB_0067f54d:
0067F54D  5F                        POP EDI
0067F54E  5E                        POP ESI
0067F54F  33 C0                     XOR EAX,EAX
0067F551  5B                        POP EBX
0067F552  5D                        POP EBP
0067F553  C3                        RET
LAB_0067f554:
0067F554  85 FF                     TEST EDI,EDI
0067F556  7C F5                     JL 0x0067f54d
0067F558  8B 0D 28 8A 84 00         MOV ECX,dword ptr [0x00848a28]
0067F55E  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
0067F561  73 EA                     JNC 0x0067f54d
0067F563  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0067F566  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0067F569  0F AF C7                  IMUL EAX,EDI
0067F56C  5F                        POP EDI
0067F56D  5E                        POP ESI
0067F56E  03 C2                     ADD EAX,EDX
0067F570  5B                        POP EBX
0067F571  5D                        POP EBP
0067F572  C3                        RET
