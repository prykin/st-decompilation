FUN_00691190:
00691190  55                        PUSH EBP
00691191  8B EC                     MOV EBP,ESP
00691193  83 EC 64                  SUB ESP,0x64
00691196  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0069119B  53                        PUSH EBX
0069119C  56                        PUSH ESI
0069119D  57                        PUSH EDI
0069119E  33 FF                     XOR EDI,EDI
006911A0  8D 55 A0                  LEA EDX,[EBP + -0x60]
006911A3  8D 4D 9C                  LEA ECX,[EBP + -0x64]
006911A6  57                        PUSH EDI
006911A7  52                        PUSH EDX
006911A8  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006911AB  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006911AE  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006911B1  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
006911B4  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
006911B7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006911BD  E8 2E C6 09 00            CALL 0x0072d7f0
006911C2  8B F0                     MOV ESI,EAX
006911C4  83 C4 08                  ADD ESP,0x8
006911C7  3B F7                     CMP ESI,EDI
006911C9  0F 85 A7 01 00 00         JNZ 0x00691376
006911CF  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006911D2  BA 08 00 00 00            MOV EDX,0x8
006911D7  8D 8E 85 00 00 00         LEA ECX,[ESI + 0x85]
006911DD  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
LAB_006911e0:
006911E0  8B 01                     MOV EAX,dword ptr [ECX]
006911E2  3B C7                     CMP EAX,EDI
006911E4  74 15                     JZ 0x006911fb
006911E6  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
006911E9  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
006911ED  8D 43 1C                  LEA EAX,[EBX + 0x1c]
006911F0  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006911F3  03 D8                     ADD EBX,EAX
006911F5  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
006911F8  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_006911fb:
006911FB  83 C1 0C                  ADD ECX,0xc
006911FE  4A                        DEC EDX
006911FF  75 DF                     JNZ 0x006911e0
00691201  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00691204  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00691207  05 0C 01 00 00            ADD EAX,0x10c
0069120C  50                        PUSH EAX
0069120D  89 03                     MOV dword ptr [EBX],EAX
0069120F  E8 FC 99 01 00            CALL 0x006aac10
00691214  B9 43 00 00 00            MOV ECX,0x43
00691219  8B F8                     MOV EDI,EAX
0069121B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0069121E  F3 A5                     MOVSD.REP ES:EDI,ESI
00691220  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00691223  8B 0B                     MOV ECX,dword ptr [EBX]
00691225  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
00691228  33 F6                     XOR ESI,ESI
0069122A  89 4A 14                  MOV dword ptr [EDX + 0x14],ECX
0069122D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00691230  C6 40 18 00               MOV byte ptr [EAX + 0x18],0x0
00691234  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00691237  8D B8 0B 01 00 00         LEA EDI,[EAX + 0x10b]
LAB_0069123d:
0069123D  8B 8C 06 85 00 00 00      MOV ECX,dword ptr [ESI + EAX*0x1 + 0x85]
00691244  85 C9                     TEST ECX,ECX
00691246  74 30                     JZ 0x00691278
00691248  8D 55 F8                  LEA EDX,[EBP + -0x8]
0069124B  52                        PUSH EDX
0069124C  57                        PUSH EDI
0069124D  51                        PUSH ECX
0069124E  E8 6D ED 01 00            CALL 0x006affc0
00691253  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00691256  8B CF                     MOV ECX,EDI
00691258  2B C8                     SUB ECX,EAX
0069125A  81 E9 0B 01 00 00         SUB ECX,0x10b
00691260  89 8C 06 89 00 00 00      MOV dword ptr [ESI + EAX*0x1 + 0x89],ECX
00691267  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0069126A  8B 8C 06 8D 00 00 00      MOV ECX,dword ptr [ESI + EAX*0x1 + 0x8d]
00691271  03 F9                     ADD EDI,ECX
00691273  03 D9                     ADD EBX,ECX
00691275  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
LAB_00691278:
00691278  83 C6 0C                  ADD ESI,0xc
0069127B  83 FE 60                  CMP ESI,0x60
0069127E  7C BD                     JL 0x0069123d
00691280  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00691283  80 7A 18 02               CMP byte ptr [EDX + 0x18],0x2
00691287  0F 85 D1 00 00 00         JNZ 0x0069135e
0069128D  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00691290  89 98 07 01 00 00         MOV dword ptr [EAX + 0x107],EBX
00691296  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00691299  33 D2                     XOR EDX,EDX
0069129B  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0069129E  66 89 90 05 01 00 00      MOV word ptr [EAX + 0x105],DX
006912A5  8B 09                     MOV ECX,dword ptr [ECX]
006912A7  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006912AA  85 C0                     TEST EAX,EAX
006912AC  0F 8E A9 00 00 00         JLE 0x0069135b
006912B2  3B D0                     CMP EDX,EAX
LAB_006912b4:
006912B4  73 0D                     JNC 0x006912c3
006912B6  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006912B9  8B 71 1C                  MOV ESI,dword ptr [ECX + 0x1c]
006912BC  0F AF C2                  IMUL EAX,EDX
006912BF  03 C6                     ADD EAX,ESI
006912C1  EB 02                     JMP 0x006912c5
LAB_006912c3:
006912C3  33 C0                     XOR EAX,EAX
LAB_006912c5:
006912C5  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
006912C8  85 C0                     TEST EAX,EAX
006912CA  74 05                     JZ 0x006912d1
006912CC  83 C0 20                  ADD EAX,0x20
006912CF  EB 02                     JMP 0x006912d3
LAB_006912d1:
006912D1  33 C0                     XOR EAX,EAX
LAB_006912d3:
006912D3  85 C0                     TEST EAX,EAX
006912D5  74 70                     JZ 0x00691347
006912D7  8D 55 F4                  LEA EDX,[EBP + -0xc]
006912DA  52                        PUSH EDX
006912DB  50                        PUSH EAX
006912DC  E8 E3 01 D7 FF            CALL 0x004014c4
006912E1  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006912E4  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006912E7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006912EA  83 C4 08                  ADD ESP,0x8
006912ED  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
006912F0  03 CE                     ADD ECX,ESI
006912F2  51                        PUSH ECX
006912F3  50                        PUSH EAX
006912F4  E8 57 BC 01 00            CALL 0x006acf50
006912F9  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006912FC  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
006912FF  8B D1                     MOV EDX,ECX
00691301  8D BC 03 0B 01 00 00      LEA EDI,[EBX + EAX*0x1 + 0x10b]
00691308  C1 E9 02                  SHR ECX,0x2
0069130B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0069130E  F3 A5                     MOVSD.REP ES:EDI,ESI
00691310  8B CA                     MOV ECX,EDX
00691312  83 E1 03                  AND ECX,0x3
00691315  F3 A4                     MOVSB.REP ES:EDI,ESI
00691317  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0069131A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0069131D  03 D8                     ADD EBX,EAX
0069131F  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
00691322  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00691325  03 D0                     ADD EDX,EAX
00691327  89 51 14                  MOV dword ptr [ECX + 0x14],EDX
0069132A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0069132D  66 FF 80 05 01 00 00      INC word ptr [EAX + 0x105]
00691334  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00691337  85 C0                     TEST EAX,EAX
00691339  74 09                     JZ 0x00691344
0069133B  8D 45 E8                  LEA EAX,[EBP + -0x18]
0069133E  50                        PUSH EAX
0069133F  E8 1C 9D 01 00            CALL 0x006ab060
LAB_00691344:
00691344  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
LAB_00691347:
00691347  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0069134A  42                        INC EDX
0069134B  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0069134E  8B 09                     MOV ECX,dword ptr [ECX]
00691350  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00691353  3B D0                     CMP EDX,EAX
00691355  0F 8C 59 FF FF FF         JL 0x006912b4
LAB_0069135b:
0069135B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0069135e:
0069135E  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
00691361  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00691367  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0069136A  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0069136D  89 0A                     MOV dword ptr [EDX],ECX
0069136F  5F                        POP EDI
00691370  5E                        POP ESI
00691371  5B                        POP EBX
00691372  8B E5                     MOV ESP,EBP
00691374  5D                        POP EBP
00691375  C3                        RET
LAB_00691376:
00691376  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
00691379  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0069137E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00691381  3B C7                     CMP EAX,EDI
00691383  74 09                     JZ 0x0069138e
00691385  8D 4D FC                  LEA ECX,[EBP + -0x4]
00691388  51                        PUSH ECX
00691389  E8 D2 9C 01 00            CALL 0x006ab060
LAB_0069138e:
0069138E  39 7D F0                  CMP dword ptr [EBP + -0x10],EDI
00691391  74 09                     JZ 0x0069139c
00691393  8D 55 F0                  LEA EDX,[EBP + -0x10]
00691396  52                        PUSH EDX
00691397  E8 C4 9C 01 00            CALL 0x006ab060
LAB_0069139c:
0069139C  68 20 59 7D 00            PUSH 0x7d5920
006913A1  68 CC 4C 7A 00            PUSH 0x7a4ccc
006913A6  56                        PUSH ESI
006913A7  57                        PUSH EDI
006913A8  68 8C 00 00 00            PUSH 0x8c
006913AD  68 FC 58 7D 00            PUSH 0x7d58fc
006913B2  E8 19 C1 01 00            CALL 0x006ad4d0
006913B7  83 C4 18                  ADD ESP,0x18
006913BA  85 C0                     TEST EAX,EAX
006913BC  74 01                     JZ 0x006913bf
006913BE  CC                        INT3
LAB_006913bf:
006913BF  68 8D 00 00 00            PUSH 0x8d
006913C4  68 FC 58 7D 00            PUSH 0x7d58fc
006913C9  57                        PUSH EDI
006913CA  56                        PUSH ESI
006913CB  E8 70 4A 01 00            CALL 0x006a5e40
006913D0  5F                        POP EDI
006913D1  5E                        POP ESI
006913D2  33 C0                     XOR EAX,EAX
006913D4  5B                        POP EBX
006913D5  8B E5                     MOV ESP,EBP
006913D7  5D                        POP EBP
006913D8  C3                        RET
