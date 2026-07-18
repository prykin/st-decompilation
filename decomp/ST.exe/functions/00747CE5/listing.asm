FUN_00747ce5:
00747CE5  53                        PUSH EBX
00747CE6  56                        PUSH ESI
00747CE7  8B F1                     MOV ESI,ECX
00747CE9  57                        PUSH EDI
00747CEA  8B 7C 24 10               MOV EDI,dword ptr [ESP + 0x10]
00747CEE  8B 06                     MOV EAX,dword ptr [ESI]
00747CF0  57                        PUSH EDI
00747CF1  FF 50 28                  CALL dword ptr [EAX + 0x28]
00747CF4  8B D8                     MOV EBX,EAX
00747CF6  8B 06                     MOV EAX,dword ptr [ESI]
00747CF8  85 DB                     TEST EBX,EBX
00747CFA  7D 0A                     JGE 0x00747d06
00747CFC  8B CE                     MOV ECX,ESI
00747CFE  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00747D01  E9 84 00 00 00            JMP 0x00747d8a
LAB_00747d06:
00747D06  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
00747D0A  8B CE                     MOV ECX,ESI
00747D0C  FF 50 20                  CALL dword ptr [EAX + 0x20]
00747D0F  8B D8                     MOV EBX,EAX
00747D11  85 DB                     TEST EBX,EBX
00747D13  75 46                     JNZ 0x00747d5b
00747D15  89 7E 18                  MOV dword ptr [ESI + 0x18],EDI
00747D18  8B 07                     MOV EAX,dword ptr [EDI]
00747D1A  57                        PUSH EDI
00747D1B  FF 50 04                  CALL dword ptr [EAX + 0x4]
00747D1E  8B 06                     MOV EAX,dword ptr [ESI]
00747D20  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
00747D24  8B CE                     MOV ECX,ESI
00747D26  FF 50 24                  CALL dword ptr [EAX + 0x24]
00747D29  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
00747D2D  8B 07                     MOV EAX,dword ptr [EDI]
00747D2F  8B CE                     MOV ECX,ESI
00747D31  8D 56 0C                  LEA EDX,[ESI + 0xc]
00747D34  F7 D9                     NEG ECX
00747D36  1B C9                     SBB ECX,ECX
00747D38  23 CA                     AND ECX,EDX
00747D3A  51                        PUSH ECX
00747D3B  57                        PUSH EDI
00747D3C  FF 50 10                  CALL dword ptr [EAX + 0x10]
00747D3F  8B D8                     MOV EBX,EAX
00747D41  85 DB                     TEST EBX,EBX
00747D43  7C 2D                     JL 0x00747d72
00747D45  8B 06                     MOV EAX,dword ptr [ESI]
00747D47  57                        PUSH EDI
00747D48  8B CE                     MOV ECX,ESI
00747D4A  FF 50 30                  CALL dword ptr [EAX + 0x30]
00747D4D  8B D8                     MOV EBX,EAX
00747D4F  85 DB                     TEST EBX,EBX
00747D51  7D 37                     JGE 0x00747d8a
00747D53  8B 07                     MOV EAX,dword ptr [EDI]
00747D55  57                        PUSH EDI
00747D56  FF 50 14                  CALL dword ptr [EAX + 0x14]
00747D59  EB 17                     JMP 0x00747d72
LAB_00747d5b:
00747D5B  7D 10                     JGE 0x00747d6d
00747D5D  81 FB 05 40 00 80         CMP EBX,0x80004005
00747D63  74 08                     JZ 0x00747d6d
00747D65  81 FB 57 00 07 80         CMP EBX,0x80070057
00747D6B  75 05                     JNZ 0x00747d72
LAB_00747d6d:
00747D6D  BB 2A 02 04 80            MOV EBX,0x8004022a
LAB_00747d72:
00747D72  8B 06                     MOV EAX,dword ptr [ESI]
00747D74  8B CE                     MOV ECX,ESI
00747D76  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00747D79  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00747D7C  85 C0                     TEST EAX,EAX
00747D7E  74 0A                     JZ 0x00747d8a
00747D80  8B 08                     MOV ECX,dword ptr [EAX]
00747D82  50                        PUSH EAX
00747D83  FF 51 08                  CALL dword ptr [ECX + 0x8]
00747D86  83 66 18 00               AND dword ptr [ESI + 0x18],0x0
LAB_00747d8a:
00747D8A  5F                        POP EDI
00747D8B  8B C3                     MOV EAX,EBX
00747D8D  5E                        POP ESI
00747D8E  5B                        POP EBX
00747D8F  C2 08 00                  RET 0x8
