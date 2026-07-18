FUN_00753b40:
00753B40  55                        PUSH EBP
00753B41  8B EC                     MOV EBP,ESP
00753B43  56                        PUSH ESI
00753B44  57                        PUSH EDI
00753B45  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00753B48  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00753B4B  8B 70 1C                  MOV ESI,dword ptr [EAX + 0x1c]
00753B4E  83 FE FF                  CMP ESI,-0x1
00753B51  74 20                     JZ 0x00753b73
00753B53  8D 4D 08                  LEA ECX,[EBP + 0x8]
00753B56  51                        PUSH ECX
00753B57  56                        PUSH ESI
00753B58  50                        PUSH EAX
00753B59  E8 E2 0E F8 FF            CALL 0x006d4a40
00753B5E  85 C0                     TEST EAX,EAX
00753B60  75 16                     JNZ 0x00753b78
00753B62  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
00753B65  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00753B68  5F                        POP EDI
00753B69  89 42 1C                  MOV dword ptr [EDX + 0x1c],EAX
00753B6C  8B C6                     MOV EAX,ESI
00753B6E  5E                        POP ESI
00753B6F  5D                        POP EBP
00753B70  C2 04 00                  RET 0x4
LAB_00753b73:
00753B73  8B 70 18                  MOV ESI,dword ptr [EAX + 0x18]
00753B76  8B C6                     MOV EAX,ESI
LAB_00753b78:
00753B78  5F                        POP EDI
00753B79  5E                        POP ESI
00753B7A  5D                        POP EBP
00753B7B  C2 04 00                  RET 0x4
