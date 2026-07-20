STBoatC::sub_004926C0:
004926C0  55                        PUSH EBP
004926C1  8B EC                     MOV EBP,ESP
004926C3  81 EC DC 00 00 00         SUB ESP,0xdc
004926C9  53                        PUSH EBX
004926CA  8B D9                     MOV EBX,ECX
004926CC  33 C9                     XOR ECX,ECX
004926CE  BA 02 00 00 00            MOV EDX,0x2
004926D3  56                        PUSH ESI
004926D4  89 8D 2C FF FF FF         MOV dword ptr [EBP + 0xffffff2c],ECX
004926DA  89 8D 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],ECX
004926E0  89 8D 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],ECX
004926E6  89 8D 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],ECX
004926EC  89 8D 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],ECX
004926F2  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
004926F5  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
004926F8  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
004926FB  66 8B 8B EC 05 00 00      MOV CX,word ptr [EBX + 0x5ec]
00492702  57                        PUSH EDI
00492703  BE FE FF FF FF            MOV ESI,0xfffffffe
00492708  89 55 84                  MOV dword ptr [EBP + -0x7c],EDX
0049270B  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
0049270E  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
00492711  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
00492714  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
00492717  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
0049271A  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
0049271D  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00492720  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
00492723  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00492726  66 8B 93 EE 05 00 00      MOV DX,word ptr [EBX + 0x5ee]
0049272D  83 CF FF                  OR EDI,0xffffffff
00492730  B8 01 00 00 00            MOV EAX,0x1
00492735  89 B5 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],ESI
0049273B  89 B5 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ESI
00492741  89 B5 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],ESI
00492747  89 B5 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ESI
0049274D  89 75 80                  MOV dword ptr [EBP + -0x80],ESI
00492750  89 75 88                  MOV dword ptr [EBP + -0x78],ESI
00492753  89 75 8C                  MOV dword ptr [EBP + -0x74],ESI
00492756  89 75 94                  MOV dword ptr [EBP + -0x6c],ESI
00492759  89 75 9C                  MOV dword ptr [EBP + -0x64],ESI
0049275C  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
0049275F  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
00492766  66 85 C9                  TEST CX,CX
00492769  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
0049276C  89 BD 24 FF FF FF         MOV dword ptr [EBP + 0xffffff24],EDI
00492772  89 BD 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EDI
00492778  89 BD 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDI
0049277E  89 85 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EAX
00492784  89 BD 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],EDI
0049278A  89 BD 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],EDI
00492790  89 85 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EAX
00492796  89 BD 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EDI
0049279C  89 85 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EAX
004927A2  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
004927A8  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
004927AE  89 85 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EAX
004927B4  89 BD 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EDI
004927BA  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
004927C0  89 7D 90                  MOV dword ptr [EBP + -0x70],EDI
004927C3  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
004927C6  89 7D A8                  MOV dword ptr [EBP + -0x58],EDI
004927C9  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004927CC  89 7D C4                  MOV dword ptr [EBP + -0x3c],EDI
004927CF  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
004927D2  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
004927D5  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
004927D8  7C 4E                     JL 0x00492828
004927DA  66 3B CE                  CMP CX,SI
004927DD  7D 49                     JGE 0x00492828
004927DF  66 85 D2                  TEST DX,DX
004927E2  7C 44                     JL 0x00492828
004927E4  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004927EB  7D 3B                     JGE 0x00492828
004927ED  66 83 3D 44 B2 7F 00 04   CMP word ptr [0x007fb244],0x4
004927F5  7E 31                     JLE 0x00492828
004927F7  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
004927FE  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00492801  0F BF F6                  MOVSX ESI,SI
00492804  0F BF FA                  MOVSX EDI,DX
00492807  0F AF FE                  IMUL EDI,ESI
0049280A  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0049280D  8D 34 B7                  LEA ESI,[EDI + ESI*0x4]
00492810  0F BF F9                  MOVSX EDI,CX
00492813  03 F7                     ADD ESI,EDI
00492815  8B 3D 48 B2 7F 00         MOV EDI,dword ptr [0x007fb248]
0049281B  83 3C F7 00               CMP dword ptr [EDI + ESI*0x8],0x0
0049281F  75 72                     JNZ 0x00492893
00492821  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
LAB_00492828:
00492828  66 85 C9                  TEST CX,CX
0049282B  7C 48                     JL 0x00492875
0049282D  66 3B CE                  CMP CX,SI
00492830  7D 43                     JGE 0x00492875
00492832  66 85 D2                  TEST DX,DX
00492835  7C 3E                     JL 0x00492875
00492837  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0049283E  7D 35                     JGE 0x00492875
00492840  66 83 3D 44 B2 7F 00 04   CMP word ptr [0x007fb244],0x4
00492848  7E 2B                     JLE 0x00492875
0049284A  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
00492851  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00492854  0F BF F6                  MOVSX ESI,SI
00492857  0F BF FA                  MOVSX EDI,DX
0049285A  0F AF FE                  IMUL EDI,ESI
0049285D  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00492860  8D 34 B7                  LEA ESI,[EDI + ESI*0x4]
00492863  0F BF F9                  MOVSX EDI,CX
00492866  03 F7                     ADD ESI,EDI
00492868  8B 3D 48 B2 7F 00         MOV EDI,dword ptr [0x007fb248]
0049286E  83 7C F7 04 00            CMP dword ptr [EDI + ESI*0x8 + 0x4],0x0
00492873  75 1E                     JNZ 0x00492893
LAB_00492875:
00492875  5F                        POP EDI
00492876  66 89 8B F2 05 00 00      MOV word ptr [EBX + 0x5f2],CX
0049287D  66 89 93 F4 05 00 00      MOV word ptr [EBX + 0x5f4],DX
00492884  66 C7 83 F6 05 00 00 04 00  MOV word ptr [EBX + 0x5f6],0x4
0049288D  5E                        POP ESI
0049288E  5B                        POP EBX
0049288F  8B E5                     MOV ESP,EBP
00492891  5D                        POP EBP
00492892  C3                        RET
LAB_00492893:
00492893  0F BF 83 F0 05 00 00      MOVSX EAX,word ptr [EBX + 0x5f0]
0049289A  BF 04 00 00 00            MOV EDI,0x4
0049289F  40                        INC EAX
004928A0  3B C7                     CMP EAX,EDI
004928A2  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004928A5  0F 8F 25 01 00 00         JG 0x004929d0
LAB_004928ab:
004928AB  8D 85 28 FF FF FF         LEA EAX,[EBP + 0xffffff28]
004928B1  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
004928B8  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_004928bb:
004928BB  66 8B 50 FC               MOV DX,word ptr [EAX + -0x4]
004928BF  66 8B 30                  MOV SI,word ptr [EAX]
004928C2  66 03 75 F0               ADD SI,word ptr [EBP + -0x10]
004928C6  66 03 D1                  ADD DX,CX
004928C9  66 85 D2                  TEST DX,DX
004928CC  0F 8C B7 00 00 00         JL 0x00492989
004928D2  66 3B 15 78 B2 7F 00      CMP DX,word ptr [0x007fb278]
004928D9  0F 8D AA 00 00 00         JGE 0x00492989
004928DF  66 85 F6                  TEST SI,SI
004928E2  0F 8C A1 00 00 00         JL 0x00492989
004928E8  66 3B 35 7A B2 7F 00      CMP SI,word ptr [0x007fb27a]
004928EF  0F 8D 94 00 00 00         JGE 0x00492989
004928F5  66 A1 40 B2 7F 00         MOV AX,[0x007fb240]
004928FB  66 3B D0                  CMP DX,AX
004928FE  0F 8D A8 00 00 00         JGE 0x004929ac
00492904  66 3B 35 42 B2 7F 00      CMP SI,word ptr [0x007fb242]
0049290B  7D 36                     JGE 0x00492943
0049290D  66 85 FF                  TEST DI,DI
00492910  7C 31                     JL 0x00492943
00492912  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
00492919  7D 28                     JGE 0x00492943
0049291B  0F BF CE                  MOVSX ECX,SI
0049291E  0F BF C0                  MOVSX EAX,AX
00492921  0F AF C8                  IMUL ECX,EAX
00492924  0F BF C7                  MOVSX EAX,DI
00492927  0F AF 45 FC               IMUL EAX,dword ptr [EBP + -0x4]
0049292B  03 C8                     ADD ECX,EAX
0049292D  0F BF C2                  MOVSX EAX,DX
00492930  03 C8                     ADD ECX,EAX
00492932  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
00492937  83 3C C8 00               CMP dword ptr [EAX + ECX*0x8],0x0
0049293B  75 46                     JNZ 0x00492983
0049293D  66 A1 40 B2 7F 00         MOV AX,[0x007fb240]
LAB_00492943:
00492943  66 3B D0                  CMP DX,AX
00492946  7D 64                     JGE 0x004929ac
00492948  66 3B 35 42 B2 7F 00      CMP SI,word ptr [0x007fb242]
0049294F  7D 5B                     JGE 0x004929ac
00492951  66 85 FF                  TEST DI,DI
00492954  7C 56                     JL 0x004929ac
00492956  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
0049295D  7D 4D                     JGE 0x004929ac
0049295F  0F BF CE                  MOVSX ECX,SI
00492962  0F BF C0                  MOVSX EAX,AX
00492965  0F AF C8                  IMUL ECX,EAX
00492968  0F BF C7                  MOVSX EAX,DI
0049296B  0F AF 45 FC               IMUL EAX,dword ptr [EBP + -0x4]
0049296F  03 C8                     ADD ECX,EAX
00492971  0F BF C2                  MOVSX EAX,DX
00492974  03 C8                     ADD ECX,EAX
00492976  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0049297B  8B 5C C8 04               MOV EBX,dword ptr [EAX + ECX*0x8 + 0x4]
0049297F  85 DB                     TEST EBX,EBX
00492981  74 29                     JZ 0x004929ac
LAB_00492983:
00492983  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00492986  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
LAB_00492989:
00492989  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0049298C  83 C0 08                  ADD EAX,0x8
0049298F  42                        INC EDX
00492990  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00492993  83 FA 18                  CMP EDX,0x18
00492996  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00492999  0F 8C 1C FF FF FF         JL 0x004928bb
0049299F  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004929A2  4F                        DEC EDI
004929A3  3B F8                     CMP EDI,EAX
004929A5  7C 29                     JL 0x004929d0
004929A7  E9 FF FE FF FF            JMP 0x004928ab
LAB_004929ac:
004929AC  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004929AF  66 89 B8 F6 05 00 00      MOV word ptr [EAX + 0x5f6],DI
004929B6  66 89 B0 F4 05 00 00      MOV word ptr [EAX + 0x5f4],SI
004929BD  5F                        POP EDI
004929BE  66 89 90 F2 05 00 00      MOV word ptr [EAX + 0x5f2],DX
004929C5  5E                        POP ESI
004929C6  B8 01 00 00 00            MOV EAX,0x1
004929CB  5B                        POP EBX
004929CC  8B E5                     MOV ESP,EBP
004929CE  5D                        POP EBP
004929CF  C3                        RET
LAB_004929d0:
004929D0  5F                        POP EDI
004929D1  5E                        POP ESI
004929D2  33 C0                     XOR EAX,EAX
004929D4  5B                        POP EBX
004929D5  8B E5                     MOV ESP,EBP
004929D7  5D                        POP EBP
004929D8  C3                        RET
