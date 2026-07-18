__callnewh:
00730D70  55                        PUSH EBP
00730D71  8B EC                     MOV EBP,ESP
00730D73  51                        PUSH ECX
00730D74  A1 D0 71 85 00            MOV EAX,[0x008571d0]
00730D79  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00730D7C  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
00730D80  74 0E                     JZ 0x00730d90
00730D82  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00730D85  51                        PUSH ECX
00730D86  FF 55 FC                  CALL dword ptr [EBP + -0x4]
00730D89  83 C4 04                  ADD ESP,0x4
00730D8C  85 C0                     TEST EAX,EAX
00730D8E  75 04                     JNZ 0x00730d94
LAB_00730d90:
00730D90  33 C0                     XOR EAX,EAX
00730D92  EB 05                     JMP 0x00730d99
LAB_00730d94:
00730D94  B8 01 00 00 00            MOV EAX,0x1
LAB_00730d99:
00730D99  8B E5                     MOV ESP,EBP
00730D9B  5D                        POP EBP
00730D9C  C3                        RET
