FUN_00521490:
00521490  55                        PUSH EBP
00521491  8B EC                     MOV EBP,ESP
00521493  83 EC 54                  SUB ESP,0x54
00521496  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0052149B  53                        PUSH EBX
0052149C  56                        PUSH ESI
0052149D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005214A0  57                        PUSH EDI
005214A1  8D 55 B0                  LEA EDX,[EBP + -0x50]
005214A4  8D 4D AC                  LEA ECX,[EBP + -0x54]
005214A7  6A 00                     PUSH 0x0
005214A9  52                        PUSH EDX
005214AA  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
005214AD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005214B3  E8 38 C3 20 00            CALL 0x0072d7f0
005214B8  8B F0                     MOV ESI,EAX
005214BA  83 C4 08                  ADD ESP,0x8
005214BD  85 F6                     TEST ESI,ESI
005214BF  0F 85 60 02 00 00         JNZ 0x00521725
005214C5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005214C8  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
005214CB  57                        PUSH EDI
005214CC  8B CE                     MOV ECX,ESI
005214CE  E8 2E FF ED FF            CALL 0x00401401
005214D3  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
005214D6  83 F8 60                  CMP EAX,0x60
005214D9  0F 87 51 01 00 00         JA 0x00521630
005214DF  74 42                     JZ 0x00521523
005214E1  83 E8 02                  SUB EAX,0x2
005214E4  74 22                     JZ 0x00521508
005214E6  48                        DEC EAX
005214E7  0F 85 24 02 00 00         JNZ 0x00521711
005214ED  8B CE                     MOV ECX,ESI
005214EF  E8 CF 00 EE FF            CALL 0x004015c3
005214F4  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
005214F7  33 C0                     XOR EAX,EAX
005214F9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005214FF  5F                        POP EDI
00521500  5E                        POP ESI
00521501  5B                        POP EBX
00521502  8B E5                     MOV ESP,EBP
00521504  5D                        POP EBP
00521505  C2 04 00                  RET 0x4
LAB_00521508:
00521508  8B CE                     MOV ECX,ESI
0052150A  E8 A2 2B EE FF            CALL 0x004040b1
0052150F  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00521512  33 C0                     XOR EAX,EAX
00521514  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0052151A  5F                        POP EDI
0052151B  5E                        POP ESI
0052151C  5B                        POP EBX
0052151D  8B E5                     MOV ESP,EBP
0052151F  5D                        POP EBP
00521520  C2 04 00                  RET 0x4
LAB_00521523:
00521523  33 C0                     XOR EAX,EAX
00521525  33 DB                     XOR EBX,EBX
00521527  66 8B 47 1A               MOV AX,word ptr [EDI + 0x1a]
0052152B  33 D2                     XOR EDX,EDX
0052152D  66 83 BE 72 01 00 00 01   CMP word ptr [ESI + 0x172],0x1
00521535  66 8B 57 18               MOV DX,word ptr [EDI + 0x18]
00521539  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0052153C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0052153F  75 6E                     JNZ 0x005215af
00521541  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
LAB_00521544:
00521544  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00521547  8B C7                     MOV EAX,EDI
00521549  25 FF 00 00 00            AND EAX,0xff
0052154E  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00521551  8B 8C 86 D4 02 00 00      MOV ECX,dword ptr [ESI + EAX*0x4 + 0x2d4]
00521558  8D 84 86 D4 02 00 00      LEA EAX,[ESI + EAX*0x4 + 0x2d4]
0052155F  3B D1                     CMP EDX,ECX
00521561  7C 29                     JL 0x0052158c
00521563  8B 58 08                  MOV EBX,dword ptr [EAX + 0x8]
00521566  03 D9                     ADD EBX,ECX
00521568  3B D3                     CMP EDX,EBX
0052156A  7D 1D                     JGE 0x00521589
0052156C  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0052156F  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00521572  3B D9                     CMP EBX,ECX
00521574  7C 13                     JL 0x00521589
00521576  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00521579  03 C1                     ADD EAX,ECX
0052157B  3B D8                     CMP EBX,EAX
0052157D  7D 0A                     JGE 0x00521589
0052157F  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00521582  B8 01 00 00 00            MOV EAX,0x1
00521587  EB 05                     JMP 0x0052158e
LAB_00521589:
00521589  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_0052158c:
0052158C  33 C0                     XOR EAX,EAX
LAB_0052158e:
0052158E  85 C0                     TEST EAX,EAX
00521590  75 0E                     JNZ 0x005215a0
00521592  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
00521595  FE C0                     INC AL
00521597  3C 0C                     CMP AL,0xc
00521599  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
0052159C  72 A6                     JC 0x00521544
0052159E  EB 0F                     JMP 0x005215af
LAB_005215a0:
005215A0  81 E7 FF 00 00 00         AND EDI,0xff
005215A6  83 C7 25                  ADD EDI,0x25
005215A9  8D 0C BF                  LEA ECX,[EDI + EDI*0x4]
005215AC  8B 1C 8E                  MOV EBX,dword ptr [ESI + ECX*0x4]
LAB_005215af:
005215AF  8B 86 78 01 00 00         MOV EAX,dword ptr [ESI + 0x178]
005215B5  3B C3                     CMP EAX,EBX
005215B7  0F 84 54 01 00 00         JZ 0x00521711
005215BD  85 C0                     TEST EAX,EAX
005215BF  BF 02 00 00 00            MOV EDI,0x2
005215C4  74 26                     JZ 0x005215ec
005215C6  C7 46 28 02 42 00 00      MOV dword ptr [ESI + 0x28],0x4202
005215CD  66 C7 46 2C 00 00         MOV word ptr [ESI + 0x2c],0x0
005215D3  66 89 7E 2E               MOV word ptr [ESI + 0x2e],DI
005215D7  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
005215DA  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
005215E0  85 C9                     TEST ECX,ECX
005215E2  74 08                     JZ 0x005215ec
005215E4  8B 11                     MOV EDX,dword ptr [ECX]
005215E6  8D 46 18                  LEA EAX,[ESI + 0x18]
005215E9  50                        PUSH EAX
005215EA  FF 12                     CALL dword ptr [EDX]
LAB_005215ec:
005215EC  85 DB                     TEST EBX,EBX
005215EE  89 9E 78 01 00 00         MOV dword ptr [ESI + 0x178],EBX
005215F4  0F 84 17 01 00 00         JZ 0x00521711
005215FA  C7 46 28 01 42 00 00      MOV dword ptr [ESI + 0x28],0x4201
00521601  66 C7 46 2C 00 00         MOV word ptr [ESI + 0x2c],0x0
00521607  66 89 7E 2E               MOV word ptr [ESI + 0x2e],DI
0052160B  89 5E 30                  MOV dword ptr [ESI + 0x30],EBX
0052160E  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
00521614  83 C6 18                  ADD ESI,0x18
00521617  56                        PUSH ESI
00521618  8B 11                     MOV EDX,dword ptr [ECX]
0052161A  FF 12                     CALL dword ptr [EDX]
0052161C  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0052161F  33 C0                     XOR EAX,EAX
00521621  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00521627  5F                        POP EDI
00521628  5E                        POP ESI
00521629  5B                        POP EBX
0052162A  8B E5                     MOV ESP,EBP
0052162C  5D                        POP EBP
0052162D  C2 04 00                  RET 0x4
LAB_00521630:
00521630  2D 08 B2 00 00            SUB EAX,0xb208
00521635  0F 84 C2 00 00 00         JZ 0x005216fd
0052163B  48                        DEC EAX
0052163C  0F 85 CF 00 00 00         JNZ 0x00521711
00521642  8A 1D 4E 87 80 00         MOV BL,byte ptr [0x0080874e]
00521648  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
0052164B  33 C9                     XOR ECX,ECX
0052164D  80 FB 03                  CMP BL,0x3
00521650  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
00521653  8B 5E 3C                  MOV EBX,dword ptr [ESI + 0x3c]
00521656  8B 10                     MOV EDX,dword ptr [EAX]
00521658  0F 95 C1                  SETNZ CL
0052165B  8A 94 32 AB 01 00 00      MOV DL,byte ptr [EDX + ESI*0x1 + 0x1ab]
00521662  49                        DEC ECX
00521663  2B FB                     SUB EDI,EBX
00521665  8B 5E 5C                  MOV EBX,dword ptr [ESI + 0x5c]
00521668  83 E1 11                  AND ECX,0x11
0052166B  88 55 F8                  MOV byte ptr [EBP + -0x8],DL
0052166E  85 DB                     TEST EBX,EBX
00521670  8B 58 10                  MOV EBX,dword ptr [EAX + 0x10]
00521673  75 08                     JNZ 0x0052167d
00521675  2B 1D 34 67 80 00         SUB EBX,dword ptr [0x00806734]
0052167B  EB 03                     JMP 0x00521680
LAB_0052167d:
0052167D  2B 5E 44                  SUB EBX,dword ptr [ESI + 0x44]
LAB_00521680:
00521680  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00521683  83 E8 00                  SUB EAX,0x0
00521686  74 16                     JZ 0x0052169e
00521688  48                        DEC EAX
00521689  75 22                     JNZ 0x005216ad
0052168B  80 FA FF                  CMP DL,0xff
0052168E  74 1D                     JZ 0x005216ad
00521690  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00521693  81 E1 FF 00 00 00         AND ECX,0xff
00521699  83 C1 09                  ADD ECX,0x9
0052169C  EB 0F                     JMP 0x005216ad
LAB_0052169e:
0052169E  80 FA FF                  CMP DL,0xff
005216A1  74 0A                     JZ 0x005216ad
005216A3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005216A6  81 E1 FF 00 00 00         AND ECX,0xff
005216AC  41                        INC ECX
LAB_005216ad:
005216AD  85 C9                     TEST ECX,ECX
005216AF  7C 1E                     JL 0x005216cf
005216B1  8B 86 C4 03 00 00         MOV EAX,dword ptr [ESI + 0x3c4]
005216B7  51                        PUSH ECX
005216B8  50                        PUSH EAX
005216B9  E8 E2 9C 1E 00            CALL 0x0070b3a0
005216BE  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
005216C1  50                        PUSH EAX
005216C2  6A 01                     PUSH 0x1
005216C4  53                        PUSH EBX
005216C5  57                        PUSH EDI
005216C6  51                        PUSH ECX
005216C7  E8 5D 1B EE FF            CALL 0x00403229
005216CC  83 C4 1C                  ADD ESP,0x1c
LAB_005216cf:
005216CF  8B 56 44                  MOV EDX,dword ptr [ESI + 0x44]
005216D2  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
005216D5  8B 4E 60                  MOV ECX,dword ptr [ESI + 0x60]
005216D8  52                        PUSH EDX
005216D9  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005216DF  50                        PUSH EAX
005216E0  6A FF                     PUSH -0x1
005216E2  51                        PUSH ECX
005216E3  52                        PUSH EDX
005216E4  E8 57 1F 19 00            CALL 0x006b3640
005216E9  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
005216EC  33 C0                     XOR EAX,EAX
005216EE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005216F4  5F                        POP EDI
005216F5  5E                        POP ESI
005216F6  5B                        POP EBX
005216F7  8B E5                     MOV ESP,EBP
005216F9  5D                        POP EBP
005216FA  C2 04 00                  RET 0x4
LAB_005216fd:
005216FD  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
00521700  8A 08                     MOV CL,byte ptr [EAX]
00521702  FE C9                     DEC CL
00521704  88 8E D4 03 00 00         MOV byte ptr [ESI + 0x3d4],CL
0052170A  8B CE                     MOV ECX,ESI
0052170C  E8 58 35 EE FF            CALL 0x00404c69
LAB_00521711:
00521711  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00521714  33 C0                     XOR EAX,EAX
00521716  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0052171C  5F                        POP EDI
0052171D  5E                        POP ESI
0052171E  5B                        POP EBX
0052171F  8B E5                     MOV ESP,EBP
00521721  5D                        POP EBP
00521722  C2 04 00                  RET 0x4
LAB_00521725:
00521725  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
00521728  68 FC 3F 7C 00            PUSH 0x7c3ffc
0052172D  68 CC 4C 7A 00            PUSH 0x7a4ccc
00521732  56                        PUSH ESI
00521733  6A 00                     PUSH 0x0
00521735  68 1E 01 00 00            PUSH 0x11e
0052173A  68 B0 3E 7C 00            PUSH 0x7c3eb0
0052173F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00521744  E8 87 BD 18 00            CALL 0x006ad4d0
00521749  83 C4 18                  ADD ESP,0x18
0052174C  85 C0                     TEST EAX,EAX
0052174E  74 01                     JZ 0x00521751
00521750  CC                        INT3
LAB_00521751:
00521751  68 1E 01 00 00            PUSH 0x11e
00521756  68 B0 3E 7C 00            PUSH 0x7c3eb0
0052175B  6A 00                     PUSH 0x0
0052175D  56                        PUSH ESI
0052175E  E8 DD 46 18 00            CALL 0x006a5e40
00521763  5F                        POP EDI
00521764  5E                        POP ESI
00521765  B8 FF FF 00 00            MOV EAX,0xffff
0052176A  5B                        POP EBX
0052176B  8B E5                     MOV ESP,EBP
0052176D  5D                        POP EBP
0052176E  C2 04 00                  RET 0x4
