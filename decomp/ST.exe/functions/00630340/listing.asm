FUN_00630340:
00630340  55                        PUSH EBP
00630341  8B EC                     MOV EBP,ESP
00630343  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00630346  33 C0                     XOR EAX,EAX
00630348  56                        PUSH ESI
00630349  57                        PUSH EDI
0063034A  85 D2                     TEST EDX,EDX
0063034C  7C 64                     JL 0x006303b2
0063034E  83 FA 05                  CMP EDX,0x5
00630351  7D 5F                     JGE 0x006303b2
00630353  8B B4 91 E5 01 00 00      MOV ESI,dword ptr [ECX + EDX*0x4 + 0x1e5]
0063035A  85 F6                     TEST ESI,ESI
0063035C  74 54                     JZ 0x006303b2
0063035E  8B 7E 04                  MOV EDI,dword ptr [ESI + 0x4]
00630361  83 FF 03                  CMP EDI,0x3
00630364  74 05                     JZ 0x0063036b
00630366  83 FF 06                  CMP EDI,0x6
00630369  75 47                     JNZ 0x006303b2
LAB_0063036b:
0063036B  53                        PUSH EBX
0063036C  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0063036F  85 DB                     TEST EBX,EBX
00630371  74 39                     JZ 0x006303ac
00630373  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00630376  85 FF                     TEST EDI,EDI
00630378  74 32                     JZ 0x006303ac
0063037A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0063037D  85 C0                     TEST EAX,EAX
0063037F  74 2B                     JZ 0x006303ac
00630381  8B 76 10                  MOV ESI,dword ptr [ESI + 0x10]
00630384  89 33                     MOV dword ptr [EBX],ESI
00630386  8B B4 91 E5 01 00 00      MOV ESI,dword ptr [ECX + EDX*0x4 + 0x1e5]
0063038D  83 C6 14                  ADD ESI,0x14
00630390  89 37                     MOV dword ptr [EDI],ESI
00630392  8B B4 91 E5 01 00 00      MOV ESI,dword ptr [ECX + EDX*0x4 + 0x1e5]
00630399  8B 76 08                  MOV ESI,dword ptr [ESI + 0x8]
0063039C  89 30                     MOV dword ptr [EAX],ESI
0063039E  8B 84 91 E5 01 00 00      MOV EAX,dword ptr [ECX + EDX*0x4 + 0x1e5]
006303A5  C7 40 10 00 00 00 00      MOV dword ptr [EAX + 0x10],0x0
LAB_006303ac:
006303AC  B8 01 00 00 00            MOV EAX,0x1
006303B1  5B                        POP EBX
LAB_006303b2:
006303B2  5F                        POP EDI
006303B3  5E                        POP ESI
006303B4  5D                        POP EBP
006303B5  C2 10 00                  RET 0x10
