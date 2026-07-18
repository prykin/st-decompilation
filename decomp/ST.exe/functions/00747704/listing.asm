FUN_00747704:
00747704  55                        PUSH EBP
00747705  8B EC                     MOV EBP,ESP
00747707  51                        PUSH ECX
00747708  53                        PUSH EBX
00747709  56                        PUSH ESI
0074770A  57                        PUSH EDI
0074770B  33 FF                     XOR EDI,EDI
0074770D  39 7D 10                  CMP dword ptr [EBP + 0x10],EDI
00747710  75 0A                     JNZ 0x0074771c
00747712  B8 03 40 00 80            MOV EAX,0x80004003
00747717  E9 B6 00 00 00            JMP 0x007477d2
LAB_0074771c:
0074771C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0074771F  3B C7                     CMP EAX,EDI
00747721  0F 84 B2 00 00 00         JZ 0x007477d9
00747727  89 38                     MOV dword ptr [EAX],EDI
LAB_00747729:
00747729  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0074772C  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0074772F  8B CE                     MOV ECX,ESI
00747731  E8 18 07 00 00            CALL 0x00747e4e
00747736  83 F8 01                  CMP EAX,0x1
00747739  75 06                     JNZ 0x00747741
0074773B  56                        PUSH ESI
0074773C  E8 0E 01 00 00            CALL 0x0074784f
LAB_00747741:
00747741  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00747744  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00747747  2B 46 04                  SUB EAX,dword ptr [ESI + 0x4]
0074774A  3B C1                     CMP EAX,ECX
0074774C  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0074774F  7C 03                     JL 0x00747754
00747751  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_00747754:
00747754  39 7D 08                  CMP dword ptr [EBP + 0x8],EDI
00747757  75 05                     JNZ 0x0074775e
00747759  6A 01                     PUSH 0x1
0074775B  58                        POP EAX
0074775C  EB 74                     JMP 0x007477d2
LAB_0074775e:
0074775E  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00747761  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00747764  2B C8                     SUB ECX,EAX
00747766  74 53                     JZ 0x007477bb
00747768  8D 48 01                  LEA ECX,[EAX + 0x1]
0074776B  50                        PUSH EAX
0074776C  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
0074776F  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00747772  8B 11                     MOV EDX,dword ptr [ECX]
00747774  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
00747777  8B F8                     MOV EDI,EAX
00747779  85 FF                     TEST EDI,EDI
0074777B  74 37                     JZ 0x007477b4
0074777D  8D 5E 18                  LEA EBX,[ESI + 0x18]
00747780  57                        PUSH EDI
00747781  8B CB                     MOV ECX,EBX
00747783  E8 5D 67 00 00            CALL 0x0074dee5
00747788  85 C0                     TEST EAX,EAX
0074778A  75 20                     JNZ 0x007477ac
0074778C  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0074778F  8D 47 0C                  LEA EAX,[EDI + 0xc]
00747792  50                        PUSH EAX
00747793  89 01                     MOV dword ptr [ECX],EAX
00747795  8B 08                     MOV ECX,dword ptr [EAX]
00747797  FF 51 04                  CALL dword ptr [ECX + 0x4]
0074779A  FF 45 FC                  INC dword ptr [EBP + -0x4]
0074779D  83 45 10 04               ADD dword ptr [EBP + 0x10],0x4
007477A1  57                        PUSH EDI
007477A2  8B CB                     MOV ECX,EBX
007477A4  E8 C9 67 00 00            CALL 0x0074df72
007477A9  FF 4D 08                  DEC dword ptr [EBP + 0x8]
LAB_007477ac:
007477AC  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
007477B0  75 AC                     JNZ 0x0074775e
007477B2  EB 07                     JMP 0x007477bb
LAB_007477b4:
007477B4  B8 03 02 04 80            MOV EAX,0x80040203
007477B9  EB 17                     JMP 0x007477d2
LAB_007477bb:
007477BB  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
007477BE  85 C0                     TEST EAX,EAX
007477C0  74 05                     JZ 0x007477c7
007477C2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007477C5  89 08                     MOV dword ptr [EAX],ECX
LAB_007477c7:
007477C7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007477CA  33 C0                     XOR EAX,EAX
007477CC  39 4D 0C                  CMP dword ptr [EBP + 0xc],ECX
007477CF  0F 95 C0                  SETNZ AL
LAB_007477d2:
007477D2  5F                        POP EDI
007477D3  5E                        POP ESI
007477D4  5B                        POP EBX
007477D5  C9                        LEAVE
007477D6  C2 10 00                  RET 0x10
LAB_007477d9:
007477D9  83 7D 0C 01               CMP dword ptr [EBP + 0xc],0x1
007477DD  0F 86 46 FF FF FF         JBE 0x00747729
007477E3  B8 57 00 07 80            MOV EAX,0x80070057
007477E8  EB E8                     JMP 0x007477d2
