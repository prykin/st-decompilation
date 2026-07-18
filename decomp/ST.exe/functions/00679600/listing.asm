FUN_00679600:
00679600  55                        PUSH EBP
00679601  8B EC                     MOV EBP,ESP
00679603  81 EC A4 01 00 00         SUB ESP,0x1a4
00679609  56                        PUSH ESI
0067960A  8B F1                     MOV ESI,ECX
0067960C  57                        PUSH EDI
0067960D  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00679610  8B 86 40 06 00 00         MOV EAX,dword ptr [ESI + 0x640]
00679616  83 F8 08                  CMP EAX,0x8
00679619  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0067961C  76 0A                     JBE 0x00679628
0067961E  C7 86 40 06 00 00 FF 00 00 00  MOV dword ptr [ESI + 0x640],0xff
LAB_00679628:
00679628  83 BE 40 06 00 00 08      CMP dword ptr [ESI + 0x640],0x8
0067962F  75 0D                     JNZ 0x0067963e
00679631  33 C0                     XOR EAX,EAX
00679633  A0 4D 87 80 00            MOV AL,[0x0080874d]
00679638  89 86 40 06 00 00         MOV dword ptr [ESI + 0x640],EAX
LAB_0067963e:
0067963E  8A 86 44 06 00 00         MOV AL,byte ptr [ESI + 0x644]
00679644  53                        PUSH EBX
00679645  3C 01                     CMP AL,0x1
00679647  0F 85 4E 02 00 00         JNZ 0x0067989b
0067964D  8B 86 40 06 00 00         MOV EAX,dword ptr [ESI + 0x640]
00679653  8B 8E D7 05 00 00         MOV ECX,dword ptr [ESI + 0x5d7]
00679659  3B C1                     CMP EAX,ECX
0067965B  0F 84 E5 00 00 00         JZ 0x00679746
00679661  3D FF 00 00 00            CMP EAX,0xff
00679666  0F 84 DA 00 00 00         JZ 0x00679746
0067966C  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
00679672  8A D8                     MOV BL,AL
00679674  84 D2                     TEST DL,DL
00679676  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
00679679  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
0067967C  74 2D                     JZ 0x006796ab
0067967E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00679681  33 D2                     XOR EDX,EDX
00679683  25 FF 00 00 00            AND EAX,0xff
00679688  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0067968B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0067968E  25 FF 00 00 00            AND EAX,0xff
00679693  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0067969A  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0067969D  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
006796A4  0F 95 C2                  SETNZ DL
006796A7  8B C2                     MOV EAX,EDX
006796A9  EB 7A                     JMP 0x00679725
LAB_006796ab:
006796AB  3A C1                     CMP AL,CL
006796AD  74 6B                     JZ 0x0067971a
006796AF  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006796B2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006796B5  25 FF 00 00 00            AND EAX,0xff
006796BA  81 E1 FF 00 00 00         AND ECX,0xff
006796C0  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
006796C7  84 D2                     TEST DL,DL
006796C9  75 10                     JNZ 0x006796db
006796CB  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
006796D2  75 07                     JNZ 0x006796db
006796D4  B8 FE FF FF FF            MOV EAX,0xfffffffe
006796D9  EB 41                     JMP 0x0067971c
LAB_006796db:
006796DB  80 FA 01                  CMP DL,0x1
006796DE  75 0F                     JNZ 0x006796ef
006796E0  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
006796E8  75 05                     JNZ 0x006796ef
006796EA  83 C8 FF                  OR EAX,0xffffffff
006796ED  EB 2D                     JMP 0x0067971c
LAB_006796ef:
006796EF  84 D2                     TEST DL,DL
006796F1  75 11                     JNZ 0x00679704
006796F3  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
006796FB  75 07                     JNZ 0x00679704
006796FD  B8 01 00 00 00            MOV EAX,0x1
00679702  EB 18                     JMP 0x0067971c
LAB_00679704:
00679704  80 FA 01                  CMP DL,0x1
00679707  75 11                     JNZ 0x0067971a
00679709  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00679711  75 07                     JNZ 0x0067971a
00679713  B8 02 00 00 00            MOV EAX,0x2
00679718  EB 02                     JMP 0x0067971c
LAB_0067971a:
0067971A  33 C0                     XOR EAX,EAX
LAB_0067971c:
0067971C  33 C9                     XOR ECX,ECX
0067971E  85 C0                     TEST EAX,EAX
00679720  0F 9C C1                  SETL CL
00679723  8B C1                     MOV EAX,ECX
LAB_00679725:
00679725  85 C0                     TEST EAX,EAX
00679727  74 1A                     JZ 0x00679743
00679729  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067972F  53                        PUSH EBX
00679730  E8 49 87 D8 FF            CALL 0x00401e7e
00679735  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00679738  66 85 C0                  TEST AX,AX
0067973B  0F 85 5A 01 00 00         JNZ 0x0067989b
00679741  EB 03                     JMP 0x00679746
LAB_00679743:
00679743  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_00679746:
00679746  B8 E9 87 80 00            MOV EAX,0x8087e9
0067974B  33 DB                     XOR EBX,EBX
0067974D  8D BD 5C FE FF FF         LEA EDI,[EBP + 0xfffffe5c]
00679753  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_00679756:
00679756  33 C9                     XOR ECX,ECX
00679758  8A 08                     MOV CL,byte ptr [EAX]
0067975A  81 F9 FF 00 00 00         CMP ECX,0xff
00679760  0F 84 EB 00 00 00         JZ 0x00679851
00679766  8B 86 D7 05 00 00         MOV EAX,dword ptr [ESI + 0x5d7]
0067976C  3B C8                     CMP ECX,EAX
0067976E  0F 84 DD 00 00 00         JZ 0x00679851
00679774  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
0067977A  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
0067977D  84 D2                     TEST DL,DL
0067977F  74 30                     JZ 0x006797b1
00679781  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00679784  25 FF 00 00 00            AND EAX,0xff
00679789  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
0067978C  8B C1                     MOV EAX,ECX
0067978E  25 FF 00 00 00            AND EAX,0xff
00679793  8A 94 D2 EA 87 80 00      MOV DL,byte ptr [EDX + EDX*0x8 + 0x8087ea]
0067979A  8D 34 C0                  LEA ESI,[EAX + EAX*0x8]
0067979D  33 C0                     XOR EAX,EAX
0067979F  3A 94 F6 EA 87 80 00      CMP DL,byte ptr [ESI + ESI*0x8 + 0x8087ea]
006797A6  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006797A9  0F 95 C0                  SETNZ AL
006797AC  E9 80 00 00 00            JMP 0x00679831
LAB_006797b1:
006797B1  3A C8                     CMP CL,AL
006797B3  75 04                     JNZ 0x006797b9
006797B5  33 C0                     XOR EAX,EAX
006797B7  EB 6F                     JMP 0x00679828
LAB_006797b9:
006797B9  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006797BC  8B C1                     MOV EAX,ECX
006797BE  25 FF 00 00 00            AND EAX,0xff
006797C3  81 E6 FF 00 00 00         AND ESI,0xff
006797C9  8A 94 C6 4F 8A 80 00      MOV DL,byte ptr [ESI + EAX*0x8 + 0x808a4f]
006797D0  84 D2                     TEST DL,DL
006797D2  75 10                     JNZ 0x006797e4
006797D4  38 94 F0 4F 8A 80 00      CMP byte ptr [EAX + ESI*0x8 + 0x808a4f],DL
006797DB  75 07                     JNZ 0x006797e4
006797DD  B8 FE FF FF FF            MOV EAX,0xfffffffe
006797E2  EB 41                     JMP 0x00679825
LAB_006797e4:
006797E4  80 FA 01                  CMP DL,0x1
006797E7  75 0F                     JNZ 0x006797f8
006797E9  80 BC F0 4F 8A 80 00 00   CMP byte ptr [EAX + ESI*0x8 + 0x808a4f],0x0
006797F1  75 05                     JNZ 0x006797f8
006797F3  83 C8 FF                  OR EAX,0xffffffff
006797F6  EB 2D                     JMP 0x00679825
LAB_006797f8:
006797F8  84 D2                     TEST DL,DL
006797FA  75 11                     JNZ 0x0067980d
006797FC  80 BC F0 4F 8A 80 00 01   CMP byte ptr [EAX + ESI*0x8 + 0x808a4f],0x1
00679804  75 07                     JNZ 0x0067980d
00679806  B8 01 00 00 00            MOV EAX,0x1
0067980B  EB 18                     JMP 0x00679825
LAB_0067980d:
0067980D  80 FA 01                  CMP DL,0x1
00679810  75 11                     JNZ 0x00679823
00679812  80 BC F0 4F 8A 80 00 01   CMP byte ptr [EAX + ESI*0x8 + 0x808a4f],0x1
0067981A  75 07                     JNZ 0x00679823
0067981C  B8 02 00 00 00            MOV EAX,0x2
00679821  EB 02                     JMP 0x00679825
LAB_00679823:
00679823  33 C0                     XOR EAX,EAX
LAB_00679825:
00679825  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_00679828:
00679828  33 D2                     XOR EDX,EDX
0067982A  85 C0                     TEST EAX,EAX
0067982C  0F 9C C2                  SETL DL
0067982F  8B C2                     MOV EAX,EDX
LAB_00679831:
00679831  85 C0                     TEST EAX,EAX
00679833  74 1C                     JZ 0x00679851
00679835  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
00679838  89 4F 04                  MOV dword ptr [EDI + 0x4],ECX
0067983B  8A 84 C0 C7 87 80 00      MOV AL,byte ptr [EAX + EAX*0x8 + 0x8087c7]
00679842  F6 D8                     NEG AL
00679844  1B C0                     SBB EAX,EAX
00679846  24 A6                     AND AL,0xa6
00679848  83 C0 64                  ADD EAX,0x64
0067984B  43                        INC EBX
0067984C  89 07                     MOV dword ptr [EDI],EAX
0067984E  83 C7 2C                  ADD EDI,0x2c
LAB_00679851:
00679851  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00679854  83 C0 51                  ADD EAX,0x51
00679857  3D 71 8A 80 00            CMP EAX,0x808a71
0067985C  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0067985F  0F 8C F1 FE FF FF         JL 0x00679756
00679865  85 DB                     TEST EBX,EBX
00679867  7E 28                     JLE 0x00679891
00679869  8D 8D 5C FE FF FF         LEA ECX,[EBP + 0xfffffe5c]
0067986F  53                        PUSH EBX
00679870  51                        PUSH ECX
00679871  8D 8E A4 00 00 00         LEA ECX,[ESI + 0xa4]
00679877  E8 A7 8B D8 FF            CALL 0x00402423
0067987C  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0067987F  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
00679882  8B 8C 85 60 FE FF FF      MOV ECX,dword ptr [EBP + EAX*0x4 + 0xfffffe60]
00679889  89 8E 40 06 00 00         MOV dword ptr [ESI + 0x640],ECX
0067988F  EB 0A                     JMP 0x0067989b
LAB_00679891:
00679891  C7 86 40 06 00 00 FF 00 00 00  MOV dword ptr [ESI + 0x640],0xff
LAB_0067989b:
0067989B  8B 96 40 06 00 00         MOV EDX,dword ptr [ESI + 0x640]
006798A1  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006798A4  3B D0                     CMP EDX,EAX
006798A6  5B                        POP EBX
006798A7  74 33                     JZ 0x006798dc
006798A9  B9 0D 00 00 00            MOV ECX,0xd
006798AE  33 C0                     XOR EAX,EAX
006798B0  8D 7D BC                  LEA EDI,[EBP + -0x44]
006798B3  6A FF                     PUSH -0x1
006798B5  F3 AB                     STOSD.REP ES:EDI
006798B7  8B 86 FE 06 00 00         MOV EAX,dword ptr [ESI + 0x6fe]
006798BD  8D 4D BC                  LEA ECX,[EBP + -0x44]
006798C0  51                        PUSH ECX
006798C1  8B CE                     MOV ECX,ESI
006798C3  C7 45 BC 6A 00 00 00      MOV dword ptr [EBP + -0x44],0x6a
006798CA  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006798CD  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
006798D0  E8 F1 C4 D8 FF            CALL 0x00405dc6
006798D5  8B CE                     MOV ECX,ESI
006798D7  E8 73 A0 D8 FF            CALL 0x0040394f
LAB_006798dc:
006798DC  5F                        POP EDI
006798DD  5E                        POP ESI
006798DE  8B E5                     MOV ESP,EBP
006798E0  5D                        POP EBP
006798E1  C3                        RET
