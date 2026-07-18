FUN_00416400:
00416400  55                        PUSH EBP
00416401  8B EC                     MOV EBP,ESP
00416403  83 EC 28                  SUB ESP,0x28
00416406  53                        PUSH EBX
00416407  56                        PUSH ESI
00416408  8B F1                     MOV ESI,ECX
0041640A  57                        PUSH EDI
0041640B  8A 86 E3 00 00 00         MOV AL,byte ptr [ESI + 0xe3]
00416411  3C 01                     CMP AL,0x1
00416413  74 0A                     JZ 0x0041641f
00416415  5F                        POP EDI
00416416  5E                        POP ESI
00416417  0F BE C0                  MOVSX EAX,AL
0041641A  5B                        POP EBX
0041641B  8B E5                     MOV ESP,EBP
0041641D  5D                        POP EBP
0041641E  C3                        RET
LAB_0041641f:
0041641F  8B 86 E4 00 00 00         MOV EAX,dword ptr [ESI + 0xe4]
00416425  BF 01 00 00 00            MOV EDI,0x1
0041642A  3B C7                     CMP EAX,EDI
0041642C  75 0A                     JNZ 0x00416438
0041642E  33 DB                     XOR EBX,EBX
00416430  89 9E E4 00 00 00         MOV dword ptr [ESI + 0xe4],EBX
00416436  EB 02                     JMP 0x0041643a
LAB_00416438:
00416438  33 DB                     XOR EBX,EBX
LAB_0041643a:
0041643A  39 7E 7E                  CMP dword ptr [ESI + 0x7e],EDI
0041643D  75 09                     JNZ 0x00416448
0041643F  89 5E 7E                  MOV dword ptr [ESI + 0x7e],EBX
00416442  89 BE E4 00 00 00         MOV dword ptr [ESI + 0xe4],EDI
LAB_00416448:
00416448  39 BE F4 00 00 00         CMP dword ptr [ESI + 0xf4],EDI
0041644E  75 06                     JNZ 0x00416456
00416450  89 9E F4 00 00 00         MOV dword ptr [ESI + 0xf4],EBX
LAB_00416456:
00416456  8D 45 D8                  LEA EAX,[EBP + -0x28]
00416459  8D 4D DC                  LEA ECX,[EBP + -0x24]
0041645C  50                        PUSH EAX
0041645D  51                        PUSH ECX
0041645E  8B CE                     MOV ECX,ESI
00416460  E8 E2 C3 FE FF            CALL 0x00402847
00416465  83 F8 FF                  CMP EAX,-0x1
00416468  75 0F                     JNZ 0x00416479
0041646A  88 86 E3 00 00 00         MOV byte ptr [ESI + 0xe3],AL
00416470  5F                        POP EDI
00416471  5E                        POP ESI
00416472  0B C0                     OR EAX,EAX
00416474  5B                        POP EBX
00416475  8B E5                     MOV ESP,EBP
00416477  5D                        POP EBP
00416478  C3                        RET
LAB_00416479:
00416479  3B C3                     CMP EAX,EBX
0041647B  0F 85 63 01 00 00         JNZ 0x004165e4
00416481  8B 96 9B 00 00 00         MOV EDX,dword ptr [ESI + 0x9b]
00416487  8B 86 D3 00 00 00         MOV EAX,dword ptr [ESI + 0xd3]
0041648D  4A                        DEC EDX
0041648E  89 BE F4 00 00 00         MOV dword ptr [ESI + 0xf4],EDI
00416494  3B C2                     CMP EAX,EDX
00416496  75 16                     JNZ 0x004164ae
00416498  89 9E E4 00 00 00         MOV dword ptr [ESI + 0xe4],EBX
0041649E  C6 86 E3 00 00 00 00      MOV byte ptr [ESI + 0xe3],0x0
004164A5  5F                        POP EDI
004164A6  5E                        POP ESI
004164A7  33 C0                     XOR EAX,EAX
004164A9  5B                        POP EBX
004164AA  8B E5                     MOV ESP,EBP
004164AC  5D                        POP EBP
004164AD  C3                        RET
LAB_004164ae:
004164AE  8D 45 E8                  LEA EAX,[EBP + -0x18]
004164B1  8D 4D E4                  LEA ECX,[EBP + -0x1c]
004164B4  50                        PUSH EAX
004164B5  8D 55 E0                  LEA EDX,[EBP + -0x20]
004164B8  51                        PUSH ECX
004164B9  52                        PUSH EDX
004164BA  8B CE                     MOV ECX,ESI
004164BC  E8 22 CD FE FF            CALL 0x004031e3
004164C1  8B 9E D3 00 00 00         MOV EBX,dword ptr [ESI + 0xd3]
004164C7  8B 8E 97 00 00 00         MOV ECX,dword ptr [ESI + 0x97]
004164CD  43                        INC EBX
004164CE  C6 45 FE 00               MOV byte ptr [EBP + -0x2],0x0
004164D2  8B C3                     MOV EAX,EBX
004164D4  89 9E D3 00 00 00         MOV dword ptr [ESI + 0xd3],EBX
004164DA  66 8B 5C C1 04            MOV BX,word ptr [ECX + EAX*0x8 + 0x4]
004164DF  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
004164E3  8D 04 C1                  LEA EAX,[ECX + EAX*0x8]
004164E6  66 69 DB C8 00            IMUL BX,BX,0xc8
004164EB  66 8B 08                  MOV CX,word ptr [EAX]
004164EE  66 8B 78 02               MOV DI,word ptr [EAX + 0x2]
004164F2  66 69 C9 C9 00            IMUL CX,CX,0xc9
004164F7  66 69 FF C9 00            IMUL DI,DI,0xc9
004164FC  0F BF 55 E0               MOVSX EDX,word ptr [EBP + -0x20]
00416500  83 C1 64                  ADD ECX,0x64
00416503  83 C7 64                  ADD EDI,0x64
00416506  0F BF C1                  MOVSX EAX,CX
00416509  2B C2                     SUB EAX,EDX
0041650B  83 C3 64                  ADD EBX,0x64
0041650E  99                        CDQ
0041650F  33 C2                     XOR EAX,EDX
00416511  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00416514  2B C2                     SUB EAX,EDX
00416516  0F BF 55 E4               MOVSX EDX,word ptr [EBP + -0x1c]
0041651A  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0041651D  0F BF C7                  MOVSX EAX,DI
00416520  2B C2                     SUB EAX,EDX
00416522  99                        CDQ
00416523  33 C2                     XOR EAX,EDX
00416525  2B C2                     SUB EAX,EDX
00416527  0F BF 55 E8               MOVSX EDX,word ptr [EBP + -0x18]
0041652B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0041652E  0F BF C3                  MOVSX EAX,BX
00416531  2B C2                     SUB EAX,EDX
00416533  99                        CDQ
00416534  33 C2                     XOR EAX,EDX
00416536  2B C2                     SUB EAX,EDX
00416538  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0041653B  74 55                     JZ 0x00416592
0041653D  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00416540  85 D2                     TEST EDX,EDX
00416542  74 27                     JZ 0x0041656b
00416544  99                        CDQ
00416545  F7 7D F0                  IDIV dword ptr [EBP + -0x10]
00416548  83 F8 03                  CMP EAX,0x3
0041654B  7C 04                     JL 0x00416551
0041654D  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
LAB_00416551:
00416551  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00416554  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_00416557:
00416557  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0041655A  85 D2                     TEST EDX,EDX
0041655C  74 13                     JZ 0x00416571
0041655E  99                        CDQ
0041655F  F7 7D F4                  IDIV dword ptr [EBP + -0xc]
00416562  83 F8 03                  CMP EAX,0x3
00416565  7C 0E                     JL 0x00416575
00416567  B0 01                     MOV AL,0x1
00416569  EB 0D                     JMP 0x00416578
LAB_0041656b:
0041656B  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
0041656F  EB E6                     JMP 0x00416557
LAB_00416571:
00416571  B0 01                     MOV AL,0x1
00416573  EB 06                     JMP 0x0041657b
LAB_00416575:
00416575  8A 45 FE                  MOV AL,byte ptr [EBP + -0x2]
LAB_00416578:
00416578  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_0041657b:
0041657B  80 7D FF 01               CMP byte ptr [EBP + -0x1],0x1
0041657F  75 09                     JNZ 0x0041658a
00416581  3C 01                     CMP AL,0x1
00416583  75 05                     JNZ 0x0041658a
00416585  8A 46 62                  MOV AL,byte ptr [ESI + 0x62]
00416588  EB 0B                     JMP 0x00416595
LAB_0041658a:
0041658A  8A 56 61                  MOV DL,byte ptr [ESI + 0x61]
0041658D  88 55 F4                  MOV byte ptr [EBP + -0xc],DL
00416590  EB 06                     JMP 0x00416598
LAB_00416592:
00416592  8A 46 61                  MOV AL,byte ptr [ESI + 0x61]
LAB_00416595:
00416595  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
LAB_00416598:
00416598  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0041659B  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0041659E  52                        PUSH EDX
0041659F  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
004165A2  53                        PUSH EBX
004165A3  57                        PUSH EDI
004165A4  51                        PUSH ECX
004165A5  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004165A8  50                        PUSH EAX
004165A9  51                        PUSH ECX
004165AA  52                        PUSH EDX
004165AB  8B CE                     MOV ECX,ESI
004165AD  E8 A3 BE FE FF            CALL 0x00402455
004165B2  85 C0                     TEST EAX,EAX
004165B4  74 11                     JZ 0x004165c7
004165B6  C6 86 E3 00 00 00 FF      MOV byte ptr [ESI + 0xe3],0xff
004165BD  5F                        POP EDI
004165BE  5E                        POP ESI
004165BF  83 C8 FF                  OR EAX,0xffffffff
004165C2  5B                        POP EBX
004165C3  8B E5                     MOV ESP,EBP
004165C5  5D                        POP EBP
004165C6  C3                        RET
LAB_004165c7:
004165C7  C6 86 E3 00 00 00 03      MOV byte ptr [ESI + 0xe3],0x3
004165CE  C7 86 E4 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xe4],0x0
004165D8  5F                        POP EDI
004165D9  5E                        POP ESI
004165DA  B8 03 00 00 00            MOV EAX,0x3
004165DF  5B                        POP EBX
004165E0  8B E5                     MOV ESP,EBP
004165E2  5D                        POP EBP
004165E3  C3                        RET
LAB_004165e4:
004165E4  39 7D DC                  CMP dword ptr [EBP + -0x24],EDI
004165E7  75 1B                     JNZ 0x00416604
004165E9  C6 86 E3 00 00 00 02      MOV byte ptr [ESI + 0xe3],0x2
004165F0  89 9E E4 00 00 00         MOV dword ptr [ESI + 0xe4],EBX
004165F6  0F BE 86 E3 00 00 00      MOVSX EAX,byte ptr [ESI + 0xe3]
004165FD  5F                        POP EDI
004165FE  5E                        POP ESI
004165FF  5B                        POP EBX
00416600  8B E5                     MOV ESP,EBP
00416602  5D                        POP EBP
00416603  C3                        RET
LAB_00416604:
00416604  8A 46 5A                  MOV AL,byte ptr [ESI + 0x5a]
00416607  84 C0                     TEST AL,AL
00416609  0F 85 B8 00 00 00         JNZ 0x004166c7
0041660F  80 7E 4D 01               CMP byte ptr [ESI + 0x4d],0x1
00416613  0F 85 AE 00 00 00         JNZ 0x004166c7
00416619  66 8B 46 3A               MOV AX,word ptr [ESI + 0x3a]
0041661D  66 3B C3                  CMP AX,BX
00416620  0F BF C8                  MOVSX ECX,AX
00416623  B8 79 19 8C 02            MOV EAX,0x28c1979
00416628  7C 10                     JL 0x0041663a
0041662A  F7 E9                     IMUL ECX
0041662C  D1 FA                     SAR EDX,0x1
0041662E  8B C2                     MOV EAX,EDX
00416630  C1 E8 1F                  SHR EAX,0x1f
00416633  03 D0                     ADD EDX,EAX
00416635  0F BF C2                  MOVSX EAX,DX
00416638  EB 0F                     JMP 0x00416649
LAB_0041663a:
0041663A  F7 E9                     IMUL ECX
0041663C  D1 FA                     SAR EDX,0x1
0041663E  8B CA                     MOV ECX,EDX
00416640  C1 E9 1F                  SHR ECX,0x1f
00416643  03 D1                     ADD EDX,ECX
00416645  0F BF C2                  MOVSX EAX,DX
00416648  48                        DEC EAX
LAB_00416649:
00416649  0F BF 56 54               MOVSX EDX,word ptr [ESI + 0x54]
0041664D  3B D0                     CMP EDX,EAX
0041664F  75 72                     JNZ 0x004166c3
00416651  66 8B 46 3C               MOV AX,word ptr [ESI + 0x3c]
00416655  66 3B C3                  CMP AX,BX
00416658  0F BF C8                  MOVSX ECX,AX
0041665B  B8 79 19 8C 02            MOV EAX,0x28c1979
00416660  7C 10                     JL 0x00416672
00416662  F7 E9                     IMUL ECX
00416664  D1 FA                     SAR EDX,0x1
00416666  8B C2                     MOV EAX,EDX
00416668  C1 E8 1F                  SHR EAX,0x1f
0041666B  03 D0                     ADD EDX,EAX
0041666D  0F BF C2                  MOVSX EAX,DX
00416670  EB 0F                     JMP 0x00416681
LAB_00416672:
00416672  F7 E9                     IMUL ECX
00416674  D1 FA                     SAR EDX,0x1
00416676  8B CA                     MOV ECX,EDX
00416678  C1 E9 1F                  SHR ECX,0x1f
0041667B  03 D1                     ADD EDX,ECX
0041667D  0F BF C2                  MOVSX EAX,DX
00416680  48                        DEC EAX
LAB_00416681:
00416681  0F BF 56 56               MOVSX EDX,word ptr [ESI + 0x56]
00416685  3B D0                     CMP EDX,EAX
00416687  75 3A                     JNZ 0x004166c3
00416689  66 8B 46 3E               MOV AX,word ptr [ESI + 0x3e]
0041668D  66 3B C3                  CMP AX,BX
00416690  0F BF C8                  MOVSX ECX,AX
00416693  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00416698  7C 11                     JL 0x004166ab
0041669A  F7 E9                     IMUL ECX
0041669C  C1 FA 06                  SAR EDX,0x6
0041669F  8B C2                     MOV EAX,EDX
004166A1  C1 E8 1F                  SHR EAX,0x1f
004166A4  03 D0                     ADD EDX,EAX
004166A6  0F BF C2                  MOVSX EAX,DX
004166A9  EB 10                     JMP 0x004166bb
LAB_004166ab:
004166AB  F7 E9                     IMUL ECX
004166AD  C1 FA 06                  SAR EDX,0x6
004166B0  8B CA                     MOV ECX,EDX
004166B2  C1 E9 1F                  SHR ECX,0x1f
004166B5  03 D1                     ADD EDX,ECX
004166B7  0F BF C2                  MOVSX EAX,DX
004166BA  48                        DEC EAX
LAB_004166bb:
004166BB  0F BF 56 58               MOVSX EDX,word ptr [ESI + 0x58]
004166BF  3B D0                     CMP EDX,EAX
004166C1  74 04                     JZ 0x004166c7
LAB_004166c3:
004166C3  C6 46 5A 01               MOV byte ptr [ESI + 0x5a],0x1
LAB_004166c7:
004166C7  C6 86 E3 00 00 00 01      MOV byte ptr [ESI + 0xe3],0x1
004166CE  5F                        POP EDI
004166CF  0F BE 86 E3 00 00 00      MOVSX EAX,byte ptr [ESI + 0xe3]
004166D6  5E                        POP ESI
004166D7  5B                        POP EBX
004166D8  8B E5                     MOV ESP,EBP
004166DA  5D                        POP EBP
004166DB  C3                        RET
