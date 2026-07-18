FUN_00719b40:
00719B40  55                        PUSH EBP
00719B41  8B EC                     MOV EBP,ESP
00719B43  83 EC 10                  SUB ESP,0x10
00719B46  56                        PUSH ESI
00719B47  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00719B4A  8B 06                     MOV EAX,dword ptr [ESI]
00719B4C  85 C0                     TEST EAX,EAX
00719B4E  75 05                     JNZ 0x00719b55
00719B50  5E                        POP ESI
00719B51  8B E5                     MOV ESP,EBP
00719B53  5D                        POP EBP
00719B54  C3                        RET
LAB_00719b55:
00719B55  33 C9                     XOR ECX,ECX
00719B57  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00719B5A  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00719B5D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00719B60  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00719B63  C7 45 F8 01 40 00 00      MOV dword ptr [EBP + -0x8],0x4001
00719B6A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00719B6D  8D 4D F0                  LEA ECX,[EBP + -0x10]
00719B70  51                        PUSH ECX
00719B71  68 12 01 00 00            PUSH 0x112
00719B76  68 14 08 00 00            PUSH 0x814
00719B7B  50                        PUSH EAX
00719B7C  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00719B7F  FF 15 C0 BE 85 00         CALL dword ptr [0x0085bec0]
00719B85  85 C0                     TEST EAX,EAX
00719B87  74 11                     JZ 0x00719b9a
00719B89  56                        PUSH ESI
00719B8A  50                        PUSH EAX
00719B8B  E8 00 01 00 00            CALL 0x00719c90
00719B90  83 C4 08                  ADD ESP,0x8
00719B93  33 C0                     XOR EAX,EAX
00719B95  5E                        POP ESI
00719B96  8B E5                     MOV ESP,EBP
00719B98  5D                        POP EBP
00719B99  C3                        RET
LAB_00719b9a:
00719B9A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00719B9D  33 C0                     XOR EAX,EAX
00719B9F  81 F9 40 04 00 00         CMP ECX,0x440
00719BA5  5E                        POP ESI
00719BA6  0F 94 C0                  SETZ AL
00719BA9  8B E5                     MOV ESP,EBP
00719BAB  5D                        POP EBP
00719BAC  C3                        RET
