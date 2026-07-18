FUN_005206f0:
005206F0  55                        PUSH EBP
005206F1  8B EC                     MOV EBP,ESP
005206F3  81 EC 84 01 00 00         SUB ESP,0x184
005206F9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005206FE  53                        PUSH EBX
005206FF  56                        PUSH ESI
00520700  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00520703  57                        PUSH EDI
00520704  8D 55 AC                  LEA EDX,[EBP + -0x54]
00520707  8D 4D A8                  LEA ECX,[EBP + -0x58]
0052070A  6A 00                     PUSH 0x0
0052070C  52                        PUSH EDX
0052070D  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
00520710  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00520716  E8 D5 D0 20 00            CALL 0x0072d7f0
0052071B  8B F0                     MOV ESI,EAX
0052071D  83 C4 08                  ADD ESP,0x8
00520720  85 F6                     TEST ESI,ESI
00520722  0F 85 E2 02 00 00         JNZ 0x00520a0a
00520728  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0052072B  B9 4A 00 00 00            MOV ECX,0x4a
00520730  8D BD 7C FE FF FF         LEA EDI,[EBP + 0xfffffe7c]
00520736  8D 83 AB 01 00 00         LEA EAX,[EBX + 0x1ab]
0052073C  8B F0                     MOV ESI,EAX
0052073E  50                        PUSH EAX
0052073F  F3 A5                     MOVSD.REP ES:EDI,ESI
00520741  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00520747  6A 09                     PUSH 0x9
00520749  A4                        MOVSB ES:EDI,ESI
0052074A  E8 6D 2E EE FF            CALL 0x004035bc
0052074F  8A 83 AB 01 00 00         MOV AL,byte ptr [EBX + 0x1ab]
00520755  84 C0                     TEST AL,AL
00520757  74 21                     JZ 0x0052077a
00520759  8A 8B D4 03 00 00         MOV CL,byte ptr [EBX + 0x3d4]
0052075F  80 F9 FF                  CMP CL,0xff
00520762  75 09                     JNZ 0x0052076d
00520764  C6 83 D4 03 00 00 00      MOV byte ptr [EBX + 0x3d4],0x0
0052076B  EB 14                     JMP 0x00520781
LAB_0052076d:
0052076D  3A C8                     CMP CL,AL
0052076F  72 10                     JC 0x00520781
00520771  C6 83 D4 03 00 00 00      MOV byte ptr [EBX + 0x3d4],0x0
00520778  EB 07                     JMP 0x00520781
LAB_0052077a:
0052077A  C6 83 D4 03 00 00 FF      MOV byte ptr [EBX + 0x3d4],0xff
LAB_00520781:
00520781  8D 7B 18                  LEA EDI,[EBX + 0x18]
00520784  B9 08 00 00 00            MOV ECX,0x8
00520789  33 C0                     XOR EAX,EAX
0052078B  BE 23 00 00 00            MOV ESI,0x23
00520790  F3 AB                     STOSD.REP ES:EDI
00520792  32 C0                     XOR AL,AL
00520794  8D BB AC 01 00 00         LEA EDI,[EBX + 0x1ac]
0052079A  89 73 28                  MOV dword ptr [EBX + 0x28],ESI
0052079D  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
005207A0  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
005207A3  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
005207A6  EB 03                     JMP 0x005207ab
LAB_005207a8:
005207A8  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
LAB_005207ab:
005207AB  66 33 C9                  XOR CX,CX
005207AE  8A C8                     MOV CL,AL
005207B0  41                        INC ECX
005207B1  66 89 4B 2C               MOV word ptr [EBX + 0x2c],CX
005207B5  8A 8B AB 01 00 00         MOV CL,byte ptr [EBX + 0x1ab]
005207BB  3A C1                     CMP AL,CL
005207BD  73 18                     JNC 0x005207d7
005207BF  3A 83 D4 03 00 00         CMP AL,byte ptr [EBX + 0x3d4]
005207C5  75 08                     JNZ 0x005207cf
005207C7  66 C7 43 2E 01 00         MOV word ptr [EBX + 0x2e],0x1
005207CD  EB 0E                     JMP 0x005207dd
LAB_005207cf:
005207CF  66 C7 43 2E 00 00         MOV word ptr [EBX + 0x2e],0x0
005207D5  EB 06                     JMP 0x005207dd
LAB_005207d7:
005207D7  66 C7 43 2E 02 00         MOV word ptr [EBX + 0x2e],0x2
LAB_005207dd:
005207DD  8B 93 D0 03 00 00         MOV EDX,dword ptr [EBX + 0x3d0]
005207E3  8D 43 18                  LEA EAX,[EBX + 0x18]
005207E6  50                        PUSH EAX
005207E7  52                        PUSH EDX
005207E8  6A 02                     PUSH 0x2
005207EA  8B CB                     MOV ECX,EBX
005207EC  E8 8F 58 1C 00            CALL 0x006e6080
005207F1  80 3F FF                  CMP byte ptr [EDI],0xff
005207F4  0F 84 DD 01 00 00         JZ 0x005209d7
005207FA  A0 4E 87 80 00            MOV AL,[0x0080874e]
005207FF  3C 03                     CMP AL,0x3
00520801  75 07                     JNZ 0x0052080a
00520803  B8 73 00 00 00            MOV EAX,0x73
00520808  EB 0E                     JMP 0x00520818
LAB_0052080a:
0052080A  FE C8                     DEC AL
0052080C  F6 D8                     NEG AL
0052080E  1B C0                     SBB EAX,EAX
00520810  25 89 00 00 00            AND EAX,0x89
00520815  83 C0 3A                  ADD EAX,0x3a
LAB_00520818:
00520818  50                        PUSH EAX
00520819  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
0052081C  6A 0C                     PUSH 0xc
0052081E  6A 22                     PUSH 0x22
00520820  56                        PUSH ESI
00520821  6A 30                     PUSH 0x30
00520823  6A 00                     PUSH 0x0
00520825  50                        PUSH EAX
00520826  E8 45 39 19 00            CALL 0x006b4170
0052082B  8A 4D FF                  MOV CL,byte ptr [EBP + -0x1]
0052082E  8A 83 AB 01 00 00         MOV AL,byte ptr [EBX + 0x1ab]
00520834  3A C8                     CMP CL,AL
00520836  73 6C                     JNC 0x005208a4
00520838  8B 53 68                  MOV EDX,dword ptr [EBX + 0x68]
0052083B  8B 8B 89 01 00 00         MOV ECX,dword ptr [EBX + 0x189]
00520841  6A 0C                     PUSH 0xc
00520843  6A 10                     PUSH 0x10
00520845  56                        PUSH ESI
00520846  6A 31                     PUSH 0x31
00520848  6A 00                     PUSH 0x0
0052084A  52                        PUSH EDX
0052084B  E8 40 02 1F 00            CALL 0x00710a90
00520850  33 C0                     XOR EAX,EAX
00520852  33 C9                     XOR ECX,ECX
00520854  8A 07                     MOV AL,byte ptr [EDI]
00520856  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00520859  8A 8C C0 E8 87 80 00      MOV CL,byte ptr [EAX + EAX*0x8 + 0x8087e8]
00520860  8B C1                     MOV EAX,ECX
00520862  48                        DEC EAX
00520863  74 1B                     JZ 0x00520880
00520865  48                        DEC EAX
00520866  74 11                     JZ 0x00520879
00520868  48                        DEC EAX
00520869  74 07                     JZ 0x00520872
0052086B  B8 10 27 00 00            MOV EAX,0x2710
00520870  EB 13                     JMP 0x00520885
LAB_00520872:
00520872  B8 45 27 00 00            MOV EAX,0x2745
00520877  EB 0C                     JMP 0x00520885
LAB_00520879:
00520879  B8 43 27 00 00            MOV EAX,0x2743
0052087E  EB 05                     JMP 0x00520885
LAB_00520880:
00520880  B8 42 27 00 00            MOV EAX,0x2742
LAB_00520885:
00520885  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0052088B  6A 00                     PUSH 0x0
0052088D  6A FF                     PUSH -0x1
0052088F  6A FF                     PUSH -0x1
00520891  52                        PUSH EDX
00520892  50                        PUSH EAX
00520893  E8 A8 F8 18 00            CALL 0x006b0140
00520898  8B 8B 89 01 00 00         MOV ECX,dword ptr [EBX + 0x189]
0052089E  50                        PUSH EAX
0052089F  E8 1C 11 1F 00            CALL 0x007119c0
LAB_005208a4:
005208A4  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
005208A9  84 C0                     TEST AL,AL
005208AB  74 5B                     JZ 0x00520908
005208AD  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005208B0  33 C0                     XOR EAX,EAX
005208B2  33 D2                     XOR EDX,EDX
005208B4  8D BB 8D 01 00 00         LEA EDI,[EBX + 0x18d]
005208BA  8A 01                     MOV AL,byte ptr [ECX]
005208BC  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005208BF  8A 94 C0 EA 87 80 00      MOV DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
005208C6  83 C2 41                  ADD EDX,0x41
005208C9  52                        PUSH EDX
005208CA  68 90 3F 7C 00            PUSH 0x7c3f90
005208CF  57                        PUSH EDI
005208D0  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005208D6  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
005208D9  83 C4 0C                  ADD ESP,0xc
005208DC  8B 8B 89 01 00 00         MOV ECX,dword ptr [EBX + 0x189]
005208E2  6A 0C                     PUSH 0xc
005208E4  6A 12                     PUSH 0x12
005208E6  56                        PUSH ESI
005208E7  6A 41                     PUSH 0x41
005208E9  6A 00                     PUSH 0x0
005208EB  50                        PUSH EAX
005208EC  E8 9F 01 1F 00            CALL 0x00710a90
005208F1  8B 8B 89 01 00 00         MOV ECX,dword ptr [EBX + 0x189]
005208F7  6A 03                     PUSH 0x3
005208F9  6A FF                     PUSH -0x1
005208FB  6A FF                     PUSH -0x1
005208FD  57                        PUSH EDI
005208FE  E8 BD 10 1F 00            CALL 0x007119c0
00520903  E9 CF 00 00 00            JMP 0x005209d7
LAB_00520908:
00520908  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0052090B  A0 4D 87 80 00            MOV AL,[0x0080874d]
00520910  83 CE FF                  OR ESI,0xffffffff
00520913  8A 09                     MOV CL,byte ptr [ECX]
00520915  3A C1                     CMP AL,CL
00520917  88 4D EC                  MOV byte ptr [EBP + -0x14],CL
0052091A  74 6B                     JZ 0x00520987
0052091C  33 D2                     XOR EDX,EDX
0052091E  8A D0                     MOV DL,AL
00520920  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00520923  8B FA                     MOV EDI,EDX
00520925  25 FF 00 00 00            AND EAX,0xff
0052092A  8A 8C F8 4F 8A 80 00      MOV CL,byte ptr [EAX + EDI*0x8 + 0x808a4f]
00520931  84 C9                     TEST CL,CL
00520933  75 12                     JNZ 0x00520947
00520935  8A 94 C7 4F 8A 80 00      MOV DL,byte ptr [EDI + EAX*0x8 + 0x808a4f]
0052093C  84 D2                     TEST DL,DL
0052093E  75 07                     JNZ 0x00520947
00520940  B8 FE FF FF FF            MOV EAX,0xfffffffe
00520945  EB 42                     JMP 0x00520989
LAB_00520947:
00520947  80 F9 01                  CMP CL,0x1
0052094A  75 10                     JNZ 0x0052095c
0052094C  8A 94 C7 4F 8A 80 00      MOV DL,byte ptr [EDI + EAX*0x8 + 0x808a4f]
00520953  84 D2                     TEST DL,DL
00520955  75 05                     JNZ 0x0052095c
00520957  83 C8 FF                  OR EAX,0xffffffff
0052095A  EB 2D                     JMP 0x00520989
LAB_0052095c:
0052095C  84 C9                     TEST CL,CL
0052095E  75 11                     JNZ 0x00520971
00520960  80 BC C7 4F 8A 80 00 01   CMP byte ptr [EDI + EAX*0x8 + 0x808a4f],0x1
00520968  75 07                     JNZ 0x00520971
0052096A  B8 01 00 00 00            MOV EAX,0x1
0052096F  EB 18                     JMP 0x00520989
LAB_00520971:
00520971  80 F9 01                  CMP CL,0x1
00520974  75 11                     JNZ 0x00520987
00520976  80 BC C7 4F 8A 80 00 01   CMP byte ptr [EDI + EAX*0x8 + 0x808a4f],0x1
0052097E  75 07                     JNZ 0x00520987
00520980  B8 02 00 00 00            MOV EAX,0x2
00520985  EB 02                     JMP 0x00520989
LAB_00520987:
00520987  33 C0                     XOR EAX,EAX
LAB_00520989:
00520989  83 C0 02                  ADD EAX,0x2
0052098C  83 F8 04                  CMP EAX,0x4
0052098F  77 1E                     JA 0x005209af
switchD_00520991::switchD:
00520991  FF 24 85 50 0A 52 00      JMP dword ptr [EAX*0x4 + 0x520a50]
switchD_00520991::caseD_fffffffe:
00520998  33 F6                     XOR ESI,ESI
0052099A  EB 13                     JMP 0x005209af
switchD_00520991::caseD_2:
0052099C  BE 03 00 00 00            MOV ESI,0x3
005209A1  EB 0C                     JMP 0x005209af
switchD_00520991::caseD_ffffffff:
005209A3  BE 02 00 00 00            MOV ESI,0x2
005209A8  EB 05                     JMP 0x005209af
switchD_00520991::caseD_1:
005209AA  BE 01 00 00 00            MOV ESI,0x1
switchD_00520991::caseD_0:
005209AF  4E                        DEC ESI
005209B0  78 22                     JS 0x005209d4
005209B2  8B 83 C8 03 00 00         MOV EAX,dword ptr [EBX + 0x3c8]
005209B8  56                        PUSH ESI
005209B9  50                        PUSH EAX
005209BA  E8 E1 A9 1E 00            CALL 0x0070b3a0
005209BF  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005209C2  8B 53 68                  MOV EDX,dword ptr [EBX + 0x68]
005209C5  50                        PUSH EAX
005209C6  6A 06                     PUSH 0x6
005209C8  51                        PUSH ECX
005209C9  6A 41                     PUSH 0x41
005209CB  52                        PUSH EDX
005209CC  E8 58 28 EE FF            CALL 0x00403229
005209D1  83 C4 1C                  ADD ESP,0x1c
LAB_005209d4:
005209D4  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_005209d7:
005209D7  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
005209DA  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
005209DD  FE C0                     INC AL
005209DF  47                        INC EDI
005209E0  83 C6 0D                  ADD ESI,0xd
005209E3  3C 07                     CMP AL,0x7
005209E5  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
005209E8  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
005209EB  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
005209EE  0F 82 B4 FD FF FF         JC 0x005207a8
005209F4  8B CB                     MOV ECX,EBX
005209F6  E8 6E 42 EE FF            CALL 0x00404c69
005209FB  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
005209FE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00520A03  5F                        POP EDI
00520A04  5E                        POP ESI
00520A05  5B                        POP EBX
00520A06  8B E5                     MOV ESP,EBP
00520A08  5D                        POP EBP
00520A09  C3                        RET
LAB_00520a0a:
00520A0A  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
00520A0D  68 74 3F 7C 00            PUSH 0x7c3f74
00520A12  68 CC 4C 7A 00            PUSH 0x7a4ccc
00520A17  56                        PUSH ESI
00520A18  6A 00                     PUSH 0x0
00520A1A  68 99 00 00 00            PUSH 0x99
00520A1F  68 B0 3E 7C 00            PUSH 0x7c3eb0
00520A24  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00520A2A  E8 A1 CA 18 00            CALL 0x006ad4d0
00520A2F  83 C4 18                  ADD ESP,0x18
00520A32  85 C0                     TEST EAX,EAX
00520A34  74 01                     JZ 0x00520a37
00520A36  CC                        INT3
LAB_00520a37:
00520A37  68 99 00 00 00            PUSH 0x99
00520A3C  68 B0 3E 7C 00            PUSH 0x7c3eb0
00520A41  6A 00                     PUSH 0x0
00520A43  56                        PUSH ESI
00520A44  E8 F7 53 18 00            CALL 0x006a5e40
00520A49  5F                        POP EDI
00520A4A  5E                        POP ESI
00520A4B  5B                        POP EBX
00520A4C  8B E5                     MOV ESP,EBP
00520A4E  5D                        POP EBP
00520A4F  C3                        RET
