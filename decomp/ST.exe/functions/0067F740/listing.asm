FUN_0067f740:
0067F740  55                        PUSH EBP
0067F741  8B EC                     MOV EBP,ESP
0067F743  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0067F746  50                        PUSH EAX
0067F747  E8 C4 62 D8 FF            CALL 0x00405a10
0067F74C  83 C4 04                  ADD ESP,0x4
0067F74F  85 C0                     TEST EAX,EAX
0067F751  7C 28                     JL 0x0067f77b
0067F753  8B 15 28 8A 84 00         MOV EDX,dword ptr [0x00848a28]
0067F759  3B 42 0C                  CMP EAX,dword ptr [EDX + 0xc]
0067F75C  73 11                     JNC 0x0067f76f
0067F75E  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
0067F761  56                        PUSH ESI
0067F762  0F AF C8                  IMUL ECX,EAX
0067F765  8B 72 1C                  MOV ESI,dword ptr [EDX + 0x1c]
0067F768  03 CE                     ADD ECX,ESI
0067F76A  5E                        POP ESI
0067F76B  85 C9                     TEST ECX,ECX
0067F76D  75 07                     JNZ 0x0067f776
LAB_0067f76f:
0067F76F  B8 FC FF FF FF            MOV EAX,0xfffffffc
0067F774  5D                        POP EBP
0067F775  C3                        RET
LAB_0067f776:
0067F776  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0067F779  89 11                     MOV dword ptr [ECX],EDX
LAB_0067f77b:
0067F77B  5D                        POP EBP
0067F77C  C3                        RET
