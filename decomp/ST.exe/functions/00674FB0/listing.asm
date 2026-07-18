FUN_00674fb0:
00674FB0  55                        PUSH EBP
00674FB1  8B EC                     MOV EBP,ESP
00674FB3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00674FB6  83 F8 32                  CMP EAX,0x32
00674FB9  0F 8C 94 01 00 00         JL 0x00675153
00674FBF  83 F8 74                  CMP EAX,0x74
00674FC2  0F 8D 8B 01 00 00         JGE 0x00675153
00674FC8  8D 50 CE                  LEA EDX,[EAX + -0x32]
00674FCB  8B CA                     MOV ECX,EDX
00674FCD  81 E1 1F 00 00 80         AND ECX,0x8000001f
00674FD3  79 05                     JNS 0x00674fda
00674FD5  49                        DEC ECX
00674FD6  83 C9 E0                  OR ECX,0xffffffe0
00674FD9  41                        INC ECX
LAB_00674fda:
00674FDA  B8 01 00 00 00            MOV EAX,0x1
00674FDF  D3 E0                     SHL EAX,CL
00674FE1  8B CA                     MOV ECX,EDX
00674FE3  C1 E9 05                  SHR ECX,0x5
00674FE6  85 04 8D 20 14 80 00      TEST dword ptr [ECX*0x4 + 0x801420],EAX
00674FED  74 07                     JZ 0x00674ff6
00674FEF  B8 01 00 00 00            MOV EAX,0x1
00674FF4  5D                        POP EBP
00674FF5  C3                        RET
LAB_00674ff6:
00674FF6  8B CA                     MOV ECX,EDX
00674FF8  81 E1 1F 00 00 80         AND ECX,0x8000001f
00674FFE  79 05                     JNS 0x00675005
00675000  49                        DEC ECX
00675001  83 C9 E0                  OR ECX,0xffffffe0
00675004  41                        INC ECX
LAB_00675005:
00675005  B8 01 00 00 00            MOV EAX,0x1
0067500A  D3 E0                     SHL EAX,CL
0067500C  8B CA                     MOV ECX,EDX
0067500E  C1 E9 05                  SHR ECX,0x5
00675011  85 04 8D E0 13 80 00      TEST dword ptr [ECX*0x4 + 0x8013e0],EAX
00675018  74 07                     JZ 0x00675021
0067501A  B8 02 00 00 00            MOV EAX,0x2
0067501F  5D                        POP EBP
00675020  C3                        RET
LAB_00675021:
00675021  8B CA                     MOV ECX,EDX
00675023  81 E1 1F 00 00 80         AND ECX,0x8000001f
00675029  79 05                     JNS 0x00675030
0067502B  49                        DEC ECX
0067502C  83 C9 E0                  OR ECX,0xffffffe0
0067502F  41                        INC ECX
LAB_00675030:
00675030  B8 01 00 00 00            MOV EAX,0x1
00675035  D3 E0                     SHL EAX,CL
00675037  8B CA                     MOV ECX,EDX
00675039  C1 E9 05                  SHR ECX,0x5
0067503C  85 04 8D E0 0E 80 00      TEST dword ptr [ECX*0x4 + 0x800ee0],EAX
00675043  74 07                     JZ 0x0067504c
00675045  B8 04 00 00 00            MOV EAX,0x4
0067504A  5D                        POP EBP
0067504B  C3                        RET
LAB_0067504c:
0067504C  8B CA                     MOV ECX,EDX
0067504E  81 E1 1F 00 00 80         AND ECX,0x8000001f
00675054  79 05                     JNS 0x0067505b
00675056  49                        DEC ECX
00675057  83 C9 E0                  OR ECX,0xffffffe0
0067505A  41                        INC ECX
LAB_0067505b:
0067505B  B8 01 00 00 00            MOV EAX,0x1
00675060  D3 E0                     SHL EAX,CL
00675062  8B CA                     MOV ECX,EDX
00675064  C1 E9 05                  SHR ECX,0x5
00675067  85 04 8D 90 14 80 00      TEST dword ptr [ECX*0x4 + 0x801490],EAX
0067506E  74 07                     JZ 0x00675077
00675070  B8 08 00 00 00            MOV EAX,0x8
00675075  5D                        POP EBP
00675076  C3                        RET
LAB_00675077:
00675077  8B CA                     MOV ECX,EDX
00675079  81 E1 1F 00 00 80         AND ECX,0x8000001f
0067507F  79 05                     JNS 0x00675086
00675081  49                        DEC ECX
00675082  83 C9 E0                  OR ECX,0xffffffe0
00675085  41                        INC ECX
LAB_00675086:
00675086  B8 01 00 00 00            MOV EAX,0x1
0067508B  D3 E0                     SHL EAX,CL
0067508D  8B CA                     MOV ECX,EDX
0067508F  C1 E9 05                  SHR ECX,0x5
00675092  85 04 8D 20 0F 80 00      TEST dword ptr [ECX*0x4 + 0x800f20],EAX
00675099  74 07                     JZ 0x006750a2
0067509B  B8 10 00 00 00            MOV EAX,0x10
006750A0  5D                        POP EBP
006750A1  C3                        RET
LAB_006750a2:
006750A2  8B CA                     MOV ECX,EDX
006750A4  81 E1 1F 00 00 80         AND ECX,0x8000001f
006750AA  79 05                     JNS 0x006750b1
006750AC  49                        DEC ECX
006750AD  83 C9 E0                  OR ECX,0xffffffe0
006750B0  41                        INC ECX
LAB_006750b1:
006750B1  B8 01 00 00 00            MOV EAX,0x1
006750B6  D3 E0                     SHL EAX,CL
006750B8  8B CA                     MOV ECX,EDX
006750BA  C1 E9 05                  SHR ECX,0x5
006750BD  85 04 8D F0 0E 80 00      TEST dword ptr [ECX*0x4 + 0x800ef0],EAX
006750C4  74 07                     JZ 0x006750cd
006750C6  B8 20 00 00 00            MOV EAX,0x20
006750CB  5D                        POP EBP
006750CC  C3                        RET
LAB_006750cd:
006750CD  8B CA                     MOV ECX,EDX
006750CF  81 E1 1F 00 00 80         AND ECX,0x8000001f
006750D5  79 05                     JNS 0x006750dc
006750D7  49                        DEC ECX
006750D8  83 C9 E0                  OR ECX,0xffffffe0
006750DB  41                        INC ECX
LAB_006750dc:
006750DC  B8 01 00 00 00            MOV EAX,0x1
006750E1  D3 E0                     SHL EAX,CL
006750E3  8B CA                     MOV ECX,EDX
006750E5  C1 E9 05                  SHR ECX,0x5
006750E8  85 04 8D 30 14 80 00      TEST dword ptr [ECX*0x4 + 0x801430],EAX
006750EF  74 07                     JZ 0x006750f8
006750F1  B8 40 00 00 00            MOV EAX,0x40
006750F6  5D                        POP EBP
006750F7  C3                        RET
LAB_006750f8:
006750F8  8B CA                     MOV ECX,EDX
006750FA  81 E1 1F 00 00 80         AND ECX,0x8000001f
00675100  79 05                     JNS 0x00675107
00675102  49                        DEC ECX
00675103  83 C9 E0                  OR ECX,0xffffffe0
00675106  41                        INC ECX
LAB_00675107:
00675107  B8 01 00 00 00            MOV EAX,0x1
0067510C  D3 E0                     SHL EAX,CL
0067510E  8B CA                     MOV ECX,EDX
00675110  C1 E9 05                  SHR ECX,0x5
00675113  85 04 8D 40 14 80 00      TEST dword ptr [ECX*0x4 + 0x801440],EAX
0067511A  74 07                     JZ 0x00675123
0067511C  B8 80 00 00 00            MOV EAX,0x80
00675121  5D                        POP EBP
00675122  C3                        RET
LAB_00675123:
00675123  8B CA                     MOV ECX,EDX
00675125  81 E1 1F 00 00 80         AND ECX,0x8000001f
0067512B  79 05                     JNS 0x00675132
0067512D  49                        DEC ECX
0067512E  83 C9 E0                  OR ECX,0xffffffe0
00675131  41                        INC ECX
LAB_00675132:
00675132  B8 01 00 00 00            MOV EAX,0x1
00675137  D3 E0                     SHL EAX,CL
00675139  C1 EA 05                  SHR EDX,0x5
0067513C  23 04 95 60 0F 80 00      AND EAX,dword ptr [EDX*0x4 + 0x800f60]
00675143  F7 D8                     NEG EAX
00675145  1B C0                     SBB EAX,EAX
00675147  25 00 81 FF FF            AND EAX,0xffff8100
0067514C  05 00 80 00 00            ADD EAX,0x8000
00675151  5D                        POP EBP
00675152  C3                        RET
LAB_00675153:
00675153  83 F8 01                  CMP EAX,0x1
00675156  0F 8C 69 01 00 00         JL 0x006752c5
0067515C  83 F8 29                  CMP EAX,0x29
0067515F  0F 8D 60 01 00 00         JGE 0x006752c5
00675165  8D 50 41                  LEA EDX,[EAX + 0x41]
00675168  8B CA                     MOV ECX,EDX
0067516A  81 E1 1F 00 00 80         AND ECX,0x8000001f
00675170  79 05                     JNS 0x00675177
00675172  49                        DEC ECX
00675173  83 C9 E0                  OR ECX,0xffffffe0
00675176  41                        INC ECX
LAB_00675177:
00675177  B8 01 00 00 00            MOV EAX,0x1
0067517C  D3 E0                     SHL EAX,CL
0067517E  8B CA                     MOV ECX,EDX
00675180  C1 E9 05                  SHR ECX,0x5
00675183  85 04 8D 00 10 80 00      TEST dword ptr [ECX*0x4 + 0x801000],EAX
0067518A  74 07                     JZ 0x00675193
0067518C  B8 00 00 04 00            MOV EAX,0x40000
00675191  5D                        POP EBP
00675192  C3                        RET
LAB_00675193:
00675193  8B CA                     MOV ECX,EDX
00675195  81 E1 1F 00 00 80         AND ECX,0x8000001f
0067519B  79 05                     JNS 0x006751a2
0067519D  49                        DEC ECX
0067519E  83 C9 E0                  OR ECX,0xffffffe0
006751A1  41                        INC ECX
LAB_006751a2:
006751A2  B8 01 00 00 00            MOV EAX,0x1
006751A7  D3 E0                     SHL EAX,CL
006751A9  8B CA                     MOV ECX,EDX
006751AB  C1 E9 05                  SHR ECX,0x5
006751AE  85 04 8D 10 10 80 00      TEST dword ptr [ECX*0x4 + 0x801010],EAX
006751B5  74 07                     JZ 0x006751be
006751B7  B8 00 00 08 00            MOV EAX,0x80000
006751BC  5D                        POP EBP
006751BD  C3                        RET
LAB_006751be:
006751BE  8B CA                     MOV ECX,EDX
006751C0  81 E1 1F 00 00 80         AND ECX,0x8000001f
006751C6  79 05                     JNS 0x006751cd
006751C8  49                        DEC ECX
006751C9  83 C9 E0                  OR ECX,0xffffffe0
006751CC  41                        INC ECX
LAB_006751cd:
006751CD  B8 01 00 00 00            MOV EAX,0x1
006751D2  D3 E0                     SHL EAX,CL
006751D4  8B CA                     MOV ECX,EDX
006751D6  C1 E9 05                  SHR ECX,0x5
006751D9  85 04 8D 00 0F 80 00      TEST dword ptr [ECX*0x4 + 0x800f00],EAX
006751E0  74 07                     JZ 0x006751e9
006751E2  B8 00 00 01 00            MOV EAX,0x10000
006751E7  5D                        POP EBP
006751E8  C3                        RET
LAB_006751e9:
006751E9  8B CA                     MOV ECX,EDX
006751EB  81 E1 1F 00 00 80         AND ECX,0x8000001f
006751F1  79 05                     JNS 0x006751f8
006751F3  49                        DEC ECX
006751F4  83 C9 E0                  OR ECX,0xffffffe0
006751F7  41                        INC ECX
LAB_006751f8:
006751F8  B8 01 00 00 00            MOV EAX,0x1
006751FD  D3 E0                     SHL EAX,CL
006751FF  8B CA                     MOV ECX,EDX
00675201  C1 E9 05                  SHR ECX,0x5
00675204  85 04 8D 70 13 80 00      TEST dword ptr [ECX*0x4 + 0x801370],EAX
0067520B  74 07                     JZ 0x00675214
0067520D  B8 00 00 02 00            MOV EAX,0x20000
00675212  5D                        POP EBP
00675213  C3                        RET
LAB_00675214:
00675214  8B CA                     MOV ECX,EDX
00675216  81 E1 1F 00 00 80         AND ECX,0x8000001f
0067521C  79 05                     JNS 0x00675223
0067521E  49                        DEC ECX
0067521F  83 C9 E0                  OR ECX,0xffffffe0
00675222  41                        INC ECX
LAB_00675223:
00675223  B8 01 00 00 00            MOV EAX,0x1
00675228  D3 E0                     SHL EAX,CL
0067522A  8B CA                     MOV ECX,EDX
0067522C  C1 E9 05                  SHR ECX,0x5
0067522F  85 04 8D A0 0F 80 00      TEST dword ptr [ECX*0x4 + 0x800fa0],EAX
00675236  74 07                     JZ 0x0067523f
00675238  B8 00 00 10 00            MOV EAX,0x100000
0067523D  5D                        POP EBP
0067523E  C3                        RET
LAB_0067523f:
0067523F  8B CA                     MOV ECX,EDX
00675241  81 E1 1F 00 00 80         AND ECX,0x8000001f
00675247  79 05                     JNS 0x0067524e
00675249  49                        DEC ECX
0067524A  83 C9 E0                  OR ECX,0xffffffe0
0067524D  41                        INC ECX
LAB_0067524e:
0067524E  B8 01 00 00 00            MOV EAX,0x1
00675253  D3 E0                     SHL EAX,CL
00675255  8B CA                     MOV ECX,EDX
00675257  C1 E9 05                  SHR ECX,0x5
0067525A  85 04 8D F0 0F 80 00      TEST dword ptr [ECX*0x4 + 0x800ff0],EAX
00675261  74 07                     JZ 0x0067526a
00675263  B8 00 00 20 00            MOV EAX,0x200000
00675268  5D                        POP EBP
00675269  C3                        RET
LAB_0067526a:
0067526A  8B CA                     MOV ECX,EDX
0067526C  81 E1 1F 00 00 80         AND ECX,0x8000001f
00675272  79 05                     JNS 0x00675279
00675274  49                        DEC ECX
00675275  83 C9 E0                  OR ECX,0xffffffe0
00675278  41                        INC ECX
LAB_00675279:
00675279  B8 01 00 00 00            MOV EAX,0x1
0067527E  D3 E0                     SHL EAX,CL
00675280  8B CA                     MOV ECX,EDX
00675282  C1 E9 05                  SHR ECX,0x5
00675285  85 04 8D 60 14 80 00      TEST dword ptr [ECX*0x4 + 0x801460],EAX
0067528C  74 07                     JZ 0x00675295
0067528E  B8 00 00 40 00            MOV EAX,0x400000
00675293  5D                        POP EBP
00675294  C3                        RET
LAB_00675295:
00675295  8B CA                     MOV ECX,EDX
00675297  81 E1 1F 00 00 80         AND ECX,0x8000001f
0067529D  79 05                     JNS 0x006752a4
0067529F  49                        DEC ECX
006752A0  83 C9 E0                  OR ECX,0xffffffe0
006752A3  41                        INC ECX
LAB_006752a4:
006752A4  B8 01 00 00 00            MOV EAX,0x1
006752A9  D3 E0                     SHL EAX,CL
006752AB  C1 EA 05                  SHR EDX,0x5
006752AE  23 04 95 E0 0F 80 00      AND EAX,dword ptr [EDX*0x4 + 0x800fe0]
006752B5  F7 D8                     NEG EAX
006752B7  1B C0                     SBB EAX,EAX
006752B9  25 00 00 80 80            AND EAX,0x80800000
006752BE  05 00 00 00 80            ADD EAX,0x80000000
006752C3  5D                        POP EBP
006752C4  C3                        RET
LAB_006752c5:
006752C5  33 C0                     XOR EAX,EAX
006752C7  5D                        POP EBP
006752C8  C3                        RET
