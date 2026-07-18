FUN_004803d0:
004803D0  55                        PUSH EBP
004803D1  8B EC                     MOV EBP,ESP
004803D3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004803D6  56                        PUSH ESI
004803D7  85 D2                     TEST EDX,EDX
004803D9  57                        PUSH EDI
004803DA  8B F1                     MOV ESI,ECX
004803DC  74 05                     JZ 0x004803e3
004803DE  83 FA 01                  CMP EDX,0x1
004803E1  75 6D                     JNZ 0x00480450
LAB_004803e3:
004803E3  B9 17 00 00 00            MOV ECX,0x17
004803E8  33 C0                     XOR EAX,EAX
004803EA  8D BE CC 02 00 00         LEA EDI,[ESI + 0x2cc]
004803F0  F3 AB                     STOSD.REP ES:EDI
004803F2  89 86 C4 02 00 00         MOV dword ptr [ESI + 0x2c4],EAX
004803F8  8B 86 CA 07 00 00         MOV EAX,dword ptr [ESI + 0x7ca]
004803FE  85 C0                     TEST EAX,EAX
00480400  74 08                     JZ 0x0048040a
00480402  5F                        POP EDI
00480403  33 C0                     XOR EAX,EAX
00480405  5E                        POP ESI
00480406  5D                        POP EBP
00480407  C2 04 00                  RET 0x4
LAB_0048040a:
0048040A  66 8B 86 4B 04 00 00      MOV AX,word ptr [ESI + 0x44b]
00480411  66 8B 8E 4D 04 00 00      MOV CX,word ptr [ESI + 0x44d]
00480418  66 89 86 BA 03 00 00      MOV word ptr [ESI + 0x3ba],AX
0048041F  66 8B 86 4F 04 00 00      MOV AX,word ptr [ESI + 0x44f]
00480426  66 89 86 BE 03 00 00      MOV word ptr [ESI + 0x3be],AX
0048042D  8B 86 51 04 00 00         MOV EAX,dword ptr [ESI + 0x451]
00480433  66 89 8E BC 03 00 00      MOV word ptr [ESI + 0x3bc],CX
0048043A  89 86 C0 03 00 00         MOV dword ptr [ESI + 0x3c0],EAX
00480440  89 86 EB 06 00 00         MOV dword ptr [ESI + 0x6eb],EAX
00480446  C7 86 EF 06 00 00 00 00 00 00  MOV dword ptr [ESI + 0x6ef],0x0
LAB_00480450:
00480450  8B 86 EF 06 00 00         MOV EAX,dword ptr [ESI + 0x6ef]
00480456  85 C0                     TEST EAX,EAX
00480458  75 3F                     JNZ 0x00480499
0048045A  52                        PUSH EDX
0048045B  8B CE                     MOV ECX,ESI
0048045D  E8 BA 49 F8 FF            CALL 0x00404e1c
00480462  83 F8 FF                  CMP EAX,-0x1
00480465  74 2C                     JZ 0x00480493
00480467  85 C0                     TEST EAX,EAX
00480469  75 28                     JNZ 0x00480493
0048046B  8B 86 CA 07 00 00         MOV EAX,dword ptr [ESI + 0x7ca]
00480471  85 C0                     TEST EAX,EAX
00480473  75 08                     JNZ 0x0048047d
00480475  5F                        POP EDI
00480476  33 C0                     XOR EAX,EAX
00480478  5E                        POP ESI
00480479  5D                        POP EBP
0048047A  C2 04 00                  RET 0x4
LAB_0048047d:
0048047D  B8 01 00 00 00            MOV EAX,0x1
00480482  89 86 EF 06 00 00         MOV dword ptr [ESI + 0x6ef],EAX
00480488  89 86 CE 07 00 00         MOV dword ptr [ESI + 0x7ce],EAX
LAB_0048048e:
0048048E  B8 02 00 00 00            MOV EAX,0x2
LAB_00480493:
00480493  5F                        POP EDI
00480494  5E                        POP ESI
00480495  5D                        POP EBP
00480496  C2 04 00                  RET 0x4
LAB_00480499:
00480499  83 F8 01                  CMP EAX,0x1
0048049C  0F 85 91 00 00 00         JNZ 0x00480533
004804A2  8B 16                     MOV EDX,dword ptr [ESI]
004804A4  8B CE                     MOV ECX,ESI
004804A6  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
004804AC  85 C0                     TEST EAX,EAX
004804AE  74 09                     JZ 0x004804b9
004804B0  5F                        POP EDI
004804B1  83 C8 FF                  OR EAX,0xffffffff
004804B4  5E                        POP ESI
004804B5  5D                        POP EBP
004804B6  C2 04 00                  RET 0x4
LAB_004804b9:
004804B9  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004804BF  33 D2                     XOR EDX,EDX
004804C1  BF 25 00 00 00            MOV EDI,0x25
004804C6  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
004804CC  F7 F7                     DIV EDI
004804CE  85 D2                     TEST EDX,EDX
004804D0  75 BC                     JNZ 0x0048048e
004804D2  8B 96 CA 07 00 00         MOV EDX,dword ptr [ESI + 0x7ca]
004804D8  8D 45 08                  LEA EAX,[EBP + 0x8]
004804DB  50                        PUSH EAX
004804DC  52                        PUSH EDX
004804DD  E8 EE 5D 26 00            CALL 0x006e62d0
004804E2  83 F8 FC                  CMP EAX,-0x4
004804E5  75 08                     JNZ 0x004804ef
004804E7  5F                        POP EDI
004804E8  33 C0                     XOR EAX,EAX
004804EA  5E                        POP ESI
004804EB  5D                        POP EBP
004804EC  C2 04 00                  RET 0x4
LAB_004804ef:
004804EF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004804F2  8B 88 16 07 00 00         MOV ECX,dword ptr [EAX + 0x716]
004804F8  8B 90 12 07 00 00         MOV EDX,dword ptr [EAX + 0x712]
004804FE  3B CA                     CMP ECX,EDX
00480500  75 8C                     JNZ 0x0048048e
00480502  83 C8 FF                  OR EAX,0xffffffff
00480505  6A 01                     PUSH 0x1
00480507  8B CE                     MOV ECX,ESI
00480509  66 89 86 D2 03 00 00      MOV word ptr [ESI + 0x3d2],AX
00480510  66 89 86 D0 03 00 00      MOV word ptr [ESI + 0x3d0],AX
00480517  66 89 86 CE 03 00 00      MOV word ptr [ESI + 0x3ce],AX
0048051E  C7 86 EF 06 00 00 02 00 00 00  MOV dword ptr [ESI + 0x6ef],0x2
00480528  E8 81 0C F8 FF            CALL 0x004011ae
0048052D  5F                        POP EDI
0048052E  5E                        POP ESI
0048052F  5D                        POP EBP
00480530  C2 04 00                  RET 0x4
LAB_00480533:
00480533  83 F8 02                  CMP EAX,0x2
00480536  0F 85 52 FF FF FF         JNZ 0x0048048e
0048053C  50                        PUSH EAX
0048053D  8B CE                     MOV ECX,ESI
0048053F  E8 6A 0C F8 FF            CALL 0x004011ae
00480544  5F                        POP EDI
00480545  5E                        POP ESI
00480546  5D                        POP EBP
00480547  C2 04 00                  RET 0x4
