FUN_00575640:
00575640  55                        PUSH EBP
00575641  8B EC                     MOV EBP,ESP
00575643  83 EC 1C                  SUB ESP,0x1c
00575646  53                        PUSH EBX
00575647  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0057564A  56                        PUSH ESI
0057564B  57                        PUSH EDI
0057564C  0F BF 03                  MOVSX EAX,word ptr [EBX]
0057564F  0F BF 4B 02               MOVSX ECX,word ptr [EBX + 0x2]
00575653  0F AF C1                  IMUL EAX,ECX
00575656  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00575659  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0057565C  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
0057565F  33 C0                     XOR EAX,EAX
00575661  D1 E6                     SHL ESI,0x1
00575663  8B CE                     MOV ECX,ESI
00575665  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
00575668  8B D1                     MOV EDX,ECX
0057566A  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
00575671  C1 E9 02                  SHR ECX,0x2
00575674  F3 AB                     STOSD.REP ES:EDI
00575676  8B CA                     MOV ECX,EDX
00575678  83 E1 03                  AND ECX,0x3
0057567B  F3 AA                     STOSB.REP ES:EDI
0057567D  8B 83 55 04 00 00         MOV EAX,dword ptr [EBX + 0x455]
00575683  85 C0                     TEST EAX,EAX
00575685  0F 8E 75 01 00 00         JLE 0x00575800
0057568B  8D 83 59 04 00 00         LEA EAX,[EBX + 0x459]
00575691  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_00575694:
00575694  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00575697  8B 09                     MOV ECX,dword ptr [ECX]
00575699  85 C9                     TEST ECX,ECX
0057569B  0F 84 41 01 00 00         JZ 0x005757e2
005756A1  66 8B 41 08               MOV AX,word ptr [ECX + 0x8]
005756A5  66 85 C0                  TEST AX,AX
005756A8  0F 84 34 01 00 00         JZ 0x005757e2
005756AE  F6 41 4F 40               TEST byte ptr [ECX + 0x4f],0x40
005756B2  0F 85 2A 01 00 00         JNZ 0x005757e2
005756B8  0F BF 51 06               MOVSX EDX,word ptr [ECX + 0x6]
005756BC  0F BF 33                  MOVSX ESI,word ptr [EBX]
005756BF  0F BF C0                  MOVSX EAX,AX
005756C2  0F AF D6                  IMUL EDX,ESI
005756C5  48                        DEC EAX
005756C6  BF 00 80 00 00            MOV EDI,0x8000
005756CB  0F AF 45 F8               IMUL EAX,dword ptr [EBP + -0x8]
005756CF  03 D0                     ADD EDX,EAX
005756D1  C7 45 FC 08 00 00 00      MOV dword ptr [EBP + -0x4],0x8
005756D8  0F BF 41 04               MOVSX EAX,word ptr [ECX + 0x4]
005756DC  03 D0                     ADD EDX,EAX
005756DE  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005756E1  C7 45 08 80 00 00 00      MOV dword ptr [EBP + 0x8],0x80
005756E8  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
005756EF  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
005756F2  8A 41 48                  MOV AL,byte ptr [ECX + 0x48]
005756F5  84 C0                     TEST AL,AL
005756F7  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
005756FA  0F 86 DF 00 00 00         JBE 0x005757df
00575700  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_00575703:
00575703  8B 41 2C                  MOV EAX,dword ptr [ECX + 0x2c]
00575706  85 C6                     TEST ESI,EAX
00575708  74 22                     JZ 0x0057572c
0057570A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0057570D  85 C2                     TEST EDX,EAX
0057570F  74 05                     JZ 0x00575716
00575711  83 C8 FF                  OR EAX,0xffffffff
00575714  EB 10                     JMP 0x00575726
LAB_00575716:
00575716  23 C7                     AND EAX,EDI
00575718  F7 D8                     NEG EAX
0057571A  1B C0                     SBB EAX,EAX
0057571C  25 FF 3F 00 00            AND EAX,0x3fff
00575721  05 FF BF FF FF            ADD EAX,0xffffbfff
LAB_00575726:
00575726  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00575729  66 89 02                  MOV word ptr [EDX],AX
LAB_0057572c:
0057572C  8B 41 30                  MOV EAX,dword ptr [ECX + 0x30]
0057572F  85 C6                     TEST ESI,EAX
00575731  74 23                     JZ 0x00575756
00575733  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00575736  85 C2                     TEST EDX,EAX
00575738  74 05                     JZ 0x0057573f
0057573A  83 C8 FF                  OR EAX,0xffffffff
0057573D  EB 10                     JMP 0x0057574f
LAB_0057573f:
0057573F  23 C7                     AND EAX,EDI
00575741  F7 D8                     NEG EAX
00575743  1B C0                     SBB EAX,EAX
00575745  25 FF 3F 00 00            AND EAX,0x3fff
0057574A  05 FF BF FF FF            ADD EAX,0xffffbfff
LAB_0057574f:
0057574F  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00575752  66 89 42 02               MOV word ptr [EDX + 0x2],AX
LAB_00575756:
00575756  8B 41 34                  MOV EAX,dword ptr [ECX + 0x34]
00575759  85 C6                     TEST ESI,EAX
0057575B  74 26                     JZ 0x00575783
0057575D  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00575760  85 C6                     TEST ESI,EAX
00575762  74 05                     JZ 0x00575769
00575764  83 C8 FF                  OR EAX,0xffffffff
00575767  EB 10                     JMP 0x00575779
LAB_00575769:
00575769  23 C7                     AND EAX,EDI
0057576B  F7 D8                     NEG EAX
0057576D  1B C0                     SBB EAX,EAX
0057576F  25 FF 3F 00 00            AND EAX,0x3fff
00575774  05 FF BF FF FF            ADD EAX,0xffffbfff
LAB_00575779:
00575779  0F BF 33                  MOVSX ESI,word ptr [EBX]
0057577C  66 89 04 72               MOV word ptr [EDX + ESI*0x2],AX
00575780  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_00575783:
00575783  8B 41 38                  MOV EAX,dword ptr [ECX + 0x38]
00575786  85 C6                     TEST ESI,EAX
00575788  74 27                     JZ 0x005757b1
0057578A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0057578D  85 C6                     TEST ESI,EAX
0057578F  74 05                     JZ 0x00575796
00575791  83 C8 FF                  OR EAX,0xffffffff
00575794  EB 10                     JMP 0x005757a6
LAB_00575796:
00575796  23 C7                     AND EAX,EDI
00575798  F7 D8                     NEG EAX
0057579A  1B C0                     SBB EAX,EAX
0057579C  25 FF 3F 00 00            AND EAX,0x3fff
005757A1  05 FF BF FF FF            ADD EAX,0xffffbfff
LAB_005757a6:
005757A6  0F BF 33                  MOVSX ESI,word ptr [EBX]
005757A9  66 89 44 72 02            MOV word ptr [EDX + ESI*0x2 + 0x2],AX
005757AE  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_005757b1:
005757B1  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005757B4  40                        INC EAX
005757B5  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005757B8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005757BB  03 C0                     ADD EAX,EAX
005757BD  2B D0                     SUB EDX,EAX
005757BF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005757C2  D1 F8                     SAR EAX,0x1
005757C4  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
005757C7  33 C0                     XOR EAX,EAX
005757C9  8A 41 48                  MOV AL,byte ptr [ECX + 0x48]
005757CC  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
005757CF  D1 FE                     SAR ESI,0x1
005757D1  D1 FF                     SAR EDI,0x1
005757D3  39 45 F0                  CMP dword ptr [EBP + -0x10],EAX
005757D6  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005757D9  0F 8C 24 FF FF FF         JL 0x00575703
LAB_005757df:
005757DF  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
LAB_005757e2:
005757E2  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005757E5  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005757E8  8B 8B 55 04 00 00         MOV ECX,dword ptr [EBX + 0x455]
005757EE  40                        INC EAX
005757EF  83 C2 04                  ADD EDX,0x4
005757F2  3B C1                     CMP EAX,ECX
005757F4  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005757F7  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005757FA  0F 8C 94 FE FF FF         JL 0x00575694
LAB_00575800:
00575800  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00575803  85 C0                     TEST EAX,EAX
00575805  0F 84 F8 00 00 00         JZ 0x00575903
0057580B  56                        PUSH ESI
0057580C  E8 5F 54 13 00            CALL 0x006aac70
00575811  8B CE                     MOV ECX,ESI
00575813  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00575816  8B D1                     MOV EDX,ECX
00575818  8B F8                     MOV EDI,EAX
0057581A  C1 E9 02                  SHR ECX,0x2
0057581D  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00575820  F3 A5                     MOVSD.REP ES:EDI,ESI
00575822  8B CA                     MOV ECX,EDX
00575824  83 E1 03                  AND ECX,0x3
00575827  F3 A4                     MOVSB.REP ES:EDI,ESI
00575829  33 FF                     XOR EDI,EDI
0057582B  66 39 7B 02               CMP word ptr [EBX + 0x2],DI
0057582F  7E 5D                     JLE 0x0057588e
LAB_00575831:
00575831  0F BF 03                  MOVSX EAX,word ptr [EBX]
00575834  8B D0                     MOV EDX,EAX
00575836  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00575839  0F AF D7                  IMUL EDX,EDI
0057583C  C1 E1 02                  SHL ECX,0x2
0057583F  03 D1                     ADD EDX,ECX
00575841  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00575844  33 F6                     XOR ESI,ESI
00575846  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
00575849  85 C0                     TEST EAX,EAX
0057584B  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0057584E  7E 35                     JLE 0x00575885
LAB_00575850:
00575850  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00575853  66 83 39 00               CMP word ptr [ECX],0x0
00575857  75 1B                     JNZ 0x00575874
00575859  0F BF 53 02               MOVSX EDX,word ptr [EBX + 0x2]
0057585D  6A FF                     PUSH -0x1
0057585F  6A FF                     PUSH -0x1
00575861  6A FF                     PUSH -0x1
00575863  6A 04                     PUSH 0x4
00575865  57                        PUSH EDI
00575866  56                        PUSH ESI
00575867  6A 05                     PUSH 0x5
00575869  52                        PUSH EDX
0057586A  50                        PUSH EAX
0057586B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0057586E  50                        PUSH EAX
0057586F  E8 1C 58 13 00            CALL 0x006ab090
LAB_00575874:
00575874  0F BF 03                  MOVSX EAX,word ptr [EBX]
00575877  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0057587A  46                        INC ESI
0057587B  83 C2 02                  ADD EDX,0x2
0057587E  3B F0                     CMP ESI,EAX
00575880  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
00575883  7C CB                     JL 0x00575850
LAB_00575885:
00575885  0F BF 4B 02               MOVSX ECX,word ptr [EBX + 0x2]
00575889  47                        INC EDI
0057588A  3B F9                     CMP EDI,ECX
0057588C  7C A3                     JL 0x00575831
LAB_0057588e:
0057588E  C7 45 10 00 00 00 00      MOV dword ptr [EBP + 0x10],0x0
00575895  C7 45 E8 05 00 00 00      MOV dword ptr [EBP + -0x18],0x5
LAB_0057589c:
0057589C  33 FF                     XOR EDI,EDI
0057589E  66 39 7B 02               CMP word ptr [EBX + 0x2],DI
005758A2  7E 42                     JLE 0x005758e6
LAB_005758a4:
005758A4  0F BF 0B                  MOVSX ECX,word ptr [EBX]
005758A7  8B C1                     MOV EAX,ECX
005758A9  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
005758AC  0F AF C7                  IMUL EAX,EDI
005758AF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005758B2  03 C6                     ADD EAX,ESI
005758B4  D1 E0                     SHL EAX,0x1
005758B6  8D 34 10                  LEA ESI,[EAX + EDX*0x1]
005758B9  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005758BC  03 C2                     ADD EAX,EDX
005758BE  33 D2                     XOR EDX,EDX
005758C0  85 C9                     TEST ECX,ECX
005758C2  7E 19                     JLE 0x005758dd
LAB_005758c4:
005758C4  66 83 3E 00               CMP word ptr [ESI],0x0
005758C8  75 05                     JNZ 0x005758cf
005758CA  66 C7 00 FE FF            MOV word ptr [EAX],0xfffe
LAB_005758cf:
005758CF  0F BF 0B                  MOVSX ECX,word ptr [EBX]
005758D2  42                        INC EDX
005758D3  83 C6 02                  ADD ESI,0x2
005758D6  83 C0 02                  ADD EAX,0x2
005758D9  3B D1                     CMP EDX,ECX
005758DB  7C E7                     JL 0x005758c4
LAB_005758dd:
005758DD  0F BF 53 02               MOVSX EDX,word ptr [EBX + 0x2]
005758E1  47                        INC EDI
005758E2  3B FA                     CMP EDI,EDX
005758E4  7C BE                     JL 0x005758a4
LAB_005758e6:
005758E6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005758E9  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005758EC  03 C8                     ADD ECX,EAX
005758EE  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005758F1  48                        DEC EAX
005758F2  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
005758F5  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005758F8  75 A2                     JNZ 0x0057589c
005758FA  8D 4D 08                  LEA ECX,[EBP + 0x8]
005758FD  51                        PUSH ECX
005758FE  E8 5D 57 13 00            CALL 0x006ab060
LAB_00575903:
00575903  5F                        POP EDI
00575904  5E                        POP ESI
00575905  5B                        POP EBX
00575906  8B E5                     MOV ESP,EBP
00575908  5D                        POP EBP
00575909  C3                        RET
