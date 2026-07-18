FUN_00636750:
00636750  55                        PUSH EBP
00636751  8B EC                     MOV EBP,ESP
00636753  51                        PUSH ECX
00636754  53                        PUSH EBX
00636755  8B D9                     MOV EBX,ECX
00636757  57                        PUSH EDI
00636758  8B 43 2C                  MOV EAX,dword ptr [EBX + 0x2c]
0063675B  85 C0                     TEST EAX,EAX
0063675D  74 42                     JZ 0x006367a1
0063675F  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00636762  33 FF                     XOR EDI,EDI
00636764  85 C9                     TEST ECX,ECX
00636766  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00636769  7E 36                     JLE 0x006367a1
0063676B  56                        PUSH ESI
LAB_0063676c:
0063676C  8B 43 2C                  MOV EAX,dword ptr [EBX + 0x2c]
0063676F  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
00636772  73 27                     JNC 0x0063679b
00636774  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
00636777  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
0063677A  0F AF F7                  IMUL ESI,EDI
0063677D  03 F2                     ADD ESI,EDX
0063677F  85 F6                     TEST ESI,ESI
00636781  74 18                     JZ 0x0063679b
00636783  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00636786  85 C0                     TEST EAX,EAX
00636788  7D 11                     JGE 0x0063679b
0063678A  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
0063678D  8B CB                     MOV ECX,EBX
0063678F  50                        PUSH EAX
00636790  E8 8D C2 DC FF            CALL 0x00402a22
00636795  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00636798  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
LAB_0063679b:
0063679B  47                        INC EDI
0063679C  3B F9                     CMP EDI,ECX
0063679E  7C CC                     JL 0x0063676c
006367A0  5E                        POP ESI
LAB_006367a1:
006367A1  5F                        POP EDI
006367A2  5B                        POP EBX
006367A3  8B E5                     MOV ESP,EBP
006367A5  5D                        POP EBP
006367A6  C3                        RET
