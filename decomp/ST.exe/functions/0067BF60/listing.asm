FUN_0067bf60:
0067BF60  55                        PUSH EBP
0067BF61  8B EC                     MOV EBP,ESP
0067BF63  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0067BF66  8B 89 AD 06 00 00         MOV ECX,dword ptr [ECX + 0x6ad]
0067BF6C  50                        PUSH EAX
0067BF6D  51                        PUSH ECX
0067BF6E  E8 3B 9D D8 FF            CALL 0x00405cae
0067BF73  83 C4 08                  ADD ESP,0x8
0067BF76  85 C0                     TEST EAX,EAX
0067BF78  74 2B                     JZ 0x0067bfa5
0067BF7A  8A 4D 08                  MOV CL,byte ptr [EBP + 0x8]
0067BF7D  80 F9 FF                  CMP CL,0xff
0067BF80  74 15                     JZ 0x0067bf97
0067BF82  84 C9                     TEST CL,CL
0067BF84  74 09                     JZ 0x0067bf8f
0067BF86  80 F9 01                  CMP CL,0x1
0067BF89  74 0C                     JZ 0x0067bf97
0067BF8B  5D                        POP EBP
0067BF8C  C2 08 00                  RET 0x8
LAB_0067bf8f:
0067BF8F  66 FF 40 1A               INC word ptr [EAX + 0x1a]
0067BF93  5D                        POP EBP
0067BF94  C2 08 00                  RET 0x8
LAB_0067bf97:
0067BF97  66 8B 48 1A               MOV CX,word ptr [EAX + 0x1a]
0067BF9B  66 85 C9                  TEST CX,CX
0067BF9E  7E 05                     JLE 0x0067bfa5
0067BFA0  49                        DEC ECX
0067BFA1  66 89 48 1A               MOV word ptr [EAX + 0x1a],CX
LAB_0067bfa5:
0067BFA5  5D                        POP EBP
0067BFA6  C2 08 00                  RET 0x8
