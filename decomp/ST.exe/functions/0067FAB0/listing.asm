FUN_0067fab0:
0067FAB0  55                        PUSH EBP
0067FAB1  8B EC                     MOV EBP,ESP
0067FAB3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0067FAB6  50                        PUSH EAX
0067FAB7  E8 69 22 D8 FF            CALL 0x00401d25
0067FABC  83 C4 04                  ADD ESP,0x4
0067FABF  85 C0                     TEST EAX,EAX
0067FAC1  7C 28                     JL 0x0067faeb
0067FAC3  8B 15 30 8A 84 00         MOV EDX,dword ptr [0x00848a30]
0067FAC9  3B 42 0C                  CMP EAX,dword ptr [EDX + 0xc]
0067FACC  73 11                     JNC 0x0067fadf
0067FACE  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
0067FAD1  56                        PUSH ESI
0067FAD2  0F AF C8                  IMUL ECX,EAX
0067FAD5  8B 72 1C                  MOV ESI,dword ptr [EDX + 0x1c]
0067FAD8  03 CE                     ADD ECX,ESI
0067FADA  5E                        POP ESI
0067FADB  85 C9                     TEST ECX,ECX
0067FADD  75 07                     JNZ 0x0067fae6
LAB_0067fadf:
0067FADF  B8 FC FF FF FF            MOV EAX,0xfffffffc
0067FAE4  5D                        POP EBP
0067FAE5  C3                        RET
LAB_0067fae6:
0067FAE6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0067FAE9  89 11                     MOV dword ptr [ECX],EDX
LAB_0067faeb:
0067FAEB  5D                        POP EBP
0067FAEC  C3                        RET
