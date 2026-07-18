FUN_00566600:
00566600  55                        PUSH EBP
00566601  8B EC                     MOV EBP,ESP
00566603  81 EC 64 03 00 00         SUB ESP,0x364
00566609  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0056660E  53                        PUSH EBX
0056660F  56                        PUSH ESI
00566610  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00566613  57                        PUSH EDI
00566614  8D 55 A8                  LEA EDX,[EBP + -0x58]
00566617  8D 4D A4                  LEA ECX,[EBP + -0x5c]
0056661A  6A 00                     PUSH 0x0
0056661C  52                        PUSH EDX
0056661D  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
00566624  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00566627  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056662D  E8 BE 71 1C 00            CALL 0x0072d7f0
00566632  8B F0                     MOV ESI,EAX
00566634  83 C4 08                  ADD ESP,0x8
00566637  85 F6                     TEST ESI,ESI
00566639  0F 85 02 02 00 00         JNZ 0x00566841
0056663F  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00566642  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
00566645  85 C0                     TEST EAX,EAX
00566647  0F 85 DF 01 00 00         JNZ 0x0056682c
0056664D  BF 8C 79 80 00            MOV EDI,0x80798c
00566652  83 C9 FF                  OR ECX,0xffffffff
00566655  33 C0                     XOR EAX,EAX
00566657  8D 95 A0 FE FF FF         LEA EDX,[EBP + 0xfffffea0]
0056665D  F2 AE                     SCASB.REPNE ES:EDI
0056665F  F7 D1                     NOT ECX
00566661  2B F9                     SUB EDI,ECX
00566663  8B C1                     MOV EAX,ECX
00566665  8B F7                     MOV ESI,EDI
00566667  8B FA                     MOV EDI,EDX
00566669  8D 95 A0 FE FF FF         LEA EDX,[EBP + 0xfffffea0]
0056666F  C1 E9 02                  SHR ECX,0x2
00566672  F3 A5                     MOVSD.REP ES:EDI,ESI
00566674  8B C8                     MOV ECX,EAX
00566676  83 E1 03                  AND ECX,0x3
00566679  F3 A4                     MOVSB.REP ES:EDI,ESI
0056667B  8D 8D A0 FE FF FF         LEA ECX,[EBP + 0xfffffea0]
00566681  51                        PUSH ECX
00566682  52                        PUSH EDX
00566683  E8 F8 1B 15 00            CALL 0x006b8280
00566688  8B 3D 0C B0 79 00         MOV EDI,dword ptr [0x0079b00c]
0056668E  83 C9 FF                  OR ECX,0xffffffff
00566691  33 C0                     XOR EAX,EAX
00566693  8D 95 A0 FE FF FF         LEA EDX,[EBP + 0xfffffea0]
00566699  F2 AE                     SCASB.REPNE ES:EDI
0056669B  F7 D1                     NOT ECX
0056669D  2B F9                     SUB EDI,ECX
0056669F  50                        PUSH EAX
005666A0  8B F7                     MOV ESI,EDI
005666A2  8B FA                     MOV EDI,EDX
005666A4  8B D1                     MOV EDX,ECX
005666A6  83 C9 FF                  OR ECX,0xffffffff
005666A9  F2 AE                     SCASB.REPNE ES:EDI
005666AB  8B CA                     MOV ECX,EDX
005666AD  4F                        DEC EDI
005666AE  C1 E9 02                  SHR ECX,0x2
005666B1  F3 A5                     MOVSD.REP ES:EDI,ESI
005666B3  8B CA                     MOV ECX,EDX
005666B5  50                        PUSH EAX
005666B6  8D 85 A0 FE FF FF         LEA EAX,[EBP + 0xfffffea0]
005666BC  83 E1 03                  AND ECX,0x3
005666BF  6A 03                     PUSH 0x3
005666C1  50                        PUSH EAX
005666C2  F3 A4                     MOVSB.REP ES:EDI,ESI
005666C4  68 45 03 00 00            PUSH 0x345
005666C9  E8 F2 A7 18 00            CALL 0x006f0ec0
005666CE  8B D0                     MOV EDX,EAX
005666D0  83 C9 FF                  OR ECX,0xffffffff
005666D3  89 53 18                  MOV dword ptr [EBX + 0x18],EDX
005666D6  8B 3D 10 B0 79 00         MOV EDI,dword ptr [0x0079b010]
005666DC  33 C0                     XOR EAX,EAX
005666DE  83 C4 14                  ADD ESP,0x14
005666E1  F2 AE                     SCASB.REPNE ES:EDI
005666E3  F7 D1                     NOT ECX
005666E5  8D B5 9D FC FF FF         LEA ESI,[EBP + 0xfffffc9d]
005666EB  2B F9                     SUB EDI,ECX
005666ED  8B C1                     MOV EAX,ECX
005666EF  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
005666F2  8B F7                     MOV ESI,EDI
005666F4  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
005666F7  C1 E9 02                  SHR ECX,0x2
005666FA  C6 85 9C FC FF FF 0C      MOV byte ptr [EBP + 0xfffffc9c],0xc
00566701  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00566704  F3 A5                     MOVSD.REP ES:EDI,ESI
00566706  8B C8                     MOV ECX,EAX
00566708  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0056670F  83 E1 03                  AND ECX,0x3
00566712  F3 A4                     MOVSB.REP ES:EDI,ESI
00566714  8D 8D 9C FC FF FF         LEA ECX,[EBP + 0xfffffc9c]
0056671A  51                        PUSH ECX
0056671B  68 10 2D 6F 00            PUSH 0x6f2d10
00566720  8B CA                     MOV ECX,EDX
00566722  E8 89 AB 18 00            CALL 0x006f12b0
00566727  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0056672A  8B CE                     MOV ECX,ESI
0056672C  E8 5F C0 18 00            CALL 0x006f2790
00566731  85 C0                     TEST EAX,EAX
00566733  74 12                     JZ 0x00566747
LAB_00566735:
00566735  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00566738  8B CE                     MOV ECX,ESI
0056673A  42                        INC EDX
0056673B  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0056673E  E8 4D C0 18 00            CALL 0x006f2790
00566743  85 C0                     TEST EAX,EAX
00566745  75 EE                     JNZ 0x00566735
LAB_00566747:
00566747  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0056674A  85 FF                     TEST EDI,EDI
0056674C  75 15                     JNZ 0x00566763
0056674E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00566754  6A 25                     PUSH 0x25
00566756  68 48 97 7C 00            PUSH 0x7c9748
0056675B  52                        PUSH EDX
0056675C  6A FC                     PUSH -0x4
0056675E  E8 DD F6 13 00            CALL 0x006a5e40
LAB_00566763:
00566763  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00566766  85 F6                     TEST ESI,ESI
00566768  74 09                     JZ 0x00566773
0056676A  7D 14                     JGE 0x00566780
0056676C  8B 43 28                  MOV EAX,dword ptr [EBX + 0x28]
0056676F  85 C0                     TEST EAX,EAX
00566771  7F 0D                     JG 0x00566780
LAB_00566773:
00566773  E8 48 7F 1C 00            CALL 0x0072e6c0
00566778  33 D2                     XOR EDX,EDX
0056677A  F7 F7                     DIV EDI
0056677C  42                        INC EDX
0056677D  89 53 28                  MOV dword ptr [EBX + 0x28],EDX
LAB_00566780:
00566780  85 F6                     TEST ESI,ESI
00566782  7E 03                     JLE 0x00566787
00566784  89 73 28                  MOV dword ptr [EBX + 0x28],ESI
LAB_00566787:
00566787  8B 43 28                  MOV EAX,dword ptr [EBX + 0x28]
0056678A  8B 0D 10 B0 79 00         MOV ECX,dword ptr [0x0079b010]
00566790  6A 00                     PUSH 0x0
00566792  6A 00                     PUSH 0x0
00566794  50                        PUSH EAX
00566795  6A 01                     PUSH 0x1
00566797  51                        PUSH ECX
00566798  E8 63 C4 18 00            CALL 0x006f2c00
0056679D  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
005667A0  83 C4 0C                  ADD ESP,0xc
005667A3  50                        PUSH EAX
005667A4  52                        PUSH EDX
005667A5  E8 E6 C5 18 00            CALL 0x006f2d90
005667AA  83 C4 10                  ADD ESP,0x10
005667AD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005667B0  85 C0                     TEST EAX,EAX
005667B2  74 17                     JZ 0x005667cb
LAB_005667b4:
005667B4  8B C8                     MOV ECX,EAX
005667B6  8D 53 2C                  LEA EDX,[EBX + 0x2c]
005667B9  8B 31                     MOV ESI,dword ptr [ECX]
005667BB  89 32                     MOV dword ptr [EDX],ESI
005667BD  8B 71 04                  MOV ESI,dword ptr [ECX + 0x4]
005667C0  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
005667C3  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
005667C6  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
005667C9  EB 51                     JMP 0x0056681c
LAB_005667cb:
005667CB  E8 F0 7E 1C 00            CALL 0x0072e6c0
005667D0  33 D2                     XOR EDX,EDX
005667D2  6A 00                     PUSH 0x0
005667D4  F7 F7                     DIV EDI
005667D6  6A 00                     PUSH 0x0
005667D8  8D 42 01                  LEA EAX,[EDX + 0x1]
005667DB  89 43 28                  MOV dword ptr [EBX + 0x28],EAX
005667DE  8B 15 10 B0 79 00         MOV EDX,dword ptr [0x0079b010]
005667E4  50                        PUSH EAX
005667E5  6A 01                     PUSH 0x1
005667E7  52                        PUSH EDX
005667E8  E8 13 C4 18 00            CALL 0x006f2c00
005667ED  83 C4 0C                  ADD ESP,0xc
005667F0  50                        PUSH EAX
005667F1  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
005667F4  50                        PUSH EAX
005667F5  E8 96 C5 18 00            CALL 0x006f2d90
005667FA  83 C4 10                  ADD ESP,0x10
005667FD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00566800  85 C0                     TEST EAX,EAX
00566802  75 B0                     JNZ 0x005667b4
00566804  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0056680A  6A 32                     PUSH 0x32
0056680C  68 48 97 7C 00            PUSH 0x7c9748
00566811  52                        PUSH EDX
00566812  6A FC                     PUSH -0x4
00566814  E8 27 F6 13 00            CALL 0x006a5e40
00566819  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0056681c:
0056681C  85 C0                     TEST EAX,EAX
0056681E  74 0C                     JZ 0x0056682c
00566820  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
00566823  8D 45 FC                  LEA EAX,[EBP + -0x4]
00566826  50                        PUSH EAX
00566827  E8 B4 B8 18 00            CALL 0x006f20e0
LAB_0056682c:
0056682C  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
0056682F  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00566832  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00566838  5F                        POP EDI
00566839  5E                        POP ESI
0056683A  5B                        POP EBX
0056683B  8B E5                     MOV ESP,EBP
0056683D  5D                        POP EBP
0056683E  C2 04 00                  RET 0x4
LAB_00566841:
00566841  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
00566844  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00566847  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0056684D  E8 AF D3 E9 FF            CALL 0x00403c01
00566852  8B C6                     MOV EAX,ESI
00566854  5F                        POP EDI
00566855  5E                        POP ESI
00566856  5B                        POP EBX
00566857  8B E5                     MOV ESP,EBP
00566859  5D                        POP EBP
0056685A  C2 04 00                  RET 0x4
