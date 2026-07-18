FUN_007527a0:
007527A0  55                        PUSH EBP
007527A1  8B EC                     MOV EBP,ESP
007527A3  83 EC 20                  SUB ESP,0x20
007527A6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007527A9  53                        PUSH EBX
007527AA  56                        PUSH ESI
007527AB  57                        PUSH EDI
007527AC  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
007527AF  85 C0                     TEST EAX,EAX
007527B1  75 09                     JNZ 0x007527bc
007527B3  57                        PUSH EDI
007527B4  E8 E7 27 F6 FF            CALL 0x006b4fa0
007527B9  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_007527bc:
007527BC  8B 5F 04                  MOV EBX,dword ptr [EDI + 0x4]
007527BF  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
007527C2  33 F6                     XOR ESI,ESI
007527C4  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
007527C7  66 8B 77 0E               MOV SI,word ptr [EDI + 0xe]
007527CB  8D 43 07                  LEA EAX,[EBX + 0x7]
007527CE  99                        CDQ
007527CF  0F AF F3                  IMUL ESI,EBX
007527D2  83 E2 07                  AND EDX,0x7
007527D5  83 C6 1F                  ADD ESI,0x1f
007527D8  03 C2                     ADD EAX,EDX
007527DA  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
007527DD  8B F8                     MOV EDI,EAX
007527DF  C1 FF 03                  SAR EDI,0x3
007527E2  8B C7                     MOV EAX,EDI
007527E4  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
007527E7  0F AF C1                  IMUL EAX,ECX
007527EA  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
007527ED  50                        PUSH EAX
007527EE  C1 EE 03                  SHR ESI,0x3
007527F1  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
007527F7  89 01                     MOV dword ptr [ECX],EAX
007527F9  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
007527FC  E8 0F 84 F5 FF            CALL 0x006aac10
00752801  85 C0                     TEST EAX,EAX
00752803  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00752806  75 09                     JNZ 0x00752811
00752808  5F                        POP EDI
00752809  5E                        POP ESI
0075280A  5B                        POP EBX
0075280B  8B E5                     MOV ESP,EBP
0075280D  5D                        POP EBP
0075280E  C2 14 00                  RET 0x14
LAB_00752811:
00752811  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00752814  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00752817  8D 41 FF                  LEA EAX,[ECX + -0x1]
0075281A  0F AF C6                  IMUL EAX,ESI
0075281D  03 D0                     ADD EDX,EAX
0075281F  85 C9                     TEST ECX,ECX
00752821  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00752824  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
00752827  0F 8E 03 01 00 00         JLE 0x00752930
0075282D  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00752834  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
LAB_00752837:
00752837  33 C9                     XOR ECX,ECX
00752839  85 DB                     TEST EBX,EBX
0075283B  0F 8E D5 00 00 00         JLE 0x00752916
LAB_00752841:
00752841  8A 45 14                  MOV AL,byte ptr [EBP + 0x14]
00752844  38 04 11                  CMP byte ptr [ECX + EDX*0x1],AL
00752847  75 0A                     JNZ 0x00752853
00752849  41                        INC ECX
0075284A  3B CB                     CMP ECX,EBX
0075284C  7C F3                     JL 0x00752841
0075284E  E9 C3 00 00 00            JMP 0x00752916
LAB_00752853:
00752853  3B CB                     CMP ECX,EBX
00752855  0F 8D BB 00 00 00         JGE 0x00752916
0075285B  8D 43 FF                  LEA EAX,[EBX + -0x1]
0075285E  3B C1                     CMP EAX,ECX
00752860  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00752863  7E 10                     JLE 0x00752875
LAB_00752865:
00752865  8A 5D 14                  MOV BL,byte ptr [EBP + 0x14]
00752868  38 1C 10                  CMP byte ptr [EAX + EDX*0x1],BL
0075286B  75 05                     JNZ 0x00752872
0075286D  48                        DEC EAX
0075286E  3B C1                     CMP EAX,ECX
00752870  7F F3                     JG 0x00752865
LAB_00752872:
00752872  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
LAB_00752875:
00752875  85 C9                     TEST ECX,ECX
00752877  0F 8C 99 00 00 00         JL 0x00752916
0075287D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00752880  3B CA                     CMP ECX,EDX
00752882  7C 04                     JL 0x00752888
00752884  2B CA                     SUB ECX,EDX
00752886  EB 02                     JMP 0x0075288a
LAB_00752888:
00752888  33 C9                     XOR ECX,ECX
LAB_0075288a:
0075288A  2B DA                     SUB EBX,EDX
0075288C  3B C3                     CMP EAX,EBX
0075288E  7D 04                     JGE 0x00752894
00752890  03 C2                     ADD EAX,EDX
00752892  EB 03                     JMP 0x00752897
LAB_00752894:
00752894  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_00752897:
00752897  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0075289A  8B D1                     MOV EDX,ECX
0075289C  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0075289F  BF 08 00 00 00            MOV EDI,0x8
007528A4  C1 FA 03                  SAR EDX,0x3
007528A7  03 D6                     ADD EDX,ESI
007528A9  8B F1                     MOV ESI,ECX
007528AB  83 E6 07                  AND ESI,0x7
007528AE  03 D3                     ADD EDX,EBX
007528B0  2B FE                     SUB EDI,ESI
007528B2  8B F0                     MOV ESI,EAX
007528B4  83 E6 07                  AND ESI,0x7
007528B7  2B C7                     SUB EAX,EDI
007528B9  8A 9F A8 2B 7F 00         MOV BL,byte ptr [EDI + 0x7f2ba8]
007528BF  46                        INC ESI
007528C0  88 5D 0B                  MOV byte ptr [EBP + 0xb],BL
007528C3  BB B0 2B 7F 00            MOV EBX,0x7f2bb0
007528C8  2B C1                     SUB EAX,ECX
007528CA  2B DE                     SUB EBX,ESI
007528CC  40                        INC EAX
007528CD  8A 1B                     MOV BL,byte ptr [EBX]
007528CF  8B F8                     MOV EDI,EAX
007528D1  85 FF                     TEST EDI,EDI
007528D3  F6 D3                     NOT BL
007528D5  7F 05                     JG 0x007528dc
007528D7  22 5D 0B                  AND BL,byte ptr [EBP + 0xb]
007528DA  EB 2C                     JMP 0x00752908
LAB_007528dc:
007528DC  8A 4D 0B                  MOV CL,byte ptr [EBP + 0xb]
007528DF  2B FE                     SUB EDI,ESI
007528E1  88 0A                     MOV byte ptr [EDX],CL
007528E3  42                        INC EDX
007528E4  85 FF                     TEST EDI,EDI
007528E6  7E 20                     JLE 0x00752908
007528E8  8D 4F 07                  LEA ECX,[EDI + 0x7]
007528EB  83 C8 FF                  OR EAX,0xffffffff
007528EE  C1 E9 03                  SHR ECX,0x3
007528F1  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
007528F4  8B F1                     MOV ESI,ECX
007528F6  8B FA                     MOV EDI,EDX
007528F8  C1 E9 02                  SHR ECX,0x2
007528FB  F3 AB                     STOSD.REP ES:EDI
007528FD  8B CE                     MOV ECX,ESI
007528FF  83 E1 03                  AND ECX,0x3
00752902  F3 AA                     STOSB.REP ES:EDI
00752904  8B C6                     MOV EAX,ESI
00752906  03 D0                     ADD EDX,EAX
LAB_00752908:
00752908  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
0075290B  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
0075290E  88 1A                     MOV byte ptr [EDX],BL
00752910  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00752913  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
LAB_00752916:
00752916  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00752919  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0075291C  2B D6                     SUB EDX,ESI
0075291E  03 CF                     ADD ECX,EDI
00752920  48                        DEC EAX
00752921  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
00752924  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00752927  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0075292A  0F 85 07 FF FF FF         JNZ 0x00752837
LAB_00752930:
00752930  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00752933  33 DB                     XOR EBX,EBX
00752935  85 C0                     TEST EAX,EAX
00752937  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0075293A  0F 8E 0B 01 00 00         JLE 0x00752a4b
LAB_00752940:
00752940  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00752943  8B CB                     MOV ECX,EBX
00752945  83 E1 07                  AND ECX,0x7
00752948  B8 80 00 00 00            MOV EAX,0x80
0075294D  D3 F8                     SAR EAX,CL
0075294F  03 D3                     ADD EDX,EBX
00752951  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
00752954  8B D3                     MOV EDX,EBX
00752956  C1 FA 03                  SAR EDX,0x3
00752959  88 45 0B                  MOV byte ptr [EBP + 0xb],AL
0075295C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0075295F  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00752962  8D 0C 02                  LEA ECX,[EDX + EAX*0x1]
00752965  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00752968  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0075296B  33 C9                     XOR ECX,ECX
0075296D  85 C0                     TEST EAX,EAX
0075296F  0F 8E C7 00 00 00         JLE 0x00752a3c
LAB_00752975:
00752975  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
00752978  8A 45 14                  MOV AL,byte ptr [EBP + 0x14]
0075297B  38 06                     CMP byte ptr [ESI],AL
0075297D  75 2A                     JNZ 0x007529a9
0075297F  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
00752982  8A 45 0B                  MOV AL,byte ptr [EBP + 0xb]
00752985  84 06                     TEST byte ptr [ESI],AL
00752987  75 20                     JNZ 0x007529a9
00752989  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0075298C  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
0075298F  2B F0                     SUB ESI,EAX
00752991  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00752994  03 C7                     ADD EAX,EDI
00752996  41                        INC ECX
00752997  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0075299A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0075299D  3B C8                     CMP ECX,EAX
0075299F  89 75 18                  MOV dword ptr [EBP + 0x18],ESI
007529A2  7C D1                     JL 0x00752975
007529A4  E9 93 00 00 00            JMP 0x00752a3c
LAB_007529a9:
007529A9  3B 4D FC                  CMP ECX,dword ptr [EBP + -0x4]
007529AC  0F 8D 8A 00 00 00         JGE 0x00752a3c
007529B2  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007529B5  03 C3                     ADD EAX,EBX
007529B7  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
007529BA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007529BD  8D 70 FF                  LEA ESI,[EAX + -0x1]
007529C0  8B C6                     MOV EAX,ESI
007529C2  0F AF C7                  IMUL EAX,EDI
007529C5  03 C2                     ADD EAX,EDX
007529C7  03 45 F0                  ADD EAX,dword ptr [EBP + -0x10]
007529CA  3B F1                     CMP ESI,ECX
007529CC  7E 26                     JLE 0x007529f4
LAB_007529ce:
007529CE  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
007529D1  8A 5D 14                  MOV BL,byte ptr [EBP + 0x14]
007529D4  38 1A                     CMP byte ptr [EDX],BL
007529D6  75 16                     JNZ 0x007529ee
007529D8  8A 18                     MOV BL,byte ptr [EAX]
007529DA  84 5D 0B                  TEST byte ptr [EBP + 0xb],BL
007529DD  75 0F                     JNZ 0x007529ee
007529DF  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
007529E2  2B C7                     SUB EAX,EDI
007529E4  03 D3                     ADD EDX,EBX
007529E6  4E                        DEC ESI
007529E7  3B F1                     CMP ESI,ECX
007529E9  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
007529EC  7F E0                     JG 0x007529ce
LAB_007529ee:
007529EE  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
007529F1  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_007529f4:
007529F4  85 C9                     TEST ECX,ECX
007529F6  7C 44                     JL 0x00752a3c
007529F8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007529FB  3B C8                     CMP ECX,EAX
007529FD  7C 04                     JL 0x00752a03
007529FF  2B C8                     SUB ECX,EAX
00752A01  EB 02                     JMP 0x00752a05
LAB_00752a03:
00752A03  33 C9                     XOR ECX,ECX
LAB_00752a05:
00752A05  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00752A08  2B D8                     SUB EBX,EAX
00752A0A  3B F3                     CMP ESI,EBX
00752A0C  7D 04                     JGE 0x00752a12
00752A0E  03 F0                     ADD ESI,EAX
00752A10  EB 06                     JMP 0x00752a18
LAB_00752a12:
00752A12  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00752A15  8D 70 FF                  LEA ESI,[EAX + -0x1]
LAB_00752a18:
00752A18  8B C1                     MOV EAX,ECX
00752A1A  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00752A1D  0F AF C7                  IMUL EAX,EDI
00752A20  03 C2                     ADD EAX,EDX
00752A22  03 C3                     ADD EAX,EBX
00752A24  3B CE                     CMP ECX,ESI
00752A26  7F 11                     JG 0x00752a39
00752A28  2B F1                     SUB ESI,ECX
00752A2A  8A 4D 0B                  MOV CL,byte ptr [EBP + 0xb]
00752A2D  46                        INC ESI
LAB_00752a2e:
00752A2E  8A 10                     MOV DL,byte ptr [EAX]
00752A30  0A D1                     OR DL,CL
00752A32  88 10                     MOV byte ptr [EAX],DL
00752A34  03 C7                     ADD EAX,EDI
00752A36  4E                        DEC ESI
00752A37  75 F5                     JNZ 0x00752a2e
LAB_00752a39:
00752A39  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_00752a3c:
00752A3C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00752A3F  43                        INC EBX
00752A40  3B D8                     CMP EBX,EAX
00752A42  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00752A45  0F 8C F5 FE FF FF         JL 0x00752940
LAB_00752a4b:
00752A4B  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00752A4E  5F                        POP EDI
00752A4F  5E                        POP ESI
00752A50  5B                        POP EBX
00752A51  8B E5                     MOV ESP,EBP
00752A53  5D                        POP EBP
00752A54  C2 14 00                  RET 0x14
