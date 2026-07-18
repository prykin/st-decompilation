FUN_007553f0:
007553F0  55                        PUSH EBP
007553F1  8B EC                     MOV EBP,ESP
007553F3  53                        PUSH EBX
007553F4  56                        PUSH ESI
007553F5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007553F8  57                        PUSH EDI
007553F9  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
007553FC  8B 40 50                  MOV EAX,dword ptr [EAX + 0x50]
007553FF  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
00755402  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00755405  51                        PUSH ECX
00755406  8B 4C C8 40               MOV ECX,dword ptr [EAX + ECX*0x8 + 0x40]
0075540A  51                        PUSH ECX
0075540B  56                        PUSH ESI
0075540C  E8 6F E7 FF FF            CALL 0x00753b80
00755411  8B F8                     MOV EDI,EAX
00755413  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00755416  83 CB FF                  OR EBX,0xffffffff
00755419  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
0075541C  8B 44 D0 44               MOV EAX,dword ptr [EAX + EDX*0x8 + 0x44]
00755420  3B C3                     CMP EAX,EBX
00755422  75 05                     JNZ 0x00755429
00755424  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00755427  EB 0C                     JMP 0x00755435
LAB_00755429:
00755429  0F BF 4F 08               MOVSX ECX,word ptr [EDI + 0x8]
0075542D  3B C1                     CMP EAX,ECX
0075542F  74 33                     JZ 0x00755464
00755431  8B 44 38 10               MOV EAX,dword ptr [EAX + EDI*0x1 + 0x10]
LAB_00755435:
00755435  3B C3                     CMP EAX,EBX
00755437  74 2B                     JZ 0x00755464
LAB_00755439:
00755439  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0075543C  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
0075543F  47                        INC EDI
00755440  89 79 1C                  MOV dword ptr [ECX + 0x1c],EDI
00755443  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
00755446  8B 4A 1C                  MOV ECX,dword ptr [EDX + 0x1c]
00755449  51                        PUSH ECX
0075544A  50                        PUSH EAX
0075544B  56                        PUSH ESI
0075544C  E8 2F E7 FF FF            CALL 0x00753b80
00755451  8B F8                     MOV EDI,EAX
00755453  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00755456  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
00755459  89 5C D0 44               MOV dword ptr [EAX + EDX*0x8 + 0x44],EBX
0075545D  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00755460  3B C3                     CMP EAX,EBX
00755462  75 D5                     JNZ 0x00755439
LAB_00755464:
00755464  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00755467  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0075546A  8B 54 C8 44               MOV EDX,dword ptr [EAX + ECX*0x8 + 0x44]
0075546E  52                        PUSH EDX
0075546F  56                        PUSH ESI
00755470  E8 DB 1F 00 00            CALL 0x00757450
00755475  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
00755478  0F BF 5F 08               MOVSX EBX,word ptr [EDI + 0x8]
0075547C  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
0075547F  8D 4A 1C                  LEA ECX,[EDX + 0x1c]
00755482  39 5C C2 44               CMP dword ptr [EDX + EAX*0x8 + 0x44],EBX
00755486  75 59                     JNZ 0x007554e1
00755488  85 C0                     TEST EAX,EAX
0075548A  74 3F                     JZ 0x007554cb
LAB_0075548c:
0075548C  48                        DEC EAX
0075548D  89 01                     MOV dword ptr [ECX],EAX
0075548F  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00755492  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00755495  51                        PUSH ECX
00755496  8B 44 C8 40               MOV EAX,dword ptr [EAX + ECX*0x8 + 0x40]
0075549A  50                        PUSH EAX
0075549B  56                        PUSH ESI
0075549C  E8 DF E6 FF FF            CALL 0x00753b80
007554A1  8B F8                     MOV EDI,EAX
007554A3  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
007554A6  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
007554A9  8B 54 C8 44               MOV EDX,dword ptr [EAX + ECX*0x8 + 0x44]
007554AD  52                        PUSH EDX
007554AE  56                        PUSH ESI
007554AF  E8 9C 1F 00 00            CALL 0x00757450
007554B4  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
007554B7  0F BF 5F 08               MOVSX EBX,word ptr [EDI + 0x8]
007554BB  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
007554BE  8D 4A 1C                  LEA ECX,[EDX + 0x1c]
007554C1  39 5C C2 44               CMP dword ptr [EDX + EAX*0x8 + 0x44],EBX
007554C5  75 1A                     JNZ 0x007554e1
007554C7  85 C0                     TEST EAX,EAX
007554C9  75 C1                     JNZ 0x0075548c
LAB_007554cb:
007554CB  6A 00                     PUSH 0x0
007554CD  6A 00                     PUSH 0x0
007554CF  56                        PUSH ESI
007554D0  E8 DB BA FF FF            CALL 0x00750fb0
007554D5  5F                        POP EDI
007554D6  5E                        POP ESI
007554D7  B8 FC FF FF FF            MOV EAX,0xfffffffc
007554DC  5B                        POP EBX
007554DD  5D                        POP EBP
007554DE  C2 10 00                  RET 0x10
LAB_007554e1:
007554E1  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
007554E4  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
007554E7  8B 54 C8 44               MOV EDX,dword ptr [EAX + ECX*0x8 + 0x44]
007554EB  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
007554EE  8B 44 3A 14               MOV EAX,dword ptr [EDX + EDI*0x1 + 0x14]
007554F2  8D 7C 3A 10               LEA EDI,[EDX + EDI*0x1 + 0x10]
007554F6  89 01                     MOV dword ptr [ECX],EAX
007554F8  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
007554FB  8B 17                     MOV EDX,dword ptr [EDI]
007554FD  89 10                     MOV dword ptr [EAX],EDX
007554FF  8B 76 0C                  MOV ESI,dword ptr [ESI + 0xc]
00755502  66 8B 46 34               MOV AX,word ptr [ESI + 0x34]
00755506  66 85 C0                  TEST AX,AX
00755509  74 05                     JZ 0x00755510
0075550B  0F BF F0                  MOVSX ESI,AX
0075550E  EB 09                     JMP 0x00755519
LAB_00755510:
00755510  8D 4F 08                  LEA ECX,[EDI + 0x8]
00755513  51                        PUSH ECX
00755514  FF 56 08                  CALL dword ptr [ESI + 0x8]
00755517  8B F0                     MOV ESI,EAX
LAB_00755519:
00755519  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0075551C  83 3B 01                  CMP dword ptr [EBX],0x1
0075551F  75 18                     JNZ 0x00755539
00755521  56                        PUSH ESI
00755522  E8 49 A6 F6 FF            CALL 0x006bfb70
00755527  85 C0                     TEST EAX,EAX
00755529  89 03                     MOV dword ptr [EBX],EAX
0075552B  75 0C                     JNZ 0x00755539
0075552D  5F                        POP EDI
0075552E  5E                        POP ESI
0075552F  B8 FE FF FF FF            MOV EAX,0xfffffffe
00755534  5B                        POP EBX
00755535  5D                        POP EBP
00755536  C2 10 00                  RET 0x10
LAB_00755539:
00755539  8B 03                     MOV EAX,dword ptr [EBX]
0075553B  85 C0                     TEST EAX,EAX
0075553D  74 15                     JZ 0x00755554
0075553F  8B CE                     MOV ECX,ESI
00755541  8D 77 08                  LEA ESI,[EDI + 0x8]
00755544  8B D1                     MOV EDX,ECX
00755546  8B F8                     MOV EDI,EAX
00755548  C1 E9 02                  SHR ECX,0x2
0075554B  F3 A5                     MOVSD.REP ES:EDI,ESI
0075554D  8B CA                     MOV ECX,EDX
0075554F  83 E1 03                  AND ECX,0x3
00755552  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00755554:
00755554  5F                        POP EDI
00755555  5E                        POP ESI
00755556  33 C0                     XOR EAX,EAX
00755558  5B                        POP EBX
00755559  5D                        POP EBP
0075555A  C2 10 00                  RET 0x10
