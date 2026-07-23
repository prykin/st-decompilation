CGenerate::sub_00697C50:
00697C50  55                        PUSH EBP
00697C51  8B EC                     MOV EBP,ESP
00697C53  83 EC 0C                  SUB ESP,0xc
00697C56  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00697C59  53                        PUSH EBX
00697C5A  56                        PUSH ESI
00697C5B  57                        PUSH EDI
00697C5C  85 C0                     TEST EAX,EAX
00697C5E  8B F1                     MOV ESI,ECX
00697C60  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00697C67  7E 5A                     JLE 0x00697cc3
00697C69  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00697C6C  85 DB                     TEST EBX,EBX
00697C6E  7C 53                     JL 0x00697cc3
00697C70  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00697C73  85 FF                     TEST EDI,EDI
00697C75  7C 4C                     JL 0x00697cc3
00697C77  3B 9E 33 58 00 00         CMP EBX,dword ptr [ESI + 0x5833]
00697C7D  7D 44                     JGE 0x00697cc3
00697C7F  3B BE 37 58 00 00         CMP EDI,dword ptr [ESI + 0x5837]
00697C85  7D 3C                     JGE 0x00697cc3
00697C87  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
00697C8A  8D 4D F4                  LEA ECX,[EBP + -0xc]
00697C8D  51                        PUSH ECX
00697C8E  50                        PUSH EAX
00697C8F  57                        PUSH EDI
00697C90  53                        PUSH EBX
00697C91  52                        PUSH EDX
00697C92  E8 B5 C4 D6 FF            CALL 0x0040414c
00697C97  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00697C9A  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00697C9D  68 FF 00 00 00            PUSH 0xff
00697CA2  50                        PUSH EAX
00697CA3  57                        PUSH EDI
00697CA4  53                        PUSH EBX
00697CA5  51                        PUSH ECX
00697CA6  E8 05 9D D6 FF            CALL 0x004019b0
00697CAB  83 C4 28                  ADD ESP,0x28
00697CAE  85 C0                     TEST EAX,EAX
00697CB0  B8 01 00 00 00            MOV EAX,0x1
00697CB5  74 0E                     JZ 0x00697cc5
00697CB7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00697CBA  5F                        POP EDI
00697CBB  5E                        POP ESI
00697CBC  5B                        POP EBX
00697CBD  8B E5                     MOV ESP,EBP
00697CBF  5D                        POP EBP
00697CC0  C2 0C 00                  RET 0xc
LAB_00697cc3:
00697CC3  33 C0                     XOR EAX,EAX
LAB_00697cc5:
00697CC5  5F                        POP EDI
00697CC6  5E                        POP ESI
00697CC7  5B                        POP EBX
00697CC8  8B E5                     MOV ESP,EBP
00697CCA  5D                        POP EBP
00697CCB  C2 0C 00                  RET 0xc
