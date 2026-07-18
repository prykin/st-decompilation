FUN_006e6200:
006E6200  55                        PUSH EBP
006E6201  8B EC                     MOV EBP,ESP
006E6203  83 EC 20                  SUB ESP,0x20
006E6206  56                        PUSH ESI
006E6207  57                        PUSH EDI
006E6208  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006E620B  8D 45 0C                  LEA EAX,[EBP + 0xc]
006E620E  50                        PUSH EAX
006E620F  8B F1                     MOV ESI,ECX
006E6211  57                        PUSH EDI
006E6212  E8 B9 00 00 00            CALL 0x006e62d0
006E6217  85 C0                     TEST EAX,EAX
006E6219  75 23                     JNZ 0x006e623e
006E621B  68 F8 EB 7E 00            PUSH 0x7eebf8
006E6220  68 CC 4C 7A 00            PUSH 0x7a4ccc
006E6225  50                        PUSH EAX
006E6226  50                        PUSH EAX
006E6227  68 0E 05 00 00            PUSH 0x50e
006E622C  68 8C E7 7E 00            PUSH 0x7ee78c
006E6231  E8 9A 72 FC FF            CALL 0x006ad4d0
006E6236  83 C4 18                  ADD ESP,0x18
006E6239  85 C0                     TEST EAX,EAX
006E623B  74 01                     JZ 0x006e623e
006E623D  CC                        INT3
LAB_006e623e:
006E623E  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006E6241  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006E6244  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006E6247  51                        PUSH ECX
006E6248  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006E624B  52                        PUSH EDX
006E624C  50                        PUSH EAX
006E624D  51                        PUSH ECX
006E624E  8B CE                     MOV ECX,ESI
006E6250  E8 5B F2 FF FF            CALL 0x006e54b0
006E6255  85 C0                     TEST EAX,EAX
006E6257  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006E625A  74 5D                     JZ 0x006e62b9
006E625C  89 78 18                  MOV dword ptr [EAX + 0x18],EDI
006E625F  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
006E6262  3B F8                     CMP EDI,EAX
006E6264  72 04                     JC 0x006e626a
006E6266  47                        INC EDI
006E6267  89 7E 20                  MOV dword ptr [ESI + 0x20],EDI
LAB_006e626a:
006E626A  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006E626D  B9 08 00 00 00            MOV ECX,0x8
006E6272  33 C0                     XOR EAX,EAX
006E6274  8D 7D E0                  LEA EDI,[EBP + -0x20]
006E6277  F3 AB                     STOSD.REP ES:EDI
006E6279  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E627C  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006E627F  C7 45 F0 02 00 00 00      MOV dword ptr [EBP + -0x10],0x2
006E6286  8D 55 E0                  LEA EDX,[EBP + -0x20]
006E6289  8B 01                     MOV EAX,dword ptr [ECX]
006E628B  52                        PUSH EDX
006E628C  FF 10                     CALL dword ptr [EAX]
006E628E  3D FF FF 00 00            CMP EAX,0xffff
006E6293  75 1A                     JNZ 0x006e62af
006E6295  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006E629A  68 18 05 00 00            PUSH 0x518
006E629F  68 8C E7 7E 00            PUSH 0x7ee78c
006E62A4  50                        PUSH EAX
006E62A5  68 FF FF 00 00            PUSH 0xffff
006E62AA  E8 91 FB FB FF            CALL 0x006a5e40
LAB_006e62af:
006E62AF  5F                        POP EDI
006E62B0  33 C0                     XOR EAX,EAX
006E62B2  5E                        POP ESI
006E62B3  8B E5                     MOV ESP,EBP
006E62B5  5D                        POP EBP
006E62B6  C2 18 00                  RET 0x18
LAB_006e62b9:
006E62B9  5F                        POP EDI
006E62BA  B8 FE FF FF FF            MOV EAX,0xfffffffe
006E62BF  5E                        POP ESI
006E62C0  8B E5                     MOV ESP,EBP
006E62C2  5D                        POP EBP
006E62C3  C2 18 00                  RET 0x18
