FUN_0067bc10:
0067BC10  55                        PUSH EBP
0067BC11  8B EC                     MOV EBP,ESP
0067BC13  51                        PUSH ECX
0067BC14  53                        PUSH EBX
0067BC15  56                        PUSH ESI
0067BC16  57                        PUSH EDI
0067BC17  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0067BC1A  33 F6                     XOR ESI,ESI
0067BC1C  B9 10 27 00 00            MOV ECX,0x2710
0067BC21  8B 5F 0C                  MOV EBX,dword ptr [EDI + 0xc]
0067BC24  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0067BC27  3B F3                     CMP ESI,EBX
0067BC29  7D 27                     JGE 0x0067bc52
LAB_0067bc2b:
0067BC2B  73 20                     JNC 0x0067bc4d
0067BC2D  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0067BC30  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
0067BC33  0F AF C6                  IMUL EAX,ESI
0067BC36  03 C2                     ADD EAX,EDX
0067BC38  85 C0                     TEST EAX,EAX
0067BC3A  74 11                     JZ 0x0067bc4d
0067BC3C  0F BF 50 1A               MOVSX EDX,word ptr [EAX + 0x1a]
0067BC40  3B D1                     CMP EDX,ECX
0067BC42  7D 09                     JGE 0x0067bc4d
0067BC44  8B CA                     MOV ECX,EDX
0067BC46  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0067BC49  85 C9                     TEST ECX,ECX
0067BC4B  74 08                     JZ 0x0067bc55
LAB_0067bc4d:
0067BC4D  46                        INC ESI
0067BC4E  3B F3                     CMP ESI,EBX
0067BC50  7C D9                     JL 0x0067bc2b
LAB_0067bc52:
0067BC52  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0067bc55:
0067BC55  5F                        POP EDI
0067BC56  5E                        POP ESI
0067BC57  5B                        POP EBX
0067BC58  8B E5                     MOV ESP,EBP
0067BC5A  5D                        POP EBP
0067BC5B  C3                        RET
