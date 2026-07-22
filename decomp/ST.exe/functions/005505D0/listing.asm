STPlaySystemC::sub_005505D0:
005505D0  55                        PUSH EBP
005505D1  8B EC                     MOV EBP,ESP
005505D3  81 EC 08 01 00 00         SUB ESP,0x108
005505D9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005505DC  53                        PUSH EBX
005505DD  56                        PUSH ESI
005505DE  57                        PUSH EDI
005505DF  85 C0                     TEST EAX,EAX
005505E1  8B F1                     MOV ESI,ECX
005505E3  0F 84 BB 01 00 00         JZ 0x005507a4
005505E9  8B 10                     MOV EDX,dword ptr [EAX]
005505EB  8D 4D FC                  LEA ECX,[EBP + -0x4]
005505EE  51                        PUSH ECX
005505EF  52                        PUSH EDX
005505F0  8B CE                     MOV ECX,ESI
005505F2  E8 6C 42 EB FF            CALL 0x00404863
005505F7  85 C0                     TEST EAX,EAX
005505F9  0F 84 81 01 00 00         JZ 0x00550780
005505FF  8B 08                     MOV ECX,dword ptr [EAX]
00550601  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00550604  51                        PUSH ECX
00550605  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
0055060B  6A 01                     PUSH 0x1
0055060D  52                        PUSH EDX
0055060E  50                        PUSH EAX
0055060F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00550612  6A 31                     PUSH 0x31
00550614  50                        PUSH EAX
00550615  51                        PUSH ECX
00550616  E8 45 4D 1C 00            CALL 0x00715360
0055061B  8A 86 BB 00 00 00         MOV AL,byte ptr [ESI + 0xbb]
00550621  83 C4 1C                  ADD ESP,0x1c
00550624  3C 05                     CMP AL,0x5
00550626  0F 82 89 00 00 00         JC 0x005506b5
0055062C  8D BE A7 00 00 00         LEA EDI,[ESI + 0xa7]
00550632  8D 96 AB 00 00 00         LEA EDX,[ESI + 0xab]
00550638  8B C7                     MOV EAX,EDI
0055063A  8B 0A                     MOV ECX,dword ptr [EDX]
0055063C  89 08                     MOV dword ptr [EAX],ECX
0055063E  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
00550641  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
00550644  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
00550647  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
0055064A  B9 20 76 80 00            MOV ECX,0x807620
0055064F  8B 52 0C                  MOV EDX,dword ptr [EDX + 0xc]
00550652  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
00550655  E8 56 4B 19 00            CALL 0x006e51b0
0055065A  8B C8                     MOV ECX,EAX
0055065C  89 8E B7 00 00 00         MOV dword ptr [ESI + 0xb7],ECX
00550662  A0 5E 73 80 00            MOV AL,[0x0080735e]
00550667  84 C0                     TEST AL,AL
00550669  0F 84 35 01 00 00         JZ 0x005507a4
0055066F  8B 17                     MOV EDX,dword ptr [EDI]
00550671  B8 CD CC CC CC            MOV EAX,0xcccccccd
00550676  2B CA                     SUB ECX,EDX
00550678  F7 E1                     MUL ECX
0055067A  C1 EA 02                  SHR EDX,0x2
0055067D  81 FA D0 07 00 00         CMP EDX,0x7d0
00550683  7F 57                     JG 0x005506dc
00550685  A1 D8 16 80 00            MOV EAX,[0x008016d8]
0055068A  85 C0                     TEST EAX,EAX
0055068C  74 1E                     JZ 0x005506ac
0055068E  A1 18 76 80 00            MOV EAX,[0x00807618]
00550693  6A 09                     PUSH 0x9
00550695  50                        PUSH EAX
00550696  68 68 42 00 00            PUSH 0x4268
0055069B  E8 A0 FA 15 00            CALL 0x006b0140
005506A0  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
005506A6  50                        PUSH EAX
005506A7  E8 2C 0E EB FF            CALL 0x004014d8
LAB_005506ac:
005506AC  C6 86 BB 00 00 00 00      MOV byte ptr [ESI + 0xbb],0x0
005506B3  EB 27                     JMP 0x005506dc
LAB_005506b5:
005506B5  B9 20 76 80 00            MOV ECX,0x807620
005506BA  E8 F1 4A 19 00            CALL 0x006e51b0
005506BF  33 C9                     XOR ECX,ECX
005506C1  8A 8E BB 00 00 00         MOV CL,byte ptr [ESI + 0xbb]
005506C7  89 84 8E A7 00 00 00      MOV dword ptr [ESI + ECX*0x4 + 0xa7],EAX
005506CE  8A 86 BB 00 00 00         MOV AL,byte ptr [ESI + 0xbb]
005506D4  FE C0                     INC AL
005506D6  88 86 BB 00 00 00         MOV byte ptr [ESI + 0xbb],AL
LAB_005506dc:
005506DC  A0 5E 73 80 00            MOV AL,[0x0080735e]
005506E1  84 C0                     TEST AL,AL
005506E3  0F 84 BB 00 00 00         JZ 0x005507a4
005506E9  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
005506EE  32 DB                     XOR BL,BL
005506F0  84 C0                     TEST AL,AL
005506F2  88 5D 0C                  MOV byte ptr [EBP + 0xc],BL
005506F5  0F 86 A9 00 00 00         JBE 0x005507a4
005506FB  8B 35 E8 BD 85 00         MOV ESI,dword ptr [0x0085bde8]
LAB_00550701:
00550701  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00550704  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00550707  25 FF 00 00 00            AND EAX,0xff
0055070C  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0055070F  C1 E2 03                  SHL EDX,0x3
00550712  2B D0                     SUB EDX,EAX
00550714  8D 04 95 B0 8A 80 00      LEA EAX,[EDX*0x4 + 0x808ab0]
0055071B  8B 14 95 F0 8A 80 00      MOV EDX,dword ptr [EDX*0x4 + 0x808af0]
00550722  3B D1                     CMP EDX,ECX
00550724  75 43                     JNZ 0x00550769
00550726  8A 48 46                  MOV CL,byte ptr [EAX + 0x46]
00550729  84 C9                     TEST CL,CL
0055072B  74 3C                     JZ 0x00550769
0055072D  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00550733  50                        PUSH EAX
00550734  52                        PUSH EDX
00550735  68 6D 42 00 00            PUSH 0x426d
0055073A  E8 01 FA 15 00            CALL 0x006b0140
0055073F  50                        PUSH EAX
00550740  8D 85 F8 FE FF FF         LEA EAX,[EBP + 0xfffffef8]
00550746  68 1C 41 7C 00            PUSH 0x7c411c
0055074B  50                        PUSH EAX
0055074C  FF D6                     CALL ESI
0055074E  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
00550754  83 C4 10                  ADD ESP,0x10
00550757  85 C9                     TEST ECX,ECX
00550759  74 0E                     JZ 0x00550769
0055075B  8D 95 F8 FE FF FF         LEA EDX,[EBP + 0xfffffef8]
00550761  6A 08                     PUSH 0x8
00550763  52                        PUSH EDX
00550764  E8 6F 0D EB FF            CALL 0x004014d8
LAB_00550769:
00550769  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
0055076E  FE C3                     INC BL
00550770  3A D8                     CMP BL,AL
00550772  88 5D 0C                  MOV byte ptr [EBP + 0xc],BL
00550775  72 8A                     JC 0x00550701
00550777  5F                        POP EDI
00550778  5E                        POP ESI
00550779  5B                        POP EBX
0055077A  8B E5                     MOV ESP,EBP
0055077C  5D                        POP EBP
0055077D  C2 08 00                  RET 0x8
LAB_00550780:
00550780  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00550783  A1 64 17 81 00            MOV EAX,[0x00811764]
00550788  6A FF                     PUSH -0x1
0055078A  6A 00                     PUSH 0x0
0055078C  6A 00                     PUSH 0x0
0055078E  6A 00                     PUSH 0x0
00550790  6A 37                     PUSH 0x37
00550792  57                        PUSH EDI
00550793  50                        PUSH EAX
00550794  E8 C7 4B 1C 00            CALL 0x00715360
00550799  83 C4 1C                  ADD ESP,0x1c
0055079C  8B CE                     MOV ECX,ESI
0055079E  57                        PUSH EDI
0055079F  E8 CC 0B EB FF            CALL 0x00401370
LAB_005507a4:
005507A4  5F                        POP EDI
005507A5  5E                        POP ESI
005507A6  5B                        POP EBX
005507A7  8B E5                     MOV ESP,EBP
005507A9  5D                        POP EBP
005507AA  C2 08 00                  RET 0x8
