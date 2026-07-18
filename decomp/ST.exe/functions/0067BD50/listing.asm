FUN_0067bd50:
0067BD50  55                        PUSH EBP
0067BD51  8B EC                     MOV EBP,ESP
0067BD53  56                        PUSH ESI
0067BD54  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0067BD57  57                        PUSH EDI
0067BD58  33 C0                     XOR EAX,EAX
0067BD5A  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
0067BD5D  33 D2                     XOR EDX,EDX
0067BD5F  85 FF                     TEST EDI,EDI
0067BD61  7E 20                     JLE 0x0067bd83
0067BD63  53                        PUSH EBX
0067BD64  3B D7                     CMP EDX,EDI
LAB_0067bd66:
0067BD66  73 15                     JNC 0x0067bd7d
0067BD68  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0067BD6B  8B 5E 1C                  MOV EBX,dword ptr [ESI + 0x1c]
0067BD6E  0F AF CA                  IMUL ECX,EDX
0067BD71  03 CB                     ADD ECX,EBX
0067BD73  85 C9                     TEST ECX,ECX
0067BD75  74 06                     JZ 0x0067bd7d
0067BD77  0F BF 49 1A               MOVSX ECX,word ptr [ECX + 0x1a]
0067BD7B  03 C1                     ADD EAX,ECX
LAB_0067bd7d:
0067BD7D  42                        INC EDX
0067BD7E  3B D7                     CMP EDX,EDI
0067BD80  7C E4                     JL 0x0067bd66
0067BD82  5B                        POP EBX
LAB_0067bd83:
0067BD83  5F                        POP EDI
0067BD84  5E                        POP ESI
0067BD85  5D                        POP EBP
0067BD86  C3                        RET
