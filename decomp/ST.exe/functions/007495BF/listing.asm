FUN_007495bf:
007495BF  55                        PUSH EBP
007495C0  8B EC                     MOV EBP,ESP
007495C2  51                        PUSH ECX
007495C3  53                        PUSH EBX
007495C4  56                        PUSH ESI
007495C5  8B F1                     MOV ESI,ECX
007495C7  57                        PUSH EDI
007495C8  8B FE                     MOV EDI,ESI
007495CA  F7 DF                     NEG EDI
007495CC  8D 46 10                  LEA EAX,[ESI + 0x10]
007495CF  1B FF                     SBB EDI,EDI
007495D1  23 F8                     AND EDI,EAX
007495D3  57                        PUSH EDI
007495D4  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
007495DA  8B CE                     MOV ECX,ESI
007495DC  E8 34 FE FF FF            CALL 0x00749415
007495E1  85 C0                     TEST EAX,EAX
007495E3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007495E6  7D 10                     JGE 0x007495f8
007495E8  57                        PUSH EDI
007495E9  8B F0                     MOV ESI,EAX
007495EB  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
007495F1  8B C6                     MOV EAX,ESI
007495F3  E9 A3 00 00 00            JMP 0x0074969b
LAB_007495f8:
007495F8  83 F8 01                  CMP EAX,0x1
007495FB  0F 84 91 00 00 00         JZ 0x00749692
00749601  83 7E 58 00               CMP dword ptr [ESI + 0x58],0x0
00749605  74 07                     JZ 0x0074960e
00749607  8B CE                     MOV ECX,ESI
00749609  E8 93 00 00 00            CALL 0x007496a1
LAB_0074960e:
0074960E  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
00749611  6A 04                     PUSH 0x4
00749613  03 46 48                  ADD EAX,dword ptr [ESI + 0x48]
00749616  68 00 10 00 00            PUSH 0x1000
0074961B  0F AF 46 38               IMUL EAX,dword ptr [ESI + 0x38]
0074961F  50                        PUSH EAX
00749620  6A 00                     PUSH 0x0
00749622  FF 15 E4 BB 85 00         CALL dword ptr [0x0085bbe4]
00749628  85 C0                     TEST EAX,EAX
0074962A  89 46 58                  MOV dword ptr [ESI + 0x58],EAX
0074962D  74 51                     JZ 0x00749680
0074962F  8B D8                     MOV EBX,EAX
00749631  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
LAB_00749634:
00749634  3B 46 38                  CMP EAX,dword ptr [ESI + 0x38]
00749637  7D 55                     JGE 0x0074968e
00749639  6A 48                     PUSH 0x48
0074963B  E8 F0 4E FE FF            CALL 0x0072e530
00749640  85 C0                     TEST EAX,EAX
00749642  59                        POP ECX
00749643  74 19                     JZ 0x0074965e
00749645  FF 76 40                  PUSH dword ptr [ESI + 0x40]
00749648  8B CB                     MOV ECX,EBX
0074964A  03 4E 48                  ADD ECX,dword ptr [ESI + 0x48]
0074964D  51                        PUSH ECX
0074964E  8D 4D FC                  LEA ECX,[EBP + -0x4]
00749651  51                        PUSH ECX
00749652  56                        PUSH ESI
00749653  6A 00                     PUSH 0x0
00749655  8B C8                     MOV ECX,EAX
00749657  E8 27 F4 FF FF            CALL 0x00748a83
0074965C  EB 02                     JMP 0x00749660
LAB_0074965e:
0074965E  33 C0                     XOR EAX,EAX
LAB_00749660:
00749660  85 C0                     TEST EAX,EAX
00749662  74 1C                     JZ 0x00749680
00749664  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
00749667  89 48 1C                  MOV dword ptr [EAX + 0x1c],ECX
0074966A  FF 46 2C                  INC dword ptr [ESI + 0x2c]
0074966D  89 46 28                  MOV dword ptr [ESI + 0x28],EAX
00749670  8B 4E 40                  MOV ECX,dword ptr [ESI + 0x40]
00749673  03 4E 48                  ADD ECX,dword ptr [ESI + 0x48]
00749676  FF 46 3C                  INC dword ptr [ESI + 0x3c]
00749679  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
0074967C  03 D9                     ADD EBX,ECX
0074967E  EB B4                     JMP 0x00749634
LAB_00749680:
00749680  57                        PUSH EDI
00749681  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00749687  B8 0E 00 07 80            MOV EAX,0x8007000e
0074968C  EB 0D                     JMP 0x0074969b
LAB_0074968e:
0074968E  83 66 4C 00               AND dword ptr [ESI + 0x4c],0x0
LAB_00749692:
00749692  57                        PUSH EDI
00749693  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00749699  33 C0                     XOR EAX,EAX
LAB_0074969b:
0074969B  5F                        POP EDI
0074969C  5E                        POP ESI
0074969D  5B                        POP EBX
0074969E  C9                        LEAVE
0074969F  C3                        RET
