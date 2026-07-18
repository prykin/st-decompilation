FUN_00621780:
00621780  55                        PUSH EBP
00621781  8B EC                     MOV EBP,ESP
00621783  83 EC 0C                  SUB ESP,0xc
00621786  56                        PUSH ESI
00621787  57                        PUSH EDI
00621788  8B F9                     MOV EDI,ECX
0062178A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0062178D  8B 87 0A 01 00 00         MOV EAX,dword ptr [EDI + 0x10a]
00621793  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
00621796  0F 83 FE 01 00 00         JNC 0x0062199a
0062179C  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0062179F  0F AF F1                  IMUL ESI,ECX
006217A2  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
006217A5  85 F6                     TEST ESI,ESI
006217A7  0F 84 ED 01 00 00         JZ 0x0062199a
006217AD  8B 46 09                  MOV EAX,dword ptr [ESI + 0x9]
006217B0  48                        DEC EAX
006217B1  83 F8 07                  CMP EAX,0x7
006217B4  0F 87 E0 01 00 00         JA 0x0062199a
switchD_006217ba::switchD:
006217BA  FF 24 85 A4 19 62 00      JMP dword ptr [EAX*0x4 + 0x6219a4]
switchD_006217ba::caseD_1:
006217C1  33 C0                     XOR EAX,EAX
006217C3  A0 4E 87 80 00            MOV AL,[0x0080874e]
006217C8  48                        DEC EAX
006217C9  74 1E                     JZ 0x006217e9
006217CB  48                        DEC EAX
006217CC  74 11                     JZ 0x006217df
006217CE  48                        DEC EAX
006217CF  0F 85 C5 01 00 00         JNZ 0x0062199a
006217D5  B8 40 00 00 00            MOV EAX,0x40
006217DA  E9 6F 01 00 00            JMP 0x0062194e
LAB_006217df:
006217DF  B8 3F 00 00 00            MOV EAX,0x3f
006217E4  E9 65 01 00 00            JMP 0x0062194e
LAB_006217e9:
006217E9  B8 3E 00 00 00            MOV EAX,0x3e
006217EE  E9 5B 01 00 00            JMP 0x0062194e
switchD_006217ba::caseD_2:
006217F3  33 C0                     XOR EAX,EAX
006217F5  A0 4E 87 80 00            MOV AL,[0x0080874e]
006217FA  48                        DEC EAX
006217FB  74 1E                     JZ 0x0062181b
006217FD  48                        DEC EAX
006217FE  74 11                     JZ 0x00621811
00621800  48                        DEC EAX
00621801  0F 85 93 01 00 00         JNZ 0x0062199a
00621807  B8 43 00 00 00            MOV EAX,0x43
0062180C  E9 3D 01 00 00            JMP 0x0062194e
LAB_00621811:
00621811  B8 42 00 00 00            MOV EAX,0x42
00621816  E9 33 01 00 00            JMP 0x0062194e
LAB_0062181b:
0062181B  B8 41 00 00 00            MOV EAX,0x41
00621820  E9 29 01 00 00            JMP 0x0062194e
switchD_006217ba::caseD_3:
00621825  33 C0                     XOR EAX,EAX
00621827  A0 4E 87 80 00            MOV AL,[0x0080874e]
0062182C  48                        DEC EAX
0062182D  74 1E                     JZ 0x0062184d
0062182F  48                        DEC EAX
00621830  74 11                     JZ 0x00621843
00621832  48                        DEC EAX
00621833  0F 85 61 01 00 00         JNZ 0x0062199a
00621839  B8 46 00 00 00            MOV EAX,0x46
0062183E  E9 0B 01 00 00            JMP 0x0062194e
LAB_00621843:
00621843  B8 45 00 00 00            MOV EAX,0x45
00621848  E9 01 01 00 00            JMP 0x0062194e
LAB_0062184d:
0062184D  B8 44 00 00 00            MOV EAX,0x44
00621852  E9 F7 00 00 00            JMP 0x0062194e
switchD_006217ba::caseD_4:
00621857  33 C0                     XOR EAX,EAX
00621859  A0 4E 87 80 00            MOV AL,[0x0080874e]
0062185E  48                        DEC EAX
0062185F  74 1E                     JZ 0x0062187f
00621861  48                        DEC EAX
00621862  74 11                     JZ 0x00621875
00621864  48                        DEC EAX
00621865  0F 85 2F 01 00 00         JNZ 0x0062199a
0062186B  B8 49 00 00 00            MOV EAX,0x49
00621870  E9 D9 00 00 00            JMP 0x0062194e
LAB_00621875:
00621875  B8 48 00 00 00            MOV EAX,0x48
0062187A  E9 CF 00 00 00            JMP 0x0062194e
LAB_0062187f:
0062187F  B8 47 00 00 00            MOV EAX,0x47
00621884  E9 C5 00 00 00            JMP 0x0062194e
switchD_006217ba::caseD_5:
00621889  33 C0                     XOR EAX,EAX
0062188B  A0 4E 87 80 00            MOV AL,[0x0080874e]
00621890  48                        DEC EAX
00621891  74 1E                     JZ 0x006218b1
00621893  48                        DEC EAX
00621894  74 11                     JZ 0x006218a7
00621896  48                        DEC EAX
00621897  0F 85 FD 00 00 00         JNZ 0x0062199a
0062189D  B8 4C 00 00 00            MOV EAX,0x4c
006218A2  E9 A7 00 00 00            JMP 0x0062194e
LAB_006218a7:
006218A7  B8 4B 00 00 00            MOV EAX,0x4b
006218AC  E9 9D 00 00 00            JMP 0x0062194e
LAB_006218b1:
006218B1  B8 4A 00 00 00            MOV EAX,0x4a
006218B6  E9 93 00 00 00            JMP 0x0062194e
switchD_006217ba::caseD_6:
006218BB  33 C0                     XOR EAX,EAX
006218BD  A0 4E 87 80 00            MOV AL,[0x0080874e]
006218C2  48                        DEC EAX
006218C3  74 18                     JZ 0x006218dd
006218C5  48                        DEC EAX
006218C6  74 0E                     JZ 0x006218d6
006218C8  48                        DEC EAX
006218C9  0F 85 CB 00 00 00         JNZ 0x0062199a
006218CF  B8 4F 00 00 00            MOV EAX,0x4f
006218D4  EB 78                     JMP 0x0062194e
LAB_006218d6:
006218D6  B8 4E 00 00 00            MOV EAX,0x4e
006218DB  EB 71                     JMP 0x0062194e
LAB_006218dd:
006218DD  B8 4D 00 00 00            MOV EAX,0x4d
006218E2  EB 6A                     JMP 0x0062194e
switchD_006217ba::caseD_7:
006218E4  33 C0                     XOR EAX,EAX
006218E6  A0 4E 87 80 00            MOV AL,[0x0080874e]
006218EB  48                        DEC EAX
006218EC  74 18                     JZ 0x00621906
006218EE  48                        DEC EAX
006218EF  74 0E                     JZ 0x006218ff
006218F1  48                        DEC EAX
006218F2  0F 85 A2 00 00 00         JNZ 0x0062199a
006218F8  B8 52 00 00 00            MOV EAX,0x52
006218FD  EB 4F                     JMP 0x0062194e
LAB_006218ff:
006218FF  B8 51 00 00 00            MOV EAX,0x51
00621904  EB 48                     JMP 0x0062194e
LAB_00621906:
00621906  B8 50 00 00 00            MOV EAX,0x50
0062190B  EB 41                     JMP 0x0062194e
switchD_006217ba::caseD_8:
0062190D  A1 18 76 80 00            MOV EAX,[0x00807618]
00621912  6A 08                     PUSH 0x8
00621914  50                        PUSH EAX
00621915  68 4A 27 00 00            PUSH 0x274a
0062191A  E8 21 E8 08 00            CALL 0x006b0140
0062191F  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
00621925  50                        PUSH EAX
00621926  E8 AD FB DD FF            CALL 0x004014d8
0062192B  33 C0                     XOR EAX,EAX
0062192D  A0 4E 87 80 00            MOV AL,[0x0080874e]
00621932  48                        DEC EAX
00621933  74 14                     JZ 0x00621949
00621935  48                        DEC EAX
00621936  74 0A                     JZ 0x00621942
00621938  48                        DEC EAX
00621939  75 5F                     JNZ 0x0062199a
0062193B  B8 BC 00 00 00            MOV EAX,0xbc
00621940  EB 0C                     JMP 0x0062194e
LAB_00621942:
00621942  B8 BB 00 00 00            MOV EAX,0xbb
00621947  EB 05                     JMP 0x0062194e
LAB_00621949:
00621949  B8 BA 00 00 00            MOV EAX,0xba
LAB_0062194e:
0062194E  33 C9                     XOR ECX,ECX
00621950  8D 55 F4                  LEA EDX,[EBP + -0xc]
00621953  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00621956  6A 00                     PUSH 0x0
00621958  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0062195B  52                        PUSH EDX
0062195C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0062195F  83 C9 FF                  OR ECX,0xffffffff
00621962  50                        PUSH EAX
00621963  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00621966  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00621969  6A 00                     PUSH 0x0
0062196B  6A 06                     PUSH 0x6
0062196D  B9 58 76 80 00            MOV ECX,0x807658
00621972  E8 61 32 DE FF            CALL 0x00404bd8
00621977  C6 06 01                  MOV byte ptr [ESI],0x1
0062197A  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0062197F  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00621985  89 4E 01                  MOV dword ptr [ESI + 0x1],ECX
00621988  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0062198E  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
00621994  89 87 06 01 00 00         MOV dword ptr [EDI + 0x106],EAX
switchD_006217ba::default:
0062199A  5F                        POP EDI
0062199B  5E                        POP ESI
0062199C  8B E5                     MOV ESP,EBP
0062199E  5D                        POP EBP
0062199F  C2 04 00                  RET 0x4
