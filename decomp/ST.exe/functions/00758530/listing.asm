FUN_00758530:
00758530  55                        PUSH EBP
00758531  8B EC                     MOV EBP,ESP
00758533  51                        PUSH ECX
00758534  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00758537  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075853A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0075853D  53                        PUSH EBX
0075853E  8B 58 10                  MOV EBX,dword ptr [EAX + 0x10]
00758541  56                        PUSH ESI
00758542  57                        PUSH EDI
00758543  8B 73 04                  MOV ESI,dword ptr [EBX + 0x4]
00758546  8B 3B                     MOV EDI,dword ptr [EBX]
00758548  85 F6                     TEST ESI,ESI
0075854A  89 88 D4 00 00 00         MOV dword ptr [EAX + 0xd4],ECX
00758550  89 90 D8 00 00 00         MOV dword ptr [EAX + 0xd8],EDX
00758556  75 14                     JNZ 0x0075856c
00758558  50                        PUSH EAX
00758559  FF 53 0C                  CALL dword ptr [EBX + 0xc]
0075855C  85 C0                     TEST EAX,EAX
0075855E  0F 84 85 02 00 00         JZ 0x007587e9
00758564  8B 3B                     MOV EDI,dword ptr [EBX]
00758566  8B 73 04                  MOV ESI,dword ptr [EBX + 0x4]
00758569  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_0075856c:
0075856C  33 C9                     XOR ECX,ECX
0075856E  4E                        DEC ESI
0075856F  8A 2F                     MOV CH,byte ptr [EDI]
00758571  47                        INC EDI
00758572  85 F6                     TEST ESI,ESI
00758574  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00758577  75 14                     JNZ 0x0075858d
00758579  50                        PUSH EAX
0075857A  FF 53 0C                  CALL dword ptr [EBX + 0xc]
0075857D  85 C0                     TEST EAX,EAX
0075857F  0F 84 64 02 00 00         JZ 0x007587e9
00758585  8B 3B                     MOV EDI,dword ptr [EBX]
00758587  8B 73 04                  MOV ESI,dword ptr [EBX + 0x4]
0075858A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_0075858d:
0075858D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00758590  33 D2                     XOR EDX,EDX
00758592  8A 17                     MOV DL,byte ptr [EDI]
00758594  4E                        DEC ESI
00758595  03 CA                     ADD ECX,EDX
00758597  47                        INC EDI
00758598  85 F6                     TEST ESI,ESI
0075859A  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0075859D  75 14                     JNZ 0x007585b3
0075859F  50                        PUSH EAX
007585A0  FF 53 0C                  CALL dword ptr [EBX + 0xc]
007585A3  85 C0                     TEST EAX,EAX
007585A5  0F 84 3E 02 00 00         JZ 0x007587e9
007585AB  8B 3B                     MOV EDI,dword ptr [EBX]
007585AD  8B 73 04                  MOV ESI,dword ptr [EBX + 0x4]
007585B0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_007585b3:
007585B3  33 C9                     XOR ECX,ECX
007585B5  4E                        DEC ESI
007585B6  8A 0F                     MOV CL,byte ptr [EDI]
007585B8  47                        INC EDI
007585B9  85 F6                     TEST ESI,ESI
007585BB  89 88 CC 00 00 00         MOV dword ptr [EAX + 0xcc],ECX
007585C1  75 14                     JNZ 0x007585d7
007585C3  50                        PUSH EAX
007585C4  FF 53 0C                  CALL dword ptr [EBX + 0xc]
007585C7  85 C0                     TEST EAX,EAX
007585C9  0F 84 1A 02 00 00         JZ 0x007587e9
007585CF  8B 3B                     MOV EDI,dword ptr [EBX]
007585D1  8B 73 04                  MOV ESI,dword ptr [EBX + 0x4]
007585D4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_007585d7:
007585D7  33 D2                     XOR EDX,EDX
007585D9  4E                        DEC ESI
007585DA  8A 37                     MOV DH,byte ptr [EDI]
007585DC  47                        INC EDI
007585DD  85 F6                     TEST ESI,ESI
007585DF  89 50 18                  MOV dword ptr [EAX + 0x18],EDX
007585E2  75 14                     JNZ 0x007585f8
007585E4  50                        PUSH EAX
007585E5  FF 53 0C                  CALL dword ptr [EBX + 0xc]
007585E8  85 C0                     TEST EAX,EAX
007585EA  0F 84 F9 01 00 00         JZ 0x007587e9
007585F0  8B 3B                     MOV EDI,dword ptr [EBX]
007585F2  8B 73 04                  MOV ESI,dword ptr [EBX + 0x4]
007585F5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_007585f8:
007585F8  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
007585FB  33 C9                     XOR ECX,ECX
007585FD  8A 0F                     MOV CL,byte ptr [EDI]
007585FF  4E                        DEC ESI
00758600  03 D1                     ADD EDX,ECX
00758602  47                        INC EDI
00758603  85 F6                     TEST ESI,ESI
00758605  89 50 18                  MOV dword ptr [EAX + 0x18],EDX
00758608  75 14                     JNZ 0x0075861e
0075860A  50                        PUSH EAX
0075860B  FF 53 0C                  CALL dword ptr [EBX + 0xc]
0075860E  85 C0                     TEST EAX,EAX
00758610  0F 84 D3 01 00 00         JZ 0x007587e9
00758616  8B 3B                     MOV EDI,dword ptr [EBX]
00758618  8B 73 04                  MOV ESI,dword ptr [EBX + 0x4]
0075861B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_0075861e:
0075861E  33 D2                     XOR EDX,EDX
00758620  4E                        DEC ESI
00758621  8A 37                     MOV DH,byte ptr [EDI]
00758623  47                        INC EDI
00758624  85 F6                     TEST ESI,ESI
00758626  89 50 14                  MOV dword ptr [EAX + 0x14],EDX
00758629  75 14                     JNZ 0x0075863f
0075862B  50                        PUSH EAX
0075862C  FF 53 0C                  CALL dword ptr [EBX + 0xc]
0075862F  85 C0                     TEST EAX,EAX
00758631  0F 84 B2 01 00 00         JZ 0x007587e9
00758637  8B 3B                     MOV EDI,dword ptr [EBX]
00758639  8B 73 04                  MOV ESI,dword ptr [EBX + 0x4]
0075863C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_0075863f:
0075863F  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
00758642  33 C9                     XOR ECX,ECX
00758644  8A 0F                     MOV CL,byte ptr [EDI]
00758646  4E                        DEC ESI
00758647  03 D1                     ADD EDX,ECX
00758649  47                        INC EDI
0075864A  85 F6                     TEST ESI,ESI
0075864C  89 50 14                  MOV dword ptr [EAX + 0x14],EDX
0075864F  75 14                     JNZ 0x00758665
00758651  50                        PUSH EAX
00758652  FF 53 0C                  CALL dword ptr [EBX + 0xc]
00758655  85 C0                     TEST EAX,EAX
00758657  0F 84 8C 01 00 00         JZ 0x007587e9
0075865D  8B 3B                     MOV EDI,dword ptr [EBX]
0075865F  8B 73 04                  MOV ESI,dword ptr [EBX + 0x4]
00758662  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_00758665:
00758665  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00758668  33 D2                     XOR EDX,EDX
0075866A  8A 17                     MOV DL,byte ptr [EDI]
0075866C  83 E9 08                  SUB ECX,0x8
0075866F  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00758672  8B 88 A6 01 00 00         MOV ECX,dword ptr [EAX + 0x1a6]
00758678  89 50 1C                  MOV dword ptr [EAX + 0x1c],EDX
0075867B  4E                        DEC ESI
0075867C  8B 51 54                  MOV EDX,dword ptr [ECX + 0x54]
0075867F  47                        INC EDI
00758680  85 D2                     TEST EDX,EDX
00758682  74 1B                     JZ 0x0075869f
00758684  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0075868A  68 EA 00 00 00            PUSH 0xea
0075868F  68 B0 2D 7F 00            PUSH 0x7f2db0
00758694  52                        PUSH EDX
00758695  6A 39                     PUSH 0x39
00758697  E8 A4 D7 F4 FF            CALL 0x006a5e40
0075869C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_0075869f:
0075869F  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
007586A2  85 C9                     TEST ECX,ECX
007586A4  76 0E                     JBE 0x007586b4
007586A6  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
007586A9  85 C9                     TEST ECX,ECX
007586AB  76 07                     JBE 0x007586b4
007586AD  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
007586B0  85 C9                     TEST ECX,ECX
007586B2  7F 1A                     JG 0x007586ce
LAB_007586b4:
007586B4  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
007586B9  68 F1 00 00 00            PUSH 0xf1
007586BE  68 B0 2D 7F 00            PUSH 0x7f2db0
007586C3  50                        PUSH EAX
007586C4  6A 1F                     PUSH 0x1f
007586C6  E8 75 D7 F4 FF            CALL 0x006a5e40
007586CB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_007586ce:
007586CE  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
007586D1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007586D4  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
007586D7  3B D1                     CMP EDX,ECX
007586D9  74 1B                     JZ 0x007586f6
007586DB  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
007586E1  68 F4 00 00 00            PUSH 0xf4
007586E6  68 B0 2D 7F 00            PUSH 0x7f2db0
007586EB  52                        PUSH EDX
007586EC  6A 09                     PUSH 0x9
007586EE  E8 4D D7 F4 FF            CALL 0x006a5e40
007586F3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_007586f6:
007586F6  8B 88 D0 00 00 00         MOV ECX,dword ptr [EAX + 0xd0]
007586FC  85 C9                     TEST ECX,ECX
007586FE  75 28                     JNZ 0x00758728
00758700  8B 10                     MOV EDX,dword ptr [EAX]
00758702  8B 40 1C                  MOV EAX,dword ptr [EAX + 0x1c]
00758705  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
0075870C  2B C8                     SUB ECX,EAX
0075870E  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
00758711  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00758714  C1 E0 02                  SHL EAX,0x2
00758717  50                        PUSH EAX
00758718  6A 01                     PUSH 0x1
0075871A  51                        PUSH ECX
0075871B  FF 12                     CALL dword ptr [EDX]
0075871D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00758720  89 82 D0 00 00 00         MOV dword ptr [EDX + 0xd0],EAX
00758726  8B C2                     MOV EAX,EDX
LAB_00758728:
00758728  8B 88 D0 00 00 00         MOV ECX,dword ptr [EAX + 0xd0]
0075872E  33 D2                     XOR EDX,EDX
00758730  39 50 1C                  CMP dword ptr [EAX + 0x1c],EDX
00758733  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
00758736  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00758739  0F 8E 8E 00 00 00         JLE 0x007587cd
LAB_0075873f:
0075873F  85 F6                     TEST ESI,ESI
00758741  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
00758744  75 17                     JNZ 0x0075875d
00758746  50                        PUSH EAX
00758747  FF 53 0C                  CALL dword ptr [EBX + 0xc]
0075874A  85 C0                     TEST EAX,EAX
0075874C  0F 84 97 00 00 00         JZ 0x007587e9
00758752  8B 3B                     MOV EDI,dword ptr [EBX]
00758754  8B 73 04                  MOV ESI,dword ptr [EBX + 0x4]
00758757  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075875A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
LAB_0075875d:
0075875D  33 D2                     XOR EDX,EDX
0075875F  4E                        DEC ESI
00758760  8A 17                     MOV DL,byte ptr [EDI]
00758762  47                        INC EDI
00758763  85 F6                     TEST ESI,ESI
00758765  89 11                     MOV dword ptr [ECX],EDX
00758767  75 13                     JNZ 0x0075877c
00758769  50                        PUSH EAX
0075876A  FF 53 0C                  CALL dword ptr [EBX + 0xc]
0075876D  85 C0                     TEST EAX,EAX
0075876F  74 78                     JZ 0x007587e9
00758771  8B 3B                     MOV EDI,dword ptr [EBX]
00758773  8B 73 04                  MOV ESI,dword ptr [EBX + 0x4]
00758776  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00758779  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
LAB_0075877c:
0075877C  33 D2                     XOR EDX,EDX
0075877E  4E                        DEC ESI
0075877F  8A 17                     MOV DL,byte ptr [EDI]
00758781  47                        INC EDI
00758782  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00758785  C1 FA 04                  SAR EDX,0x4
00758788  83 E2 0F                  AND EDX,0xf
0075878B  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
0075878E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00758791  83 E2 0F                  AND EDX,0xf
00758794  85 F6                     TEST ESI,ESI
00758796  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
00758799  75 13                     JNZ 0x007587ae
0075879B  50                        PUSH EAX
0075879C  FF 53 0C                  CALL dword ptr [EBX + 0xc]
0075879F  85 C0                     TEST EAX,EAX
007587A1  74 46                     JZ 0x007587e9
007587A3  8B 3B                     MOV EDI,dword ptr [EBX]
007587A5  8B 73 04                  MOV ESI,dword ptr [EBX + 0x4]
007587A8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007587AB  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
LAB_007587ae:
007587AE  33 D2                     XOR EDX,EDX
007587B0  4E                        DEC ESI
007587B1  8A 17                     MOV DL,byte ptr [EDI]
007587B3  47                        INC EDI
007587B4  89 51 10                  MOV dword ptr [ECX + 0x10],EDX
007587B7  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
007587BA  42                        INC EDX
007587BB  83 C1 54                  ADD ECX,0x54
007587BE  3B 50 1C                  CMP EDX,dword ptr [EAX + 0x1c]
007587C1  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
007587C4  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
007587C7  0F 8C 72 FF FF FF         JL 0x0075873f
LAB_007587cd:
007587CD  8B 88 A6 01 00 00         MOV ECX,dword ptr [EAX + 0x1a6]
007587D3  B8 01 00 00 00            MOV EAX,0x1
007587D8  89 41 54                  MOV dword ptr [ECX + 0x54],EAX
007587DB  89 3B                     MOV dword ptr [EBX],EDI
007587DD  89 73 04                  MOV dword ptr [EBX + 0x4],ESI
007587E0  5F                        POP EDI
007587E1  5E                        POP ESI
007587E2  5B                        POP EBX
007587E3  8B E5                     MOV ESP,EBP
007587E5  5D                        POP EBP
007587E6  C2 0C 00                  RET 0xc
LAB_007587e9:
007587E9  5F                        POP EDI
007587EA  5E                        POP ESI
007587EB  33 C0                     XOR EAX,EAX
007587ED  5B                        POP EBX
007587EE  8B E5                     MOV ESP,EBP
007587F0  5D                        POP EBP
007587F1  C2 0C 00                  RET 0xc
