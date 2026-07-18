FUN_004ace60:
004ACE60  55                        PUSH EBP
004ACE61  8B EC                     MOV EBP,ESP
004ACE63  56                        PUSH ESI
004ACE64  57                        PUSH EDI
004ACE65  0F BE 7D 08               MOVSX EDI,byte ptr [EBP + 0x8]
004ACE69  8B F1                     MOV ESI,ECX
004ACE6B  6A 01                     PUSH 0x1
004ACE6D  57                        PUSH EDI
004ACE6E  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004ACE71  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004ACE74  50                        PUSH EAX
004ACE75  E8 16 C6 23 00            CALL 0x006e9490
004ACE7A  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
004ACE7D  8D 0C FF                  LEA ECX,[EDI + EDI*0x8]
004ACE80  5F                        POP EDI
004ACE81  5E                        POP ESI
004ACE82  66 81 64 8A 0E DF FF      AND word ptr [EDX + ECX*0x4 + 0xe],0xffdf
004ACE89  8D 44 8A 0E               LEA EAX,[EDX + ECX*0x4 + 0xe]
004ACE8D  5D                        POP EBP
004ACE8E  C2 04 00                  RET 0x4
