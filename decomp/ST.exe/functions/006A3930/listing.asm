FUN_006a3930:
006A3930  55                        PUSH EBP
006A3931  8B EC                     MOV EBP,ESP
006A3933  83 EC 08                  SUB ESP,0x8
006A3936  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A3939  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A393C  53                        PUSH EBX
006A393D  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006A3940  56                        PUSH ESI
006A3941  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006A3944  57                        PUSH EDI
006A3945  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006A3948  57                        PUSH EDI
006A3949  56                        PUSH ESI
006A394A  53                        PUSH EBX
006A394B  50                        PUSH EAX
006A394C  51                        PUSH ECX
006A394D  E8 1E 25 D6 FF            CALL 0x00405e70
006A3952  50                        PUSH EAX
006A3953  E8 FC E1 D5 FF            CALL 0x00401b54
006A3958  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A395B  8D 55 F8                  LEA EDX,[EBP + -0x8]
006A395E  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006A3961  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A3964  52                        PUSH EDX
006A3965  56                        PUSH ESI
006A3966  53                        PUSH EBX
006A3967  50                        PUSH EAX
006A3968  51                        PUSH ECX
006A3969  E8 DE 07 D6 FF            CALL 0x0040414c
006A396E  0F BF C0                  MOVSX EAX,AX
006A3971  68 FF 00 00 00            PUSH 0xff
006A3976  56                        PUSH ESI
006A3977  57                        PUSH EDI
006A3978  8D 55 F8                  LEA EDX,[EBP + -0x8]
006A397B  50                        PUSH EAX
006A397C  52                        PUSH EDX
006A397D  E8 DC 13 D6 FF            CALL 0x00404d5e
006A3982  83 C4 40                  ADD ESP,0x40
006A3985  85 C0                     TEST EAX,EAX
006A3987  74 0D                     JZ 0x006a3996
006A3989  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A398C  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A398F  83 E0 0F                  AND EAX,0xf
006A3992  3B C8                     CMP ECX,EAX
006A3994  74 2A                     JZ 0x006a39c0
LAB_006a3996:
006A3996  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A3999  51                        PUSH ECX
006A399A  57                        PUSH EDI
006A399B  E8 E0 0A D6 FF            CALL 0x00404480
006A39A0  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006A39A3  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A39A6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A39A9  52                        PUSH EDX
006A39AA  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A39AD  50                        PUSH EAX
006A39AE  57                        PUSH EDI
006A39AF  68 FF 00 00 00            PUSH 0xff
006A39B4  56                        PUSH ESI
006A39B5  53                        PUSH EBX
006A39B6  51                        PUSH ECX
006A39B7  52                        PUSH EDX
006A39B8  E8 38 13 D6 FF            CALL 0x00404cf5
006A39BD  83 C4 28                  ADD ESP,0x28
LAB_006a39c0:
006A39C0  5F                        POP EDI
006A39C1  5E                        POP ESI
006A39C2  5B                        POP EBX
006A39C3  8B E5                     MOV ESP,EBP
006A39C5  5D                        POP EBP
006A39C6  C3                        RET
