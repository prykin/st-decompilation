FUN_004da390:
004DA390  55                        PUSH EBP
004DA391  8B EC                     MOV EBP,ESP
004DA393  81 EC 7C 02 00 00         SUB ESP,0x27c
004DA399  53                        PUSH EBX
004DA39A  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
004DA39D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004DA3A0  83 C8 FF                  OR EAX,0xffffffff
004DA3A3  8D 4B 01                  LEA ECX,[EBX + 0x1]
004DA3A6  56                        PUSH ESI
004DA3A7  BE E9 87 80 00            MOV ESI,0x8087e9
004DA3AC  57                        PUSH EDI
004DA3AD  89 01                     MOV dword ptr [ECX],EAX
004DA3AF  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004DA3B2  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
004DA3B5  C6 03 00                  MOV byte ptr [EBX],0x0
LAB_004da3b8:
004DA3B8  8A 06                     MOV AL,byte ptr [ESI]
004DA3BA  3C FF                     CMP AL,0xff
004DA3BC  0F 84 5D 03 00 00         JZ 0x004da71f
004DA3C2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004DA3C5  50                        PUSH EAX
004DA3C6  E8 EC A5 F2 FF            CALL 0x004049b7
004DA3CB  25 FF 00 00 00            AND EAX,0xff
004DA3D0  48                        DEC EAX
004DA3D1  74 21                     JZ 0x004da3f4
004DA3D3  48                        DEC EAX
004DA3D4  74 15                     JZ 0x004da3eb
004DA3D6  48                        DEC EAX
004DA3D7  74 09                     JZ 0x004da3e2
004DA3D9  C7 45 0C 00 00 00 00      MOV dword ptr [EBP + 0xc],0x0
004DA3E0  EB 19                     JMP 0x004da3fb
LAB_004da3e2:
004DA3E2  C7 45 0C 49 00 00 00      MOV dword ptr [EBP + 0xc],0x49
004DA3E9  EB 10                     JMP 0x004da3fb
LAB_004da3eb:
004DA3EB  C7 45 0C 8D 00 00 00      MOV dword ptr [EBP + 0xc],0x8d
004DA3F2  EB 07                     JMP 0x004da3fb
LAB_004da3f4:
004DA3F4  C7 45 0C 3D 00 00 00      MOV dword ptr [EBP + 0xc],0x3d
LAB_004da3fb:
004DA3FB  8A 06                     MOV AL,byte ptr [ESI]
004DA3FD  3C FF                     CMP AL,0xff
004DA3FF  0F 84 1A 03 00 00         JZ 0x004da71f
004DA405  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004DA408  8B F8                     MOV EDI,EAX
004DA40A  81 E7 FF 00 00 00         AND EDI,0xff
004DA410  3B FA                     CMP EDI,EDX
004DA412  0F 84 07 03 00 00         JZ 0x004da71f
004DA418  8A 4E FF                  MOV CL,byte ptr [ESI + -0x1]
004DA41B  84 C9                     TEST CL,CL
004DA41D  0F 84 FC 02 00 00         JZ 0x004da71f
004DA423  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004DA426  85 C9                     TEST ECX,ECX
004DA428  0F 84 04 01 00 00         JZ 0x004da532
004DA42E  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
004DA434  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
004DA437  84 C9                     TEST CL,CL
004DA439  74 2A                     JZ 0x004da465
004DA43B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004DA43E  33 C9                     XOR ECX,ECX
004DA440  25 FF 00 00 00            AND EAX,0xff
004DA445  8D 34 C0                  LEA ESI,[EAX + EAX*0x8]
004DA448  8B C2                     MOV EAX,EDX
004DA44A  25 FF 00 00 00            AND EAX,0xff
004DA44F  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004DA452  8A 84 C0 EA 87 80 00      MOV AL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
004DA459  3A 84 F6 EA 87 80 00      CMP AL,byte ptr [ESI + ESI*0x8 + 0x8087ea]
004DA460  0F 95 C1                  SETNZ CL
004DA463  EB 77                     JMP 0x004da4dc
LAB_004da465:
004DA465  3A C2                     CMP AL,DL
004DA467  74 6A                     JZ 0x004da4d3
004DA469  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004DA46C  8B F2                     MOV ESI,EDX
004DA46E  25 FF 00 00 00            AND EAX,0xff
004DA473  81 E6 FF 00 00 00         AND ESI,0xff
004DA479  8A 8C C6 4F 8A 80 00      MOV CL,byte ptr [ESI + EAX*0x8 + 0x808a4f]
004DA480  84 C9                     TEST CL,CL
004DA482  75 10                     JNZ 0x004da494
004DA484  38 8C F0 4F 8A 80 00      CMP byte ptr [EAX + ESI*0x8 + 0x808a4f],CL
004DA48B  75 07                     JNZ 0x004da494
004DA48D  B8 FE FF FF FF            MOV EAX,0xfffffffe
004DA492  EB 41                     JMP 0x004da4d5
LAB_004da494:
004DA494  80 F9 01                  CMP CL,0x1
004DA497  75 0F                     JNZ 0x004da4a8
004DA499  80 BC F0 4F 8A 80 00 00   CMP byte ptr [EAX + ESI*0x8 + 0x808a4f],0x0
004DA4A1  75 05                     JNZ 0x004da4a8
004DA4A3  83 C8 FF                  OR EAX,0xffffffff
004DA4A6  EB 2D                     JMP 0x004da4d5
LAB_004da4a8:
004DA4A8  84 C9                     TEST CL,CL
004DA4AA  75 11                     JNZ 0x004da4bd
004DA4AC  80 BC F0 4F 8A 80 00 01   CMP byte ptr [EAX + ESI*0x8 + 0x808a4f],0x1
004DA4B4  75 07                     JNZ 0x004da4bd
004DA4B6  B8 01 00 00 00            MOV EAX,0x1
004DA4BB  EB 18                     JMP 0x004da4d5
LAB_004da4bd:
004DA4BD  80 F9 01                  CMP CL,0x1
004DA4C0  75 11                     JNZ 0x004da4d3
004DA4C2  80 BC F0 4F 8A 80 00 01   CMP byte ptr [EAX + ESI*0x8 + 0x808a4f],0x1
004DA4CA  75 07                     JNZ 0x004da4d3
004DA4CC  B8 02 00 00 00            MOV EAX,0x2
004DA4D1  EB 02                     JMP 0x004da4d5
LAB_004da4d3:
004DA4D3  33 C0                     XOR EAX,EAX
LAB_004da4d5:
004DA4D5  33 C9                     XOR ECX,ECX
004DA4D7  85 C0                     TEST EAX,EAX
004DA4D9  0F 9C C1                  SETL CL
LAB_004da4dc:
004DA4DC  8B C1                     MOV EAX,ECX
004DA4DE  85 C0                     TEST EAX,EAX
004DA4E0  74 50                     JZ 0x004da532
004DA4E2  8D 04 92                  LEA EAX,[EDX + EDX*0x4]
004DA4E5  8D 0C C2                  LEA ECX,[EDX + EAX*0x8]
004DA4E8  8D 34 4A                  LEA ESI,[EDX + ECX*0x2]
004DA4EB  C1 E6 04                  SHL ESI,0x4
004DA4EE  03 F2                     ADD ESI,EDX
004DA4F0  D1 E6                     SHL ESI,0x1
004DA4F2  83 BE 2E 58 7F 00 03      CMP dword ptr [ESI + 0x7f582e],0x3
004DA4F9  0F 85 20 02 00 00         JNZ 0x004da71f
004DA4FF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004DA502  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DA508  52                        PUSH EDX
004DA509  57                        PUSH EDI
004DA50A  E8 5C 73 F2 FF            CALL 0x0040186b
004DA50F  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DA515  8B 04 85 74 8F 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x798f74]
004DA51C  8B BE 3A 58 7F 00         MOV EDI,dword ptr [ESI + 0x7f583a]
004DA522  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004DA528  03 C7                     ADD EAX,EDI
004DA52A  3B D0                     CMP EDX,EAX
004DA52C  0F 83 ED 01 00 00         JNC 0x004da71f
LAB_004da532:
004DA532  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004DA535  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DA53B  33 C0                     XOR EAX,EAX
004DA53D  8A 02                     MOV AL,byte ptr [EDX]
004DA53F  50                        PUSH EAX
004DA540  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
004DA543  E8 98 71 F2 FF            CALL 0x004016e0
004DA548  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004DA54B  33 C9                     XOR ECX,ECX
004DA54D  8A 0B                     MOV CL,byte ptr [EBX]
004DA54F  52                        PUSH EDX
004DA550  C1 E1 04                  SHL ECX,0x4
004DA553  89 44 19 09               MOV dword ptr [ECX + EBX*0x1 + 0x9],EAX
004DA557  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DA55D  E8 F2 93 F2 FF            CALL 0x00403954
004DA562  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004DA565  33 C9                     XOR ECX,ECX
004DA567  8A 0B                     MOV CL,byte ptr [EBX]
004DA569  52                        PUSH EDX
004DA56A  C1 E1 04                  SHL ECX,0x4
004DA56D  89 44 19 0D               MOV dword ptr [ECX + EBX*0x1 + 0xd],EAX
004DA571  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DA577  E8 3B A4 F2 FF            CALL 0x004049b7
004DA57C  3C 03                     CMP AL,0x3
004DA57E  74 11                     JZ 0x004da591
004DA580  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004DA583  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DA589  50                        PUSH EAX
004DA58A  E8 F5 7C F2 FF            CALL 0x00402284
004DA58F  EB 0F                     JMP 0x004da5a0
LAB_004da591:
004DA591  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004DA594  51                        PUSH ECX
004DA595  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DA59B  E8 CA 78 F2 FF            CALL 0x00401e6a
LAB_004da5a0:
004DA5A0  33 D2                     XOR EDX,EDX
004DA5A2  8A 13                     MOV DL,byte ptr [EBX]
004DA5A4  C1 E2 04                  SHL EDX,0x4
004DA5A7  89 44 1A 11               MOV dword ptr [EDX + EBX*0x1 + 0x11],EAX
004DA5AB  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004DA5AE  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DA5B4  50                        PUSH EAX
004DA5B5  E8 FD A3 F2 FF            CALL 0x004049b7
004DA5BA  3C 03                     CMP AL,0x3
004DA5BC  74 3B                     JZ 0x004da5f9
004DA5BE  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004DA5C1  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
004DA5C4  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
004DA5C7  8D 0C 56                  LEA ECX,[ESI + EDX*0x2]
004DA5CA  C1 E1 04                  SHL ECX,0x4
004DA5CD  03 CE                     ADD ECX,ESI
004DA5CF  D1 E1                     SHL ECX,0x1
004DA5D1  8B B9 92 57 7F 00         MOV EDI,dword ptr [ECX + 0x7f5792]
004DA5D7  8B 91 96 57 7F 00         MOV EDX,dword ptr [ECX + 0x7f5796]
004DA5DD  8B C7                     MOV EAX,EDI
004DA5DF  2B C2                     SUB EAX,EDX
004DA5E1  74 49                     JZ 0x004da62c
004DA5E3  85 FF                     TEST EDI,EDI
004DA5E5  74 0B                     JZ 0x004da5f2
004DA5E7  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
004DA5EA  8D 04 88                  LEA EAX,[EAX + ECX*0x4]
004DA5ED  99                        CDQ
004DA5EE  F7 FF                     IDIV EDI
004DA5F0  EB 3A                     JMP 0x004da62c
LAB_004da5f2:
004DA5F2  B8 F3 FF FF FF            MOV EAX,0xfffffff3
004DA5F7  EB 33                     JMP 0x004da62c
LAB_004da5f9:
004DA5F9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004DA5FC  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
004DA5FF  52                        PUSH EDX
004DA600  8B CE                     MOV ECX,ESI
004DA602  E8 A0 90 F2 FF            CALL 0x004036a7
004DA607  8D 3C 80                  LEA EDI,[EAX + EAX*0x4]
004DA60A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004DA60D  50                        PUSH EAX
004DA60E  8B CE                     MOV ECX,ESI
004DA610  C1 E7 02                  SHL EDI,0x2
004DA613  E8 68 B7 F2 FF            CALL 0x00405d80
004DA618  8B C8                     MOV ECX,EAX
004DA61A  8B C7                     MOV EAX,EDI
004DA61C  99                        CDQ
004DA61D  F7 F9                     IDIV ECX
004DA61F  83 F8 14                  CMP EAX,0x14
004DA622  7E 05                     JLE 0x004da629
004DA624  B8 14 00 00 00            MOV EAX,0x14
LAB_004da629:
004DA629  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
LAB_004da62c:
004DA62C  33 D2                     XOR EDX,EDX
004DA62E  56                        PUSH ESI
004DA62F  8A 13                     MOV DL,byte ptr [EBX]
004DA631  C1 E2 04                  SHL EDX,0x4
004DA634  89 44 1A 15               MOV dword ptr [EDX + EBX*0x1 + 0x15],EAX
004DA638  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DA63E  8D 85 84 FD FF FF         LEA EAX,[EBP + 0xfffffd84]
004DA644  50                        PUSH EAX
004DA645  E8 9A 9E F2 FF            CALL 0x004044e4
004DA64A  B9 4E 00 00 00            MOV ECX,0x4e
004DA64F  8B F0                     MOV ESI,EAX
004DA651  8D BD BC FE FF FF         LEA EDI,[EBP + 0xfffffebc]
004DA657  F3 A5                     MOVSD.REP ES:EDI,ESI
004DA659  8B 8D BC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffebc]
004DA65F  8B 95 C0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffec0]
004DA665  8B B5 C4 FE FF FF         MOV ESI,dword ptr [EBP + 0xfffffec4]
004DA66B  8D 04 0A                  LEA EAX,[EDX + ECX*0x1]
004DA66E  33 D2                     XOR EDX,EDX
004DA670  8A 13                     MOV DL,byte ptr [EBX]
004DA672  C1 E2 04                  SHL EDX,0x4
004DA675  8D 0C 30                  LEA ECX,[EAX + ESI*0x1]
004DA678  66 89 8C 1A 89 00 00 00   MOV word ptr [EDX + EBX*0x1 + 0x89],CX
004DA680  33 C9                     XOR ECX,ECX
004DA682  8A 0B                     MOV CL,byte ptr [EBX]
004DA684  33 D2                     XOR EDX,EDX
004DA686  C1 E1 04                  SHL ECX,0x4
004DA689  66 89 84 19 8B 00 00 00   MOV word ptr [ECX + EBX*0x1 + 0x8b],AX
004DA691  8A 13                     MOV DL,byte ptr [EBX]
004DA693  66 8B 8D C8 FE FF FF      MOV CX,word ptr [EBP + 0xfffffec8]
004DA69A  33 C0                     XOR EAX,EAX
004DA69C  C1 E2 04                  SHL EDX,0x4
004DA69F  66 89 B4 1A 8D 00 00 00   MOV word ptr [EDX + EBX*0x1 + 0x8d],SI
004DA6A7  8A 03                     MOV AL,byte ptr [EBX]
004DA6A9  8B 95 CC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffecc]
004DA6AF  8B B5 D4 FE FF FF         MOV ESI,dword ptr [EBP + 0xfffffed4]
004DA6B5  C1 E0 04                  SHL EAX,0x4
004DA6B8  66 89 8C 18 8F 00 00 00   MOV word ptr [EAX + EBX*0x1 + 0x8f],CX
004DA6C0  8B 85 D0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffed0]
004DA6C6  03 C2                     ADD EAX,EDX
004DA6C8  33 D2                     XOR EDX,EDX
004DA6CA  8A 13                     MOV DL,byte ptr [EBX]
004DA6CC  C1 E2 04                  SHL EDX,0x4
004DA6CF  8D 0C 30                  LEA ECX,[EAX + ESI*0x1]
004DA6D2  66 89 8C 1A 91 00 00 00   MOV word ptr [EDX + EBX*0x1 + 0x91],CX
004DA6DA  33 C9                     XOR ECX,ECX
004DA6DC  8A 0B                     MOV CL,byte ptr [EBX]
004DA6DE  33 D2                     XOR EDX,EDX
004DA6E0  C1 E1 04                  SHL ECX,0x4
004DA6E3  66 89 84 19 93 00 00 00   MOV word ptr [ECX + EBX*0x1 + 0x93],AX
004DA6EB  8A 13                     MOV DL,byte ptr [EBX]
004DA6ED  66 8B 8D D8 FE FF FF      MOV CX,word ptr [EBP + 0xfffffed8]
004DA6F4  33 C0                     XOR EAX,EAX
004DA6F6  C1 E2 04                  SHL EDX,0x4
004DA6F9  66 89 B4 1A 95 00 00 00   MOV word ptr [EDX + EBX*0x1 + 0x95],SI
004DA701  8A 03                     MOV AL,byte ptr [EBX]
004DA703  C1 E0 04                  SHL EAX,0x4
004DA706  33 D2                     XOR EDX,EDX
004DA708  66 89 8C 18 97 00 00 00   MOV word ptr [EAX + EBX*0x1 + 0x97],CX
004DA710  8A 13                     MOV DL,byte ptr [EBX]
004DA712  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
004DA715  88 44 1A 01               MOV byte ptr [EDX + EBX*0x1 + 0x1],AL
004DA719  8A 03                     MOV AL,byte ptr [EBX]
004DA71B  FE C0                     INC AL
004DA71D  88 03                     MOV byte ptr [EBX],AL
LAB_004da71f:
004DA71F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004DA722  83 C6 51                  ADD ESI,0x51
004DA725  81 FE 71 8A 80 00         CMP ESI,0x808a71
004DA72B  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004DA72E  0F 8C 84 FC FF FF         JL 0x004da3b8
004DA734  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004DA737  51                        PUSH ECX
004DA738  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DA73E  E8 9D 6F F2 FF            CALL 0x004016e0
004DA743  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004DA746  89 43 79                  MOV dword ptr [EBX + 0x79],EAX
004DA749  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DA74F  52                        PUSH EDX
004DA750  E8 FF 91 F2 FF            CALL 0x00403954
004DA755  89 43 7D                  MOV dword ptr [EBX + 0x7d],EAX
004DA758  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004DA75B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DA761  50                        PUSH EAX
004DA762  E8 50 A2 F2 FF            CALL 0x004049b7
004DA767  3C 03                     CMP AL,0x3
004DA769  74 11                     JZ 0x004da77c
004DA76B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004DA76E  51                        PUSH ECX
004DA76F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DA775  E8 0A 7B F2 FF            CALL 0x00402284
004DA77A  EB 0F                     JMP 0x004da78b
LAB_004da77c:
004DA77C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004DA77F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DA785  52                        PUSH EDX
004DA786  E8 DF 76 F2 FF            CALL 0x00401e6a
LAB_004da78b:
004DA78B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004DA78E  89 83 81 00 00 00         MOV dword ptr [EBX + 0x81],EAX
004DA794  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
004DA797  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
004DA79A  8D 0C 4E                  LEA ECX,[ESI + ECX*0x2]
004DA79D  C1 E1 04                  SHL ECX,0x4
004DA7A0  03 CE                     ADD ECX,ESI
004DA7A2  D1 E1                     SHL ECX,0x1
004DA7A4  8B B9 92 57 7F 00         MOV EDI,dword ptr [ECX + 0x7f5792]
004DA7AA  8B 91 96 57 7F 00         MOV EDX,dword ptr [ECX + 0x7f5796]
004DA7B0  8B C7                     MOV EAX,EDI
004DA7B2  2B C2                     SUB EAX,EDX
004DA7B4  74 14                     JZ 0x004da7ca
004DA7B6  85 FF                     TEST EDI,EDI
004DA7B8  74 0B                     JZ 0x004da7c5
004DA7BA  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004DA7BD  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
004DA7C0  99                        CDQ
004DA7C1  F7 FF                     IDIV EDI
004DA7C3  EB 05                     JMP 0x004da7ca
LAB_004da7c5:
004DA7C5  B8 F3 FF FF FF            MOV EAX,0xfffffff3
LAB_004da7ca:
004DA7CA  89 83 85 00 00 00         MOV dword ptr [EBX + 0x85],EAX
004DA7D0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DA7D6  8D 85 84 FD FF FF         LEA EAX,[EBP + 0xfffffd84]
004DA7DC  56                        PUSH ESI
004DA7DD  50                        PUSH EAX
004DA7DE  E8 01 9D F2 FF            CALL 0x004044e4
004DA7E3  B9 4E 00 00 00            MOV ECX,0x4e
004DA7E8  8B F0                     MOV ESI,EAX
004DA7EA  8D BD BC FE FF FF         LEA EDI,[EBP + 0xfffffebc]
004DA7F0  F3 A5                     MOVSD.REP ES:EDI,ESI
004DA7F2  8B 8D BC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffebc]
004DA7F8  8B 95 C0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffec0]
004DA7FE  5F                        POP EDI
004DA7FF  5E                        POP ESI
004DA800  8D 04 0A                  LEA EAX,[EDX + ECX*0x1]
004DA803  8B 8D C4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffec4]
004DA809  66 89 83 FB 00 00 00      MOV word ptr [EBX + 0xfb],AX
004DA810  66 89 8B FD 00 00 00      MOV word ptr [EBX + 0xfd],CX
004DA817  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
004DA81A  66 8B 85 C8 FE FF FF      MOV AX,word ptr [EBP + 0xfffffec8]
004DA821  8B 8D CC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffecc]
004DA827  66 89 93 F9 00 00 00      MOV word ptr [EBX + 0xf9],DX
004DA82E  8B 95 D0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffed0]
004DA834  66 89 83 FF 00 00 00      MOV word ptr [EBX + 0xff],AX
004DA83B  8D 04 0A                  LEA EAX,[EDX + ECX*0x1]
004DA83E  8B 8D D4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffed4]
004DA844  66 89 83 03 01 00 00      MOV word ptr [EBX + 0x103],AX
004DA84B  66 89 8B 05 01 00 00      MOV word ptr [EBX + 0x105],CX
004DA852  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
004DA855  66 8B 85 D8 FE FF FF      MOV AX,word ptr [EBP + 0xfffffed8]
004DA85C  8A 4D 08                  MOV CL,byte ptr [EBP + 0x8]
004DA85F  66 89 93 01 01 00 00      MOV word ptr [EBX + 0x101],DX
004DA866  66 89 83 07 01 00 00      MOV word ptr [EBX + 0x107],AX
004DA86D  88 4B 08                  MOV byte ptr [EBX + 0x8],CL
004DA870  33 C0                     XOR EAX,EAX
004DA872  5B                        POP EBX
004DA873  8B E5                     MOV ESP,EBP
004DA875  5D                        POP EBP
004DA876  C2 0C 00                  RET 0xc
