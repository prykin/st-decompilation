FUN_0065dc00:
0065DC00  55                        PUSH EBP
0065DC01  8B EC                     MOV EBP,ESP
0065DC03  83 EC 08                  SUB ESP,0x8
0065DC06  53                        PUSH EBX
0065DC07  56                        PUSH ESI
0065DC08  57                        PUSH EDI
0065DC09  8B F1                     MOV ESI,ECX
0065DC0B  33 FF                     XOR EDI,EDI
0065DC0D  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0065DC10  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0065DC13  E8 B7 3C DA FF            CALL 0x004018cf
0065DC18  8B D8                     MOV EBX,EAX
0065DC1A  85 DB                     TEST EBX,EBX
0065DC1C  0F 84 C2 00 00 00         JZ 0x0065dce4
0065DC22  8A 86 81 00 00 00         MOV AL,byte ptr [ESI + 0x81]
0065DC28  84 C0                     TEST AL,AL
0065DC2A  7C 07                     JL 0x0065dc33
0065DC2C  3C 08                     CMP AL,0x8
0065DC2E  0F BE C0                  MOVSX EAX,AL
0065DC31  7C 03                     JL 0x0065dc36
LAB_0065dc33:
0065DC33  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
LAB_0065dc36:
0065DC36  8A 4D 0C                  MOV CL,byte ptr [EBP + 0xc]
0065DC39  80 F9 08                  CMP CL,0x8
0065DC3C  75 05                     JNZ 0x0065dc43
0065DC3E  88 45 0C                  MOV byte ptr [EBP + 0xc],AL
0065DC41  EB 0D                     JMP 0x0065dc50
LAB_0065dc43:
0065DC43  84 C9                     TEST CL,CL
0065DC45  7C 05                     JL 0x0065dc4c
0065DC47  80 F9 08                  CMP CL,0x8
0065DC4A  7E 04                     JLE 0x0065dc50
LAB_0065dc4c:
0065DC4C  C6 45 0C FF               MOV byte ptr [EBP + 0xc],0xff
LAB_0065dc50:
0065DC50  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0065DC53  33 FF                     XOR EDI,EDI
0065DC55  85 C0                     TEST EAX,EAX
0065DC57  7E 79                     JLE 0x0065dcd2
0065DC59  EB 03                     JMP 0x0065dc5e
LAB_0065dc5b:
0065DC5B  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_0065dc5e:
0065DC5E  3B F8                     CMP EDI,EAX
0065DC60  73 0D                     JNC 0x0065dc6f
0065DC62  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0065DC65  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
0065DC68  0F AF C7                  IMUL EAX,EDI
0065DC6B  03 C1                     ADD EAX,ECX
0065DC6D  EB 02                     JMP 0x0065dc71
LAB_0065dc6f:
0065DC6F  33 C0                     XOR EAX,EAX
LAB_0065dc71:
0065DC71  66 8B 00                  MOV AX,word ptr [EAX]
0065DC74  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
0065DC77  6A 01                     PUSH 0x1
0065DC79  50                        PUSH EAX
0065DC7A  51                        PUSH ECX
0065DC7B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065DC81  E8 34 4C DA FF            CALL 0x004028ba
0065DC86  8B F0                     MOV ESI,EAX
0065DC88  85 F6                     TEST ESI,ESI
0065DC8A  74 3E                     JZ 0x0065dcca
0065DC8C  8B 16                     MOV EDX,dword ptr [ESI]
0065DC8E  8B CE                     MOV ECX,ESI
0065DC90  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0065DC96  85 C0                     TEST EAX,EAX
0065DC98  74 30                     JZ 0x0065dcca
0065DC9A  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
0065DC9D  84 C0                     TEST AL,AL
0065DC9F  7C 0F                     JL 0x0065dcb0
0065DCA1  8B 06                     MOV EAX,dword ptr [ESI]
0065DCA3  8B CE                     MOV ECX,ESI
0065DCA5  FF 50 6C                  CALL dword ptr [EAX + 0x6c]
0065DCA8  0F BE 4D 0C               MOVSX ECX,byte ptr [EBP + 0xc]
0065DCAC  3B C8                     CMP ECX,EAX
0065DCAE  75 1A                     JNZ 0x0065dcca
LAB_0065dcb0:
0065DCB0  8B 16                     MOV EDX,dword ptr [ESI]
0065DCB2  8B CE                     MOV ECX,ESI
0065DCB4  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0065DCB7  50                        PUSH EAX
0065DCB8  E8 4E 64 DA FF            CALL 0x0040410b
0065DCBD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0065DCC0  83 C4 04                  ADD ESP,0x4
0065DCC3  85 C1                     TEST ECX,EAX
0065DCC5  74 03                     JZ 0x0065dcca
0065DCC7  FF 45 FC                  INC dword ptr [EBP + -0x4]
LAB_0065dcca:
0065DCCA  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0065DCCD  47                        INC EDI
0065DCCE  3B F8                     CMP EDI,EAX
0065DCD0  7C 89                     JL 0x0065dc5b
LAB_0065dcd2:
0065DCD2  53                        PUSH EBX
0065DCD3  E8 38 04 05 00            CALL 0x006ae110
0065DCD8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065DCDB  5F                        POP EDI
0065DCDC  5E                        POP ESI
0065DCDD  5B                        POP EBX
0065DCDE  8B E5                     MOV ESP,EBP
0065DCE0  5D                        POP EBP
0065DCE1  C2 08 00                  RET 0x8
LAB_0065dce4:
0065DCE4  8B C7                     MOV EAX,EDI
0065DCE6  5F                        POP EDI
0065DCE7  5E                        POP ESI
0065DCE8  5B                        POP EBX
0065DCE9  8B E5                     MOV ESP,EBP
0065DCEB  5D                        POP EBP
0065DCEC  C2 08 00                  RET 0x8
