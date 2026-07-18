FUN_007113e0:
007113E0  55                        PUSH EBP
007113E1  8B EC                     MOV EBP,ESP
007113E3  83 EC 0C                  SUB ESP,0xc
007113E6  53                        PUSH EBX
007113E7  57                        PUSH EDI
007113E8  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
007113EB  33 DB                     XOR EBX,EBX
007113ED  3B FB                     CMP EDI,EBX
007113EF  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
007113F2  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
007113F6  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
007113F9  75 0A                     JNZ 0x00711405
007113FB  5F                        POP EDI
007113FC  33 C0                     XOR EAX,EAX
007113FE  5B                        POP EBX
007113FF  8B E5                     MOV ESP,EBP
00711401  5D                        POP EBP
00711402  C2 04 00                  RET 0x4
LAB_00711405:
00711405  80 3F 00                  CMP byte ptr [EDI],0x0
00711408  74 57                     JZ 0x00711461
0071140A  56                        PUSH ESI
LAB_0071140b:
0071140B  68 F4 8F 7C 00            PUSH 0x7c8ff4
00711410  57                        PUSH EDI
00711411  E8 7A F1 01 00            CALL 0x00730590
00711416  8B F0                     MOV ESI,EAX
00711418  83 C4 08                  ADD ESP,0x8
0071141B  85 F6                     TEST ESI,ESI
0071141D  74 08                     JZ 0x00711427
0071141F  8A 06                     MOV AL,byte ptr [ESI]
00711421  C6 06 00                  MOV byte ptr [ESI],0x0
00711424  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
LAB_00711427:
00711427  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0071142A  57                        PUSH EDI
0071142B  E8 90 FD FF FF            CALL 0x007111c0
00711430  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00711433  03 D0                     ADD EDX,EAX
00711435  43                        INC EBX
00711436  85 F6                     TEST ESI,ESI
00711438  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0071143B  74 0D                     JZ 0x0071144a
0071143D  8A 4D FF                  MOV CL,byte ptr [EBP + -0x1]
00711440  8D 7E 01                  LEA EDI,[ESI + 0x1]
00711443  88 0E                     MOV byte ptr [ESI],CL
00711445  80 3F 00                  CMP byte ptr [EDI],0x0
00711448  75 C1                     JNZ 0x0071140b
LAB_0071144a:
0071144A  85 DB                     TEST EBX,EBX
0071144C  5E                        POP ESI
0071144D  74 12                     JZ 0x00711461
0071144F  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00711452  4B                        DEC EBX
00711453  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00711456  8B 42 5C                  MOV EAX,dword ptr [EDX + 0x5c]
00711459  0F AF C3                  IMUL EAX,EBX
0071145C  03 C8                     ADD ECX,EAX
0071145E  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00711461:
00711461  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00711464  5F                        POP EDI
00711465  5B                        POP EBX
00711466  8B E5                     MOV ESP,EBP
00711468  5D                        POP EBP
00711469  C2 04 00                  RET 0x4
