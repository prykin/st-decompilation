FUN_00696c40:
00696C40  55                        PUSH EBP
00696C41  8B EC                     MOV EBP,ESP
00696C43  83 EC 08                  SUB ESP,0x8
00696C46  8B 89 53 58 00 00         MOV ECX,dword ptr [ECX + 0x5853]
00696C4C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00696C4F  53                        PUSH EBX
00696C50  56                        PUSH ESI
00696C51  8B 71 0C                  MOV ESI,dword ptr [ECX + 0xc]
00696C54  33 C0                     XOR EAX,EAX
00696C56  3B D6                     CMP EDX,ESI
00696C58  57                        PUSH EDI
00696C59  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00696C5C  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00696C5F  73 60                     JNC 0x00696cc1
00696C61  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
00696C64  8B 59 1C                  MOV EBX,dword ptr [ECX + 0x1c]
00696C67  8B CF                     MOV ECX,EDI
00696C69  0F AF CA                  IMUL ECX,EDX
00696C6C  03 CB                     ADD ECX,EBX
00696C6E  85 C9                     TEST ECX,ECX
00696C70  74 4F                     JZ 0x00696cc1
00696C72  8B 71 19                  MOV ESI,dword ptr [ECX + 0x19]
00696C75  85 F6                     TEST ESI,ESI
00696C77  74 48                     JZ 0x00696cc1
00696C79  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00696C7C  33 D2                     XOR EDX,EDX
00696C7E  85 C9                     TEST ECX,ECX
00696C80  7E 3F                     JLE 0x00696cc1
00696C82  3B D1                     CMP EDX,ECX
LAB_00696c84:
00696C84  73 0D                     JNC 0x00696c93
00696C86  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00696C89  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00696C8C  0F AF CA                  IMUL ECX,EDX
00696C8F  03 C8                     ADD ECX,EAX
00696C91  EB 02                     JMP 0x00696c95
LAB_00696c93:
00696C93  33 C9                     XOR ECX,ECX
LAB_00696c95:
00696C95  8B 09                     MOV ECX,dword ptr [ECX]
00696C97  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00696C9A  3B C8                     CMP ECX,EAX
00696C9C  73 18                     JNC 0x00696cb6
00696C9E  0F AF CF                  IMUL ECX,EDI
00696CA1  03 CB                     ADD ECX,EBX
00696CA3  85 C9                     TEST ECX,ECX
00696CA5  74 0F                     JZ 0x00696cb6
00696CA7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00696CAA  39 01                     CMP dword ptr [ECX],EAX
00696CAC  75 08                     JNZ 0x00696cb6
00696CAE  3B 55 10                  CMP EDX,dword ptr [EBP + 0x10]
00696CB1  74 03                     JZ 0x00696cb6
00696CB3  FF 45 FC                  INC dword ptr [EBP + -0x4]
LAB_00696cb6:
00696CB6  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00696CB9  42                        INC EDX
00696CBA  3B D1                     CMP EDX,ECX
00696CBC  7C C6                     JL 0x00696c84
00696CBE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00696cc1:
00696CC1  5F                        POP EDI
00696CC2  5E                        POP ESI
00696CC3  5B                        POP EBX
00696CC4  8B E5                     MOV ESP,EBP
00696CC6  5D                        POP EBP
00696CC7  C2 0C 00                  RET 0xc
