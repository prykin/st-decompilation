FUN_006a6100:
006A6100  55                        PUSH EBP
006A6101  8B EC                     MOV EBP,ESP
006A6103  83 EC 30                  SUB ESP,0x30
006A6106  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006A6109  53                        PUSH EBX
006A610A  56                        PUSH ESI
006A610B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006A610E  8B C1                     MOV EAX,ECX
006A6110  57                        PUSH EDI
006A6111  2B C6                     SUB EAX,ESI
006A6113  99                        CDQ
006A6114  8B D8                     MOV EBX,EAX
006A6116  33 DA                     XOR EBX,EDX
006A6118  2B DA                     SUB EBX,EDX
006A611A  3B CE                     CMP ECX,ESI
006A611C  7E 09                     JLE 0x006a6127
006A611E  C7 45 D8 02 00 00 00      MOV dword ptr [EBP + -0x28],0x2
006A6125  EB 0A                     JMP 0x006a6131
LAB_006a6127:
006A6127  33 C0                     XOR EAX,EAX
006A6129  3B CE                     CMP ECX,ESI
006A612B  0F 94 C0                  SETZ AL
006A612E  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
LAB_006a6131:
006A6131  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006A6134  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006A6137  8B C6                     MOV EAX,ESI
006A6139  C7 45 D0 00 00 00 00      MOV dword ptr [EBP + -0x30],0x0
006A6140  2B C7                     SUB EAX,EDI
006A6142  99                        CDQ
006A6143  8B C8                     MOV ECX,EAX
006A6145  33 CA                     XOR ECX,EDX
006A6147  2B CA                     SUB ECX,EDX
006A6149  3B F7                     CMP ESI,EDI
006A614B  7E 07                     JLE 0x006a6154
006A614D  BE 02 00 00 00            MOV ESI,0x2
006A6152  EB 09                     JMP 0x006a615d
LAB_006a6154:
006A6154  33 D2                     XOR EDX,EDX
006A6156  3B F7                     CMP ESI,EDI
006A6158  0F 94 C2                  SETZ DL
006A615B  8B F2                     MOV ESI,EDX
LAB_006a615d:
006A615D  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A6160  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A6163  2B C2                     SUB EAX,EDX
006A6165  BF 01 00 00 00            MOV EDI,0x1
006A616A  99                        CDQ
006A616B  33 C2                     XOR EAX,EDX
006A616D  2B C2                     SUB EAX,EDX
006A616F  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A6172  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006A6175  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006A6178  3B D0                     CMP EDX,EAX
006A617A  7E 09                     JLE 0x006a6185
006A617C  C7 45 F0 02 00 00 00      MOV dword ptr [EBP + -0x10],0x2
006A6183  EB 0B                     JMP 0x006a6190
LAB_006a6185:
006A6185  33 D2                     XOR EDX,EDX
006A6187  39 45 1C                  CMP dword ptr [EBP + 0x1c],EAX
006A618A  0F 94 C2                  SETZ DL
006A618D  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_006a6190:
006A6190  3B D9                     CMP EBX,ECX
006A6192  C7 45 E8 02 00 00 00      MOV dword ptr [EBP + -0x18],0x2
006A6199  7D 1A                     JGE 0x006a61b5
006A619B  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006A619E  8B D3                     MOV EDX,EBX
006A61A0  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
006A61A3  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
006A61A6  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006A61A9  8B D9                     MOV EBX,ECX
006A61AB  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
006A61AE  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006A61B1  8B F8                     MOV EDI,EAX
006A61B3  8B CA                     MOV ECX,EDX
LAB_006a61b5:
006A61B5  3B 4D EC                  CMP ECX,dword ptr [EBP + -0x14]
006A61B8  7D 1C                     JGE 0x006a61d6
006A61BA  8B C7                     MOV EAX,EDI
006A61BC  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
006A61BF  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006A61C2  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006A61C5  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006A61C8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A61CB  8B D1                     MOV EDX,ECX
006A61CD  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006A61D0  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006A61D3  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_006a61d6:
006A61D6  3B D9                     CMP EBX,ECX
006A61D8  7D 1A                     JGE 0x006a61f4
006A61DA  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006A61DD  8B D3                     MOV EDX,EBX
006A61DF  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
006A61E2  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
006A61E5  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006A61E8  8B D9                     MOV EBX,ECX
006A61EA  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
006A61ED  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006A61F0  8B F8                     MOV EDI,EAX
006A61F2  8B CA                     MOV ECX,EDX
LAB_006a61f4:
006A61F4  85 DB                     TEST EBX,EBX
006A61F6  75 0E                     JNZ 0x006a6206
006A61F8  A1 34 D5 7E 00            MOV EAX,[0x007ed534]
006A61FD  5F                        POP EDI
006A61FE  5E                        POP ESI
006A61FF  5B                        POP EBX
006A6200  8B E5                     MOV ESP,EBP
006A6202  5D                        POP EBP
006A6203  C2 1C 00                  RET 0x1c
LAB_006a6206:
006A6206  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006A6209  3B DA                     CMP EBX,EDX
006A620B  7E 0E                     JLE 0x006a621b
006A620D  BE 01 00 00 00            MOV ESI,0x1
006A6212  8B C3                     MOV EAX,EBX
006A6214  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
006A6217  2B C2                     SUB EAX,EDX
006A6219  EB 32                     JMP 0x006a624d
LAB_006a621b:
006A621B  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006A621E  03 D2                     ADD EDX,EDX
006A6220  3B CA                     CMP ECX,EDX
006A6222  7E 19                     JLE 0x006a623d
006A6224  8B C1                     MOV EAX,ECX
006A6226  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
006A622D  2B C2                     SUB EAX,EDX
006A622F  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006A6232  2B D3                     SUB EDX,EBX
006A6234  3B C2                     CMP EAX,EDX
006A6236  7E 15                     JLE 0x006a624d
006A6238  8D 42 01                  LEA EAX,[EDX + 0x1]
006A623B  EB 10                     JMP 0x006a624d
LAB_006a623d:
006A623D  2B D1                     SUB EDX,ECX
006A623F  8B C2                     MOV EAX,EDX
006A6241  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006A6244  2B D3                     SUB EDX,EBX
006A6246  3B C2                     CMP EAX,EDX
006A6248  7E 02                     JLE 0x006a624c
006A624A  8B C2                     MOV EAX,EDX
LAB_006a624c:
006A624C  40                        INC EAX
LAB_006a624d:
006A624D  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006A6250  3B D7                     CMP EDX,EDI
006A6252  7D 19                     JGE 0x006a626d
006A6254  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006A6257  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
006A625A  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006A625D  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
006A6260  8B D9                     MOV EBX,ECX
006A6262  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006A6265  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
006A6268  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006A626B  8B FA                     MOV EDI,EDX
LAB_006a626d:
006A626D  3B 7D E8                  CMP EDI,dword ptr [EBP + -0x18]
006A6270  7D 20                     JGE 0x006a6292
006A6272  8B D7                     MOV EDX,EDI
006A6274  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
006A6277  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006A627A  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006A627D  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
006A6280  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006A6283  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006A6286  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006A6289  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006A628C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A628F  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_006a6292:
006A6292  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006A6295  3B D7                     CMP EDX,EDI
006A6297  7D 1A                     JGE 0x006a62b3
006A6299  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006A629C  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
006A629F  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006A62A2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006A62A5  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
006A62A8  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
006A62AB  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006A62AE  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
006A62B1  8B F3                     MOV ESI,EBX
LAB_006a62b3:
006A62B3  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006A62B6  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006A62B9  85 D2                     TEST EDX,EDX
006A62BB  74 02                     JZ 0x006a62bf
006A62BD  89 02                     MOV dword ptr [EDX],EAX
LAB_006a62bf:
006A62BF  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
006A62C2  5F                        POP EDI
006A62C3  03 CA                     ADD ECX,EDX
006A62C5  5E                        POP ESI
006A62C6  8B C1                     MOV EAX,ECX
006A62C8  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006A62CB  5B                        POP EBX
006A62CC  8D 14 41                  LEA EDX,[ECX + EAX*0x2]
006A62CF  03 C2                     ADD EAX,EDX
006A62D1  8B 04 85 00 D5 7E 00      MOV EAX,dword ptr [EAX*0x4 + 0x7ed500]
006A62D8  8B E5                     MOV ESP,EBP
006A62DA  5D                        POP EBP
006A62DB  C2 1C 00                  RET 0x1c
