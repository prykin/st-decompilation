PopUpTy::ChangeNumStr:
0052D690  55                        PUSH EBP
0052D691  8B EC                     MOV EBP,ESP
0052D693  83 EC 58                  SUB ESP,0x58
0052D696  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0052D69B  53                        PUSH EBX
0052D69C  56                        PUSH ESI
0052D69D  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0052D6A0  57                        PUSH EDI
0052D6A1  8D 55 AC                  LEA EDX,[EBP + -0x54]
0052D6A4  8D 4D A8                  LEA ECX,[EBP + -0x58]
0052D6A7  6A 00                     PUSH 0x0
0052D6A9  52                        PUSH EDX
0052D6AA  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0052D6AD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052D6B3  E8 38 01 20 00            CALL 0x0072d7f0
0052D6B8  8B F0                     MOV ESI,EAX
0052D6BA  83 C4 08                  ADD ESP,0x8
0052D6BD  85 F6                     TEST ESI,ESI
0052D6BF  0F 85 D2 01 00 00         JNZ 0x0052d897
0052D6C5  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
0052D6C8  8B 83 90 00 00 00         MOV EAX,dword ptr [EBX + 0x90]
0052D6CE  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
0052D6D1  85 F6                     TEST ESI,ESI
0052D6D3  75 18                     JNZ 0x0052d6ed
0052D6D5  66 8B 70 0E               MOV SI,word ptr [EAX + 0xe]
0052D6D9  0F AF 70 04               IMUL ESI,dword ptr [EAX + 0x4]
0052D6DD  83 C6 1F                  ADD ESI,0x1f
0052D6E0  C1 EE 03                  SHR ESI,0x3
0052D6E3  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
0052D6E9  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
LAB_0052d6ed:
0052D6ED  50                        PUSH EAX
0052D6EE  E8 AD 78 18 00            CALL 0x006b4fa0
0052D6F3  8B CE                     MOV ECX,ESI
0052D6F5  8B F8                     MOV EDI,EAX
0052D6F7  8B D1                     MOV EDX,ECX
0052D6F9  B8 89 89 89 89            MOV EAX,0x89898989
0052D6FE  C1 E9 02                  SHR ECX,0x2
0052D701  F3 AB                     STOSD.REP ES:EDI
0052D703  8B CA                     MOV ECX,EDX
0052D705  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
0052D709  83 E1 03                  AND ECX,0x3
0052D70C  C7 45 F8 1E 00 00 00      MOV dword ptr [EBP + -0x8],0x1e
0052D713  F3 AA                     STOSB.REP ES:EDI
0052D715  B9 E8 FF FF FF            MOV ECX,0xffffffe8
0052D71A  33 FF                     XOR EDI,EDI
0052D71C  2B CB                     SUB ECX,EBX
0052D71E  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0052D721  8D 73 18                  LEA ESI,[EBX + 0x18]
0052D724  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0052D727  EB 03                     JMP 0x0052d72c
LAB_0052d729:
0052D729  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_0052d72c:
0052D72C  A1 42 73 80 00            MOV EAX,[0x00807342]
0052D731  85 C0                     TEST EAX,EAX
0052D733  0F 84 9B 00 00 00         JZ 0x0052d7d4
0052D739  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
0052D73C  8A 15 46 73 80 00         MOV DL,byte ptr [0x00807346]
0052D742  3A C2                     CMP AL,DL
0052D744  0F 83 8A 00 00 00         JNC 0x0052d7d4
0052D74A  8B 83 98 00 00 00         MOV EAX,dword ptr [EBX + 0x98]
0052D750  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0052D753  3B FA                     CMP EDI,EDX
0052D755  7D 0D                     JGE 0x0052d764
0052D757  8B 78 14                  MOV EDI,dword ptr [EAX + 0x14]
0052D75A  03 F9                     ADD EDI,ECX
0052D75C  8B 0C 37                  MOV ECX,dword ptr [EDI + ESI*0x1]
0052D75F  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0052D762  EB 02                     JMP 0x0052d766
LAB_0052d764:
0052D764  33 C9                     XOR ECX,ECX
LAB_0052d766:
0052D766  85 C9                     TEST ECX,ECX
0052D768  74 6A                     JZ 0x0052d7d4
0052D76A  3B FA                     CMP EDI,EDX
0052D76C  7D 0D                     JGE 0x0052d77b
0052D76E  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0052D771  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0052D774  03 C8                     ADD ECX,EAX
0052D776  8B 04 31                  MOV EAX,dword ptr [ECX + ESI*0x1]
0052D779  EB 02                     JMP 0x0052d77d
LAB_0052d77b:
0052D77B  33 C0                     XOR EAX,EAX
LAB_0052d77d:
0052D77D  8B 8B 94 00 00 00         MOV ECX,dword ptr [EBX + 0x94]
0052D783  50                        PUSH EAX
0052D784  E8 87 39 1E 00            CALL 0x00711110
0052D789  8B 93 90 00 00 00         MOV EDX,dword ptr [EBX + 0x90]
0052D78F  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
0052D792  3B C1                     CMP EAX,ECX
0052D794  7C 02                     JL 0x0052d798
0052D796  8B C1                     MOV EAX,ECX
LAB_0052d798:
0052D798  6A 13                     PUSH 0x13
0052D79A  89 46 3C                  MOV dword ptr [ESI + 0x3c],EAX
0052D79D  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0052D7A3  50                        PUSH EAX
0052D7A4  8B 06                     MOV EAX,dword ptr [ESI]
0052D7A6  50                        PUSH EAX
0052D7A7  51                        PUSH ECX
0052D7A8  E8 53 50 18 00            CALL 0x006b2800
0052D7AD  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0052D7B0  8B 06                     MOV EAX,dword ptr [ESI]
0052D7B2  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0052D7B8  52                        PUSH EDX
0052D7B9  6A 0D                     PUSH 0xd
0052D7BB  6A FF                     PUSH -0x1
0052D7BD  50                        PUSH EAX
0052D7BE  51                        PUSH ECX
0052D7BF  E8 7C 5E 18 00            CALL 0x006b3640
0052D7C4  8B 16                     MOV EDX,dword ptr [ESI]
0052D7C6  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0052D7CB  52                        PUSH EDX
0052D7CC  50                        PUSH EAX
0052D7CD  E8 5E 5C 18 00            CALL 0x006b3430
0052D7D2  EB 29                     JMP 0x0052d7fd
LAB_0052d7d4:
0052D7D4  C7 46 3C 00 00 00 00      MOV dword ptr [ESI + 0x3c],0x0
0052D7DB  8B 0E                     MOV ECX,dword ptr [ESI]
0052D7DD  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0052D7E3  6A 13                     PUSH 0x13
0052D7E5  6A 00                     PUSH 0x0
0052D7E7  51                        PUSH ECX
0052D7E8  52                        PUSH EDX
0052D7E9  E8 12 50 18 00            CALL 0x006b2800
0052D7EE  8B 06                     MOV EAX,dword ptr [ESI]
0052D7F0  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0052D7F6  50                        PUSH EAX
0052D7F7  51                        PUSH ECX
0052D7F8  E8 F3 62 18 00            CALL 0x006b3af0
LAB_0052d7fd:
0052D7FD  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
0052D800  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0052D803  FE C0                     INC AL
0052D805  47                        INC EDI
0052D806  83 C6 04                  ADD ESI,0x4
0052D809  83 C2 13                  ADD EDX,0x13
0052D80C  3C 0F                     CMP AL,0xf
0052D80E  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
0052D811  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0052D814  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0052D817  0F 82 0C FF FF FF         JC 0x0052d729
0052D81D  8B B3 98 00 00 00         MOV ESI,dword ptr [EBX + 0x98]
0052D823  A0 46 73 80 00            MOV AL,[0x00807346]
0052D828  33 D2                     XOR EDX,EDX
0052D82A  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0052D82D  8A D0                     MOV DL,AL
0052D82F  3B CA                     CMP ECX,EDX
0052D831  7D 02                     JGE 0x0052d835
0052D833  8A C1                     MOV AL,CL
LAB_0052d835:
0052D835  88 83 9C 00 00 00         MOV byte ptr [EBX + 0x9c],AL
0052D83B  A0 46 73 80 00            MOV AL,[0x00807346]
0052D840  84 C0                     TEST AL,AL
0052D842  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
0052D846  76 3F                     JBE 0x0052d887
LAB_0052d848:
0052D848  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0052D84B  8B 8B 98 00 00 00         MOV ECX,dword ptr [EBX + 0x98]
0052D851  8B C2                     MOV EAX,EDX
0052D853  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
0052D856  25 FF 00 00 00            AND EAX,0xff
0052D85B  3B C6                     CMP EAX,ESI
0052D85D  7D 08                     JGE 0x0052d867
0052D85F  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
0052D862  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
0052D865  EB 02                     JMP 0x0052d869
LAB_0052d867:
0052D867  33 C0                     XOR EAX,EAX
LAB_0052d869:
0052D869  85 C0                     TEST EAX,EAX
0052D86B  74 08                     JZ 0x0052d875
0052D86D  52                        PUSH EDX
0052D86E  8B CB                     MOV ECX,EBX
0052D870  E8 40 69 ED FF            CALL 0x004041b5
LAB_0052d875:
0052D875  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
0052D878  8A 0D 46 73 80 00         MOV CL,byte ptr [0x00807346]
0052D87E  FE C0                     INC AL
0052D880  3A C1                     CMP AL,CL
0052D882  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
0052D885  72 C1                     JC 0x0052d848
LAB_0052d887:
0052D887  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
0052D88A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0052D890  5F                        POP EDI
0052D891  5E                        POP ESI
0052D892  5B                        POP EBX
0052D893  8B E5                     MOV ESP,EBP
0052D895  5D                        POP EBP
0052D896  C3                        RET
LAB_0052d897:
0052D897  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0052D89A  68 F4 6F 7C 00            PUSH 0x7c6ff4
0052D89F  68 CC 4C 7A 00            PUSH 0x7a4ccc
0052D8A4  56                        PUSH ESI
0052D8A5  6A 00                     PUSH 0x0
0052D8A7  6A 7E                     PUSH 0x7e
0052D8A9  68 84 6F 7C 00            PUSH 0x7c6f84
0052D8AE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0052D8B3  E8 18 FC 17 00            CALL 0x006ad4d0
0052D8B8  83 C4 18                  ADD ESP,0x18
0052D8BB  85 C0                     TEST EAX,EAX
0052D8BD  74 01                     JZ 0x0052d8c0
0052D8BF  CC                        INT3
LAB_0052d8c0:
0052D8C0  6A 7E                     PUSH 0x7e
0052D8C2  68 84 6F 7C 00            PUSH 0x7c6f84
0052D8C7  6A 00                     PUSH 0x0
0052D8C9  56                        PUSH ESI
0052D8CA  E8 71 85 17 00            CALL 0x006a5e40
0052D8CF  5F                        POP EDI
0052D8D0  5E                        POP ESI
0052D8D1  5B                        POP EBX
0052D8D2  8B E5                     MOV ESP,EBP
0052D8D4  5D                        POP EBP
0052D8D5  C3                        RET
