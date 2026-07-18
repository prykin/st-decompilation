FUN_00711110:
00711110  55                        PUSH EBP
00711111  8B EC                     MOV EBP,ESP
00711113  83 EC 08                  SUB ESP,0x8
00711116  53                        PUSH EBX
00711117  56                        PUSH ESI
00711118  57                        PUSH EDI
00711119  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0071111C  33 C0                     XOR EAX,EAX
0071111E  33 DB                     XOR EBX,EBX
00711120  3B F8                     CMP EDI,EAX
00711122  8B F1                     MOV ESI,ECX
00711124  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00711127  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0071112A  75 09                     JNZ 0x00711135
0071112C  5F                        POP EDI
0071112D  5E                        POP ESI
0071112E  5B                        POP EBX
0071112F  8B E5                     MOV ESP,EBP
00711131  5D                        POP EBP
00711132  C2 04 00                  RET 0x4
LAB_00711135:
00711135  80 3F 00                  CMP byte ptr [EDI],0x0
00711138  74 53                     JZ 0x0071118d
0071113A  EB 02                     JMP 0x0071113e
LAB_0071113c:
0071113C  33 C0                     XOR EAX,EAX
LAB_0071113e:
0071113E  39 45 F8                  CMP dword ptr [EBP + -0x8],EAX
00711141  74 56                     JZ 0x00711199
00711143  57                        PUSH EDI
00711144  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00711147  E8 74 BC FF FF            CALL 0x0070cdc0
0071114C  83 C4 04                  ADD ESP,0x4
0071114F  85 C0                     TEST EAX,EAX
00711151  7D 24                     JGE 0x00711177
LAB_00711153:
00711153  57                        PUSH EDI
00711154  8B CE                     MOV ECX,ESI
00711156  E8 55 FE FF FF            CALL 0x00710fb0
0071115B  8B 96 9A 00 00 00         MOV EDX,dword ptr [ESI + 0x9a]
00711161  25 FF FF 00 00            AND EAX,0xffff
00711166  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00711169  0F BF 44 4A 6A            MOVSX EAX,word ptr [EDX + ECX*0x2 + 0x6a]
0071116E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00711171  03 C8                     ADD ECX,EAX
00711173  43                        INC EBX
00711174  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00711177:
00711177  8A 47 01                  MOV AL,byte ptr [EDI + 0x1]
0071117A  47                        INC EDI
0071117B  84 C0                     TEST AL,AL
0071117D  75 BD                     JNZ 0x0071113c
0071117F  85 DB                     TEST EBX,EBX
00711181  7E 0A                     JLE 0x0071118d
00711183  8B 4E 58                  MOV ECX,dword ptr [ESI + 0x58]
00711186  4B                        DEC EBX
00711187  0F AF CB                  IMUL ECX,EBX
0071118A  01 4D FC                  ADD dword ptr [EBP + -0x4],ECX
LAB_0071118d:
0071118D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00711190  5F                        POP EDI
00711191  5E                        POP ESI
00711192  5B                        POP EBX
00711193  8B E5                     MOV ESP,EBP
00711195  5D                        POP EBP
00711196  C2 04 00                  RET 0x4
LAB_00711199:
00711199  8D 86 9E 00 00 00         LEA EAX,[ESI + 0x9e]
0071119F  57                        PUSH EDI
007111A0  50                        PUSH EAX
007111A1  E8 EA BB FF FF            CALL 0x0070cd90
007111A6  83 C4 08                  ADD ESP,0x8
007111A9  85 C0                     TEST EAX,EAX
007111AB  75 A6                     JNZ 0x00711153
007111AD  8B 46 7E                  MOV EAX,dword ptr [ESI + 0x7e]
007111B0  85 C0                     TEST EAX,EAX
007111B2  74 9F                     JZ 0x00711153
007111B4  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
007111BB  EB BA                     JMP 0x00711177
