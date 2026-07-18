FUN_004714d0:
004714D0  55                        PUSH EBP
004714D1  8B EC                     MOV EBP,ESP
004714D3  51                        PUSH ECX
004714D4  56                        PUSH ESI
004714D5  8B F1                     MOV ESI,ECX
004714D7  57                        PUSH EDI
004714D8  8B 86 80 05 00 00         MOV EAX,dword ptr [ESI + 0x580]
004714DE  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
004714E8  83 F8 08                  CMP EAX,0x8
004714EB  0F 87 40 04 00 00         JA 0x00471931
switchD_004714f1::switchD:
004714F1  FF 24 85 64 19 47 00      JMP dword ptr [EAX*0x4 + 0x471964]
switchD_004714f1::caseD_0:
004714F8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004714FB  8B CE                     MOV ECX,ESI
004714FD  50                        PUSH EAX
004714FE  E8 ED 28 F9 FF            CALL 0x00403df0
LAB_00471503:
00471503  8B F8                     MOV EDI,EAX
00471505  85 FF                     TEST EDI,EDI
00471507  75 07                     JNZ 0x00471510
00471509  8B CE                     MOV ECX,ESI
0047150B  E8 BE 0E F9 FF            CALL 0x004023ce
LAB_00471510:
00471510  8B C7                     MOV EAX,EDI
00471512  5F                        POP EDI
00471513  5E                        POP ESI
00471514  8B E5                     MOV ESP,EBP
00471516  5D                        POP EBP
00471517  C2 04 00                  RET 0x4
switchD_004714f1::caseD_2:
0047151A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0047151D  51                        PUSH ECX
0047151E  8B CE                     MOV ECX,ESI
00471520  E8 15 34 F9 FF            CALL 0x0040493a
00471525  EB DC                     JMP 0x00471503
switchD_004714f1::caseD_7:
00471527  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0047152A  8B CE                     MOV ECX,ESI
0047152C  52                        PUSH EDX
0047152D  E8 BE 28 F9 FF            CALL 0x00403df0
00471532  5F                        POP EDI
00471533  5E                        POP ESI
00471534  8B E5                     MOV ESP,EBP
00471536  5D                        POP EBP
00471537  C2 04 00                  RET 0x4
switchD_004714f1::caseD_4:
0047153A  8B 86 84 05 00 00         MOV EAX,dword ptr [ESI + 0x584]
00471540  85 C0                     TEST EAX,EAX
00471542  0F 84 07 02 00 00         JZ 0x0047174f
00471548  83 F8 01                  CMP EAX,0x1
0047154B  0F 84 FE 01 00 00         JZ 0x0047174f
00471551  83 F8 02                  CMP EAX,0x2
00471554  0F 84 F5 01 00 00         JZ 0x0047174f
0047155A  83 F8 03                  CMP EAX,0x3
0047155D  75 57                     JNZ 0x004715b6
0047155F  66 8B 8E 70 05 00 00      MOV CX,word ptr [ESI + 0x570]
00471566  66 8B 96 6E 05 00 00      MOV DX,word ptr [ESI + 0x56e]
0047156D  66 69 C9 C8 00            IMUL CX,CX,0xc8
00471572  66 69 D2 C9 00            IMUL DX,DX,0xc9
00471577  83 C1 64                  ADD ECX,0x64
0047157A  8B 06                     MOV EAX,dword ptr [ESI]
0047157C  51                        PUSH ECX
0047157D  66 8B 8E 6C 05 00 00      MOV CX,word ptr [ESI + 0x56c]
00471584  66 69 C9 C9 00            IMUL CX,CX,0xc9
00471589  83 C2 64                  ADD EDX,0x64
0047158C  83 C1 64                  ADD ECX,0x64
0047158F  52                        PUSH EDX
00471590  66 8B 56 45               MOV DX,word ptr [ESI + 0x45]
00471594  51                        PUSH ECX
00471595  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
00471599  52                        PUSH EDX
0047159A  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
0047159E  51                        PUSH ECX
0047159F  52                        PUSH EDX
004715A0  8B CE                     MOV ECX,ESI
004715A2  FF 50 10                  CALL dword ptr [EAX + 0x10]
004715A5  66 89 86 72 05 00 00      MOV word ptr [ESI + 0x572],AX
004715AC  C7 86 84 05 00 00 04 00 00 00  MOV dword ptr [ESI + 0x584],0x4
LAB_004715b6:
004715B6  8B 86 84 05 00 00         MOV EAX,dword ptr [ESI + 0x584]
004715BC  83 F8 04                  CMP EAX,0x4
004715BF  0F 85 91 00 00 00         JNZ 0x00471656
004715C5  66 8B 86 72 05 00 00      MOV AX,word ptr [ESI + 0x572]
004715CC  8B CE                     MOV ECX,ESI
004715CE  50                        PUSH EAX
004715CF  E8 DE 1A F9 FF            CALL 0x004030b2
004715D4  50                        PUSH EAX
004715D5  8B CE                     MOV ECX,ESI
004715D7  E8 20 0D F9 FF            CALL 0x004022fc
004715DC  83 F8 FF                  CMP EAX,-0x1
004715DF  74 29                     JZ 0x0047160a
004715E1  85 C0                     TEST EAX,EAX
004715E3  75 0A                     JNZ 0x004715ef
004715E5  C7 86 84 05 00 00 05 00 00 00  MOV dword ptr [ESI + 0x584],0x5
LAB_004715ef:
004715EF  8B 16                     MOV EDX,dword ptr [ESI]
004715F1  8B CE                     MOV ECX,ESI
004715F3  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
004715F9  F7 D8                     NEG EAX
004715FB  1B C0                     SBB EAX,EAX
004715FD  5F                        POP EDI
004715FE  24 FD                     AND AL,0xfd
00471600  5E                        POP ESI
00471601  83 C0 02                  ADD EAX,0x2
00471604  8B E5                     MOV ESP,EBP
00471606  5D                        POP EBP
00471607  C2 04 00                  RET 0x4
LAB_0047160a:
0047160A  68 F8 AC 7A 00            PUSH 0x7aacf8
0047160F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00471614  6A 00                     PUSH 0x0
00471616  6A 00                     PUSH 0x0
00471618  68 EB 2A 00 00            PUSH 0x2aeb
0047161D  68 3C 9D 7A 00            PUSH 0x7a9d3c
00471622  E8 A9 BE 23 00            CALL 0x006ad4d0
00471627  83 C4 18                  ADD ESP,0x18
0047162A  85 C0                     TEST EAX,EAX
0047162C  74 01                     JZ 0x0047162f
0047162E  CC                        INT3
LAB_0047162f:
0047162F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00471634  68 EC 2A 00 00            PUSH 0x2aec
00471639  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047163E  50                        PUSH EAX
0047163F  68 FF FF 00 00            PUSH 0xffff
00471644  E8 F7 47 23 00            CALL 0x006a5e40
00471649  5F                        POP EDI
0047164A  B8 FF FF 00 00            MOV EAX,0xffff
0047164F  5E                        POP ESI
00471650  8B E5                     MOV ESP,EBP
00471652  5D                        POP EBP
00471653  C2 04 00                  RET 0x4
LAB_00471656:
00471656  83 F8 05                  CMP EAX,0x5
00471659  BF 06 00 00 00            MOV EDI,0x6
0047165E  75 50                     JNZ 0x004716b0
00471660  8A 4E 61                  MOV CL,byte ptr [ESI + 0x61]
00471663  66 8B 96 70 05 00 00      MOV DX,word ptr [ESI + 0x570]
0047166A  66 8B 86 6E 05 00 00      MOV AX,word ptr [ESI + 0x56e]
00471671  51                        PUSH ECX
00471672  66 8B 8E 6C 05 00 00      MOV CX,word ptr [ESI + 0x56c]
00471679  66 69 D2 C8 00            IMUL DX,DX,0xc8
0047167E  66 69 C0 C9 00            IMUL AX,AX,0xc9
00471683  66 69 C9 C9 00            IMUL CX,CX,0xc9
00471688  83 C2 64                  ADD EDX,0x64
0047168B  83 C0 64                  ADD EAX,0x64
0047168E  52                        PUSH EDX
0047168F  66 8B 56 45               MOV DX,word ptr [ESI + 0x45]
00471693  83 C1 64                  ADD ECX,0x64
00471696  50                        PUSH EAX
00471697  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0047169B  51                        PUSH ECX
0047169C  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
004716A0  52                        PUSH EDX
004716A1  50                        PUSH EAX
004716A2  51                        PUSH ECX
004716A3  8B CE                     MOV ECX,ESI
004716A5  E8 AB 0D F9 FF            CALL 0x00402455
004716AA  89 BE 84 05 00 00         MOV dword ptr [ESI + 0x584],EDI
LAB_004716b0:
004716B0  39 BE 84 05 00 00         CMP dword ptr [ESI + 0x584],EDI
004716B6  0F 85 86 00 00 00         JNZ 0x00471742
004716BC  8D 55 08                  LEA EDX,[EBP + 0x8]
004716BF  8D 45 FC                  LEA EAX,[EBP + -0x4]
004716C2  52                        PUSH EDX
004716C3  50                        PUSH EAX
004716C4  8B CE                     MOV ECX,ESI
004716C6  E8 7C 11 F9 FF            CALL 0x00402847
004716CB  83 F8 FF                  CMP EAX,-0x1
004716CE  74 25                     JZ 0x004716f5
004716D0  85 C0                     TEST EAX,EAX
004716D2  0F 85 17 FF FF FF         JNZ 0x004715ef
004716D8  8B CE                     MOV ECX,ESI
004716DA  E8 EF 0C F9 FF            CALL 0x004023ce
LAB_004716df:
004716DF  8B 06                     MOV EAX,dword ptr [ESI]
004716E1  8B CE                     MOV ECX,ESI
004716E3  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
004716E9  F7 D8                     NEG EAX
004716EB  5F                        POP EDI
004716EC  5E                        POP ESI
004716ED  1B C0                     SBB EAX,EAX
004716EF  8B E5                     MOV ESP,EBP
004716F1  5D                        POP EBP
004716F2  C2 04 00                  RET 0x4
LAB_004716f5:
004716F5  68 D0 AC 7A 00            PUSH 0x7aacd0
004716FA  68 CC 4C 7A 00            PUSH 0x7a4ccc
004716FF  6A 00                     PUSH 0x0
00471701  6A 00                     PUSH 0x0
00471703  68 FF 2A 00 00            PUSH 0x2aff
00471708  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047170D  E8 BE BD 23 00            CALL 0x006ad4d0
00471712  83 C4 18                  ADD ESP,0x18
00471715  85 C0                     TEST EAX,EAX
00471717  74 01                     JZ 0x0047171a
00471719  CC                        INT3
LAB_0047171a:
0047171A  68 00 2B 00 00            PUSH 0x2b00
LAB_0047171f:
0047171F  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00471725  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047172A  51                        PUSH ECX
0047172B  68 FF FF 00 00            PUSH 0xffff
00471730  E8 0B 47 23 00            CALL 0x006a5e40
00471735  5F                        POP EDI
00471736  B8 FF FF 00 00            MOV EAX,0xffff
0047173B  5E                        POP ESI
0047173C  8B E5                     MOV ESP,EBP
0047173E  5D                        POP EBP
0047173F  C2 04 00                  RET 0x4
LAB_00471742:
00471742  5F                        POP EDI
00471743  B8 02 00 00 00            MOV EAX,0x2
00471748  5E                        POP ESI
00471749  8B E5                     MOV ESP,EBP
0047174B  5D                        POP EBP
0047174C  C2 04 00                  RET 0x4
LAB_0047174f:
0047174F  8B CE                     MOV ECX,ESI
00471751  E8 78 0C F9 FF            CALL 0x004023ce
00471756  8B 16                     MOV EDX,dword ptr [ESI]
00471758  8B CE                     MOV ECX,ESI
0047175A  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00471760  F7 D8                     NEG EAX
00471762  5F                        POP EDI
00471763  5E                        POP ESI
00471764  1B C0                     SBB EAX,EAX
00471766  8B E5                     MOV ESP,EBP
00471768  5D                        POP EBP
00471769  C2 04 00                  RET 0x4
switchD_004714f1::caseD_5:
0047176C  8B CE                     MOV ECX,ESI
0047176E  E8 5B 0C F9 FF            CALL 0x004023ce
00471773  8B 8E 7C 05 00 00         MOV ECX,dword ptr [ESI + 0x57c]
00471779  41                        INC ECX
0047177A  8B C1                     MOV EAX,ECX
0047177C  89 8E 7C 05 00 00         MOV dword ptr [ESI + 0x57c],ECX
00471782  83 F8 1E                  CMP EAX,0x1e
00471785  0F 8E AA 00 00 00         JLE 0x00471835
0047178B  C7 86 7C 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x57c],0x0
00471795  C7 86 80 05 00 00 06 00 00 00  MOV dword ptr [ESI + 0x580],0x6
switchD_004714f1::caseD_6:
0047179F  8B 86 84 05 00 00         MOV EAX,dword ptr [ESI + 0x584]
004717A5  85 C0                     TEST EAX,EAX
004717A7  75 57                     JNZ 0x00471800
004717A9  66 8B 86 70 05 00 00      MOV AX,word ptr [ESI + 0x570]
004717B0  66 8B 8E 6E 05 00 00      MOV CX,word ptr [ESI + 0x56e]
004717B7  66 69 C0 C8 00            IMUL AX,AX,0xc8
004717BC  66 69 C9 C9 00            IMUL CX,CX,0xc9
004717C1  83 C0 64                  ADD EAX,0x64
004717C4  8B 16                     MOV EDX,dword ptr [ESI]
004717C6  50                        PUSH EAX
004717C7  66 8B 86 6C 05 00 00      MOV AX,word ptr [ESI + 0x56c]
004717CE  66 69 C0 C9 00            IMUL AX,AX,0xc9
004717D3  83 C1 64                  ADD ECX,0x64
004717D6  83 C0 64                  ADD EAX,0x64
004717D9  51                        PUSH ECX
004717DA  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
004717DE  50                        PUSH EAX
004717DF  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
004717E3  51                        PUSH ECX
004717E4  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
004717E8  50                        PUSH EAX
004717E9  51                        PUSH ECX
004717EA  8B CE                     MOV ECX,ESI
004717EC  FF 52 10                  CALL dword ptr [EDX + 0x10]
004717EF  66 89 86 72 05 00 00      MOV word ptr [ESI + 0x572],AX
004717F6  C7 86 84 05 00 00 01 00 00 00  MOV dword ptr [ESI + 0x584],0x1
LAB_00471800:
00471800  8B 86 84 05 00 00         MOV EAX,dword ptr [ESI + 0x584]
00471806  83 F8 01                  CMP EAX,0x1
00471809  75 74                     JNZ 0x0047187f
0047180B  66 8B 96 72 05 00 00      MOV DX,word ptr [ESI + 0x572]
00471812  8B CE                     MOV ECX,ESI
00471814  52                        PUSH EDX
00471815  E8 98 18 F9 FF            CALL 0x004030b2
0047181A  50                        PUSH EAX
0047181B  8B CE                     MOV ECX,ESI
0047181D  E8 DA 0A F9 FF            CALL 0x004022fc
00471822  83 F8 FF                  CMP EAX,-0x1
00471825  74 29                     JZ 0x00471850
00471827  85 C0                     TEST EAX,EAX
00471829  75 0A                     JNZ 0x00471835
0047182B  C7 86 84 05 00 00 02 00 00 00  MOV dword ptr [ESI + 0x584],0x2
LAB_00471835:
00471835  8B 06                     MOV EAX,dword ptr [ESI]
00471837  8B CE                     MOV ECX,ESI
00471839  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0047183F  F7 D8                     NEG EAX
00471841  1B C0                     SBB EAX,EAX
00471843  5F                        POP EDI
00471844  24 FD                     AND AL,0xfd
00471846  5E                        POP ESI
00471847  83 C0 02                  ADD EAX,0x2
0047184A  8B E5                     MOV ESP,EBP
0047184C  5D                        POP EBP
0047184D  C2 04 00                  RET 0x4
LAB_00471850:
00471850  68 A8 AC 7A 00            PUSH 0x7aaca8
00471855  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047185A  6A 00                     PUSH 0x0
0047185C  6A 00                     PUSH 0x0
0047185E  68 25 2B 00 00            PUSH 0x2b25
00471863  68 3C 9D 7A 00            PUSH 0x7a9d3c
00471868  E8 63 BC 23 00            CALL 0x006ad4d0
0047186D  83 C4 18                  ADD ESP,0x18
00471870  85 C0                     TEST EAX,EAX
00471872  74 01                     JZ 0x00471875
00471874  CC                        INT3
LAB_00471875:
00471875  68 26 2B 00 00            PUSH 0x2b26
0047187A  E9 A0 FE FF FF            JMP 0x0047171f
LAB_0047187f:
0047187F  83 F8 02                  CMP EAX,0x2
00471882  BF 03 00 00 00            MOV EDI,0x3
00471887  75 50                     JNZ 0x004718d9
00471889  8A 56 61                  MOV DL,byte ptr [ESI + 0x61]
0047188C  66 8B 86 70 05 00 00      MOV AX,word ptr [ESI + 0x570]
00471893  66 8B 8E 6E 05 00 00      MOV CX,word ptr [ESI + 0x56e]
0047189A  52                        PUSH EDX
0047189B  66 8B 96 6C 05 00 00      MOV DX,word ptr [ESI + 0x56c]
004718A2  66 69 C0 C8 00            IMUL AX,AX,0xc8
004718A7  66 69 C9 C9 00            IMUL CX,CX,0xc9
004718AC  66 69 D2 C9 00            IMUL DX,DX,0xc9
004718B1  83 C0 64                  ADD EAX,0x64
004718B4  83 C1 64                  ADD ECX,0x64
004718B7  50                        PUSH EAX
004718B8  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
004718BC  83 C2 64                  ADD EDX,0x64
004718BF  51                        PUSH ECX
004718C0  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
004718C4  52                        PUSH EDX
004718C5  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
004718C9  50                        PUSH EAX
004718CA  51                        PUSH ECX
004718CB  52                        PUSH EDX
004718CC  8B CE                     MOV ECX,ESI
004718CE  E8 82 0B F9 FF            CALL 0x00402455
004718D3  89 BE 84 05 00 00         MOV dword ptr [ESI + 0x584],EDI
LAB_004718d9:
004718D9  39 BE 84 05 00 00         CMP dword ptr [ESI + 0x584],EDI
004718DF  75 50                     JNZ 0x00471931
004718E1  8D 45 08                  LEA EAX,[EBP + 0x8]
004718E4  8D 4D FC                  LEA ECX,[EBP + -0x4]
004718E7  50                        PUSH EAX
004718E8  51                        PUSH ECX
004718E9  8B CE                     MOV ECX,ESI
004718EB  E8 57 0F F9 FF            CALL 0x00402847
004718F0  83 F8 FF                  CMP EAX,-0x1
004718F3  74 0D                     JZ 0x00471902
004718F5  85 C0                     TEST EAX,EAX
004718F7  0F 84 E2 FD FF FF         JZ 0x004716df
004718FD  E9 ED FC FF FF            JMP 0x004715ef
LAB_00471902:
00471902  68 80 AC 7A 00            PUSH 0x7aac80
00471907  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047190C  6A 00                     PUSH 0x0
0047190E  6A 00                     PUSH 0x0
00471910  68 3D 2B 00 00            PUSH 0x2b3d
00471915  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047191A  E8 B1 BB 23 00            CALL 0x006ad4d0
0047191F  83 C4 18                  ADD ESP,0x18
00471922  85 C0                     TEST EAX,EAX
00471924  74 01                     JZ 0x00471927
00471926  CC                        INT3
LAB_00471927:
00471927  68 3E 2B 00 00            PUSH 0x2b3e
0047192C  E9 EE FD FF FF            JMP 0x0047171f
switchD_004714f1::default:
00471931  68 68 AC 7A 00            PUSH 0x7aac68
00471936  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047193B  6A 00                     PUSH 0x0
0047193D  6A 00                     PUSH 0x0
0047193F  68 4B 2B 00 00            PUSH 0x2b4b
00471944  68 3C 9D 7A 00            PUSH 0x7a9d3c
00471949  E8 82 BB 23 00            CALL 0x006ad4d0
0047194E  83 C4 18                  ADD ESP,0x18
00471951  85 C0                     TEST EAX,EAX
00471953  74 01                     JZ 0x00471956
00471955  CC                        INT3
LAB_00471956:
00471956  5F                        POP EDI
00471957  83 C8 FF                  OR EAX,0xffffffff
0047195A  5E                        POP ESI
0047195B  8B E5                     MOV ESP,EBP
0047195D  5D                        POP EBP
0047195E  C2 04 00                  RET 0x4
