FUN_007114c0:
007114C0  55                        PUSH EBP
007114C1  8B EC                     MOV EBP,ESP
007114C3  83 EC 08                  SUB ESP,0x8
007114C6  53                        PUSH EBX
007114C7  57                        PUSH EDI
007114C8  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
007114CB  33 DB                     XOR EBX,EBX
007114CD  85 FF                     TEST EDI,EDI
007114CF  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
007114D2  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
007114D6  75 0A                     JNZ 0x007114e2
007114D8  5F                        POP EDI
007114D9  33 C0                     XOR EAX,EAX
007114DB  5B                        POP EBX
007114DC  8B E5                     MOV ESP,EBP
007114DE  5D                        POP EBP
007114DF  C2 04 00                  RET 0x4
LAB_007114e2:
007114E2  8A 07                     MOV AL,byte ptr [EDI]
007114E4  56                        PUSH ESI
007114E5  84 C0                     TEST AL,AL
007114E7  74 3A                     JZ 0x00711523
LAB_007114e9:
007114E9  68 F4 8F 7C 00            PUSH 0x7c8ff4
007114EE  57                        PUSH EDI
007114EF  E8 9C F0 01 00            CALL 0x00730590
007114F4  8B F0                     MOV ESI,EAX
007114F6  83 C4 08                  ADD ESP,0x8
007114F9  85 F6                     TEST ESI,ESI
007114FB  74 08                     JZ 0x00711505
007114FD  8A 06                     MOV AL,byte ptr [ESI]
007114FF  C6 06 00                  MOV byte ptr [ESI],0x0
00711502  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
LAB_00711505:
00711505  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00711508  57                        PUSH EDI
00711509  E8 52 FD FF FF            CALL 0x00711260
0071150E  85 F6                     TEST ESI,ESI
00711510  8D 5C 03 01               LEA EBX,[EBX + EAX*0x1 + 0x1]
00711514  74 0D                     JZ 0x00711523
00711516  8A 4D FF                  MOV CL,byte ptr [EBP + -0x1]
00711519  8D 7E 01                  LEA EDI,[ESI + 0x1]
0071151C  88 0E                     MOV byte ptr [ESI],CL
0071151E  80 3F 00                  CMP byte ptr [EDI],0x0
00711521  75 C6                     JNZ 0x007114e9
LAB_00711523:
00711523  5E                        POP ESI
00711524  8D 43 FF                  LEA EAX,[EBX + -0x1]
00711527  5F                        POP EDI
00711528  5B                        POP EBX
00711529  8B E5                     MOV ESP,EBP
0071152B  5D                        POP EBP
0071152C  C2 04 00                  RET 0x4
