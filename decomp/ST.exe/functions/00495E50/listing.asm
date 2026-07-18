FUN_00495e50:
00495E50  A0 A0 87 80 00            MOV AL,[0x008087a0]
00495E55  3C 06                     CMP AL,0x6
00495E57  74 0C                     JZ 0x00495e65
00495E59  3C 07                     CMP AL,0x7
00495E5B  74 08                     JZ 0x00495e65
00495E5D  3C 0E                     CMP AL,0xe
00495E5F  74 04                     JZ 0x00495e65
00495E61  33 C0                     XOR EAX,EAX
00495E63  EB 05                     JMP 0x00495e6a
LAB_00495e65:
00495E65  B8 01 00 00 00            MOV EAX,0x1
LAB_00495e6a:
00495E6A  8B 0D 50 67 80 00         MOV ECX,dword ptr [0x00806750]
00495E70  50                        PUSH EAX
00495E71  A1 80 B2 7F 00            MOV EAX,[0x007fb280]
00495E76  50                        PUSH EAX
00495E77  51                        PUSH ECX
00495E78  E8 0D BE F6 FF            CALL 0x00401c8a
00495E7D  83 C4 0C                  ADD ESP,0xc
00495E80  C3                        RET
