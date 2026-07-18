FUN_00651010:
00651010  55                        PUSH EBP
00651011  8B EC                     MOV EBP,ESP
00651013  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00651016  53                        PUSH EBX
00651017  33 C9                     XOR ECX,ECX
00651019  BB 08 00 00 00            MOV EBX,0x8
LAB_0065101e:
0065101E  38 9C 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],BL
00651025  0F 85 AE 00 00 00         JNZ 0x006510d9
0065102B  41                        INC ECX
0065102C  83 F9 02                  CMP ECX,0x2
0065102F  7C ED                     JL 0x0065101e
00651031  B9 02 00 00 00            MOV ECX,0x2
00651036  BA 0A 00 00 00            MOV EDX,0xa
LAB_0065103b:
0065103B  38 94 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],DL
00651042  0F 85 91 00 00 00         JNZ 0x006510d9
00651048  41                        INC ECX
00651049  83 F9 03                  CMP ECX,0x3
0065104C  7C ED                     JL 0x0065103b
0065104E  B9 03 00 00 00            MOV ECX,0x3
LAB_00651053:
00651053  38 9C 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],BL
0065105A  75 7D                     JNZ 0x006510d9
0065105C  41                        INC ECX
0065105D  83 F9 05                  CMP ECX,0x5
00651060  7C F1                     JL 0x00651053
00651062  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00651065  85 C9                     TEST ECX,ECX
00651067  74 70                     JZ 0x006510d9
00651069  66 8B 08                  MOV CX,word ptr [EAX]
0065106C  66 83 F9 06               CMP CX,0x6
00651070  7D 05                     JGE 0x00651077
00651072  89 50 1C                  MOV dword ptr [EAX + 0x1c],EDX
00651075  EB 08                     JMP 0x0065107f
LAB_00651077:
00651077  38 98 D5 00 00 00         CMP byte ptr [EAX + 0xd5],BL
0065107D  75 5A                     JNZ 0x006510d9
LAB_0065107f:
0065107F  83 CA FF                  OR EDX,0xffffffff
00651082  66 83 F9 07               CMP CX,0x7
00651086  7D 05                     JGE 0x0065108d
00651088  89 50 20                  MOV dword ptr [EAX + 0x20],EDX
0065108B  EB 08                     JMP 0x00651095
LAB_0065108d:
0065108D  38 98 D6 00 00 00         CMP byte ptr [EAX + 0xd6],BL
00651093  75 44                     JNZ 0x006510d9
LAB_00651095:
00651095  66 3B CB                  CMP CX,BX
00651098  7D 05                     JGE 0x0065109f
0065109A  89 50 24                  MOV dword ptr [EAX + 0x24],EDX
0065109D  EB 08                     JMP 0x006510a7
LAB_0065109f:
0065109F  38 98 D7 00 00 00         CMP byte ptr [EAX + 0xd7],BL
006510A5  75 32                     JNZ 0x006510d9
LAB_006510a7:
006510A7  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
006510AA  83 F9 01                  CMP ECX,0x1
006510AD  7C 2A                     JL 0x006510d9
006510AF  83 F9 03                  CMP ECX,0x3
006510B2  7F 25                     JG 0x006510d9
006510B4  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
006510B7  85 C9                     TEST ECX,ECX
006510B9  7D 07                     JGE 0x006510c2
006510BB  C7 40 1C 00 00 00 00      MOV dword ptr [EAX + 0x1c],0x0
LAB_006510c2:
006510C2  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
006510C5  B9 14 00 00 00            MOV ECX,0x14
006510CA  3B D1                     CMP EDX,ECX
006510CC  7C 03                     JL 0x006510d1
006510CE  89 48 1C                  MOV dword ptr [EAX + 0x1c],ECX
LAB_006510d1:
006510D1  B8 01 00 00 00            MOV EAX,0x1
006510D6  5B                        POP EBX
006510D7  5D                        POP EBP
006510D8  C3                        RET
LAB_006510d9:
006510D9  33 C0                     XOR EAX,EAX
006510DB  5B                        POP EBX
006510DC  5D                        POP EBP
006510DD  C3                        RET
