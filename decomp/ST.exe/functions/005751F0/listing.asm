FUN_005751f0:
005751F0  55                        PUSH EBP
005751F1  8B EC                     MOV EBP,ESP
005751F3  83 EC 50                  SUB ESP,0x50
005751F6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005751FB  53                        PUSH EBX
005751FC  56                        PUSH ESI
005751FD  57                        PUSH EDI
005751FE  33 FF                     XOR EDI,EDI
00575200  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00575203  8D 4D B0                  LEA ECX,[EBP + -0x50]
00575206  57                        PUSH EDI
00575207  52                        PUSH EDX
00575208  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0057520B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00575211  E8 DA 85 1B 00            CALL 0x0072d7f0
00575216  8B F0                     MOV ESI,EAX
00575218  83 C4 08                  ADD ESP,0x8
0057521B  3B F7                     CMP ESI,EDI
0057521D  0F 85 74 01 00 00         JNZ 0x00575397
00575223  68 F2 04 00 00            PUSH 0x4f2
00575228  E8 A3 B2 13 00            CALL 0x006b04d0
0057522D  3B C7                     CMP EAX,EDI
0057522F  74 09                     JZ 0x0057523a
00575231  8B C8                     MOV ECX,EAX
00575233  E8 68 6A 16 00            CALL 0x006dbca0
00575238  EB 02                     JMP 0x0057523c
LAB_0057523a:
0057523A  33 C0                     XOR EAX,EAX
LAB_0057523c:
0057523C  3B C7                     CMP EAX,EDI
0057523E  A3 0C 76 80 00            MOV [0x0080760c],EAX
00575243  75 1C                     JNZ 0x00575261
00575245  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0057524A  68 60 01 00 00            PUSH 0x160
0057524F  68 D0 A6 7C 00            PUSH 0x7ca6d0
00575254  50                        PUSH EAX
00575255  6A FE                     PUSH -0x2
00575257  E8 E4 0B 13 00            CALL 0x006a5e40
0057525C  A1 0C 76 80 00            MOV EAX,[0x0080760c]
LAB_00575261:
00575261  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00575264  57                        PUSH EDI
00575265  68 97 EE 23 40            PUSH 0x4023ee97
0057526A  68 40 35 5E 86            PUSH 0x865e3540
0057526F  68 00 00 24 40            PUSH 0x40240000
00575274  57                        PUSH EDI
00575275  68 00 00 24 40            PUSH 0x40240000
0057527A  57                        PUSH EDI
0057527B  33 D2                     XOR EDX,EDX
0057527D  68 00 00 24 C0            PUSH 0xc0240000
00575282  8A 56 04                  MOV DL,byte ptr [ESI + 0x4]
00575285  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
0057528B  57                        PUSH EDI
0057528C  68 00 00 24 40            PUSH 0x40240000
00575291  57                        PUSH EDI
00575292  68 00 00 24 C0            PUSH 0xc0240000
00575297  D1 E2                     SHL EDX,0x1
00575299  57                        PUSH EDI
0057529A  52                        PUSH EDX
0057529B  52                        PUSH EDX
0057529C  57                        PUSH EDI
0057529D  57                        PUSH EDI
0057529E  51                        PUSH ECX
0057529F  8B C8                     MOV ECX,EAX
005752A1  E8 AA 6D 16 00            CALL 0x006dc050
005752A6  8B 15 0C 76 80 00         MOV EDX,dword ptr [0x0080760c]
005752AC  68 00 00 24 40            PUSH 0x40240000
005752B1  57                        PUSH EDI
005752B2  68 00 00 24 40            PUSH 0x40240000
005752B7  89 BA 28 01 00 00         MOV dword ptr [EDX + 0x128],EDI
005752BD  8B 0D 0C 76 80 00         MOV ECX,dword ptr [0x0080760c]
005752C3  57                        PUSH EDI
005752C4  6A 04                     PUSH 0x4
005752C6  E8 45 83 16 00            CALL 0x006dd610
005752CB  6A 14                     PUSH 0x14
005752CD  6A 08                     PUSH 0x8
005752CF  6A 14                     PUSH 0x14
005752D1  57                        PUSH EDI
005752D2  E8 B9 8F 13 00            CALL 0x006ae290
005752D7  6A 14                     PUSH 0x14
005752D9  6A 0C                     PUSH 0xc
005752DB  6A 14                     PUSH 0x14
005752DD  57                        PUSH EDI
005752DE  89 86 4D 04 00 00         MOV dword ptr [ESI + 0x44d],EAX
005752E4  E8 A7 8F 13 00            CALL 0x006ae290
005752E9  89 86 51 04 00 00         MOV dword ptr [ESI + 0x451],EAX
005752EF  8B 86 55 04 00 00         MOV EAX,dword ptr [ESI + 0x455]
005752F5  3B C7                     CMP EAX,EDI
005752F7  7E 24                     JLE 0x0057531d
005752F9  8D 9E 59 04 00 00         LEA EBX,[ESI + 0x459]
LAB_005752ff:
005752FF  8B 03                     MOV EAX,dword ptr [EBX]
00575301  85 C0                     TEST EAX,EAX
00575303  74 0A                     JZ 0x0057530f
00575305  50                        PUSH EAX
00575306  56                        PUSH ESI
00575307  E8 B6 C3 E8 FF            CALL 0x004016c2
0057530C  83 C4 08                  ADD ESP,0x8
LAB_0057530f:
0057530F  8B 86 55 04 00 00         MOV EAX,dword ptr [ESI + 0x455]
00575315  47                        INC EDI
00575316  83 C3 04                  ADD EBX,0x4
00575319  3B F8                     CMP EDI,EAX
0057531B  7C E2                     JL 0x005752ff
LAB_0057531d:
0057531D  0F BF 06                  MOVSX EAX,word ptr [ESI]
00575320  99                        CDQ
00575321  2B C2                     SUB EAX,EDX
00575323  8B D8                     MOV EBX,EAX
00575325  0F BF 46 02               MOVSX EAX,word ptr [ESI + 0x2]
00575329  99                        CDQ
0057532A  2B C2                     SUB EAX,EDX
0057532C  8B F8                     MOV EDI,EAX
0057532E  33 C0                     XOR EAX,EAX
00575330  8A 46 04                  MOV AL,byte ptr [ESI + 0x4]
00575333  8B C8                     MOV ECX,EAX
00575335  0F AF C8                  IMUL ECX,EAX
00575338  D1 FF                     SAR EDI,0x1
0057533A  51                        PUSH ECX
0057533B  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0057533E  D1 FB                     SAR EBX,0x1
00575340  E8 2B 59 13 00            CALL 0x006aac70
00575345  85 FF                     TEST EDI,EDI
00575347  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0057534A  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00575351  7E 2B                     JLE 0x0057537e
LAB_00575353:
00575353  33 FF                     XOR EDI,EDI
00575355  85 DB                     TEST EBX,EBX
00575357  7E 17                     JLE 0x00575370
LAB_00575359:
00575359  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0057535C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0057535F  52                        PUSH EDX
00575360  50                        PUSH EAX
00575361  57                        PUSH EDI
00575362  56                        PUSH ESI
00575363  E8 11 F8 E8 FF            CALL 0x00404b79
00575368  83 C4 10                  ADD ESP,0x10
0057536B  47                        INC EDI
0057536C  3B FB                     CMP EDI,EBX
0057536E  7C E9                     JL 0x00575359
LAB_00575370:
00575370  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00575373  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00575376  40                        INC EAX
00575377  3B C1                     CMP EAX,ECX
00575379  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0057537C  7C D5                     JL 0x00575353
LAB_0057537e:
0057537E  8D 4D FC                  LEA ECX,[EBP + -0x4]
00575381  51                        PUSH ECX
00575382  E8 D9 5C 13 00            CALL 0x006ab060
00575387  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0057538A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00575390  5F                        POP EDI
00575391  5E                        POP ESI
00575392  5B                        POP EBX
00575393  8B E5                     MOV ESP,EBP
00575395  5D                        POP EBP
00575396  C3                        RET
LAB_00575397:
00575397  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0057539A  68 14 A7 7C 00            PUSH 0x7ca714
0057539F  68 CC 4C 7A 00            PUSH 0x7a4ccc
005753A4  56                        PUSH ESI
005753A5  57                        PUSH EDI
005753A6  68 7B 01 00 00            PUSH 0x17b
005753AB  68 D0 A6 7C 00            PUSH 0x7ca6d0
005753B0  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005753B5  E8 16 81 13 00            CALL 0x006ad4d0
005753BA  83 C4 18                  ADD ESP,0x18
005753BD  85 C0                     TEST EAX,EAX
005753BF  74 01                     JZ 0x005753c2
005753C1  CC                        INT3
LAB_005753c2:
005753C2  68 7C 01 00 00            PUSH 0x17c
005753C7  68 D0 A6 7C 00            PUSH 0x7ca6d0
005753CC  57                        PUSH EDI
005753CD  56                        PUSH ESI
005753CE  E8 6D 0A 13 00            CALL 0x006a5e40
005753D3  5F                        POP EDI
005753D4  5E                        POP ESI
005753D5  5B                        POP EBX
005753D6  8B E5                     MOV ESP,EBP
005753D8  5D                        POP EBP
005753D9  C3                        RET
