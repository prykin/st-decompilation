FUN_00755560:
00755560  55                        PUSH EBP
00755561  8B EC                     MOV EBP,ESP
00755563  83 EC 08                  SUB ESP,0x8
00755566  53                        PUSH EBX
00755567  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0075556A  56                        PUSH ESI
0075556B  57                        PUSH EDI
0075556C  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0075556F  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00755576  8B 40 50                  MOV EAX,dword ptr [EAX + 0x50]
00755579  89 43 0C                  MOV dword ptr [EBX + 0xc],EAX
0075557C  66 8B 48 34               MOV CX,word ptr [EAX + 0x34]
00755580  66 85 C9                  TEST CX,CX
00755583  74 05                     JZ 0x0075558a
00755585  0F BF F9                  MOVSX EDI,CX
00755588  EB 09                     JMP 0x00755593
LAB_0075558a:
0075558A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075558D  51                        PUSH ECX
0075558E  FF 50 08                  CALL dword ptr [EAX + 0x8]
00755591  8B F8                     MOV EDI,EAX
LAB_00755593:
00755593  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00755596  8D 77 08                  LEA ESI,[EDI + 0x8]
00755599  3B F0                     CMP ESI,EAX
0075559B  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
0075559E  7E 22                     JLE 0x007555c2
007555A0  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
007555A3  56                        PUSH ESI
007555A4  52                        PUSH EDX
007555A5  E8 A6 A5 F6 FF            CALL 0x006bfb50
007555AA  85 C0                     TEST EAX,EAX
007555AC  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
007555AF  75 0E                     JNZ 0x007555bf
LAB_007555b1:
007555B1  5F                        POP EDI
007555B2  5E                        POP ESI
007555B3  B8 FE FF FF FF            MOV EAX,0xfffffffe
007555B8  5B                        POP EBX
007555B9  8B E5                     MOV ESP,EBP
007555BB  5D                        POP EBP
007555BC  C2 10 00                  RET 0x10
LAB_007555bf:
007555BF  89 73 24                  MOV dword ptr [EBX + 0x24],ESI
LAB_007555c2:
007555C2  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
007555C5  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
007555C8  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
007555CB  89 08                     MOV dword ptr [EAX],ECX
007555CD  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
007555D0  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007555D3  8B CF                     MOV ECX,EDI
007555D5  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
007555D8  8B 7B 1C                  MOV EDI,dword ptr [EBX + 0x1c]
007555DB  8B D1                     MOV EDX,ECX
007555DD  83 C7 08                  ADD EDI,0x8
007555E0  C1 E9 02                  SHR ECX,0x2
007555E3  F3 A5                     MOVSD.REP ES:EDI,ESI
007555E5  8B CA                     MOV ECX,EDX
007555E7  83 E1 03                  AND ECX,0x3
007555EA  F3 A4                     MOVSB.REP ES:EDI,ESI
007555EC  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
007555EF  83 48 08 10               OR dword ptr [EAX + 0x8],0x10
LAB_007555f3:
007555F3  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
007555F6  8B 78 34                  MOV EDI,dword ptr [EAX + 0x34]
007555F9  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
007555FC  03 F8                     ADD EDI,EAX
007555FE  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00755601  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00755604  8D 54 C8 44               LEA EDX,[EAX + ECX*0x8 + 0x44]
00755608  8B 4C C8 44               MOV ECX,dword ptr [EAX + ECX*0x8 + 0x44]
0075560C  85 C9                     TEST ECX,ECX
0075560E  7C 27                     JL 0x00755637
00755610  66 8B 50 34               MOV DX,word ptr [EAX + 0x34]
00755614  66 85 D2                  TEST DX,DX
00755617  74 05                     JZ 0x0075561e
00755619  0F BF C2                  MOVSX EAX,DX
0075561C  EB 08                     JMP 0x00755626
LAB_0075561e:
0075561E  8D 54 39 18               LEA EDX,[ECX + EDI*0x1 + 0x18]
00755622  52                        PUSH EDX
00755623  FF 50 08                  CALL dword ptr [EAX + 0x8]
LAB_00755626:
00755626  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
00755629  83 C0 08                  ADD EAX,0x8
0075562C  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0075562F  8D 4C D1 44               LEA ECX,[ECX + EDX*0x8 + 0x44]
00755633  01 01                     ADD dword ptr [ECX],EAX
00755635  EB 06                     JMP 0x0075563d
LAB_00755637:
00755637  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
LAB_0075563d:
0075563D  66 8B 47 08               MOV AX,word ptr [EDI + 0x8]
00755641  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00755644  0F BF C8                  MOVSX ECX,AX
00755647  03 CA                     ADD ECX,EDX
00755649  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
0075564C  0F BF 52 16               MOVSX EDX,word ptr [EDX + 0x16]
00755650  83 EA 10                  SUB EDX,0x10
00755653  3B CA                     CMP ECX,EDX
00755655  0F 8E 83 01 00 00         JLE 0x007557de
0075565B  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
0075565E  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00755665  66 D1 F8                  SAR AX,0x1
00755668  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0075566B  8B 4C D1 44               MOV ECX,dword ptr [ECX + EDX*0x8 + 0x44]
0075566F  0F BF D0                  MOVSX EDX,AX
00755672  83 C2 04                  ADD EDX,0x4
00755675  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
00755678  52                        PUSH EDX
00755679  53                        PUSH EBX
0075567A  E8 01 E6 FF FF            CALL 0x00753c80
0075567F  8B F0                     MOV ESI,EAX
00755681  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00755684  3B C6                     CMP EAX,ESI
00755686  75 19                     JNZ 0x007556a1
00755688  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
0075568B  50                        PUSH EAX
0075568C  6A 00                     PUSH 0x0
0075568E  53                        PUSH EBX
0075568F  E8 9C 1E 00 00            CALL 0x00757530
00755694  85 C0                     TEST EAX,EAX
00755696  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00755699  0F 84 12 FF FF FF         JZ 0x007555b1
0075569F  EB 3D                     JMP 0x007556de
LAB_007556a1:
007556A1  8D 44 3E 10               LEA EAX,[ESI + EDI*0x1 + 0x10]
007556A5  50                        PUSH EAX
007556A6  6A 00                     PUSH 0x0
007556A8  53                        PUSH EBX
007556A9  E8 82 1E 00 00            CALL 0x00757530
007556AE  85 C0                     TEST EAX,EAX
007556B0  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
007556B3  0F 84 F8 FE FF FF         JZ 0x007555b1
007556B9  0F BF 4F 08               MOVSX ECX,word ptr [EDI + 0x8]
007556BD  2B C8                     SUB ECX,EAX
007556BF  03 C6                     ADD EAX,ESI
007556C1  2B CE                     SUB ECX,ESI
007556C3  8D 54 38 10               LEA EDX,[EAX + EDI*0x1 + 0x10]
007556C7  51                        PUSH ECX
007556C8  8D 44 3E 10               LEA EAX,[ESI + EDI*0x1 + 0x10]
007556CC  52                        PUSH EDX
007556CD  50                        PUSH EAX
007556CE  E8 9D 83 FD FF            CALL 0x0072da70
007556D3  66 8B 45 08               MOV AX,word ptr [EBP + 0x8]
007556D7  83 C4 0C                  ADD ESP,0xc
007556DA  66 29 47 08               SUB word ptr [EDI + 0x8],AX
LAB_007556de:
007556DE  53                        PUSH EBX
007556DF  E8 5C E4 FF FF            CALL 0x00753b40
007556E4  85 C0                     TEST EAX,EAX
007556E6  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
007556E9  0F 8C 1D 01 00 00         JL 0x0075580c
007556EF  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
007556F2  0F BF 51 16               MOVSX EDX,word ptr [ECX + 0x16]
007556F6  52                        PUSH EDX
007556F7  50                        PUSH EAX
007556F8  51                        PUSH ECX
007556F9  E8 52 F5 F7 FF            CALL 0x006d4c50
007556FE  85 C0                     TEST EAX,EAX
00755700  0F 85 06 01 00 00         JNZ 0x0075580c
00755706  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
00755709  8B 7B 10                  MOV EDI,dword ptr [EBX + 0x10]
0075570C  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0075570F  8B 40 34                  MOV EAX,dword ptr [EAX + 0x34]
00755712  03 F8                     ADD EDI,EAX
00755714  03 C1                     ADD EAX,ECX
00755716  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00755719  83 C0 10                  ADD EAX,0x10
0075571C  0F BF 57 08               MOVSX EDX,word ptr [EDI + 0x8]
00755720  2B D6                     SUB EDX,ESI
00755722  8D 4C 3E 10               LEA ECX,[ESI + EDI*0x1 + 0x10]
00755726  52                        PUSH EDX
00755727  51                        PUSH ECX
00755728  50                        PUSH EAX
00755729  E8 42 83 FD FF            CALL 0x0072da70
0075572E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00755731  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00755734  83 C4 0C                  ADD ESP,0xc
00755737  89 11                     MOV dword ptr [ECX],EDX
00755739  66 8B 47 08               MOV AX,word ptr [EDI + 0x8]
0075573D  66 2B C6                  SUB AX,SI
00755740  66 89 41 08               MOV word ptr [ECX + 0x8],AX
00755744  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
00755747  8B 02                     MOV EAX,dword ptr [EDX]
00755749  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0075574C  66 89 77 08               MOV word ptr [EDI + 0x8],SI
00755750  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
00755753  8B 01                     MOV EAX,dword ptr [ECX]
00755755  89 02                     MOV dword ptr [EDX],EAX
00755757  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0075575A  3B C6                     CMP EAX,ESI
0075575C  7D 0E                     JGE 0x0075576c
0075575E  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
00755761  50                        PUSH EAX
00755762  51                        PUSH ECX
00755763  57                        PUSH EDI
00755764  53                        PUSH EBX
00755765  E8 56 1D 00 00            CALL 0x007574c0
0075576A  EB 36                     JMP 0x007557a2
LAB_0075576c:
0075576C  7E 34                     JLE 0x007557a2
0075576E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00755771  2B C2                     SUB EAX,EDX
00755773  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
00755776  2B C6                     SUB EAX,ESI
00755778  50                        PUSH EAX
00755779  52                        PUSH EDX
0075577A  51                        PUSH ECX
0075577B  53                        PUSH EBX
0075577C  E8 3F 1D 00 00            CALL 0x007574c0
00755781  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00755784  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
00755787  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
0075578A  8B 09                     MOV ECX,dword ptr [ECX]
0075578C  89 4C D0 40               MOV dword ptr [EAX + EDX*0x8 + 0x40],ECX
00755790  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00755793  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
00755796  8B 4C D0 44               MOV ECX,dword ptr [EAX + EDX*0x8 + 0x44]
0075579A  8D 44 D0 44               LEA EAX,[EAX + EDX*0x8 + 0x44]
0075579E  2B CE                     SUB ECX,ESI
007557A0  89 08                     MOV dword ptr [EAX],ECX
LAB_007557a2:
007557A2  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
007557A5  50                        PUSH EAX
007557A6  6A 01                     PUSH 0x1
007557A8  53                        PUSH EBX
007557A9  E8 82 1D 00 00            CALL 0x00757530
007557AE  85 C0                     TEST EAX,EAX
007557B0  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
007557B3  0F 84 F8 FD FF FF         JZ 0x007555b1
007557B9  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
007557BC  8B 70 1C                  MOV ESI,dword ptr [EAX + 0x1c]
007557BF  4E                        DEC ESI
007557C0  89 70 1C                  MOV dword ptr [EAX + 0x1c],ESI
007557C3  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
007557C6  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
007557C9  85 C0                     TEST EAX,EAX
007557CB  7C 48                     JL 0x00755815
007557CD  8B 4C C1 40               MOV ECX,dword ptr [ECX + EAX*0x8 + 0x40]
007557D1  50                        PUSH EAX
007557D2  51                        PUSH ECX
007557D3  53                        PUSH EBX
007557D4  E8 A7 E3 FF FF            CALL 0x00753b80
007557D9  E9 15 FE FF FF            JMP 0x007555f3
LAB_007557de:
007557DE  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
007557E1  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
007557E4  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
007557E7  50                        PUSH EAX
007557E8  51                        PUSH ECX
007557E9  53                        PUSH EBX
007557EA  E8 41 00 00 00            CALL 0x00755830
007557EF  85 C0                     TEST EAX,EAX
007557F1  75 19                     JNZ 0x0075580c
007557F3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007557F6  85 C0                     TEST EAX,EAX
007557F8  74 10                     JZ 0x0075580a
LAB_007557fa:
007557FA  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007557FD  6A 00                     PUSH 0x0
007557FF  52                        PUSH EDX
00755800  53                        PUSH EBX
00755801  E8 6A 01 00 00            CALL 0x00755970
00755806  85 C0                     TEST EAX,EAX
00755808  7C 02                     JL 0x0075580c
LAB_0075580a:
0075580A  33 C0                     XOR EAX,EAX
LAB_0075580c:
0075580C  5F                        POP EDI
0075580D  5E                        POP ESI
0075580E  5B                        POP EBX
0075580F  8B E5                     MOV ESP,EBP
00755811  5D                        POP EBP
00755812  C2 10 00                  RET 0x10
LAB_00755815:
00755815  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
00755818  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
0075581B  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
0075581E  50                        PUSH EAX
0075581F  51                        PUSH ECX
00755820  53                        PUSH EBX
00755821  E8 0A 00 00 00            CALL 0x00755830
00755826  85 C0                     TEST EAX,EAX
00755828  75 E2                     JNZ 0x0075580c
0075582A  EB CE                     JMP 0x007557fa
