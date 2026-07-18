FUN_0062cac0:
0062CAC0  55                        PUSH EBP
0062CAC1  8B EC                     MOV EBP,ESP
0062CAC3  53                        PUSH EBX
0062CAC4  56                        PUSH ESI
0062CAC5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0062CAC8  33 C0                     XOR EAX,EAX
0062CACA  85 F6                     TEST ESI,ESI
0062CACC  57                        PUSH EDI
0062CACD  0F 84 66 01 00 00         JZ 0x0062cc39
0062CAD3  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0062CAD6  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0062CAD9  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0062CADC  8B 3E                     MOV EDI,dword ptr [ESI]
0062CADE  8B 5E 08                  MOV EBX,dword ptr [ESI + 0x8]
0062CAE1  2B C1                     SUB EAX,ECX
0062CAE3  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0062CAE6  2B D7                     SUB EDX,EDI
0062CAE8  2B CB                     SUB ECX,EBX
0062CAEA  8B DA                     MOV EBX,EDX
0062CAEC  0F AF DA                  IMUL EBX,EDX
0062CAEF  8B D1                     MOV EDX,ECX
0062CAF1  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
0062CAF4  0F AF D1                  IMUL EDX,ECX
0062CAF7  8B C8                     MOV ECX,EAX
0062CAF9  03 DA                     ADD EBX,EDX
0062CAFB  0F AF C8                  IMUL ECX,EAX
0062CAFE  03 D9                     ADD EBX,ECX
0062CB00  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
0062CB03  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0062CB06  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0062CB09  DB 45 08                  FILD dword ptr [EBP + 0x8]
0062CB0C  F7 DF                     NEG EDI
0062CB0E  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0062CB11  D9 FA                     FSQRT
0062CB13  0F BF 4C 90 02            MOVSX ECX,word ptr [EAX + EDX*0x4 + 0x2]
0062CB18  89 4E 3D                  MOV dword ptr [ESI + 0x3d],ECX
0062CB1B  DA 65 10                  FISUB dword ptr [EBP + 0x10]
0062CB1E  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
0062CB21  D9 5D 08                  FSTP float ptr [EBP + 0x8]
0062CB24  DB 45 10                  FILD dword ptr [EBP + 0x10]
0062CB27  D8 5D 08                  FCOMP float ptr [EBP + 0x8]
0062CB2A  DF E0                     FNSTSW AX
0062CB2C  F6 C4 01                  TEST AH,0x1
0062CB2F  0F 84 02 01 00 00         JZ 0x0062cc37
0062CB35  D9 45 08                  FLD float ptr [EBP + 0x8]
0062CB38  E8 4B 17 10 00            CALL 0x0072e288
0062CB3D  DB 46 41                  FILD dword ptr [ESI + 0x41]
0062CB40  89 46 14                  MOV dword ptr [ESI + 0x14],EAX
0062CB43  8B 46 3D                  MOV EAX,dword ptr [ESI + 0x3d]
0062CB46  D8 46 45                  FADD float ptr [ESI + 0x45]
0062CB49  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0062CB4C  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0062CB4F  D9 56 45                  FST float ptr [ESI + 0x45]
0062CB52  D8 0D 7C D0 79 00         FMUL float ptr [0x0079d07c]
0062CB58  DB 45 10                  FILD dword ptr [EBP + 0x10]
0062CB5B  D9 C1                     FLD ST1
0062CB5D  D9 FF                     FCOS
0062CB5F  D8 C9                     FMUL ST1
0062CB61  D9 5D 10                  FSTP float ptr [EBP + 0x10]
0062CB64  D9 C9                     FXCH
0062CB66  D9 FE                     FSIN
0062CB68  D8 C9                     FMUL ST1
0062CB6A  D9 C9                     FXCH
0062CB6C  DD D8                     FSTP ST0
0062CB6E  D9 C0                     FLD ST0
0062CB70  D8 4E 55                  FMUL float ptr [ESI + 0x55]
0062CB73  D9 45 10                  FLD float ptr [EBP + 0x10]
0062CB76  D8 4E 61                  FMUL float ptr [ESI + 0x61]
0062CB79  DE C1                     FADDP
0062CB7B  D9 45 08                  FLD float ptr [EBP + 0x8]
0062CB7E  D8 4E 49                  FMUL float ptr [ESI + 0x49]
0062CB81  DE C1                     FADDP
0062CB83  E8 00 17 10 00            CALL 0x0072e288
0062CB88  D9 C0                     FLD ST0
0062CB8A  D8 4E 59                  FMUL float ptr [ESI + 0x59]
0062CB8D  D9 45 10                  FLD float ptr [EBP + 0x10]
0062CB90  D8 4E 65                  FMUL float ptr [ESI + 0x65]
0062CB93  8B F8                     MOV EDI,EAX
0062CB95  DE C1                     FADDP
0062CB97  D9 45 08                  FLD float ptr [EBP + 0x8]
0062CB9A  D8 4E 4D                  FMUL float ptr [ESI + 0x4d]
0062CB9D  DE C1                     FADDP
0062CB9F  E8 E4 16 10 00            CALL 0x0072e288
0062CBA4  D8 4E 5D                  FMUL float ptr [ESI + 0x5d]
0062CBA7  D9 45 10                  FLD float ptr [EBP + 0x10]
0062CBAA  D8 4E 69                  FMUL float ptr [ESI + 0x69]
0062CBAD  8B D8                     MOV EBX,EAX
0062CBAF  DE C1                     FADDP
0062CBB1  D9 45 08                  FLD float ptr [EBP + 0x8]
0062CBB4  D8 4E 51                  FMUL float ptr [ESI + 0x51]
0062CBB7  DE C1                     FADDP
0062CBB9  E8 CA 16 10 00            CALL 0x0072e288
0062CBBE  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
0062CBC1  66 8B D7                  MOV DX,DI
0062CBC4  66 03 16                  ADD DX,word ptr [ESI]
0062CBC7  89 7E 18                  MOV dword ptr [ESI + 0x18],EDI
0062CBCA  89 5E 1C                  MOV dword ptr [ESI + 0x1c],EBX
0062CBCD  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
0062CBD0  66 89 11                  MOV word ptr [ECX],DX
0062CBD3  66 8B 56 04               MOV DX,word ptr [ESI + 0x4]
0062CBD7  66 03 D3                  ADD DX,BX
0062CBDA  6A 01                     PUSH 0x1
0062CBDC  66 89 51 02               MOV word ptr [ECX + 0x2],DX
0062CBE0  66 8B D0                  MOV DX,AX
0062CBE3  66 03 56 08               ADD DX,word ptr [ESI + 0x8]
0062CBE7  6A 00                     PUSH 0x0
0062CBE9  6A FF                     PUSH -0x1
0062CBEB  6A 00                     PUSH 0x0
0062CBED  66 89 51 04               MOV word ptr [ECX + 0x4],DX
0062CBF1  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
0062CBF4  6A 00                     PUSH 0x0
0062CBF6  6A 00                     PUSH 0x0
0062CBF8  6A 00                     PUSH 0x0
0062CBFA  6A 00                     PUSH 0x0
0062CBFC  03 C2                     ADD EAX,EDX
0062CBFE  6A 00                     PUSH 0x0
0062CC00  50                        PUSH EAX
0062CC01  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0062CC04  03 C3                     ADD EAX,EBX
0062CC06  8B 1E                     MOV EBX,dword ptr [ESI]
0062CC08  03 FB                     ADD EDI,EBX
0062CC0A  50                        PUSH EAX
0062CC0B  57                        PUSH EDI
0062CC0C  6A 00                     PUSH 0x0
0062CC0E  6A 00                     PUSH 0x0
0062CC10  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
0062CC16  6A 03                     PUSH 0x3
0062CC18  E8 16 48 DD FF            CALL 0x00401433
0062CC1D  D9 45 08                  FLD float ptr [EBP + 0x8]
0062CC20  D8 1D 70 D0 79 00         FCOMP float ptr [0x0079d070]
0062CC26  DF E0                     FNSTSW AX
0062CC28  F6 C4 41                  TEST AH,0x41
0062CC2B  74 0A                     JZ 0x0062cc37
0062CC2D  5F                        POP EDI
0062CC2E  5E                        POP ESI
0062CC2F  B8 01 00 00 00            MOV EAX,0x1
0062CC34  5B                        POP EBX
0062CC35  5D                        POP EBP
0062CC36  C3                        RET
LAB_0062cc37:
0062CC37  33 C0                     XOR EAX,EAX
LAB_0062cc39:
0062CC39  5F                        POP EDI
0062CC3A  5E                        POP ESI
0062CC3B  5B                        POP EBX
0062CC3C  5D                        POP EBP
0062CC3D  C3                        RET
