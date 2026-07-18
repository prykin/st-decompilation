HelpPanelTy::GetMessage:
0051DDD0  55                        PUSH EBP
0051DDD1  8B EC                     MOV EBP,ESP
0051DDD3  81 EC 80 00 00 00         SUB ESP,0x80
0051DDD9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0051DDDE  53                        PUSH EBX
0051DDDF  56                        PUSH ESI
0051DDE0  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0051DDE3  57                        PUSH EDI
0051DDE4  8D 55 84                  LEA EDX,[EBP + -0x7c]
0051DDE7  8D 4D 80                  LEA ECX,[EBP + -0x80]
0051DDEA  6A 00                     PUSH 0x0
0051DDEC  52                        PUSH EDX
0051DDED  89 45 80                  MOV dword ptr [EBP + -0x80],EAX
0051DDF0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0051DDF6  E8 F5 F9 20 00            CALL 0x0072d7f0
0051DDFB  8B F0                     MOV ESI,EAX
0051DDFD  83 C4 08                  ADD ESP,0x8
0051DE00  85 F6                     TEST ESI,ESI
0051DE02  0F 85 A6 13 00 00         JNZ 0x0051f1ae
0051DE08  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0051DE0B  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
0051DE0E  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0051DE11  83 E8 02                  SUB EAX,0x2
0051DE14  75 2D                     JNZ 0x0051de43
0051DE16  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0051DE1B  8D 7B 4C                  LEA EDI,[EBX + 0x4c]
0051DE1E  57                        PUSH EDI
0051DE1F  6A 00                     PUSH 0x0
0051DE21  6A 03                     PUSH 0x3
0051DE23  50                        PUSH EAX
0051DE24  E8 27 3C 19 00            CALL 0x006b1a50
0051DE29  8B 0F                     MOV ECX,dword ptr [EDI]
0051DE2B  8B 43 50                  MOV EAX,dword ptr [EBX + 0x50]
0051DE2E  89 4B 3C                  MOV dword ptr [EBX + 0x3c],ECX
0051DE31  8B 4B 48                  MOV ECX,dword ptr [EBX + 0x48]
0051DE34  8B D0                     MOV EDX,EAX
0051DE36  2B D1                     SUB EDX,ECX
0051DE38  03 C8                     ADD ECX,EAX
0051DE3A  89 53 44                  MOV dword ptr [EBX + 0x44],EDX
0051DE3D  89 8B 74 01 00 00         MOV dword ptr [EBX + 0x174],ECX
LAB_0051de43:
0051DE43  56                        PUSH ESI
0051DE44  8B CB                     MOV ECX,EBX
0051DE46  E8 AD 39 EE FF            CALL 0x004017f8
0051DE4B  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0051DE4E  3D 00 C0 00 00            CMP EAX,0xc000
0051DE53  0F 87 F4 11 00 00         JA 0x0051f04d
0051DE59  0F 84 BD 11 00 00         JZ 0x0051f01c
0051DE5F  3D 60 81 00 00            CMP EAX,0x8160
0051DE64  0F 87 37 0B 00 00         JA 0x0051e9a1
0051DE6A  0F 84 FA 0A 00 00         JZ 0x0051e96a
0051DE70  83 F8 60                  CMP EAX,0x60
0051DE73  0F 87 C4 03 00 00         JA 0x0051e23d
0051DE79  0F 84 07 01 00 00         JZ 0x0051df86
0051DE7F  83 E8 00                  SUB EAX,0x0
0051DE82  74 42                     JZ 0x0051dec6
0051DE84  83 E8 02                  SUB EAX,0x2
0051DE87  74 22                     JZ 0x0051deab
0051DE89  48                        DEC EAX
0051DE8A  0F 85 0A 13 00 00         JNZ 0x0051f19a
0051DE90  8B CB                     MOV ECX,EBX
0051DE92  E8 01 35 EE FF            CALL 0x00401398
0051DE97  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051DE9A  33 C0                     XOR EAX,EAX
0051DE9C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051DEA2  5F                        POP EDI
0051DEA3  5E                        POP ESI
0051DEA4  5B                        POP EBX
0051DEA5  8B E5                     MOV ESP,EBP
0051DEA7  5D                        POP EBP
0051DEA8  C2 04 00                  RET 0x4
LAB_0051deab:
0051DEAB  8B CB                     MOV ECX,EBX
0051DEAD  E8 5F 52 EE FF            CALL 0x00403111
0051DEB2  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051DEB5  33 C0                     XOR EAX,EAX
0051DEB7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051DEBD  5F                        POP EDI
0051DEBE  5E                        POP ESI
0051DEBF  5B                        POP EBX
0051DEC0  8B E5                     MOV ESP,EBP
0051DEC2  5D                        POP EBP
0051DEC3  C2 04 00                  RET 0x4
LAB_0051dec6:
0051DEC6  33 C0                     XOR EAX,EAX
0051DEC8  66 8B 83 72 01 00 00      MOV AX,word ptr [EBX + 0x172]
0051DECF  83 E8 03                  SUB EAX,0x3
0051DED2  74 5A                     JZ 0x0051df2e
0051DED4  48                        DEC EAX
0051DED5  0F 85 BF 12 00 00         JNZ 0x0051f19a
0051DEDB  8B 43 50                  MOV EAX,dword ptr [EBX + 0x50]
0051DEDE  8B 73 48                  MOV ESI,dword ptr [EBX + 0x48]
0051DEE1  8B 4B 44                  MOV ECX,dword ptr [EBX + 0x44]
0051DEE4  2B C6                     SUB EAX,ESI
0051DEE6  3B C8                     CMP ECX,EAX
0051DEE8  7E 06                     JLE 0x0051def0
0051DEEA  83 C1 D8                  ADD ECX,-0x28
0051DEED  89 4B 44                  MOV dword ptr [EBX + 0x44],ECX
LAB_0051def0:
0051DEF0  39 43 44                  CMP dword ptr [EBX + 0x44],EAX
0051DEF3  7F 0C                     JG 0x0051df01
0051DEF5  89 43 44                  MOV dword ptr [EBX + 0x44],EAX
0051DEF8  66 C7 83 72 01 00 00 02 00  MOV word ptr [EBX + 0x172],0x2
LAB_0051df01:
0051DF01  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
0051DF04  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
0051DF07  8B 53 60                  MOV EDX,dword ptr [EBX + 0x60]
0051DF0A  50                        PUSH EAX
0051DF0B  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0051DF10  51                        PUSH ECX
0051DF11  6A FF                     PUSH -0x1
0051DF13  52                        PUSH EDX
0051DF14  50                        PUSH EAX
0051DF15  E8 26 57 19 00            CALL 0x006b3640
0051DF1A  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051DF1D  33 C0                     XOR EAX,EAX
0051DF1F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051DF25  5F                        POP EDI
0051DF26  5E                        POP ESI
0051DF27  5B                        POP EBX
0051DF28  8B E5                     MOV ESP,EBP
0051DF2A  5D                        POP EBP
0051DF2B  C2 04 00                  RET 0x4
LAB_0051df2e:
0051DF2E  8B 4B 44                  MOV ECX,dword ptr [EBX + 0x44]
0051DF31  8B 43 50                  MOV EAX,dword ptr [EBX + 0x50]
0051DF34  3B C8                     CMP ECX,EAX
0051DF36  7D 06                     JGE 0x0051df3e
0051DF38  83 C1 28                  ADD ECX,0x28
0051DF3B  89 4B 44                  MOV dword ptr [EBX + 0x44],ECX
LAB_0051df3e:
0051DF3E  39 43 44                  CMP dword ptr [EBX + 0x44],EAX
0051DF41  7C 15                     JL 0x0051df58
0051DF43  6A 01                     PUSH 0x1
0051DF45  8B CB                     MOV ECX,EBX
0051DF47  89 43 44                  MOV dword ptr [EBX + 0x44],EAX
0051DF4A  66 C7 83 72 01 00 00 01 00  MOV word ptr [EBX + 0x172],0x1
0051DF53  E8 81 70 EE FF            CALL 0x00404fd9
LAB_0051df58:
0051DF58  8B 4B 44                  MOV ECX,dword ptr [EBX + 0x44]
0051DF5B  8B 53 3C                  MOV EDX,dword ptr [EBX + 0x3c]
0051DF5E  8B 43 60                  MOV EAX,dword ptr [EBX + 0x60]
0051DF61  51                        PUSH ECX
0051DF62  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0051DF68  52                        PUSH EDX
0051DF69  6A FF                     PUSH -0x1
0051DF6B  50                        PUSH EAX
0051DF6C  51                        PUSH ECX
0051DF6D  E8 CE 56 19 00            CALL 0x006b3640
0051DF72  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051DF75  33 C0                     XOR EAX,EAX
0051DF77  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051DF7D  5F                        POP EDI
0051DF7E  5E                        POP ESI
0051DF7F  5B                        POP EBX
0051DF80  8B E5                     MOV ESP,EBP
0051DF82  5D                        POP EBP
0051DF83  C2 04 00                  RET 0x4
LAB_0051df86:
0051DF86  33 C0                     XOR EAX,EAX
0051DF88  33 FF                     XOR EDI,EDI
0051DF8A  66 8B 46 18               MOV AX,word ptr [ESI + 0x18]
0051DF8E  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0051DF91  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0051DF94  33 C0                     XOR EAX,EAX
0051DF96  66 8B 46 1A               MOV AX,word ptr [ESI + 0x1a]
0051DF9A  66 83 BB 72 01 00 00 01   CMP word ptr [EBX + 0x172],0x1
0051DFA2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0051DFA5  C6 83 DB 01 00 00 00      MOV byte ptr [EBX + 0x1db],0x0
0051DFAC  0F 85 07 02 00 00         JNZ 0x0051e1b9
0051DFB2  33 C0                     XOR EAX,EAX
0051DFB4  8A 83 A1 01 00 00         MOV AL,byte ptr [EBX + 0x1a1]
0051DFBA  48                        DEC EAX
0051DFBB  83 F8 0B                  CMP EAX,0xb
0051DFBE  0F 87 F5 01 00 00         JA 0x0051e1b9
0051DFC4  33 D2                     XOR EDX,EDX
0051DFC6  8A 90 08 F2 51 00         MOV DL,byte ptr [EAX + 0x51f208]
switchD_0051dfcc::switchD:
0051DFCC  FF 24 95 FC F1 51 00      JMP dword ptr [EDX*0x4 + 0x51f1fc]
switchD_0051dfcc::caseD_6:
0051DFD3  8B 83 A3 01 00 00         MOV EAX,dword ptr [EBX + 0x1a3]
0051DFD9  48                        DEC EAX
0051DFDA  74 1F                     JZ 0x0051dffb
0051DFDC  48                        DEC EAX
0051DFDD  74 0E                     JZ 0x0051dfed
0051DFDF  C7 45 FC D8 30 7C 00      MOV dword ptr [EBP + -0x4],0x7c30d8
0051DFE6  B8 46 00 00 00            MOV EAX,0x46
0051DFEB  EB 1A                     JMP 0x0051e007
LAB_0051dfed:
0051DFED  C7 45 FC F0 2D 7C 00      MOV dword ptr [EBP + -0x4],0x7c2df0
0051DFF4  B8 39 00 00 00            MOV EAX,0x39
0051DFF9  EB 0C                     JMP 0x0051e007
LAB_0051dffb:
0051DFFB  C7 45 FC 58 2B 7C 00      MOV dword ptr [EBP + -0x4],0x7c2b58
0051E002  B8 33 00 00 00            MOV EAX,0x33
LAB_0051e007:
0051E007  33 D2                     XOR EDX,EDX
0051E009  66 3B C7                  CMP AX,DI
0051E00C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0051E00F  0F 86 A4 01 00 00         JBE 0x0051e1b9
0051E015  33 F6                     XOR ESI,ESI
0051E017  C7 45 CC 1A 00 00 00      MOV dword ptr [EBP + -0x34],0x1a
0051E01E  66 8B B3 B1 01 00 00      MOV SI,word ptr [EBX + 0x1b1]
0051E025  C7 45 D0 0E 00 00 00      MOV dword ptr [EBP + -0x30],0xe
0051E02C  0F AF B3 C3 01 00 00      IMUL ESI,dword ptr [EBX + 0x1c3]
0051E033  33 C0                     XOR EAX,EAX
0051E035  66 8B 83 AF 01 00 00      MOV AX,word ptr [EBX + 0x1af]
0051E03C  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_0051e03f:
0051E03F  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0051E042  8B C2                     MOV EAX,EDX
0051E044  25 FF FF 00 00            AND EAX,0xffff
0051E049  03 F8                     ADD EDI,EAX
0051E04B  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0051E04E  8D 04 8F                  LEA EAX,[EDI + ECX*0x4]
0051E051  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
0051E054  8B 78 05                  MOV EDI,dword ptr [EAX + 0x5]
0051E057  8D 4C 0F 21               LEA ECX,[EDI + ECX*0x1 + 0x21]
0051E05B  8B 78 09                  MOV EDI,dword ptr [EAX + 0x9]
0051E05E  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0051E061  2B FE                     SUB EDI,ESI
0051E063  03 F8                     ADD EDI,EAX
0051E065  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
0051E068  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
0051E06B  8D 7C 07 16               LEA EDI,[EDI + EAX*0x1 + 0x16]
0051E06F  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
0051E072  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
0051E075  3B F9                     CMP EDI,ECX
0051E077  7C 1F                     JL 0x0051e098
0051E079  83 C1 1A                  ADD ECX,0x1a
0051E07C  3B F9                     CMP EDI,ECX
0051E07E  7D 18                     JGE 0x0051e098
0051E080  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0051E083  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
0051E086  3B F9                     CMP EDI,ECX
0051E088  7C 11                     JL 0x0051e09b
0051E08A  83 C1 0E                  ADD ECX,0xe
0051E08D  3B F9                     CMP EDI,ECX
0051E08F  7D 0A                     JGE 0x0051e09b
0051E091  B9 01 00 00 00            MOV ECX,0x1
0051E096  EB 05                     JMP 0x0051e09d
LAB_0051e098:
0051E098  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_0051e09b:
0051E09B  33 C9                     XOR ECX,ECX
LAB_0051e09d:
0051E09D  85 C9                     TEST ECX,ECX
0051E09F  74 09                     JZ 0x0051e0aa
0051E0A1  05 2C 01 00 00            ADD EAX,0x12c
0051E0A6  3B F8                     CMP EDI,EAX
0051E0A8  7C 0C                     JL 0x0051e0b6
LAB_0051e0aa:
0051E0AA  42                        INC EDX
0051E0AB  66 3B 55 F0               CMP DX,word ptr [EBP + -0x10]
0051E0AF  72 8E                     JC 0x0051e03f
0051E0B1  E9 03 01 00 00            JMP 0x0051e1b9
LAB_0051e0b6:
0051E0B6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051E0B9  81 E2 FF FF 00 00         AND EDX,0xffff
0051E0BF  03 CA                     ADD ECX,EDX
0051E0C1  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
0051E0C4  8A 54 81 04               MOV DL,byte ptr [ECX + EAX*0x4 + 0x4]
0051E0C8  52                        PUSH EDX
0051E0C9  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
0051E0CC  8A 00                     MOV AL,byte ptr [EAX]
0051E0CE  50                        PUSH EAX
0051E0CF  E8 55 6A EE FF            CALL 0x00404b29
0051E0D4  83 C4 08                  ADD ESP,0x8
0051E0D7  3D 11 27 00 00            CMP EAX,0x2711
0051E0DC  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0051E0DF  0F 85 CD 00 00 00         JNZ 0x0051e1b2
0051E0E5  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0051E0EC  E9 C8 00 00 00            JMP 0x0051e1b9
switchD_0051dfcc::caseD_1:
0051E0F1  8B 83 D7 01 00 00         MOV EAX,dword ptr [EBX + 0x1d7]
0051E0F7  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0051E0FA  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0051E0FD  3B C7                     CMP EAX,EDI
0051E0FF  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0051E102  0F 86 B1 00 00 00         JBE 0x0051e1b9
0051E108  33 C9                     XOR ECX,ECX
0051E10A  33 FF                     XOR EDI,EDI
0051E10C  66 8B 8B B1 01 00 00      MOV CX,word ptr [EBX + 0x1b1]
0051E113  66 8B BB AF 01 00 00      MOV DI,word ptr [EBX + 0x1af]
0051E11A  0F AF 8B C3 01 00 00      IMUL ECX,dword ptr [EBX + 0x1c3]
0051E121  2B F9                     SUB EDI,ECX
LAB_0051e123:
0051E123  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051E126  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0051E129  3B D0                     CMP EDX,EAX
0051E12B  73 11                     JNC 0x0051e13e
0051E12D  8B 8B D7 01 00 00         MOV ECX,dword ptr [EBX + 0x1d7]
0051E133  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0051E136  0F AF C2                  IMUL EAX,EDX
0051E139  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
0051E13C  EB 02                     JMP 0x0051e140
LAB_0051e13e:
0051E13E  33 C0                     XOR EAX,EAX
LAB_0051e140:
0051E140  8B 10                     MOV EDX,dword ptr [EAX]
0051E142  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
0051E145  8B 70 04                  MOV ESI,dword ptr [EAX + 0x4]
0051E148  8D 4C 11 21               LEA ECX,[ECX + EDX*0x1 + 0x21]
0051E14C  8B 53 44                  MOV EDX,dword ptr [EBX + 0x44]
0051E14F  03 F7                     ADD ESI,EDI
0051E151  39 4D EC                  CMP dword ptr [EBP + -0x14],ECX
0051E154  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
0051E157  8D 54 16 16               LEA EDX,[ESI + EDX*0x1 + 0x16]
0051E15B  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0051E15E  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0051E161  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
0051E164  89 75 CC                  MOV dword ptr [EBP + -0x34],ESI
0051E167  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0051E16A  7C 1D                     JL 0x0051e189
0051E16C  03 F1                     ADD ESI,ECX
0051E16E  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0051E171  3B CE                     CMP ECX,ESI
0051E173  7D 14                     JGE 0x0051e189
0051E175  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0051E178  3B CA                     CMP ECX,EDX
0051E17A  7C 10                     JL 0x0051e18c
0051E17C  03 C2                     ADD EAX,EDX
0051E17E  3B C8                     CMP ECX,EAX
0051E180  7D 0A                     JGE 0x0051e18c
0051E182  B8 01 00 00 00            MOV EAX,0x1
0051E187  EB 05                     JMP 0x0051e18e
LAB_0051e189:
0051E189  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_0051e18c:
0051E18C  33 C0                     XOR EAX,EAX
LAB_0051e18e:
0051E18E  85 C0                     TEST EAX,EAX
0051E190  74 0C                     JZ 0x0051e19e
0051E192  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
0051E195  05 2C 01 00 00            ADD EAX,0x12c
0051E19A  3B C8                     CMP ECX,EAX
0051E19C  7C 14                     JL 0x0051e1b2
LAB_0051e19e:
0051E19E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051E1A1  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0051E1A4  40                        INC EAX
0051E1A5  3B C1                     CMP EAX,ECX
0051E1A7  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0051E1AA  0F 82 73 FF FF FF         JC 0x0051e123
0051E1B0  EB 07                     JMP 0x0051e1b9
LAB_0051e1b2:
0051E1B2  C6 83 DB 01 00 00 46      MOV byte ptr [EBX + 0x1db],0x46
switchD_0051dfcc::caseD_7:
0051E1B9  8B 83 78 01 00 00         MOV EAX,dword ptr [EBX + 0x178]
0051E1BF  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0051E1C2  3B C1                     CMP EAX,ECX
0051E1C4  0F 84 D0 0F 00 00         JZ 0x0051f19a
0051E1CA  33 F6                     XOR ESI,ESI
0051E1CC  3B C6                     CMP EAX,ESI
0051E1CE  74 26                     JZ 0x0051e1f6
0051E1D0  C7 43 28 02 42 00 00      MOV dword ptr [EBX + 0x28],0x4202
0051E1D7  66 89 73 2C               MOV word ptr [EBX + 0x2c],SI
0051E1DB  66 C7 43 2E 02 00         MOV word ptr [EBX + 0x2e],0x2
0051E1E1  89 43 30                  MOV dword ptr [EBX + 0x30],EAX
0051E1E4  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0051E1EA  3B CE                     CMP ECX,ESI
0051E1EC  74 08                     JZ 0x0051e1f6
0051E1EE  8B 01                     MOV EAX,dword ptr [ECX]
0051E1F0  8D 53 18                  LEA EDX,[EBX + 0x18]
0051E1F3  52                        PUSH EDX
0051E1F4  FF 10                     CALL dword ptr [EAX]
LAB_0051e1f6:
0051E1F6  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0051E1F9  3B C6                     CMP EAX,ESI
0051E1FB  89 83 78 01 00 00         MOV dword ptr [EBX + 0x178],EAX
0051E201  0F 84 93 0F 00 00         JZ 0x0051f19a
0051E207  C7 43 28 01 42 00 00      MOV dword ptr [EBX + 0x28],0x4201
0051E20E  66 89 73 2C               MOV word ptr [EBX + 0x2c],SI
0051E212  66 C7 43 2E 02 00         MOV word ptr [EBX + 0x2e],0x2
0051E218  89 43 30                  MOV dword ptr [EBX + 0x30],EAX
0051E21B  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0051E221  83 C3 18                  ADD EBX,0x18
0051E224  53                        PUSH EBX
0051E225  8B 01                     MOV EAX,dword ptr [ECX]
0051E227  FF 10                     CALL dword ptr [EAX]
0051E229  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051E22C  33 C0                     XOR EAX,EAX
0051E22E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051E234  5F                        POP EDI
0051E235  5E                        POP ESI
0051E236  5B                        POP EBX
0051E237  8B E5                     MOV ESP,EBP
0051E239  5D                        POP EBP
0051E23A  C2 04 00                  RET 0x4
LAB_0051e23d:
0051E23D  83 F8 61                  CMP EAX,0x61
0051E240  0F 84 57 02 00 00         JZ 0x0051e49d
0051E246  3D 00 62 00 00            CMP EAX,0x6200
0051E24B  0F 84 9A 01 00 00         JZ 0x0051e3eb
0051E251  3D 32 63 00 00            CMP EAX,0x6332
0051E256  0F 85 3E 0F 00 00         JNZ 0x0051f19a
0051E25C  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0051E25F  85 C0                     TEST EAX,EAX
0051E261  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0051E264  0F 84 30 0F 00 00         JZ 0x0051f19a
0051E26A  8B 83 D3 01 00 00         MOV EAX,dword ptr [EBX + 0x1d3]
0051E270  85 C0                     TEST EAX,EAX
0051E272  0F 84 22 0F 00 00         JZ 0x0051f19a
0051E278  8B BB E4 01 00 00         MOV EDI,dword ptr [EBX + 0x1e4]
0051E27E  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
0051E284  85 C0                     TEST EAX,EAX
0051E286  74 09                     JZ 0x0051e291
0051E288  57                        PUSH EDI
0051E289  E8 02 25 1F 00            CALL 0x00710790
0051E28E  83 C4 04                  ADD ESP,0x4
LAB_0051e291:
0051E291  A0 4E 87 80 00            MOV AL,[0x0080874e]
0051E296  8B 8F 8A 00 00 00         MOV ECX,dword ptr [EDI + 0x8a]
0051E29C  3C 03                     CMP AL,0x3
0051E29E  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0051E2A1  75 06                     JNZ 0x0051e2a9
0051E2A3  C6 45 F0 05               MOV byte ptr [EBP + -0x10],0x5
0051E2A7  EB 0D                     JMP 0x0051e2b6
LAB_0051e2a9:
0051E2A9  FE C8                     DEC AL
0051E2AB  F6 D8                     NEG AL
0051E2AD  1A C0                     SBB AL,AL
0051E2AF  24 06                     AND AL,0x6
0051E2B1  FE C0                     INC AL
0051E2B3  88 45 F0                  MOV byte ptr [EBP + -0x10],AL
LAB_0051e2b6:
0051E2B6  8B 93 DC 01 00 00         MOV EDX,dword ptr [EBX + 0x1dc]
0051E2BC  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
0051E2BF  68 18 01 00 00            PUSH 0x118
0051E2C4  68 9C 01 00 00            PUSH 0x19c
0051E2C9  6A 16                     PUSH 0x16
0051E2CB  6A 21                     PUSH 0x21
0051E2CD  6A 00                     PUSH 0x0
0051E2CF  52                        PUSH EDX
0051E2D0  6A 16                     PUSH 0x16
0051E2D2  6A 21                     PUSH 0x21
0051E2D4  6A 00                     PUSH 0x0
0051E2D6  50                        PUSH EAX
0051E2D7  E8 14 73 19 00            CALL 0x006b55f0
0051E2DC  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
0051E2E2  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0051E2E5  85 C9                     TEST ECX,ECX
0051E2E7  75 18                     JNZ 0x0051e301
0051E2E9  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
0051E2ED  0F AF 48 04               IMUL ECX,dword ptr [EAX + 0x4]
0051E2F1  83 C1 1F                  ADD ECX,0x1f
0051E2F4  C1 E9 03                  SHR ECX,0x3
0051E2F7  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
0051E2FD  0F AF 48 08               IMUL ECX,dword ptr [EAX + 0x8]
LAB_0051e301:
0051E301  50                        PUSH EAX
0051E302  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0051E305  E8 96 6C 19 00            CALL 0x006b4fa0
0051E30A  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0051E30D  8B F8                     MOV EDI,EAX
0051E30F  8B D1                     MOV EDX,ECX
0051E311  83 C8 FF                  OR EAX,0xffffffff
0051E314  C1 E9 02                  SHR ECX,0x2
0051E317  F3 AB                     STOSD.REP ES:EDI
0051E319  8B CA                     MOV ECX,EDX
0051E31B  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0051E31E  83 E1 03                  AND ECX,0x3
0051E321  F3 AA                     STOSB.REP ES:EDI
0051E323  33 C0                     XOR EAX,EAX
0051E325  66 8B 46 16               MOV AX,word ptr [ESI + 0x16]
0051E329  8B C8                     MOV ECX,EAX
0051E32B  8B F8                     MOV EDI,EAX
0051E32D  03 8A E0 01 00 00         ADD ECX,dword ptr [EDX + 0x1e0]
0051E333  3B F9                     CMP EDI,ECX
0051E335  7D 75                     JGE 0x0051e3ac
LAB_0051e337:
0051E337  8B 8B D3 01 00 00         MOV ECX,dword ptr [EBX + 0x1d3]
0051E33D  3B 79 08                  CMP EDI,dword ptr [ECX + 0x8]
0051E340  7D 08                     JGE 0x0051e34a
0051E342  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
0051E345  8B 0C B9                  MOV ECX,dword ptr [ECX + EDI*0x4]
0051E348  EB 02                     JMP 0x0051e34c
LAB_0051e34a:
0051E34A  33 C9                     XOR ECX,ECX
LAB_0051e34c:
0051E34C  85 C9                     TEST ECX,ECX
0051E34E  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0051E351  74 43                     JZ 0x0051e396
0051E353  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
0051E359  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0051E35C  52                        PUSH EDX
0051E35D  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0051E360  52                        PUSH EDX
0051E361  8B D7                     MOV EDX,EDI
0051E363  2B D0                     SUB EDX,EAX
0051E365  0F AF 55 EC               IMUL EDX,dword ptr [EBP + -0x14]
0051E369  52                        PUSH EDX
0051E36A  6A 00                     PUSH 0x0
0051E36C  6A 00                     PUSH 0x0
0051E36E  51                        PUSH ECX
0051E36F  8B 8B E4 01 00 00         MOV ECX,dword ptr [EBX + 0x1e4]
0051E375  E8 16 27 1F 00            CALL 0x00710a90
0051E37A  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0051E37D  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0051E380  25 FF 00 00 00            AND EAX,0xff
0051E385  50                        PUSH EAX
0051E386  6A FF                     PUSH -0x1
0051E388  6A 00                     PUSH 0x0
0051E38A  51                        PUSH ECX
0051E38B  8B 8B E4 01 00 00         MOV ECX,dword ptr [EBX + 0x1e4]
0051E391  E8 2A 36 1F 00            CALL 0x007119c0
LAB_0051e396:
0051E396  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0051E399  33 C0                     XOR EAX,EAX
0051E39B  66 8B 46 16               MOV AX,word ptr [ESI + 0x16]
0051E39F  47                        INC EDI
0051E3A0  8B D0                     MOV EDX,EAX
0051E3A2  03 91 E0 01 00 00         ADD EDX,dword ptr [ECX + 0x1e0]
0051E3A8  3B FA                     CMP EDI,EDX
0051E3AA  7C 8B                     JL 0x0051e337
LAB_0051e3ac:
0051E3AC  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
0051E3B2  68 FF 00 00 00            PUSH 0xff
0051E3B7  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
0051E3BA  68 18 01 00 00            PUSH 0x118
0051E3BF  68 9C 01 00 00            PUSH 0x19c
0051E3C4  6A 00                     PUSH 0x0
0051E3C6  6A 00                     PUSH 0x0
0051E3C8  6A 00                     PUSH 0x0
0051E3CA  52                        PUSH EDX
0051E3CB  6A 16                     PUSH 0x16
0051E3CD  6A 21                     PUSH 0x21
0051E3CF  6A 00                     PUSH 0x0
0051E3D1  50                        PUSH EAX
0051E3D2  E8 39 6D 19 00            CALL 0x006b5110
0051E3D7  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051E3DA  33 C0                     XOR EAX,EAX
0051E3DC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051E3E2  5F                        POP EDI
0051E3E3  5E                        POP ESI
0051E3E4  5B                        POP EBX
0051E3E5  8B E5                     MOV ESP,EBP
0051E3E7  5D                        POP EBP
0051E3E8  C2 04 00                  RET 0x4
LAB_0051e3eb:
0051E3EB  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
0051E3EE  33 C0                     XOR EAX,EAX
0051E3F0  66 8B 83 AF 01 00 00      MOV AX,word ptr [EBX + 0x1af]
0051E3F7  BA 17 01 00 00            MOV EDX,0x117
0051E3FC  2B D0                     SUB EDX,EAX
0051E3FE  89 8B C3 01 00 00         MOV dword ptr [EBX + 0x1c3],ECX
0051E404  8D 48 16                  LEA ECX,[EAX + 0x16]
0051E407  8B 83 DC 01 00 00         MOV EAX,dword ptr [EBX + 0x1dc]
0051E40D  52                        PUSH EDX
0051E40E  68 9C 01 00 00            PUSH 0x19c
0051E413  51                        PUSH ECX
0051E414  6A 21                     PUSH 0x21
0051E416  6A 00                     PUSH 0x0
0051E418  50                        PUSH EAX
0051E419  51                        PUSH ECX
0051E41A  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
0051E41D  6A 21                     PUSH 0x21
0051E41F  6A 00                     PUSH 0x0
0051E421  51                        PUSH ECX
0051E422  E8 C9 71 19 00            CALL 0x006b55f0
0051E427  33 C9                     XOR ECX,ECX
0051E429  33 C0                     XOR EAX,EAX
0051E42B  66 8B 8B B1 01 00 00      MOV CX,word ptr [EBX + 0x1b1]
0051E432  66 8B 83 AF 01 00 00      MOV AX,word ptr [EBX + 0x1af]
0051E439  0F AF 8B C3 01 00 00      IMUL ECX,dword ptr [EBX + 0x1c3]
0051E440  BA 17 01 00 00            MOV EDX,0x117
0051E445  68 FF 00 00 00            PUSH 0xff
0051E44A  2B D0                     SUB EDX,EAX
0051E44C  83 C0 16                  ADD EAX,0x16
0051E44F  52                        PUSH EDX
0051E450  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
0051E456  68 9C 01 00 00            PUSH 0x19c
0051E45B  51                        PUSH ECX
0051E45C  6A 00                     PUSH 0x0
0051E45E  6A 00                     PUSH 0x0
0051E460  52                        PUSH EDX
0051E461  50                        PUSH EAX
0051E462  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
0051E465  6A 21                     PUSH 0x21
0051E467  6A 00                     PUSH 0x0
0051E469  50                        PUSH EAX
0051E46A  E8 A1 6C 19 00            CALL 0x006b5110
0051E46F  8B 4B 44                  MOV ECX,dword ptr [EBX + 0x44]
0051E472  8B 53 3C                  MOV EDX,dword ptr [EBX + 0x3c]
0051E475  8B 43 60                  MOV EAX,dword ptr [EBX + 0x60]
0051E478  51                        PUSH ECX
0051E479  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0051E47F  52                        PUSH EDX
0051E480  6A FF                     PUSH -0x1
0051E482  50                        PUSH EAX
0051E483  51                        PUSH ECX
0051E484  E8 B7 51 19 00            CALL 0x006b3640
0051E489  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051E48C  33 C0                     XOR EAX,EAX
0051E48E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051E494  5F                        POP EDI
0051E495  5E                        POP ESI
0051E496  5B                        POP EBX
0051E497  8B E5                     MOV ESP,EBP
0051E499  5D                        POP EBP
0051E49A  C2 04 00                  RET 0x4
LAB_0051e49d:
0051E49D  33 C9                     XOR ECX,ECX
0051E49F  33 C0                     XOR EAX,EAX
0051E4A1  66 8B 4E 18               MOV CX,word ptr [ESI + 0x18]
0051E4A5  66 8B 46 1A               MOV AX,word ptr [ESI + 0x1a]
0051E4A9  66 83 BB 72 01 00 00 01   CMP word ptr [EBX + 0x172],0x1
0051E4B1  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0051E4B4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0051E4B7  0F 85 DD 0C 00 00         JNZ 0x0051f19a
0051E4BD  33 C0                     XOR EAX,EAX
0051E4BF  8A 83 A1 01 00 00         MOV AL,byte ptr [EBX + 0x1a1]
0051E4C5  8D 70 FF                  LEA ESI,[EAX + -0x1]
0051E4C8  83 FE 0B                  CMP ESI,0xb
0051E4CB  0F 87 C9 0C 00 00         JA 0x0051f19a
0051E4D1  33 D2                     XOR EDX,EDX
0051E4D3  8A 96 24 F2 51 00         MOV DL,byte ptr [ESI + 0x51f224]
switchD_0051e4d9::switchD:
0051E4D9  FF 24 95 14 F2 51 00      JMP dword ptr [EDX*0x4 + 0x51f214]
switchD_0051e4d9::caseD_6:
0051E4E0  8B 83 A3 01 00 00         MOV EAX,dword ptr [EBX + 0x1a3]
0051E4E6  48                        DEC EAX
0051E4E7  74 1F                     JZ 0x0051e508
0051E4E9  48                        DEC EAX
0051E4EA  74 0E                     JZ 0x0051e4fa
0051E4EC  C7 45 F4 D8 30 7C 00      MOV dword ptr [EBP + -0xc],0x7c30d8
0051E4F3  B8 46 00 00 00            MOV EAX,0x46
0051E4F8  EB 1A                     JMP 0x0051e514
LAB_0051e4fa:
0051E4FA  C7 45 F4 F0 2D 7C 00      MOV dword ptr [EBP + -0xc],0x7c2df0
0051E501  B8 39 00 00 00            MOV EAX,0x39
0051E506  EB 0C                     JMP 0x0051e514
LAB_0051e508:
0051E508  C7 45 F4 58 2B 7C 00      MOV dword ptr [EBP + -0xc],0x7c2b58
0051E50F  B8 33 00 00 00            MOV EAX,0x33
LAB_0051e514:
0051E514  33 D2                     XOR EDX,EDX
0051E516  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0051E519  66 85 C0                  TEST AX,AX
0051E51C  0F 86 78 0C 00 00         JBE 0x0051f19a
0051E522  33 F6                     XOR ESI,ESI
0051E524  C7 45 DC 1A 00 00 00      MOV dword ptr [EBP + -0x24],0x1a
0051E52B  66 8B B3 B1 01 00 00      MOV SI,word ptr [EBX + 0x1b1]
0051E532  C7 45 E0 0E 00 00 00      MOV dword ptr [EBP + -0x20],0xe
0051E539  0F AF B3 C3 01 00 00      IMUL ESI,dword ptr [EBX + 0x1c3]
0051E540  33 C0                     XOR EAX,EAX
0051E542  66 8B 83 AF 01 00 00      MOV AX,word ptr [EBX + 0x1af]
0051E549  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_0051e54c:
0051E54C  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0051E54F  8B C2                     MOV EAX,EDX
0051E551  25 FF FF 00 00            AND EAX,0xffff
0051E556  03 F8                     ADD EDI,EAX
0051E558  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0051E55B  8D 04 8F                  LEA EAX,[EDI + ECX*0x4]
0051E55E  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
0051E561  8B 78 05                  MOV EDI,dword ptr [EAX + 0x5]
0051E564  8D 4C 0F 21               LEA ECX,[EDI + ECX*0x1 + 0x21]
0051E568  8B 78 09                  MOV EDI,dword ptr [EAX + 0x9]
0051E56B  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0051E56E  2B FE                     SUB EDI,ESI
0051E570  03 F8                     ADD EDI,EAX
0051E572  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
0051E575  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
0051E578  8D 7C 07 16               LEA EDI,[EDI + EAX*0x1 + 0x16]
0051E57C  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
0051E57F  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0051E582  3B F9                     CMP EDI,ECX
0051E584  7C 1F                     JL 0x0051e5a5
0051E586  83 C1 1A                  ADD ECX,0x1a
0051E589  3B F9                     CMP EDI,ECX
0051E58B  7D 18                     JGE 0x0051e5a5
0051E58D  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0051E590  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0051E593  3B F9                     CMP EDI,ECX
0051E595  7C 11                     JL 0x0051e5a8
0051E597  83 C1 0E                  ADD ECX,0xe
0051E59A  3B F9                     CMP EDI,ECX
0051E59C  7D 0A                     JGE 0x0051e5a8
0051E59E  B9 01 00 00 00            MOV ECX,0x1
0051E5A3  EB 05                     JMP 0x0051e5aa
LAB_0051e5a5:
0051E5A5  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_0051e5a8:
0051E5A8  33 C9                     XOR ECX,ECX
LAB_0051e5aa:
0051E5AA  85 C9                     TEST ECX,ECX
0051E5AC  74 09                     JZ 0x0051e5b7
0051E5AE  05 2C 01 00 00            ADD EAX,0x12c
0051E5B3  3B F8                     CMP EDI,EAX
0051E5B5  7C 1B                     JL 0x0051e5d2
LAB_0051e5b7:
0051E5B7  42                        INC EDX
0051E5B8  66 3B 55 EC               CMP DX,word ptr [EBP + -0x14]
0051E5BC  72 8E                     JC 0x0051e54c
0051E5BE  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051E5C1  33 C0                     XOR EAX,EAX
0051E5C3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051E5C9  5F                        POP EDI
0051E5CA  5E                        POP ESI
0051E5CB  5B                        POP EBX
0051E5CC  8B E5                     MOV ESP,EBP
0051E5CE  5D                        POP EBP
0051E5CF  C2 04 00                  RET 0x4
LAB_0051e5d2:
0051E5D2  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0051E5D5  81 E2 FF FF 00 00         AND EDX,0xffff
0051E5DB  03 CA                     ADD ECX,EDX
0051E5DD  6A 00                     PUSH 0x0
0051E5DF  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
0051E5E2  8A 54 81 04               MOV DL,byte ptr [ECX + EAX*0x4 + 0x4]
0051E5E6  52                        PUSH EDX
0051E5E7  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
0051E5EA  8B CB                     MOV ECX,EBX
0051E5EC  8B 00                     MOV EAX,dword ptr [EAX]
0051E5EE  50                        PUSH EAX
0051E5EF  E8 3F 42 EE FF            CALL 0x00402833
0051E5F4  8B CB                     MOV ECX,EBX
0051E5F6  E8 05 6B EE FF            CALL 0x00405100
0051E5FB  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051E5FE  33 C0                     XOR EAX,EAX
0051E600  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051E606  5F                        POP EDI
0051E607  5E                        POP ESI
0051E608  5B                        POP EBX
0051E609  8B E5                     MOV ESP,EBP
0051E60B  5D                        POP EBP
0051E60C  C2 04 00                  RET 0x4
switchD_0051e4d9::caseD_1:
0051E60F  8B 83 D7 01 00 00         MOV EAX,dword ptr [EBX + 0x1d7]
0051E615  33 D2                     XOR EDX,EDX
0051E617  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0051E61A  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0051E61D  85 C0                     TEST EAX,EAX
0051E61F  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0051E622  0F 86 72 0B 00 00         JBE 0x0051f19a
0051E628  33 C9                     XOR ECX,ECX
0051E62A  66 8B 8B B1 01 00 00      MOV CX,word ptr [EBX + 0x1b1]
0051E631  8B F1                     MOV ESI,ECX
0051E633  33 C9                     XOR ECX,ECX
0051E635  0F AF B3 C3 01 00 00      IMUL ESI,dword ptr [EBX + 0x1c3]
0051E63C  66 8B 8B AF 01 00 00      MOV CX,word ptr [EBX + 0x1af]
0051E643  2B CE                     SUB ECX,ESI
0051E645  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0051E648  EB 03                     JMP 0x0051e64d
LAB_0051e64a:
0051E64A  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
LAB_0051e64d:
0051E64D  3B D0                     CMP EDX,EAX
0051E64F  73 11                     JNC 0x0051e662
0051E651  8B 83 D7 01 00 00         MOV EAX,dword ptr [EBX + 0x1d7]
0051E657  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
0051E65A  0F AF FA                  IMUL EDI,EDX
0051E65D  03 78 1C                  ADD EDI,dword ptr [EAX + 0x1c]
0051E660  EB 02                     JMP 0x0051e664
LAB_0051e662:
0051E662  33 FF                     XOR EDI,EDI
LAB_0051e664:
0051E664  8B 17                     MOV EDX,dword ptr [EDI]
0051E666  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
0051E669  8B 77 0C                  MOV ESI,dword ptr [EDI + 0xc]
0051E66C  8D 44 10 21               LEA EAX,[EAX + EDX*0x1 + 0x21]
0051E670  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
0051E673  03 D1                     ADD EDX,ECX
0051E675  8B 4B 44                  MOV ECX,dword ptr [EBX + 0x44]
0051E678  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
0051E67B  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0051E67E  8D 4C 0A 16               LEA ECX,[EDX + ECX*0x1 + 0x16]
0051E682  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0051E685  3B F0                     CMP ESI,EAX
0051E687  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0051E68A  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
0051E68D  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0051E690  7C 1D                     JL 0x0051e6af
0051E692  03 D0                     ADD EDX,EAX
0051E694  3B F2                     CMP ESI,EDX
0051E696  7D 17                     JGE 0x0051e6af
0051E698  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051E69B  3B D1                     CMP EDX,ECX
0051E69D  7C 13                     JL 0x0051e6b2
0051E69F  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0051E6A2  03 C1                     ADD EAX,ECX
0051E6A4  3B D0                     CMP EDX,EAX
0051E6A6  7D 0A                     JGE 0x0051e6b2
0051E6A8  B8 01 00 00 00            MOV EAX,0x1
0051E6AD  EB 05                     JMP 0x0051e6b4
LAB_0051e6af:
0051E6AF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_0051e6b2:
0051E6B2  33 C0                     XOR EAX,EAX
LAB_0051e6b4:
0051E6B4  85 C0                     TEST EAX,EAX
0051E6B6  74 0C                     JZ 0x0051e6c4
0051E6B8  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
0051E6BB  05 2C 01 00 00            ADD EAX,0x12c
0051E6C0  3B D0                     CMP EDX,EAX
0051E6C2  7C 26                     JL 0x0051e6ea
LAB_0051e6c4:
0051E6C4  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0051E6C7  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0051E6CA  42                        INC EDX
0051E6CB  3B D0                     CMP EDX,EAX
0051E6CD  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0051E6D0  0F 82 74 FF FF FF         JC 0x0051e64a
0051E6D6  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051E6D9  33 C0                     XOR EAX,EAX
0051E6DB  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051E6E1  5F                        POP EDI
0051E6E2  5E                        POP ESI
0051E6E3  5B                        POP EBX
0051E6E4  8B E5                     MOV ESP,EBP
0051E6E6  5D                        POP EBP
0051E6E7  C2 04 00                  RET 0x4
LAB_0051e6ea:
0051E6EA  8B 4F 15                  MOV ECX,dword ptr [EDI + 0x15]
0051E6ED  8B 57 11                  MOV EDX,dword ptr [EDI + 0x11]
0051E6F0  51                        PUSH ECX
0051E6F1  52                        PUSH EDX
0051E6F2  8B CB                     MOV ECX,EBX
0051E6F4  E8 CC 6D EE FF            CALL 0x004054c5
0051E6F9  8B 77 15                  MOV ESI,dword ptr [EDI + 0x15]
0051E6FC  8B 47 11                  MOV EAX,dword ptr [EDI + 0x11]
0051E6FF  33 C9                     XOR ECX,ECX
0051E701  8A 4F 10                  MOV CL,byte ptr [EDI + 0x10]
0051E704  83 F9 0C                  CMP ECX,0xc
0051E707  0F 87 83 01 00 00         JA 0x0051e890
switchD_0051e70d::switchD:
0051E70D  FF 24 8D 30 F2 51 00      JMP dword ptr [ECX*0x4 + 0x51f230]
switchD_0051e70d::caseD_a:
0051E714  8B CB                     MOV ECX,EBX
0051E716  E8 E8 70 EE FF            CALL 0x00405803
0051E71B  8B CB                     MOV ECX,EBX
0051E71D  E8 DE 69 EE FF            CALL 0x00405100
0051E722  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051E725  33 C0                     XOR EAX,EAX
0051E727  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051E72D  5F                        POP EDI
0051E72E  5E                        POP ESI
0051E72F  5B                        POP EBX
0051E730  8B E5                     MOV ESP,EBP
0051E732  5D                        POP EBP
0051E733  C2 04 00                  RET 0x4
switchD_0051e70d::caseD_7:
0051E736  8B CB                     MOV ECX,EBX
0051E738  E8 C1 2A EE FF            CALL 0x004011fe
0051E73D  8B CB                     MOV ECX,EBX
0051E73F  E8 BC 69 EE FF            CALL 0x00405100
0051E744  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051E747  33 C0                     XOR EAX,EAX
0051E749  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051E74F  5F                        POP EDI
0051E750  5E                        POP ESI
0051E751  5B                        POP EBX
0051E752  8B E5                     MOV ESP,EBP
0051E754  5D                        POP EBP
0051E755  C2 04 00                  RET 0x4
switchD_0051e70d::caseD_1:
0051E758  6A 00                     PUSH 0x0
0051E75A  56                        PUSH ESI
0051E75B  50                        PUSH EAX
0051E75C  8B CB                     MOV ECX,EBX
0051E75E  E8 22 67 EE FF            CALL 0x00404e85
0051E763  8B CB                     MOV ECX,EBX
0051E765  E8 96 69 EE FF            CALL 0x00405100
0051E76A  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051E76D  33 C0                     XOR EAX,EAX
0051E76F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051E775  5F                        POP EDI
0051E776  5E                        POP ESI
0051E777  5B                        POP EBX
0051E778  8B E5                     MOV ESP,EBP
0051E77A  5D                        POP EBP
0051E77B  C2 04 00                  RET 0x4
switchD_0051e70d::caseD_6:
0051E77E  6A 00                     PUSH 0x0
0051E780  50                        PUSH EAX
0051E781  8B CB                     MOV ECX,EBX
0051E783  E8 D9 76 EE FF            CALL 0x00405e61
0051E788  8B CB                     MOV ECX,EBX
0051E78A  E8 71 69 EE FF            CALL 0x00405100
0051E78F  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051E792  33 C0                     XOR EAX,EAX
0051E794  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051E79A  5F                        POP EDI
0051E79B  5E                        POP ESI
0051E79C  5B                        POP EBX
0051E79D  8B E5                     MOV ESP,EBP
0051E79F  5D                        POP EBP
0051E7A0  C2 04 00                  RET 0x4
switchD_0051e70d::caseD_5:
0051E7A3  6A 00                     PUSH 0x0
0051E7A5  56                        PUSH ESI
0051E7A6  50                        PUSH EAX
0051E7A7  8B CB                     MOV ECX,EBX
0051E7A9  E8 85 40 EE FF            CALL 0x00402833
0051E7AE  8B CB                     MOV ECX,EBX
0051E7B0  E8 4B 69 EE FF            CALL 0x00405100
0051E7B5  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051E7B8  33 C0                     XOR EAX,EAX
0051E7BA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051E7C0  5F                        POP EDI
0051E7C1  5E                        POP ESI
0051E7C2  5B                        POP EBX
0051E7C3  8B E5                     MOV ESP,EBP
0051E7C5  5D                        POP EBP
0051E7C6  C2 04 00                  RET 0x4
switchD_0051e70d::caseD_3:
0051E7C9  6A 00                     PUSH 0x0
0051E7CB  50                        PUSH EAX
0051E7CC  8B CB                     MOV ECX,EBX
0051E7CE  E8 A5 50 EE FF            CALL 0x00403878
0051E7D3  8B CB                     MOV ECX,EBX
0051E7D5  E8 26 69 EE FF            CALL 0x00405100
0051E7DA  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051E7DD  33 C0                     XOR EAX,EAX
0051E7DF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051E7E5  5F                        POP EDI
0051E7E6  5E                        POP ESI
0051E7E7  5B                        POP EBX
0051E7E8  8B E5                     MOV ESP,EBP
0051E7EA  5D                        POP EBP
0051E7EB  C2 04 00                  RET 0x4
switchD_0051e70d::caseD_2:
0051E7EE  6A 00                     PUSH 0x0
0051E7F0  56                        PUSH ESI
0051E7F1  50                        PUSH EAX
0051E7F2  8B CB                     MOV ECX,EBX
0051E7F4  E8 4E 4F EE FF            CALL 0x00403747
0051E7F9  8B CB                     MOV ECX,EBX
0051E7FB  E8 00 69 EE FF            CALL 0x00405100
0051E800  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051E803  33 C0                     XOR EAX,EAX
0051E805  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051E80B  5F                        POP EDI
0051E80C  5E                        POP ESI
0051E80D  5B                        POP EBX
0051E80E  8B E5                     MOV ESP,EBP
0051E810  5D                        POP EBP
0051E811  C2 04 00                  RET 0x4
switchD_0051e70d::caseD_4:
0051E814  6A 00                     PUSH 0x0
0051E816  56                        PUSH ESI
0051E817  50                        PUSH EAX
0051E818  8B CB                     MOV ECX,EBX
0051E81A  E8 C1 6F EE FF            CALL 0x004057e0
0051E81F  8B CB                     MOV ECX,EBX
0051E821  E8 DA 68 EE FF            CALL 0x00405100
0051E826  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051E829  33 C0                     XOR EAX,EAX
0051E82B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051E831  5F                        POP EDI
0051E832  5E                        POP ESI
0051E833  5B                        POP EBX
0051E834  8B E5                     MOV ESP,EBP
0051E836  5D                        POP EBP
0051E837  C2 04 00                  RET 0x4
switchD_0051e70d::caseD_b:
0051E83A  6A 00                     PUSH 0x0
0051E83C  56                        PUSH ESI
0051E83D  50                        PUSH EAX
0051E83E  8B CB                     MOV ECX,EBX
0051E840  E8 67 44 EE FF            CALL 0x00402cac
0051E845  8B CB                     MOV ECX,EBX
0051E847  E8 B4 68 EE FF            CALL 0x00405100
0051E84C  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051E84F  33 C0                     XOR EAX,EAX
0051E851  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051E857  5F                        POP EDI
0051E858  5E                        POP ESI
0051E859  5B                        POP EBX
0051E85A  8B E5                     MOV ESP,EBP
0051E85C  5D                        POP EBP
0051E85D  C2 04 00                  RET 0x4
switchD_0051e70d::caseD_c:
0051E860  6A 00                     PUSH 0x0
0051E862  50                        PUSH EAX
0051E863  8B CB                     MOV ECX,EBX
0051E865  E8 56 53 EE FF            CALL 0x00403bc0
0051E86A  8B CB                     MOV ECX,EBX
0051E86C  E8 8F 68 EE FF            CALL 0x00405100
0051E871  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051E874  33 C0                     XOR EAX,EAX
0051E876  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051E87C  5F                        POP EDI
0051E87D  5E                        POP ESI
0051E87E  5B                        POP EBX
0051E87F  8B E5                     MOV ESP,EBP
0051E881  5D                        POP EBP
0051E882  C2 04 00                  RET 0x4
switchD_0051e70d::caseD_8:
0051E885  6A 00                     PUSH 0x0
0051E887  56                        PUSH ESI
0051E888  50                        PUSH EAX
0051E889  8B CB                     MOV ECX,EBX
0051E88B  E8 28 38 EE FF            CALL 0x004020b8
switchD_0051e70d::caseD_0:
0051E890  8B CB                     MOV ECX,EBX
0051E892  E8 69 68 EE FF            CALL 0x00405100
0051E897  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051E89A  33 C0                     XOR EAX,EAX
0051E89C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051E8A2  5F                        POP EDI
0051E8A3  5E                        POP ESI
0051E8A4  5B                        POP EBX
0051E8A5  8B E5                     MOV ESP,EBP
0051E8A7  5D                        POP EBP
0051E8A8  C2 04 00                  RET 0x4
switchD_0051e4d9::caseD_8:
0051E8AB  8B 83 D7 01 00 00         MOV EAX,dword ptr [EBX + 0x1d7]
0051E8B1  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0051E8B4  85 D2                     TEST EDX,EDX
0051E8B6  76 05                     JBE 0x0051e8bd
0051E8B8  8B 40 1C                  MOV EAX,dword ptr [EAX + 0x1c]
0051E8BB  EB 02                     JMP 0x0051e8bf
LAB_0051e8bd:
0051E8BD  33 C0                     XOR EAX,EAX
LAB_0051e8bf:
0051E8BF  8B 53 3C                  MOV EDX,dword ptr [EBX + 0x3c]
0051E8C2  8B 30                     MOV ESI,dword ptr [EAX]
0051E8C4  33 FF                     XOR EDI,EDI
0051E8C6  8D 54 32 21               LEA EDX,[EDX + ESI*0x1 + 0x21]
0051E8CA  33 F6                     XOR ESI,ESI
0051E8CC  66 8B B3 B1 01 00 00      MOV SI,word ptr [EBX + 0x1b1]
0051E8D3  66 8B BB AF 01 00 00      MOV DI,word ptr [EBX + 0x1af]
0051E8DA  0F AF B3 C3 01 00 00      IMUL ESI,dword ptr [EBX + 0x1c3]
0051E8E1  2B FE                     SUB EDI,ESI
0051E8E3  8B 70 04                  MOV ESI,dword ptr [EAX + 0x4]
0051E8E6  03 FE                     ADD EDI,ESI
0051E8E8  8B 73 44                  MOV ESI,dword ptr [EBX + 0x44]
0051E8EB  3B CA                     CMP ECX,EDX
0051E8ED  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0051E8F0  8D 7C 37 16               LEA EDI,[EDI + ESI*0x1 + 0x16]
0051E8F4  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
0051E8F7  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
0051E8FA  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0051E8FD  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
0051E900  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0051E903  7C 1D                     JL 0x0051e922
0051E905  03 FA                     ADD EDI,EDX
0051E907  3B CF                     CMP ECX,EDI
0051E909  7D 17                     JGE 0x0051e922
0051E90B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051E90E  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0051E911  3B D1                     CMP EDX,ECX
0051E913  7C 10                     JL 0x0051e925
0051E915  03 C1                     ADD EAX,ECX
0051E917  3B D0                     CMP EDX,EAX
0051E919  7D 0A                     JGE 0x0051e925
0051E91B  B8 01 00 00 00            MOV EAX,0x1
0051E920  EB 05                     JMP 0x0051e927
LAB_0051e922:
0051E922  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_0051e925:
0051E925  33 C0                     XOR EAX,EAX
LAB_0051e927:
0051E927  85 C0                     TEST EAX,EAX
0051E929  0F 84 6B 08 00 00         JZ 0x0051f19a
0051E92F  81 C6 2C 01 00 00         ADD ESI,0x12c
0051E935  3B D6                     CMP EDX,ESI
0051E937  0F 8D 5D 08 00 00         JGE 0x0051f19a
0051E93D  8A 0D 4D 73 80 00         MOV CL,byte ptr [0x0080734d]
0051E943  6A 08                     PUSH 0x8
0051E945  84 C9                     TEST CL,CL
0051E947  0F 94 C0                  SETZ AL
0051E94A  8B CB                     MOV ECX,EBX
0051E94C  A2 4D 73 80 00            MOV [0x0080734d],AL
0051E951  E8 E2 43 EE FF            CALL 0x00402d38
0051E956  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051E959  33 C0                     XOR EAX,EAX
0051E95B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051E961  5F                        POP EDI
0051E962  5E                        POP ESI
0051E963  5B                        POP EBX
0051E964  8B E5                     MOV ESP,EBP
0051E966  5D                        POP EBP
0051E967  C2 04 00                  RET 0x4
LAB_0051e96a:
0051E96A  8B 9B E4 01 00 00         MOV EBX,dword ptr [EBX + 0x1e4]
0051E970  8B 83 A0 00 00 00         MOV EAX,dword ptr [EBX + 0xa0]
0051E976  85 C0                     TEST EAX,EAX
0051E978  74 09                     JZ 0x0051e983
0051E97A  53                        PUSH EBX
0051E97B  E8 10 1E 1F 00            CALL 0x00710790
0051E980  83 C4 04                  ADD ESP,0x4
LAB_0051e983:
0051E983  8B 8B 8A 00 00 00         MOV ECX,dword ptr [EBX + 0x8a]
0051E989  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051E98C  41                        INC ECX
0051E98D  33 C0                     XOR EAX,EAX
0051E98F  89 4E 18                  MOV dword ptr [ESI + 0x18],ECX
0051E992  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051E998  5F                        POP EDI
0051E999  5E                        POP ESI
0051E99A  5B                        POP EBX
0051E99B  8B E5                     MOV ESP,EBP
0051E99D  5D                        POP EBP
0051E99E  C2 04 00                  RET 0x4
LAB_0051e9a1:
0051E9A1  3D FF BF 00 00            CMP EAX,0xbfff
0051E9A6  0F 87 EE 07 00 00         JA 0x0051f19a
0051E9AC  0F 84 40 06 00 00         JZ 0x0051eff2
0051E9B2  05 9F 7E FF FF            ADD EAX,0xffff7e9f
0051E9B7  83 F8 05                  CMP EAX,0x5
0051E9BA  0F 87 DA 07 00 00         JA 0x0051f19a
switchD_0051e9c0::switchD:
0051E9C0  FF 24 85 64 F2 51 00      JMP dword ptr [EAX*0x4 + 0x51f264]
switchD_0051e9c0::caseD_8163:
0051E9C7  80 BB A1 01 00 00 0A      CMP byte ptr [EBX + 0x1a1],0xa
0051E9CE  74 1D                     JZ 0x0051e9ed
0051E9D0  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
0051E9D3  33 C0                     XOR EAX,EAX
0051E9D5  89 93 B7 01 00 00         MOV dword ptr [EBX + 0x1b7],EDX
0051E9DB  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051E9DE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051E9E4  5F                        POP EDI
0051E9E5  5E                        POP ESI
0051E9E6  5B                        POP EBX
0051E9E7  8B E5                     MOV ESP,EBP
0051E9E9  5D                        POP EBP
0051E9EA  C2 04 00                  RET 0x4
LAB_0051e9ed:
0051E9ED  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
0051E9F0  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051E9F3  89 83 BF 01 00 00         MOV dword ptr [EBX + 0x1bf],EAX
0051E9F9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051E9FF  33 C0                     XOR EAX,EAX
0051EA01  5F                        POP EDI
0051EA02  5E                        POP ESI
0051EA03  5B                        POP EBX
0051EA04  8B E5                     MOV ESP,EBP
0051EA06  5D                        POP EBP
0051EA07  C2 04 00                  RET 0x4
switchD_0051e9c0::caseD_8162:
0051EA0A  8A 83 A1 01 00 00         MOV AL,byte ptr [EBX + 0x1a1]
0051EA10  84 C0                     TEST AL,AL
0051EA12  74 0C                     JZ 0x0051ea20
0051EA14  3C 0A                     CMP AL,0xa
0051EA16  0F 85 7E 07 00 00         JNZ 0x0051f19a
0051EA1C  84 C0                     TEST AL,AL
0051EA1E  75 08                     JNZ 0x0051ea28
LAB_0051ea20:
0051EA20  8B 8B B3 01 00 00         MOV ECX,dword ptr [EBX + 0x1b3]
0051EA26  EB 06                     JMP 0x0051ea2e
LAB_0051ea28:
0051EA28  8B 8B BB 01 00 00         MOV ECX,dword ptr [EBX + 0x1bb]
LAB_0051ea2e:
0051EA2E  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
0051EA31  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0051EA34  3B F2                     CMP ESI,EDX
0051EA36  73 3C                     JNC 0x0051ea74
0051EA38  84 C0                     TEST AL,AL
0051EA3A  75 08                     JNZ 0x0051ea44
0051EA3C  8B 8B B3 01 00 00         MOV ECX,dword ptr [EBX + 0x1b3]
0051EA42  EB 06                     JMP 0x0051ea4a
LAB_0051ea44:
0051EA44  8B 8B BB 01 00 00         MOV ECX,dword ptr [EBX + 0x1bb]
LAB_0051ea4a:
0051EA4A  84 C0                     TEST AL,AL
0051EA4C  75 13                     JNZ 0x0051ea61
0051EA4E  8B 83 B3 01 00 00         MOV EAX,dword ptr [EBX + 0x1b3]
0051EA54  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0051EA57  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
0051EA5A  0F AF C6                  IMUL EAX,ESI
0051EA5D  03 C2                     ADD EAX,EDX
0051EA5F  EB 15                     JMP 0x0051ea76
LAB_0051ea61:
0051EA61  8B 83 BB 01 00 00         MOV EAX,dword ptr [EBX + 0x1bb]
0051EA67  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0051EA6A  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
0051EA6D  0F AF C6                  IMUL EAX,ESI
0051EA70  03 C2                     ADD EAX,EDX
0051EA72  EB 02                     JMP 0x0051ea76
LAB_0051ea74:
0051EA74  33 C0                     XOR EAX,EAX
LAB_0051ea76:
0051EA76  85 C0                     TEST EAX,EAX
0051EA78  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0051EA7B  0F 84 19 07 00 00         JZ 0x0051f19a
0051EA81  8B C8                     MOV ECX,EAX
0051EA83  33 D2                     XOR EDX,EDX
0051EA85  33 C0                     XOR EAX,EAX
0051EA87  8A 51 08                  MOV DL,byte ptr [ECX + 0x8]
0051EA8A  8B 71 0D                  MOV ESI,dword ptr [ECX + 0xd]
0051EA8D  8B 79 09                  MOV EDI,dword ptr [ECX + 0x9]
0051EA90  8B CA                     MOV ECX,EDX
0051EA92  83 F9 0C                  CMP ECX,0xc
0051EA95  0F 87 8E 00 00 00         JA 0x0051eb29
switchD_0051ea9b::switchD:
0051EA9B  FF 24 8D 7C F2 51 00      JMP dword ptr [ECX*0x4 + 0x51f27c]
switchD_0051ea9b::caseD_a:
0051EAA2  8B CB                     MOV ECX,EBX
0051EAA4  E8 5A 6D EE FF            CALL 0x00405803
0051EAA9  EB 79                     JMP 0x0051eb24
switchD_0051ea9b::caseD_7:
0051EAAB  8B CB                     MOV ECX,EBX
0051EAAD  E8 4C 27 EE FF            CALL 0x004011fe
0051EAB2  EB 70                     JMP 0x0051eb24
switchD_0051ea9b::caseD_1:
0051EAB4  6A 00                     PUSH 0x0
0051EAB6  56                        PUSH ESI
0051EAB7  57                        PUSH EDI
0051EAB8  8B CB                     MOV ECX,EBX
0051EABA  E8 C6 63 EE FF            CALL 0x00404e85
0051EABF  EB 63                     JMP 0x0051eb24
switchD_0051ea9b::caseD_6:
0051EAC1  6A 00                     PUSH 0x0
0051EAC3  57                        PUSH EDI
0051EAC4  8B CB                     MOV ECX,EBX
0051EAC6  E8 96 73 EE FF            CALL 0x00405e61
0051EACB  EB 57                     JMP 0x0051eb24
switchD_0051ea9b::caseD_5:
0051EACD  6A 00                     PUSH 0x0
0051EACF  56                        PUSH ESI
0051EAD0  57                        PUSH EDI
0051EAD1  8B CB                     MOV ECX,EBX
0051EAD3  E8 5B 3D EE FF            CALL 0x00402833
0051EAD8  EB 4A                     JMP 0x0051eb24
switchD_0051ea9b::caseD_3:
0051EADA  6A 00                     PUSH 0x0
0051EADC  57                        PUSH EDI
0051EADD  8B CB                     MOV ECX,EBX
0051EADF  E8 94 4D EE FF            CALL 0x00403878
0051EAE4  EB 3E                     JMP 0x0051eb24
switchD_0051ea9b::caseD_2:
0051EAE6  6A 00                     PUSH 0x0
0051EAE8  56                        PUSH ESI
0051EAE9  57                        PUSH EDI
0051EAEA  8B CB                     MOV ECX,EBX
0051EAEC  E8 56 4C EE FF            CALL 0x00403747
0051EAF1  EB 31                     JMP 0x0051eb24
switchD_0051ea9b::caseD_4:
0051EAF3  6A 00                     PUSH 0x0
0051EAF5  56                        PUSH ESI
0051EAF6  57                        PUSH EDI
0051EAF7  8B CB                     MOV ECX,EBX
0051EAF9  E8 E2 6C EE FF            CALL 0x004057e0
0051EAFE  EB 24                     JMP 0x0051eb24
switchD_0051ea9b::caseD_b:
0051EB00  6A 00                     PUSH 0x0
0051EB02  56                        PUSH ESI
0051EB03  57                        PUSH EDI
0051EB04  8B CB                     MOV ECX,EBX
0051EB06  E8 A1 41 EE FF            CALL 0x00402cac
0051EB0B  EB 17                     JMP 0x0051eb24
switchD_0051ea9b::caseD_c:
0051EB0D  6A 00                     PUSH 0x0
0051EB0F  57                        PUSH EDI
0051EB10  8B CB                     MOV ECX,EBX
0051EB12  E8 A9 50 EE FF            CALL 0x00403bc0
0051EB17  EB 0B                     JMP 0x0051eb24
switchD_0051ea9b::caseD_8:
0051EB19  6A 00                     PUSH 0x0
0051EB1B  56                        PUSH ESI
0051EB1C  57                        PUSH EDI
0051EB1D  8B CB                     MOV ECX,EBX
0051EB1F  E8 94 35 EE FF            CALL 0x004020b8
LAB_0051eb24:
0051EB24  B8 01 00 00 00            MOV EAX,0x1
switchD_0051ea9b::caseD_0:
0051EB29  85 C0                     TEST EAX,EAX
0051EB2B  74 1B                     JZ 0x0051eb48
0051EB2D  8B CB                     MOV ECX,EBX
0051EB2F  E8 CC 65 EE FF            CALL 0x00405100
0051EB34  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051EB37  33 C0                     XOR EAX,EAX
0051EB39  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051EB3F  5F                        POP EDI
0051EB40  5E                        POP ESI
0051EB41  5B                        POP EBX
0051EB42  8B E5                     MOV ESP,EBP
0051EB44  5D                        POP EBP
0051EB45  C2 04 00                  RET 0x4
LAB_0051eb48:
0051EB48  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0051EB4B  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0051EB4E  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0051EB51  51                        PUSH ECX
0051EB52  52                        PUSH EDX
0051EB53  8B CB                     MOV ECX,EBX
0051EB55  E8 08 68 EE FF            CALL 0x00405362
0051EB5A  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051EB5D  33 C0                     XOR EAX,EAX
0051EB5F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051EB65  5F                        POP EDI
0051EB66  5E                        POP ESI
0051EB67  5B                        POP EBX
0051EB68  8B E5                     MOV ESP,EBP
0051EB6A  5D                        POP EBP
0051EB6B  C2 04 00                  RET 0x4
switchD_0051e9c0::caseD_8164:
0051EB6E  68 88 1E 40 00            PUSH 0x401e88
0051EB73  6A 00                     PUSH 0x0
0051EB75  68 40 3E 7C 00            PUSH 0x7c3e40
0051EB7A  E8 FD 6B EE FF            CALL 0x0040577c
0051EB7F  83 C4 08                  ADD ESP,0x8
0051EB82  50                        PUSH EAX
0051EB83  6A 06                     PUSH 0x6
0051EB85  E9 08 06 00 00            JMP 0x0051f192
switchD_0051e9c0::caseD_8165:
0051EB8A  68 88 1E 40 00            PUSH 0x401e88
0051EB8F  6A 00                     PUSH 0x0
0051EB91  68 34 3E 7C 00            PUSH 0x7c3e34
0051EB96  E8 E1 6B EE FF            CALL 0x0040577c
0051EB9B  83 C4 08                  ADD ESP,0x8
0051EB9E  50                        PUSH EAX
0051EB9F  6A 06                     PUSH 0x6
0051EBA1  E9 EC 05 00 00            JMP 0x0051f192
switchD_0051e9c0::caseD_8166:
0051EBA6  8B 83 20 02 00 00         MOV EAX,dword ptr [EBX + 0x220]
0051EBAC  6A 00                     PUSH 0x0
0051EBAE  50                        PUSH EAX
0051EBAF  E8 EC C7 1E 00            CALL 0x0070b3a0
0051EBB4  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
0051EBB7  50                        PUSH EAX
0051EBB8  6A 06                     PUSH 0x6
0051EBBA  6A 2D                     PUSH 0x2d
0051EBBC  68 C3 01 00 00            PUSH 0x1c3
0051EBC1  51                        PUSH ECX
0051EBC2  E8 62 46 EE FF            CALL 0x00403229
0051EBC7  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0051EBCA  8B 8B 20 02 00 00         MOV ECX,dword ptr [EBX + 0x220]
0051EBD0  33 C0                     XOR EAX,EAX
0051EBD2  83 7A 1C 01               CMP dword ptr [EDX + 0x1c],0x1
0051EBD6  0F 95 C0                  SETNZ AL
0051EBD9  40                        INC EAX
0051EBDA  50                        PUSH EAX
0051EBDB  51                        PUSH ECX
0051EBDC  E8 BF C7 1E 00            CALL 0x0070b3a0
0051EBE1  33 D2                     XOR EDX,EDX
0051EBE3  50                        PUSH EAX
0051EBE4  66 8B 56 16               MOV DX,word ptr [ESI + 0x16]
0051EBE8  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
0051EBEB  83 C2 2D                  ADD EDX,0x2d
0051EBEE  6A 06                     PUSH 0x6
0051EBF0  52                        PUSH EDX
0051EBF1  68 C3 01 00 00            PUSH 0x1c3
0051EBF6  50                        PUSH EAX
0051EBF7  E8 2D 46 EE FF            CALL 0x00403229
0051EBFC  8B 4B 44                  MOV ECX,dword ptr [EBX + 0x44]
0051EBFF  8B 53 3C                  MOV EDX,dword ptr [EBX + 0x3c]
0051EC02  8B 43 60                  MOV EAX,dword ptr [EBX + 0x60]
0051EC05  83 C4 38                  ADD ESP,0x38
0051EC08  51                        PUSH ECX
0051EC09  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0051EC0F  52                        PUSH EDX
0051EC10  6A FF                     PUSH -0x1
0051EC12  50                        PUSH EAX
0051EC13  51                        PUSH ECX
0051EC14  E8 27 4A 19 00            CALL 0x006b3640
0051EC19  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051EC1C  33 C0                     XOR EAX,EAX
0051EC1E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051EC24  5F                        POP EDI
0051EC25  5E                        POP ESI
0051EC26  5B                        POP EBX
0051EC27  8B E5                     MOV ESP,EBP
0051EC29  5D                        POP EBP
0051EC2A  C2 04 00                  RET 0x4
switchD_0051e9c0::caseD_8161:
0051EC2D  8A 83 A1 01 00 00         MOV AL,byte ptr [EBX + 0x1a1]
0051EC33  84 C0                     TEST AL,AL
0051EC35  74 0C                     JZ 0x0051ec43
0051EC37  3C 0A                     CMP AL,0xa
0051EC39  0F 85 5B 05 00 00         JNZ 0x0051f19a
0051EC3F  84 C0                     TEST AL,AL
0051EC41  75 08                     JNZ 0x0051ec4b
LAB_0051ec43:
0051EC43  8B 93 B3 01 00 00         MOV EDX,dword ptr [EBX + 0x1b3]
0051EC49  EB 06                     JMP 0x0051ec51
LAB_0051ec4b:
0051EC4B  8B 93 BB 01 00 00         MOV EDX,dword ptr [EBX + 0x1bb]
LAB_0051ec51:
0051EC51  8B 7A 0C                  MOV EDI,dword ptr [EDX + 0xc]
0051EC54  33 C9                     XOR ECX,ECX
0051EC56  66 8B 4E 14               MOV CX,word ptr [ESI + 0x14]
0051EC5A  3B CF                     CMP ECX,EDI
0051EC5C  73 38                     JNC 0x0051ec96
0051EC5E  84 C0                     TEST AL,AL
0051EC60  75 08                     JNZ 0x0051ec6a
0051EC62  8B 93 B3 01 00 00         MOV EDX,dword ptr [EBX + 0x1b3]
0051EC68  EB 06                     JMP 0x0051ec70
LAB_0051ec6a:
0051EC6A  8B 93 BB 01 00 00         MOV EDX,dword ptr [EBX + 0x1bb]
LAB_0051ec70:
0051EC70  84 C0                     TEST AL,AL
0051EC72  75 11                     JNZ 0x0051ec85
0051EC74  8B 83 B3 01 00 00         MOV EAX,dword ptr [EBX + 0x1b3]
0051EC7A  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
0051EC7D  0F AF C1                  IMUL EAX,ECX
0051EC80  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
0051EC83  EB 13                     JMP 0x0051ec98
LAB_0051ec85:
0051EC85  8B 83 BB 01 00 00         MOV EAX,dword ptr [EBX + 0x1bb]
0051EC8B  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
0051EC8E  0F AF C1                  IMUL EAX,ECX
0051EC91  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
0051EC94  EB 02                     JMP 0x0051ec98
LAB_0051ec96:
0051EC96  33 C0                     XOR EAX,EAX
LAB_0051ec98:
0051EC98  85 C0                     TEST EAX,EAX
0051EC9A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0051EC9D  0F 84 22 03 00 00         JZ 0x0051efc5
0051ECA3  66 83 7E 16 01            CMP word ptr [ESI + 0x16],0x1
0051ECA8  8B 10                     MOV EDX,dword ptr [EAX]
0051ECAA  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
0051ECB0  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0051ECB3  0F 94 C0                  SETZ AL
0051ECB6  80 F9 03                  CMP CL,0x3
0051ECB9  75 0D                     JNZ 0x0051ecc8
0051ECBB  84 C0                     TEST AL,AL
0051ECBD  0F 94 C0                  SETZ AL
0051ECC0  83 C0 04                  ADD EAX,0x4
0051ECC3  88 45 E8                  MOV byte ptr [EBP + -0x18],AL
0051ECC6  EB 1D                     JMP 0x0051ece5
LAB_0051ecc8:
0051ECC8  80 F9 01                  CMP CL,0x1
0051ECCB  75 0D                     JNZ 0x0051ecda
0051ECCD  F6 D8                     NEG AL
0051ECCF  1A C0                     SBB AL,AL
0051ECD1  24 02                     AND AL,0x2
0051ECD3  FE C0                     INC AL
0051ECD5  88 45 E8                  MOV byte ptr [EBP + -0x18],AL
0051ECD8  EB 0B                     JMP 0x0051ece5
LAB_0051ecda:
0051ECDA  84 C0                     TEST AL,AL
0051ECDC  0F 95 C1                  SETNZ CL
0051ECDF  83 C1 07                  ADD ECX,0x7
0051ECE2  88 4D E8                  MOV byte ptr [EBP + -0x18],CL
LAB_0051ece5:
0051ECE5  8B 93 EC 01 00 00         MOV EDX,dword ptr [EBX + 0x1ec]
0051ECEB  33 C0                     XOR EAX,EAX
0051ECED  66 8B 46 1A               MOV AX,word ptr [ESI + 0x1a]
0051ECF1  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
0051ECF4  8B 93 DC 01 00 00         MOV EDX,dword ptr [EBX + 0x1dc]
0051ECFA  83 C0 16                  ADD EAX,0x16
0051ECFD  51                        PUSH ECX
0051ECFE  68 9C 01 00 00            PUSH 0x19c
0051ED03  50                        PUSH EAX
0051ED04  6A 21                     PUSH 0x21
0051ED06  6A 00                     PUSH 0x0
0051ED08  52                        PUSH EDX
0051ED09  50                        PUSH EAX
0051ED0A  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
0051ED0D  6A 21                     PUSH 0x21
0051ED0F  6A 00                     PUSH 0x0
0051ED11  50                        PUSH EAX
0051ED12  E8 D9 68 19 00            CALL 0x006b55f0
0051ED17  8B 83 EC 01 00 00         MOV EAX,dword ptr [EBX + 0x1ec]
0051ED1D  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
0051ED20  85 F6                     TEST ESI,ESI
0051ED22  75 18                     JNZ 0x0051ed3c
0051ED24  66 8B 70 0E               MOV SI,word ptr [EAX + 0xe]
0051ED28  0F AF 70 04               IMUL ESI,dword ptr [EAX + 0x4]
0051ED2C  83 C6 1F                  ADD ESI,0x1f
0051ED2F  C1 EE 03                  SHR ESI,0x3
0051ED32  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
0051ED38  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
LAB_0051ed3c:
0051ED3C  50                        PUSH EAX
0051ED3D  E8 5E 62 19 00            CALL 0x006b4fa0
0051ED42  8B CE                     MOV ECX,ESI
0051ED44  8B F8                     MOV EDI,EAX
0051ED46  8B D1                     MOV EDX,ECX
0051ED48  83 C8 FF                  OR EAX,0xffffffff
0051ED4B  C1 E9 02                  SHR ECX,0x2
0051ED4E  F3 AB                     STOSD.REP ES:EDI
0051ED50  8B CA                     MOV ECX,EDX
0051ED52  6A 00                     PUSH 0x0
0051ED54  83 E1 03                  AND ECX,0x3
0051ED57  6A 00                     PUSH 0x0
0051ED59  F3 AA                     STOSB.REP ES:EDI
0051ED5B  8B 83 EC 01 00 00         MOV EAX,dword ptr [EBX + 0x1ec]
0051ED61  8B 8B E4 01 00 00         MOV ECX,dword ptr [EBX + 0x1e4]
0051ED67  6A 00                     PUSH 0x0
0051ED69  6A 00                     PUSH 0x0
0051ED6B  6A 00                     PUSH 0x0
0051ED6D  50                        PUSH EAX
0051ED6E  E8 1D 1D 1F 00            CALL 0x00710a90
0051ED73  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0051ED79  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0051ED7C  51                        PUSH ECX
0051ED7D  52                        PUSH EDX
0051ED7E  E8 BD 13 19 00            CALL 0x006b0140
0051ED83  8B F8                     MOV EDI,EAX
0051ED85  83 C9 FF                  OR ECX,0xffffffff
0051ED88  33 C0                     XOR EAX,EAX
0051ED8A  6A 0A                     PUSH 0xa
0051ED8C  F2 AE                     SCASB.REPNE ES:EDI
0051ED8E  F7 D1                     NOT ECX
0051ED90  2B F9                     SUB EDI,ECX
0051ED92  68 3A F3 80 00            PUSH 0x80f33a
0051ED97  8B C1                     MOV EAX,ECX
0051ED99  8B F7                     MOV ESI,EDI
0051ED9B  BF 3A F3 80 00            MOV EDI,0x80f33a
0051EDA0  C1 E9 02                  SHR ECX,0x2
0051EDA3  F3 A5                     MOVSD.REP ES:EDI,ESI
0051EDA5  8B C8                     MOV ECX,EAX
0051EDA7  83 E1 03                  AND ECX,0x3
0051EDAA  F3 A4                     MOVSB.REP ES:EDI,ESI
0051EDAC  E8 AF F7 20 00            CALL 0x0072e560
0051EDB1  83 C4 08                  ADD ESP,0x8
0051EDB4  85 C0                     TEST EAX,EAX
0051EDB6  74 12                     JZ 0x0051edca
LAB_0051edb8:
0051EDB8  6A 0A                     PUSH 0xa
0051EDBA  50                        PUSH EAX
0051EDBB  C6 00 20                  MOV byte ptr [EAX],0x20
0051EDBE  E8 9D F7 20 00            CALL 0x0072e560
0051EDC3  83 C4 08                  ADD ESP,0x8
0051EDC6  85 C0                     TEST EAX,EAX
0051EDC8  75 EE                     JNZ 0x0051edb8
LAB_0051edca:
0051EDCA  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0051EDCD  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0051EDD0  33 C0                     XOR EAX,EAX
0051EDD2  81 E1 FF 00 00 00         AND ECX,0xff
0051EDD8  8A 46 11                  MOV AL,byte ptr [ESI + 0x11]
0051EDDB  51                        PUSH ECX
0051EDDC  8B 8B E4 01 00 00         MOV ECX,dword ptr [EBX + 0x1e4]
0051EDE2  6A FF                     PUSH -0x1
0051EDE4  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0051EDE7  8D 04 95 0A 00 00 00      LEA EAX,[EDX*0x4 + 0xa]
0051EDEE  50                        PUSH EAX
0051EDEF  68 3A F3 80 00            PUSH 0x80f33a
0051EDF4  E8 C7 2B 1F 00            CALL 0x007119c0
0051EDF9  8A 83 A1 01 00 00         MOV AL,byte ptr [EBX + 0x1a1]
0051EDFF  84 C0                     TEST AL,AL
0051EE01  0F 85 96 01 00 00         JNZ 0x0051ef9d
0051EE07  8A 4E 11                  MOV CL,byte ptr [ESI + 0x11]
0051EE0A  84 C9                     TEST CL,CL
0051EE0C  0F 84 8B 01 00 00         JZ 0x0051ef9d
0051EE12  A0 4E 87 80 00            MOV AL,[0x0080874e]
0051EE17  3C 03                     CMP AL,0x3
0051EE19  75 06                     JNZ 0x0051ee21
0051EE1B  C6 45 E8 29               MOV byte ptr [EBP + -0x18],0x29
0051EE1F  EB 0D                     JMP 0x0051ee2e
LAB_0051ee21:
0051EE21  FE C8                     DEC AL
0051EE23  F6 D8                     NEG AL
0051EE25  1A C0                     SBB AL,AL
0051EE27  24 43                     AND AL,0x43
0051EE29  04 10                     ADD AL,0x10
0051EE2B  88 45 E8                  MOV byte ptr [EBP + -0x18],AL
LAB_0051ee2e:
0051EE2E  8B BB EC 01 00 00         MOV EDI,dword ptr [EBX + 0x1ec]
0051EE34  81 E1 FF 00 00 00         AND ECX,0xff
0051EE3A  6A 0D                     PUSH 0xd
0051EE3C  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0051EE3F  99                        CDQ
0051EE40  2B C2                     SUB EAX,EDX
0051EE42  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0051EE45  8B F0                     MOV ESI,EAX
0051EE47  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0051EE4A  C1 E0 02                  SHL EAX,0x2
0051EE4D  81 E2 FF 00 00 00         AND EDX,0xff
0051EE53  D1 FE                     SAR ESI,0x1
0051EE55  52                        PUSH EDX
0051EE56  8D 48 08                  LEA ECX,[EAX + 0x8]
0051EE59  56                        PUSH ESI
0051EE5A  51                        PUSH ECX
0051EE5B  56                        PUSH ESI
0051EE5C  50                        PUSH EAX
0051EE5D  6A 00                     PUSH 0x0
0051EE5F  57                        PUSH EDI
0051EE60  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0051EE63  E8 A8 6C 19 00            CALL 0x006b5b10
0051EE68  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051EE6B  8A 42 13                  MOV AL,byte ptr [EDX + 0x13]
0051EE6E  84 C0                     TEST AL,AL
0051EE70  75 09                     JNZ 0x0051ee7b
0051EE72  8B 83 EC 01 00 00         MOV EAX,dword ptr [EBX + 0x1ec]
0051EE78  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
LAB_0051ee7b:
0051EE7B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051EE7E  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0051EE81  33 C0                     XOR EAX,EAX
0051EE83  6A 0D                     PUSH 0xd
0051EE85  8A 41 11                  MOV AL,byte ptr [ECX + 0x11]
0051EE88  52                        PUSH EDX
0051EE89  56                        PUSH ESI
0051EE8A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0051EE8D  C1 E0 02                  SHL EAX,0x2
0051EE90  50                        PUSH EAX
0051EE91  6A 00                     PUSH 0x0
0051EE93  50                        PUSH EAX
0051EE94  8B 83 EC 01 00 00         MOV EAX,dword ptr [EBX + 0x1ec]
0051EE9A  6A 00                     PUSH 0x0
0051EE9C  50                        PUSH EAX
0051EE9D  E8 6E 6C 19 00            CALL 0x006b5b10
0051EEA2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0051EEA5  33 C0                     XOR EAX,EAX
0051EEA7  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
0051EEAE  66 8B 41 14               MOV AX,word ptr [ECX + 0x14]
0051EEB2  8B 8B B3 01 00 00         MOV ECX,dword ptr [EBX + 0x1b3]
0051EEB8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0051EEBB  40                        INC EAX
0051EEBC  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
0051EEBF  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0051EEC2  3B C1                     CMP EAX,ECX
0051EEC4  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0051EEC7  0F 83 94 00 00 00         JNC 0x0051ef61
LAB_0051eecd:
0051EECD  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0051EED0  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0051EED3  3B D0                     CMP EDX,EAX
0051EED5  73 11                     JNC 0x0051eee8
0051EED7  8B 8B B3 01 00 00         MOV ECX,dword ptr [EBX + 0x1b3]
0051EEDD  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0051EEE0  0F AF C2                  IMUL EAX,EDX
0051EEE3  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
0051EEE6  EB 02                     JMP 0x0051eeea
LAB_0051eee8:
0051EEE8  33 C0                     XOR EAX,EAX
LAB_0051eeea:
0051EEEA  85 C0                     TEST EAX,EAX
0051EEEC  74 73                     JZ 0x0051ef61
0051EEEE  8A 40 11                  MOV AL,byte ptr [EAX + 0x11]
0051EEF1  84 C0                     TEST AL,AL
0051EEF3  76 6C                     JBE 0x0051ef61
0051EEF5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051EEF8  3A 42 11                  CMP AL,byte ptr [EDX + 0x11]
0051EEFB  73 52                     JNC 0x0051ef4f
0051EEFD  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0051EF00  8D 79 FF                  LEA EDI,[ECX + -0x1]
0051EF03  85 FF                     TEST EDI,EDI
0051EF05  7E 48                     JLE 0x0051ef4f
LAB_0051ef07:
0051EF07  3B 7D EC                  CMP EDI,dword ptr [EBP + -0x14]
0051EF0A  73 13                     JNC 0x0051ef1f
0051EF0C  8B 93 B3 01 00 00         MOV EDX,dword ptr [EBX + 0x1b3]
0051EF12  8B 72 08                  MOV ESI,dword ptr [EDX + 0x8]
0051EF15  8B 4A 1C                  MOV ECX,dword ptr [EDX + 0x1c]
0051EF18  0F AF F7                  IMUL ESI,EDI
0051EF1B  03 F1                     ADD ESI,ECX
0051EF1D  EB 02                     JMP 0x0051ef21
LAB_0051ef1f:
0051EF1F  33 F6                     XOR ESI,ESI
LAB_0051ef21:
0051EF21  85 F6                     TEST ESI,ESI
0051EF23  74 2A                     JZ 0x0051ef4f
0051EF25  8A 56 11                  MOV DL,byte ptr [ESI + 0x11]
0051EF28  84 D2                     TEST DL,DL
0051EF2A  76 23                     JBE 0x0051ef4f
0051EF2C  3A D0                     CMP DL,AL
0051EF2E  74 07                     JZ 0x0051ef37
0051EF30  4F                        DEC EDI
0051EF31  85 FF                     TEST EDI,EDI
0051EF33  7F D2                     JG 0x0051ef07
0051EF35  EB 18                     JMP 0x0051ef4f
LAB_0051ef37:
0051EF37  8A 4E 13                  MOV CL,byte ptr [ESI + 0x13]
0051EF3A  84 C9                     TEST CL,CL
0051EF3C  75 11                     JNZ 0x0051ef4f
0051EF3E  BA 01 00 00 00            MOV EDX,0x1
0051EF43  8A C8                     MOV CL,AL
0051EF45  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0051EF48  D3 E2                     SHL EDX,CL
0051EF4A  0B C2                     OR EAX,EDX
0051EF4C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_0051ef4f:
0051EF4F  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0051EF52  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0051EF55  40                        INC EAX
0051EF56  3B C1                     CMP EAX,ECX
0051EF58  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0051EF5B  0F 82 6C FF FF FF         JC 0x0051eecd
LAB_0051ef61:
0051EF61  33 FF                     XOR EDI,EDI
0051EF63  33 F6                     XOR ESI,ESI
LAB_0051ef65:
0051EF65  B8 01 00 00 00            MOV EAX,0x1
0051EF6A  8B CF                     MOV ECX,EDI
0051EF6C  D3 E0                     SHL EAX,CL
0051EF6E  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0051EF71  85 C1                     TEST ECX,EAX
0051EF73  74 1C                     JZ 0x0051ef91
0051EF75  8B 83 EC 01 00 00         MOV EAX,dword ptr [EBX + 0x1ec]
0051EF7B  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0051EF7E  6A 0D                     PUSH 0xd
0051EF80  52                        PUSH EDX
0051EF81  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0051EF84  51                        PUSH ECX
0051EF85  56                        PUSH ESI
0051EF86  6A 00                     PUSH 0x0
0051EF88  56                        PUSH ESI
0051EF89  6A 00                     PUSH 0x0
0051EF8B  50                        PUSH EAX
0051EF8C  E8 7F 6B 19 00            CALL 0x006b5b10
LAB_0051ef91:
0051EF91  83 C6 14                  ADD ESI,0x14
0051EF94  47                        INC EDI
0051EF95  81 FE 80 02 00 00         CMP ESI,0x280
0051EF9B  7C C8                     JL 0x0051ef65
LAB_0051ef9d:
0051EF9D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0051EFA0  8B 93 EC 01 00 00         MOV EDX,dword ptr [EBX + 0x1ec]
0051EFA6  33 C0                     XOR EAX,EAX
0051EFA8  68 FF 00 00 00            PUSH 0xff
0051EFAD  66 8B 41 1A               MOV AX,word ptr [ECX + 0x1a]
0051EFB1  6A 00                     PUSH 0x0
0051EFB3  83 C0 16                  ADD EAX,0x16
0051EFB6  52                        PUSH EDX
0051EFB7  8B 53 68                  MOV EDX,dword ptr [EBX + 0x68]
0051EFBA  50                        PUSH EAX
0051EFBB  6A 21                     PUSH 0x21
0051EFBD  6A 00                     PUSH 0x0
0051EFBF  52                        PUSH EDX
0051EFC0  E8 7B 64 19 00            CALL 0x006b5440
LAB_0051efc5:
0051EFC5  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
0051EFC8  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
0051EFCB  8B 53 60                  MOV EDX,dword ptr [EBX + 0x60]
0051EFCE  50                        PUSH EAX
0051EFCF  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0051EFD4  51                        PUSH ECX
0051EFD5  6A FF                     PUSH -0x1
0051EFD7  52                        PUSH EDX
0051EFD8  50                        PUSH EAX
0051EFD9  E8 62 46 19 00            CALL 0x006b3640
0051EFDE  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051EFE1  33 C0                     XOR EAX,EAX
0051EFE3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051EFE9  5F                        POP EDI
0051EFEA  5E                        POP ESI
0051EFEB  5B                        POP EBX
0051EFEC  8B E5                     MOV ESP,EBP
0051EFEE  5D                        POP EBP
0051EFEF  C2 04 00                  RET 0x4
LAB_0051eff2:
0051EFF2  8B 13                     MOV EDX,dword ptr [EBX]
0051EFF4  6A 00                     PUSH 0x0
0051EFF6  8B CB                     MOV ECX,EBX
0051EFF8  FF 52 18                  CALL dword ptr [EDX + 0x18]
0051EFFB  68 AE 00 00 00            PUSH 0xae
0051F000  E8 2A 6E EE FF            CALL 0x00405e2f
0051F005  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051F008  83 C4 04                  ADD ESP,0x4
0051F00B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051F011  33 C0                     XOR EAX,EAX
0051F013  5F                        POP EDI
0051F014  5E                        POP ESI
0051F015  5B                        POP EBX
0051F016  8B E5                     MOV ESP,EBP
0051F018  5D                        POP EBP
0051F019  C2 04 00                  RET 0x4
LAB_0051f01c:
0051F01C  68 4E 27 00 00            PUSH 0x274e
0051F021  6A 00                     PUSH 0x0
0051F023  68 94 38 7C 00            PUSH 0x7c3894
0051F028  E8 4F 67 EE FF            CALL 0x0040577c
0051F02D  83 C4 08                  ADD ESP,0x8
0051F030  8B CB                     MOV ECX,EBX
0051F032  50                        PUSH EAX
0051F033  56                        PUSH ESI
0051F034  E8 CF 44 EE FF            CALL 0x00403508
0051F039  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051F03C  33 C0                     XOR EAX,EAX
0051F03E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051F044  5F                        POP EDI
0051F045  5E                        POP ESI
0051F046  5B                        POP EBX
0051F047  8B E5                     MOV ESP,EBP
0051F049  5D                        POP EBP
0051F04A  C2 04 00                  RET 0x4
LAB_0051f04d:
0051F04D  05 61 3F FF FF            ADD EAX,0xffff3f61
0051F052  83 F8 16                  CMP EAX,0x16
0051F055  0F 87 3F 01 00 00         JA 0x0051f19a
0051F05B  33 C9                     XOR ECX,ECX
0051F05D  8A 88 EC F2 51 00         MOV CL,byte ptr [EAX + 0x51f2ec]
switchD_0051f063::switchD:
0051F063  FF 24 8D B0 F2 51 00      JMP dword ptr [ECX*0x4 + 0x51f2b0]
switchD_0051f063::caseD_c09f:
0051F06A  8B CB                     MOV ECX,EBX
0051F06C  E8 57 39 EE FF            CALL 0x004029c8
0051F071  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051F074  33 C0                     XOR EAX,EAX
0051F076  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051F07C  5F                        POP EDI
0051F07D  5E                        POP ESI
0051F07E  5B                        POP EBX
0051F07F  8B E5                     MOV ESP,EBP
0051F081  5D                        POP EBP
0051F082  C2 04 00                  RET 0x4
switchD_0051f063::caseD_c0a0:
0051F085  8B CB                     MOV ECX,EBX
0051F087  E8 A1 3D EE FF            CALL 0x00402e2d
0051F08C  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051F08F  33 C0                     XOR EAX,EAX
0051F091  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051F097  5F                        POP EDI
0051F098  5E                        POP ESI
0051F099  5B                        POP EBX
0051F09A  8B E5                     MOV ESP,EBP
0051F09C  5D                        POP EBP
0051F09D  C2 04 00                  RET 0x4
switchD_0051f063::caseD_c0a1:
0051F0A0  8B CB                     MOV ECX,EBX
0051F0A2  E8 5C 67 EE FF            CALL 0x00405803
0051F0A7  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051F0AA  33 C0                     XOR EAX,EAX
0051F0AC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051F0B2  5F                        POP EDI
0051F0B3  5E                        POP ESI
0051F0B4  5B                        POP EBX
0051F0B5  8B E5                     MOV ESP,EBP
0051F0B7  5D                        POP EBP
0051F0B8  C2 04 00                  RET 0x4
switchD_0051f063::caseD_c0a2:
0051F0BB  8B CB                     MOV ECX,EBX
0051F0BD  E8 81 4A EE FF            CALL 0x00403b43
0051F0C2  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051F0C5  33 C0                     XOR EAX,EAX
0051F0C7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051F0CD  5F                        POP EDI
0051F0CE  5E                        POP ESI
0051F0CF  5B                        POP EBX
0051F0D0  8B E5                     MOV ESP,EBP
0051F0D2  5D                        POP EBP
0051F0D3  C2 04 00                  RET 0x4
switchD_0051f063::caseD_c0a3:
0051F0D6  8B CB                     MOV ECX,EBX
0051F0D8  E8 41 29 EE FF            CALL 0x00401a1e
0051F0DD  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051F0E0  33 C0                     XOR EAX,EAX
0051F0E2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051F0E8  5F                        POP EDI
0051F0E9  5E                        POP ESI
0051F0EA  5B                        POP EBX
0051F0EB  8B E5                     MOV ESP,EBP
0051F0ED  5D                        POP EBP
0051F0EE  C2 04 00                  RET 0x4
switchD_0051f063::caseD_c0a4:
0051F0F1  8B CB                     MOV ECX,EBX
0051F0F3  E8 39 6B EE FF            CALL 0x00405c31
0051F0F8  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051F0FB  33 C0                     XOR EAX,EAX
0051F0FD  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051F103  5F                        POP EDI
0051F104  5E                        POP ESI
0051F105  5B                        POP EBX
0051F106  8B E5                     MOV ESP,EBP
0051F108  5D                        POP EBP
0051F109  C2 04 00                  RET 0x4
switchD_0051f063::caseD_c0a5:
0051F10C  8B CB                     MOV ECX,EBX
0051F10E  E8 B9 48 EE FF            CALL 0x004039cc
0051F113  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051F116  33 C0                     XOR EAX,EAX
0051F118  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051F11E  5F                        POP EDI
0051F11F  5E                        POP ESI
0051F120  5B                        POP EBX
0051F121  8B E5                     MOV ESP,EBP
0051F123  5D                        POP EBP
0051F124  C2 04 00                  RET 0x4
switchD_0051f063::caseD_c0af:
0051F127  68 C7 25 40 00            PUSH 0x4025c7
0051F12C  6A 00                     PUSH 0x0
0051F12E  68 84 38 7C 00            PUSH 0x7c3884
0051F133  EB 52                     JMP 0x0051f187
switchD_0051f063::caseD_c0b0:
0051F135  68 C7 25 40 00            PUSH 0x4025c7
0051F13A  6A 00                     PUSH 0x0
0051F13C  68 24 3E 7C 00            PUSH 0x7c3e24
0051F141  EB 44                     JMP 0x0051f187
switchD_0051f063::caseD_c0b1:
0051F143  68 C7 25 40 00            PUSH 0x4025c7
0051F148  6A 00                     PUSH 0x0
0051F14A  68 14 3E 7C 00            PUSH 0x7c3e14
0051F14F  EB 36                     JMP 0x0051f187
switchD_0051f063::caseD_c0b2:
0051F151  68 C7 25 40 00            PUSH 0x4025c7
0051F156  6A 00                     PUSH 0x0
0051F158  68 04 3E 7C 00            PUSH 0x7c3e04
0051F15D  EB 28                     JMP 0x0051f187
switchD_0051f063::caseD_c0b3:
0051F15F  68 C7 25 40 00            PUSH 0x4025c7
0051F164  6A 00                     PUSH 0x0
0051F166  68 F4 3D 7C 00            PUSH 0x7c3df4
0051F16B  EB 1A                     JMP 0x0051f187
switchD_0051f063::caseD_c0b4:
0051F16D  68 C7 25 40 00            PUSH 0x4025c7
0051F172  6A 00                     PUSH 0x0
0051F174  68 E4 3D 7C 00            PUSH 0x7c3de4
0051F179  EB 0C                     JMP 0x0051f187
switchD_0051f063::caseD_c0b5:
0051F17B  68 C7 25 40 00            PUSH 0x4025c7
0051F180  6A 00                     PUSH 0x0
0051F182  68 D4 3D 7C 00            PUSH 0x7c3dd4
LAB_0051f187:
0051F187  E8 F0 65 EE FF            CALL 0x0040577c
0051F18C  83 C4 08                  ADD ESP,0x8
0051F18F  50                        PUSH EAX
0051F190  6A 01                     PUSH 0x1
LAB_0051f192:
0051F192  56                        PUSH ESI
0051F193  8B CB                     MOV ECX,EBX
0051F195  E8 FB 42 EE FF            CALL 0x00403495
switchD_0051e4d9::caseD_7:
0051F19A  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
0051F19D  33 C0                     XOR EAX,EAX
0051F19F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051F1A5  5F                        POP EDI
0051F1A6  5E                        POP ESI
0051F1A7  5B                        POP EBX
0051F1A8  8B E5                     MOV ESP,EBP
0051F1AA  5D                        POP EBP
0051F1AB  C2 04 00                  RET 0x4
LAB_0051f1ae:
0051F1AE  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
0051F1B1  68 B8 3D 7C 00            PUSH 0x7c3db8
0051F1B6  68 CC 4C 7A 00            PUSH 0x7a4ccc
0051F1BB  56                        PUSH ESI
0051F1BC  6A 00                     PUSH 0x0
0051F1BE  68 C7 0A 00 00            PUSH 0xac7
0051F1C3  68 3C 38 7C 00            PUSH 0x7c383c
0051F1C8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0051F1CD  E8 FE E2 18 00            CALL 0x006ad4d0
0051F1D2  83 C4 18                  ADD ESP,0x18
0051F1D5  85 C0                     TEST EAX,EAX
0051F1D7  74 01                     JZ 0x0051f1da
0051F1D9  CC                        INT3
LAB_0051f1da:
0051F1DA  68 C7 0A 00 00            PUSH 0xac7
0051F1DF  68 3C 38 7C 00            PUSH 0x7c383c
0051F1E4  6A 00                     PUSH 0x0
0051F1E6  56                        PUSH ESI
0051F1E7  E8 54 6C 18 00            CALL 0x006a5e40
0051F1EC  5F                        POP EDI
0051F1ED  5E                        POP ESI
0051F1EE  B8 FF FF 00 00            MOV EAX,0xffff
0051F1F3  5B                        POP EBX
0051F1F4  8B E5                     MOV ESP,EBP
0051F1F6  5D                        POP EBP
0051F1F7  C2 04 00                  RET 0x4
