FUN_00749be1:
00749BE1  55                        PUSH EBP
00749BE2  8B EC                     MOV EBP,ESP
00749BE4  51                        PUSH ECX
00749BE5  51                        PUSH ECX
00749BE6  53                        PUSH EBX
00749BE7  56                        PUSH ESI
00749BE8  8B F1                     MOV ESI,ECX
00749BEA  57                        PUSH EDI
00749BEB  8D 5E 7C                  LEA EBX,[ESI + 0x7c]
00749BEE  53                        PUSH EBX
00749BEF  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
00749BF5  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
00749BF8  33 FF                     XOR EDI,EDI
00749BFA  3B C7                     CMP EAX,EDI
00749BFC  74 14                     JZ 0x00749c12
00749BFE  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
00749C01  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00749C04  83 C0 08                  ADD EAX,0x8
00749C07  FF 75 08                  PUSH dword ptr [EBP + 0x8]
00749C0A  50                        PUSH EAX
00749C0B  FF 11                     CALL dword ptr [ECX]
00749C0D  E9 80 00 00 00            JMP 0x00749c92
LAB_00749c12:
00749C12  6A 50                     PUSH 0x50
00749C14  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00749C17  E8 14 49 FE FF            CALL 0x0072e530
00749C1C  3B C7                     CMP EAX,EDI
00749C1E  59                        POP ECX
00749C1F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00749C22  74 26                     JZ 0x00749c4a
00749C24  8B 06                     MOV EAX,dword ptr [ESI]
00749C26  57                        PUSH EDI
00749C27  8B CE                     MOV ECX,ESI
00749C29  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
00749C2C  8B C8                     MOV ECX,EAX
00749C2E  83 C0 0C                  ADD EAX,0xc
00749C31  F7 D9                     NEG ECX
00749C33  1B C9                     SBB ECX,ECX
00749C35  23 C8                     AND ECX,EAX
00749C37  8D 45 FC                  LEA EAX,[EBP + -0x4]
00749C3A  51                        PUSH ECX
00749C3B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00749C3E  50                        PUSH EAX
00749C3F  FF 76 04                  PUSH dword ptr [ESI + 0x4]
00749C42  57                        PUSH EDI
00749C43  E8 AB 52 00 00            CALL 0x0074eef3
00749C48  EB 02                     JMP 0x00749c4c
LAB_00749c4a:
00749C4A  33 C0                     XOR EAX,EAX
LAB_00749c4c:
00749C4C  3B C7                     CMP EAX,EDI
00749C4E  89 46 50                  MOV dword ptr [ESI + 0x50],EAX
00749C51  75 0E                     JNZ 0x00749c61
00749C53  53                        PUSH EBX
00749C54  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00749C5A  B8 0E 00 07 80            MOV EAX,0x8007000e
00749C5F  EB 3C                     JMP 0x00749c9d
LAB_00749c61:
00749C61  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
00749C64  7D 1F                     JGE 0x00749c85
00749C66  3B C7                     CMP EAX,EDI
00749C68  74 0A                     JZ 0x00749c74
00749C6A  8D 48 08                  LEA ECX,[EAX + 0x8]
00749C6D  6A 01                     PUSH 0x1
00749C6F  8B 01                     MOV EAX,dword ptr [ECX]
00749C71  FF 50 0C                  CALL dword ptr [EAX + 0xc]
LAB_00749c74:
00749C74  53                        PUSH EBX
00749C75  89 7E 50                  MOV dword ptr [ESI + 0x50],EDI
00749C78  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00749C7E  B8 02 40 00 80            MOV EAX,0x80004002
00749C83  EB 18                     JMP 0x00749c9d
LAB_00749c85:
00749C85  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
00749C88  8B 06                     MOV EAX,dword ptr [ESI]
00749C8A  8B CE                     MOV ECX,ESI
00749C8C  FF 75 08                  PUSH dword ptr [EBP + 0x8]
00749C8F  FF 50 24                  CALL dword ptr [EAX + 0x24]
LAB_00749c92:
00749C92  53                        PUSH EBX
00749C93  8B F0                     MOV ESI,EAX
00749C95  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00749C9B  8B C6                     MOV EAX,ESI
LAB_00749c9d:
00749C9D  5F                        POP EDI
00749C9E  5E                        POP ESI
00749C9F  5B                        POP EBX
00749CA0  C9                        LEAVE
00749CA1  C2 08 00                  RET 0x8
