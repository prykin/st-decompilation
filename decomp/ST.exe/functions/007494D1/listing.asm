FUN_007494d1:
007494D1  55                        PUSH EBP
007494D2  8B EC                     MOV EBP,ESP
007494D4  83 EC 24                  SUB ESP,0x24
007494D7  53                        PUSH EBX
007494D8  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
007494DB  56                        PUSH ESI
007494DC  57                        PUSH EDI
007494DD  85 DB                     TEST EBX,EBX
007494DF  75 0A                     JNZ 0x007494eb
007494E1  B8 03 40 00 80            MOV EAX,0x80004003
007494E6  E9 CD 00 00 00            JMP 0x007495b8
LAB_007494eb:
007494EB  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007494EE  8D 46 F4                  LEA EAX,[ESI + -0xc]
007494F1  8D 4E 04                  LEA ECX,[ESI + 0x4]
007494F4  F7 D8                     NEG EAX
007494F6  1B C0                     SBB EAX,EAX
007494F8  23 C1                     AND EAX,ECX
007494FA  50                        PUSH EAX
007494FB  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
007494FE  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
00749504  33 C0                     XOR EAX,EAX
00749506  8B FB                     MOV EDI,EBX
00749508  AB                        STOSD ES:EDI
00749509  AB                        STOSD ES:EDI
0074950A  AB                        STOSD ES:EDI
0074950B  AB                        STOSD ES:EDI
0074950C  8D 45 DC                  LEA EAX,[EBP + -0x24]
0074950F  50                        PUSH EAX
00749510  FF 15 98 BB 85 00         CALL dword ptr [0x0085bb98]
00749516  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00749519  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
0074951C  85 FF                     TEST EDI,EDI
0074951E  0F 84 86 00 00 00         JZ 0x007495aa
00749524  8D 47 FF                  LEA EAX,[EDI + -0x1]
00749527  85 45 F8                  TEST dword ptr [EBP + -0x8],EAX
0074952A  75 7E                     JNZ 0x007495aa
0074952C  83 7E 44 01               CMP dword ptr [ESI + 0x44],0x1
00749530  75 10                     JNZ 0x00749542
00749532  FF 75 10                  PUSH dword ptr [EBP + 0x10]
00749535  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074953B  B8 0F 02 04 80            MOV EAX,0x8004020f
00749540  EB 76                     JMP 0x007495b8
LAB_00749542:
00749542  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
00749545  3B 46 30                  CMP EAX,dword ptr [ESI + 0x30]
00749548  7D 10                     JGE 0x0074955a
0074954A  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074954D  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00749553  B8 10 02 04 80            MOV EAX,0x80040210
00749558  EB 5E                     JMP 0x007495b8
LAB_0074955a:
0074955A  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0074955D  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
00749560  03 C2                     ADD EAX,EDX
00749562  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00749565  99                        CDQ
00749566  F7 FF                     IDIV EDI
00749568  85 D2                     TEST EDX,EDX
0074956A  74 05                     JZ 0x00749571
0074956C  2B FA                     SUB EDI,EDX
0074956E  01 7D 08                  ADD dword ptr [EBP + 0x8],EDI
LAB_00749571:
00749571  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00749574  FF 75 10                  PUSH dword ptr [EBP + 0x10]
00749577  2B 41 0C                  SUB EAX,dword ptr [ECX + 0xc]
0074957A  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
0074957D  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
00749580  8B 01                     MOV EAX,dword ptr [ECX]
00749582  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
00749585  89 03                     MOV dword ptr [EBX],EAX
00749587  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0074958A  89 46 38                  MOV dword ptr [ESI + 0x38],EAX
0074958D  89 43 08                  MOV dword ptr [EBX + 0x8],EAX
00749590  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
00749593  89 4E 3C                  MOV dword ptr [ESI + 0x3c],ECX
00749596  89 4B 0C                  MOV dword ptr [EBX + 0xc],ECX
00749599  C7 46 40 01 00 00 00      MOV dword ptr [ESI + 0x40],0x1
007495A0  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
007495A6  33 C0                     XOR EAX,EAX
007495A8  EB 0E                     JMP 0x007495b8
LAB_007495aa:
007495AA  FF 75 10                  PUSH dword ptr [EBP + 0x10]
007495AD  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
007495B3  B8 0E 02 04 80            MOV EAX,0x8004020e
LAB_007495b8:
007495B8  5F                        POP EDI
007495B9  5E                        POP ESI
007495BA  5B                        POP EBX
007495BB  C9                        LEAVE
007495BC  C2 0C 00                  RET 0xc
