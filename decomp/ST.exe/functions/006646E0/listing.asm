FUN_006646e0:
006646E0  57                        PUSH EDI
006646E1  8B F9                     MOV EDI,ECX
006646E3  8B 8F 17 02 00 00         MOV ECX,dword ptr [EDI + 0x217]
006646E9  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006646EC  85 C0                     TEST EAX,EAX
006646EE  75 05                     JNZ 0x006646f5
006646F0  83 C8 FF                  OR EAX,0xffffffff
006646F3  5F                        POP EDI
006646F4  C3                        RET
LAB_006646f5:
006646F5  56                        PUSH ESI
006646F6  33 F6                     XOR ESI,ESI
006646F8  85 C0                     TEST EAX,EAX
006646FA  7E 34                     JLE 0x00664730
006646FC  3B F0                     CMP ESI,EAX
LAB_006646fe:
006646FE  73 0D                     JNC 0x0066470d
00664700  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00664703  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00664706  0F AF C6                  IMUL EAX,ESI
00664709  03 C2                     ADD EAX,EDX
0066470B  EB 02                     JMP 0x0066470f
LAB_0066470d:
0066470D  33 C0                     XOR EAX,EAX
LAB_0066470f:
0066470F  8B 00                     MOV EAX,dword ptr [EAX]
00664711  83 F8 32                  CMP EAX,0x32
00664714  72 0C                     JC 0x00664722
00664716  83 F8 64                  CMP EAX,0x64
00664719  73 07                     JNC 0x00664722
0066471B  56                        PUSH ESI
0066471C  51                        PUSH ECX
0066471D  E8 4E C5 04 00            CALL 0x006b0c70
LAB_00664722:
00664722  8B 8F 17 02 00 00         MOV ECX,dword ptr [EDI + 0x217]
00664728  46                        INC ESI
00664729  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0066472C  3B F0                     CMP ESI,EAX
0066472E  7C CE                     JL 0x006646fe
LAB_00664730:
00664730  8B 87 17 02 00 00         MOV EAX,dword ptr [EDI + 0x217]
00664736  5E                        POP ESI
00664737  5F                        POP EDI
00664738  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0066473B  C3                        RET
