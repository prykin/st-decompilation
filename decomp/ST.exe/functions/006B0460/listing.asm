FUN_006b0460:
006B0460  57                        PUSH EDI
006B0461  8B 7C 24 08               MOV EDI,dword ptr [ESP + 0x8]
006B0465  56                        PUSH ESI
006B0466  53                        PUSH EBX
006B0467  8B 02                     MOV EAX,dword ptr [EDX]
006B0469  8B 1F                     MOV EBX,dword ptr [EDI]
006B046B  8B F0                     MOV ESI,EAX
006B046D  03 42 08                  ADD EAX,dword ptr [EDX + 0x8]
006B0470  03 5F 08                  ADD EBX,dword ptr [EDI + 0x8]
006B0473  3B 37                     CMP ESI,dword ptr [EDI]
006B0475  7F 02                     JG 0x006b0479
006B0477  8B 37                     MOV ESI,dword ptr [EDI]
LAB_006b0479:
006B0479  3B C3                     CMP EAX,EBX
006B047B  7C 02                     JL 0x006b047f
006B047D  8B C3                     MOV EAX,EBX
LAB_006b047f:
006B047F  2B C6                     SUB EAX,ESI
006B0481  7E 36                     JLE 0x006b04b9
006B0483  89 31                     MOV dword ptr [ECX],ESI
006B0485  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
006B0488  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
006B048B  8B 5F 04                  MOV EBX,dword ptr [EDI + 0x4]
006B048E  8B F0                     MOV ESI,EAX
006B0490  03 42 0C                  ADD EAX,dword ptr [EDX + 0xc]
006B0493  03 5F 0C                  ADD EBX,dword ptr [EDI + 0xc]
006B0496  3B 77 04                  CMP ESI,dword ptr [EDI + 0x4]
006B0499  7F 03                     JG 0x006b049e
006B049B  8B 77 04                  MOV ESI,dword ptr [EDI + 0x4]
LAB_006b049e:
006B049E  3B C3                     CMP EAX,EBX
006B04A0  7C 02                     JL 0x006b04a4
006B04A2  8B C3                     MOV EAX,EBX
LAB_006b04a4:
006B04A4  2B C6                     SUB EAX,ESI
006B04A6  7E 11                     JLE 0x006b04b9
006B04A8  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
006B04AB  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
006B04AE  B8 01 00 00 00            MOV EAX,0x1
006B04B3  5B                        POP EBX
006B04B4  5E                        POP ESI
006B04B5  5F                        POP EDI
006B04B6  C2 04 00                  RET 0x4
LAB_006b04b9:
006B04B9  33 C0                     XOR EAX,EAX
006B04BB  5B                        POP EBX
006B04BC  5E                        POP ESI
006B04BD  5F                        POP EDI
006B04BE  C2 04 00                  RET 0x4
