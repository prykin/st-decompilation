FUN_006838b0:
006838B0  55                        PUSH EBP
006838B1  8B EC                     MOV EBP,ESP
006838B3  83 EC 08                  SUB ESP,0x8
006838B6  33 C0                     XOR EAX,EAX
006838B8  53                        PUSH EBX
006838B9  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006838BC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006838BF  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
006838C2  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006838C5  56                        PUSH ESI
006838C6  57                        PUSH EDI
006838C7  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006838CA  85 C0                     TEST EAX,EAX
006838CC  74 08                     JZ 0x006838d6
006838CE  85 FF                     TEST EDI,EDI
006838D0  74 04                     JZ 0x006838d6
006838D2  85 DB                     TEST EBX,EBX
006838D4  75 18                     JNZ 0x006838ee
LAB_006838d6:
006838D6  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006838DC  68 BE 03 00 00            PUSH 0x3be
006838E1  68 04 56 7D 00            PUSH 0x7d5604
006838E6  51                        PUSH ECX
006838E7  6A CC                     PUSH -0x34
006838E9  E8 52 25 02 00            CALL 0x006a5e40
LAB_006838ee:
006838EE  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006838F1  8B 77 04                  MOV ESI,dword ptr [EDI + 0x4]
006838F4  25 FF 00 00 00            AND EAX,0xff
006838F9  48                        DEC EAX
006838FA  74 65                     JZ 0x00683961
006838FC  48                        DEC EAX
006838FD  74 43                     JZ 0x00683942
006838FF  48                        DEC EAX
00683900  74 21                     JZ 0x00683923
00683902  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00683908  68 D4 03 00 00            PUSH 0x3d4
0068390D  68 04 56 7D 00            PUSH 0x7d5604
00683912  52                        PUSH EDX
00683913  6A CC                     PUSH -0x34
00683915  E8 26 25 02 00            CALL 0x006a5e40
0068391A  8B C6                     MOV EAX,ESI
0068391C  5F                        POP EDI
0068391D  5E                        POP ESI
0068391E  5B                        POP EBX
0068391F  8B E5                     MOV ESP,EBP
00683921  5D                        POP EBP
00683922  C3                        RET
LAB_00683923:
00683923  8B 03                     MOV EAX,dword ptr [EBX]
00683925  8D 4D F8                  LEA ECX,[EBP + -0x8]
00683928  51                        PUSH ECX
00683929  57                        PUSH EDI
0068392A  C6 45 F8 09               MOV byte ptr [EBP + -0x8],0x9
0068392E  89 45 F9                  MOV dword ptr [EBP + -0x7],EAX
00683931  E8 13 E8 D7 FF            CALL 0x00402149
00683936  83 C4 08                  ADD ESP,0x8
00683939  8B C6                     MOV EAX,ESI
0068393B  5F                        POP EDI
0068393C  5E                        POP ESI
0068393D  5B                        POP EBX
0068393E  8B E5                     MOV ESP,EBP
00683940  5D                        POP EBP
00683941  C3                        RET
LAB_00683942:
00683942  8B 13                     MOV EDX,dword ptr [EBX]
00683944  8D 45 F8                  LEA EAX,[EBP + -0x8]
00683947  50                        PUSH EAX
00683948  57                        PUSH EDI
00683949  C6 45 F8 08               MOV byte ptr [EBP + -0x8],0x8
0068394D  89 55 F9                  MOV dword ptr [EBP + -0x7],EDX
00683950  E8 F4 E7 D7 FF            CALL 0x00402149
00683955  83 C4 08                  ADD ESP,0x8
00683958  8B C6                     MOV EAX,ESI
0068395A  5F                        POP EDI
0068395B  5E                        POP ESI
0068395C  5B                        POP EBX
0068395D  8B E5                     MOV ESP,EBP
0068395F  5D                        POP EBP
00683960  C3                        RET
LAB_00683961:
00683961  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00683964  53                        PUSH EBX
00683965  51                        PUSH ECX
00683966  C6 45 F8 0A               MOV byte ptr [EBP + -0x8],0xa
0068396A  E8 2A FC D7 FF            CALL 0x00403599
0068396F  8D 55 F8                  LEA EDX,[EBP + -0x8]
00683972  66 89 45 F9               MOV word ptr [EBP + -0x7],AX
00683976  52                        PUSH EDX
00683977  57                        PUSH EDI
00683978  E8 CC E7 D7 FF            CALL 0x00402149
0068397D  83 C4 10                  ADD ESP,0x10
00683980  8B C6                     MOV EAX,ESI
00683982  5F                        POP EDI
00683983  5E                        POP ESI
00683984  5B                        POP EBX
00683985  8B E5                     MOV ESP,EBP
00683987  5D                        POP EBP
00683988  C3                        RET
