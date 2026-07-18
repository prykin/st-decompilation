FUN_007516f0:
007516F0  55                        PUSH EBP
007516F1  8B EC                     MOV EBP,ESP
007516F3  6A FF                     PUSH -0x1
007516F5  68 68 1E 7A 00            PUSH 0x7a1e68
007516FA  68 64 D9 72 00            PUSH 0x72d964
007516FF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
00751705  50                        PUSH EAX
00751706  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0075170D  83 EC 38                  SUB ESP,0x38
00751710  53                        PUSH EBX
00751711  56                        PUSH ESI
00751712  57                        PUSH EDI
00751713  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00751716  33 DB                     XOR EBX,EBX
00751718  33 F6                     XOR ESI,ESI
0075171A  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
0075171D  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
00751720  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00751723  B8 08 00 01 00            MOV EAX,0x10008
00751728  E8 13 C3 FD FF            CALL 0x0072da40
0075172D  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00751730  8B C4                     MOV EAX,ESP
00751732  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00751735  8D 50 07                  LEA EDX,[EAX + 0x7]
00751738  83 E2 F8                  AND EDX,0xfffffff8
0075173B  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0075173E  B9 00 40 00 00            MOV ECX,0x4000
00751743  33 C0                     XOR EAX,EAX
00751745  8B FA                     MOV EDI,EDX
00751747  F3 AB                     STOSD.REP ES:EDI
00751749  C7 45 C4 01 00 00 00      MOV dword ptr [EBP + -0x3c],0x1
00751750  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00751757  EB 2C                     JMP 0x00751785
LAB_00751785:
00751785  85 D2                     TEST EDX,EDX
00751787  75 0A                     JNZ 0x00751793
00751789  B8 FE FF FF FF            MOV EAX,0xfffffffe
0075178E  E9 D0 01 00 00            JMP 0x00751963
LAB_00751793:
00751793  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00751796  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00751799  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075179C  8D 79 01                  LEA EDI,[ECX + 0x1]
0075179F  8A 17                     MOV DL,byte ptr [EDI]
007517A1  88 55 C0                  MOV byte ptr [EBP + -0x40],DL
007517A4  47                        INC EDI
007517A5  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
007517A8  32 C9                     XOR CL,CL
LAB_007517aa:
007517AA  B8 01 00 00 00            MOV EAX,0x1
007517AF  D3 E0                     SHL EAX,CL
007517B1  8A 55 C0                  MOV DL,byte ptr [EBP + -0x40]
007517B4  84 C2                     TEST DL,AL
007517B6  74 0F                     JZ 0x007517c7
007517B8  C1 E6 08                  SHL ESI,0x8
007517BB  0B F3                     OR ESI,EBX
007517BD  33 D2                     XOR EDX,EDX
007517BF  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
007517C2  8A 14 06                  MOV DL,byte ptr [ESI + EAX*0x1]
007517C5  EB 13                     JMP 0x007517da
LAB_007517c7:
007517C7  33 D2                     XOR EDX,EDX
007517C9  8A 17                     MOV DL,byte ptr [EDI]
007517CB  47                        INC EDI
007517CC  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
007517CF  C1 E6 08                  SHL ESI,0x8
007517D2  0B F3                     OR ESI,EBX
007517D4  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
007517D7  88 14 06                  MOV byte ptr [ESI + EAX*0x1],DL
LAB_007517da:
007517DA  8B F3                     MOV ESI,EBX
007517DC  8B DA                     MOV EBX,EDX
007517DE  FE C1                     INC CL
007517E0  80 F9 08                  CMP CL,0x8
007517E3  72 0B                     JC 0x007517f0
007517E5  8A 0F                     MOV CL,byte ptr [EDI]
007517E7  88 4D C0                  MOV byte ptr [EBP + -0x40],CL
007517EA  47                        INC EDI
007517EB  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
007517EE  32 C9                     XOR CL,CL
LAB_007517f0:
007517F0  85 D2                     TEST EDX,EDX
007517F2  0F 84 55 01 00 00         JZ 0x0075194d
007517F8  F6 C2 40                  TEST DL,0x40
007517FB  74 63                     JZ 0x00751860
007517FD  B8 01 00 00 00            MOV EAX,0x1
00751802  D3 E0                     SHL EAX,CL
00751804  8A 5D C0                  MOV BL,byte ptr [EBP + -0x40]
00751807  84 C3                     TEST BL,AL
00751809  74 0F                     JZ 0x0075181a
0075180B  C1 E6 08                  SHL ESI,0x8
0075180E  0B F2                     OR ESI,EDX
00751810  33 C0                     XOR EAX,EAX
00751812  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
00751815  8A 04 1E                  MOV AL,byte ptr [ESI + EBX*0x1]
00751818  EB 13                     JMP 0x0075182d
LAB_0075181a:
0075181A  33 C0                     XOR EAX,EAX
0075181C  8A 07                     MOV AL,byte ptr [EDI]
0075181E  47                        INC EDI
0075181F  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
00751822  C1 E6 08                  SHL ESI,0x8
00751825  0B F2                     OR ESI,EDX
00751827  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
0075182A  88 04 1E                  MOV byte ptr [ESI + EBX*0x1],AL
LAB_0075182d:
0075182D  8B F2                     MOV ESI,EDX
0075182F  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00751832  FE C1                     INC CL
00751834  80 F9 08                  CMP CL,0x8
00751837  72 0B                     JC 0x00751844
00751839  8A 0F                     MOV CL,byte ptr [EDI]
0075183B  88 4D C0                  MOV byte ptr [EBP + -0x40],CL
0075183E  47                        INC EDI
0075183F  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
00751842  32 C9                     XOR CL,CL
LAB_00751844:
00751844  25 FF 00 00 00            AND EAX,0xff
00751849  25 FF 3F 00 00            AND EAX,0x3fff
0075184E  8B DA                     MOV EBX,EDX
00751850  83 E3 3F                  AND EBX,0x3f
00751853  C1 E3 08                  SHL EBX,0x8
00751856  0B C3                     OR EAX,EBX
00751858  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0075185B  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
0075185E  EB 08                     JMP 0x00751868
LAB_00751860:
00751860  8B C2                     MOV EAX,EDX
00751862  83 E0 3F                  AND EAX,0x3f
00751865  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
LAB_00751868:
00751868  F6 C2 80                  TEST DL,0x80
0075186B  74 61                     JZ 0x007518ce
0075186D  48                        DEC EAX
0075186E  0F 88 36 FF FF FF         JS 0x007517aa
00751874  40                        INC EAX
00751875  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
LAB_00751878:
00751878  BA 01 00 00 00            MOV EDX,0x1
0075187D  D3 E2                     SHL EDX,CL
0075187F  8A 45 C0                  MOV AL,byte ptr [EBP + -0x40]
00751882  84 D0                     TEST AL,DL
00751884  74 0F                     JZ 0x00751895
00751886  C1 E6 08                  SHL ESI,0x8
00751889  0B F3                     OR ESI,EBX
0075188B  33 C0                     XOR EAX,EAX
0075188D  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00751890  8A 04 16                  MOV AL,byte ptr [ESI + EDX*0x1]
00751893  EB 10                     JMP 0x007518a5
LAB_00751895:
00751895  33 C0                     XOR EAX,EAX
00751897  8A 07                     MOV AL,byte ptr [EDI]
00751899  47                        INC EDI
0075189A  C1 E6 08                  SHL ESI,0x8
0075189D  0B F3                     OR ESI,EBX
0075189F  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
007518A2  88 04 16                  MOV byte ptr [ESI + EDX*0x1],AL
LAB_007518a5:
007518A5  8B F3                     MOV ESI,EBX
007518A7  8B D8                     MOV EBX,EAX
007518A9  FE C1                     INC CL
007518AB  80 F9 08                  CMP CL,0x8
007518AE  72 08                     JC 0x007518b8
007518B0  8A 0F                     MOV CL,byte ptr [EDI]
007518B2  88 4D C0                  MOV byte ptr [EBP + -0x40],CL
007518B5  47                        INC EDI
007518B6  32 C9                     XOR CL,CL
LAB_007518b8:
007518B8  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
007518BB  88 02                     MOV byte ptr [EDX],AL
007518BD  42                        INC EDX
007518BE  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
007518C1  FF 4D B8                  DEC dword ptr [EBP + -0x48]
007518C4  75 B2                     JNZ 0x00751878
007518C6  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
007518C9  E9 DC FE FF FF            JMP 0x007517aa
LAB_007518ce:
007518CE  BA 01 00 00 00            MOV EDX,0x1
007518D3  D3 E2                     SHL EDX,CL
007518D5  8A 45 C0                  MOV AL,byte ptr [EBP + -0x40]
007518D8  84 D0                     TEST AL,DL
007518DA  74 0F                     JZ 0x007518eb
007518DC  C1 E6 08                  SHL ESI,0x8
007518DF  0B F3                     OR ESI,EBX
007518E1  33 C0                     XOR EAX,EAX
007518E3  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
007518E6  8A 04 16                  MOV AL,byte ptr [ESI + EDX*0x1]
007518E9  EB 13                     JMP 0x007518fe
LAB_007518eb:
007518EB  33 C0                     XOR EAX,EAX
007518ED  8A 07                     MOV AL,byte ptr [EDI]
007518EF  47                        INC EDI
007518F0  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
007518F3  C1 E6 08                  SHL ESI,0x8
007518F6  0B F3                     OR ESI,EBX
007518F8  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
007518FB  88 04 16                  MOV byte ptr [ESI + EDX*0x1],AL
LAB_007518fe:
007518FE  8B F3                     MOV ESI,EBX
00751900  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00751903  FE C1                     INC CL
00751905  88 4D BC                  MOV byte ptr [EBP + -0x44],CL
00751908  80 F9 08                  CMP CL,0x8
0075190B  72 0D                     JC 0x0075191a
0075190D  8A 0F                     MOV CL,byte ptr [EDI]
0075190F  88 4D C0                  MOV byte ptr [EBP + -0x40],CL
00751912  47                        INC EDI
00751913  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
00751916  C6 45 BC 00               MOV byte ptr [EBP + -0x44],0x0
LAB_0075191a:
0075191A  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
0075191D  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
00751920  8B D1                     MOV EDX,ECX
00751922  8A D8                     MOV BL,AL
00751924  8A FB                     MOV BH,BL
00751926  8B C3                     MOV EAX,EBX
00751928  C1 E0 10                  SHL EAX,0x10
0075192B  66 8B C3                  MOV AX,BX
0075192E  C1 E9 02                  SHR ECX,0x2
00751931  F3 AB                     STOSD.REP ES:EDI
00751933  8B CA                     MOV ECX,EDX
00751935  83 E1 03                  AND ECX,0x3
00751938  F3 AA                     STOSB.REP ES:EDI
0075193A  8B C2                     MOV EAX,EDX
0075193C  01 45 E0                  ADD dword ptr [EBP + -0x20],EAX
0075193F  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
00751942  8B 7D C8                  MOV EDI,dword ptr [EBP + -0x38]
00751945  8A 4D BC                  MOV CL,byte ptr [EBP + -0x44]
00751948  E9 5D FE FF FF            JMP 0x007517aa
LAB_0075194d:
0075194D  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00751950  85 C0                     TEST EAX,EAX
00751952  75 09                     JNZ 0x0075195d
00751954  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00751957  51                        PUSH ECX
00751958  E8 33 45 F5 FF            CALL 0x006a5e90
LAB_0075195d:
0075195D  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00751960  2B 45 0C                  SUB EAX,dword ptr [EBP + 0xc]
LAB_00751963:
00751963  8D 65 AC                  LEA ESP,[EBP + -0x54]
00751966  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00751969  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
00751970  5F                        POP EDI
00751971  5E                        POP ESI
00751972  5B                        POP EBX
00751973  8B E5                     MOV ESP,EBP
00751975  5D                        POP EBP
00751976  C2 08 00                  RET 0x8
