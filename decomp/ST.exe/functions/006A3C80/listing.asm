FUN_006a3c80:
006A3C80  55                        PUSH EBP
006A3C81  8B EC                     MOV EBP,ESP
006A3C83  53                        PUSH EBX
006A3C84  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006A3C87  56                        PUSH ESI
006A3C88  57                        PUSH EDI
006A3C89  33 FF                     XOR EDI,EDI
LAB_006a3c8b:
006A3C8B  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A3C8E  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006A3C91  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A3C94  50                        PUSH EAX
006A3C95  51                        PUSH ECX
006A3C96  52                        PUSH EDX
006A3C97  53                        PUSH EBX
006A3C98  89 3D 4C 4A 85 00         MOV dword ptr [0x00854a4c],EDI
006A3C9E  E8 D4 1A D6 FF            CALL 0x00405777
006A3CA3  8B F0                     MOV ESI,EAX
006A3CA5  A1 4C 4A 85 00            MOV EAX,[0x00854a4c]
006A3CAA  83 C4 10                  ADD ESP,0x10
006A3CAD  3B C7                     CMP EAX,EDI
006A3CAF  89 3D 4C 4A 85 00         MOV dword ptr [0x00854a4c],EDI
006A3CB5  74 17                     JZ 0x006a3cce
006A3CB7  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006A3CBC  68 2D 01 00 00            PUSH 0x12d
006A3CC1  68 D0 C1 7E 00            PUSH 0x7ec1d0
006A3CC6  50                        PUSH EAX
006A3CC7  6A FB                     PUSH -0x5
006A3CC9  E8 72 21 00 00            CALL 0x006a5e40
LAB_006a3cce:
006A3CCE  3B F7                     CMP ESI,EDI
006A3CD0  75 17                     JNZ 0x006a3ce9
006A3CD2  39 7D 0C                  CMP dword ptr [EBP + 0xc],EDI
006A3CD5  74 12                     JZ 0x006a3ce9
006A3CD7  53                        PUSH EBX
006A3CD8  E8 93 D0 08 00            CALL 0x00730d70
006A3CDD  83 C4 04                  ADD ESP,0x4
006A3CE0  85 C0                     TEST EAX,EAX
006A3CE2  75 A7                     JNZ 0x006a3c8b
006A3CE4  5F                        POP EDI
006A3CE5  5E                        POP ESI
006A3CE6  5B                        POP EBX
006A3CE7  5D                        POP EBP
006A3CE8  C3                        RET
LAB_006a3ce9:
006A3CE9  8B C6                     MOV EAX,ESI
006A3CEB  5F                        POP EDI
006A3CEC  5E                        POP ESI
006A3CED  5B                        POP EBX
006A3CEE  5D                        POP EBP
006A3CEF  C3                        RET
