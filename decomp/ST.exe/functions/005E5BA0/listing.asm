FUN_005e5ba0:
005E5BA0  55                        PUSH EBP
005E5BA1  8B EC                     MOV EBP,ESP
005E5BA3  83 EC 48                  SUB ESP,0x48
005E5BA6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005E5BAB  56                        PUSH ESI
005E5BAC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005E5BAF  57                        PUSH EDI
005E5BB0  8D 55 BC                  LEA EDX,[EBP + -0x44]
005E5BB3  8D 4D B8                  LEA ECX,[EBP + -0x48]
005E5BB6  6A 00                     PUSH 0x0
005E5BB8  52                        PUSH EDX
005E5BB9  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005E5BBC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E5BC2  E8 29 7C 14 00            CALL 0x0072d7f0
005E5BC7  8B F0                     MOV ESI,EAX
005E5BC9  83 C4 08                  ADD ESP,0x8
005E5BCC  85 F6                     TEST ESI,ESI
005E5BCE  0F 85 D8 00 00 00         JNZ 0x005e5cac
005E5BD4  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005E5BD7  50                        PUSH EAX
005E5BD8  50                        PUSH EAX
005E5BD9  50                        PUSH EAX
005E5BDA  50                        PUSH EAX
005E5BDB  50                        PUSH EAX
005E5BDC  50                        PUSH EAX
005E5BDD  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005E5BE0  6A 01                     PUSH 0x1
005E5BE2  6A 02                     PUSH 0x2
005E5BE4  6A 64                     PUSH 0x64
005E5BE6  6A 02                     PUSH 0x2
005E5BE8  50                        PUSH EAX
005E5BE9  6A 00                     PUSH 0x0
005E5BEB  E8 CF D1 E1 FF            CALL 0x00402dbf
005E5BF0  6A 00                     PUSH 0x0
005E5BF2  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
005E5BF5  6A 00                     PUSH 0x0
005E5BF7  6A 00                     PUSH 0x0
005E5BF9  6A 00                     PUSH 0x0
005E5BFB  6A 00                     PUSH 0x0
005E5BFD  6A 00                     PUSH 0x0
005E5BFF  6A 1C                     PUSH 0x1c
005E5C01  6A 02                     PUSH 0x2
005E5C03  6A 62                     PUSH 0x62
005E5C05  6A 02                     PUSH 0x2
005E5C07  51                        PUSH ECX
005E5C08  6A 00                     PUSH 0x0
005E5C0A  E8 B0 D1 E1 FF            CALL 0x00402dbf
005E5C0F  8D 56 61                  LEA EDX,[ESI + 0x61]
005E5C12  83 C4 60                  ADD ESP,0x60
005E5C15  B9 08 00 00 00            MOV ECX,0x8
005E5C1A  33 C0                     XOR EAX,EAX
005E5C1C  8B FA                     MOV EDI,EDX
005E5C1E  52                        PUSH EDX
005E5C1F  F3 AB                     STOSD.REP ES:EDI
005E5C21  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005E5C24  6A 01                     PUSH 0x1
005E5C26  6A 03                     PUSH 0x3
005E5C28  8B CE                     MOV ECX,ESI
005E5C2A  C7 46 71 14 00 00 00      MOV dword ptr [ESI + 0x71],0x14
005E5C31  89 46 75                  MOV dword ptr [ESI + 0x75],EAX
005E5C34  E8 C7 03 10 00            CALL 0x006e6000
005E5C39  8D 4E 5D                  LEA ECX,[ESI + 0x5d]
005E5C3C  51                        PUSH ECX
005E5C3D  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
005E5C43  E8 98 C4 10 00            CALL 0x006f20e0
005E5C48  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005E5C4E  6A 02                     PUSH 0x2
005E5C50  6A 0A                     PUSH 0xa
005E5C52  52                        PUSH EDX
005E5C53  E8 EB C0 E1 FF            CALL 0x00401d43
005E5C58  8B 0D 78 17 81 00         MOV ECX,dword ptr [0x00811778]
005E5C5E  83 C4 0C                  ADD ESP,0xc
005E5C61  85 C9                     TEST ECX,ECX
005E5C63  74 1D                     JZ 0x005e5c82
005E5C65  E8 20 B6 E1 FF            CALL 0x0040128a
005E5C6A  A1 78 17 81 00            MOV EAX,[0x00811778]
005E5C6F  50                        PUSH EAX
005E5C70  E8 3B 86 14 00            CALL 0x0072e2b0
005E5C75  83 C4 04                  ADD ESP,0x4
005E5C78  C7 05 78 17 81 00 00 00 00 00  MOV dword ptr [0x00811778],0x0
LAB_005e5c82:
005E5C82  8B 86 91 00 00 00         MOV EAX,dword ptr [ESI + 0x91]
005E5C88  85 C0                     TEST EAX,EAX
005E5C8A  74 11                     JZ 0x005e5c9d
005E5C8C  81 C6 81 00 00 00         ADD ESI,0x81
005E5C92  B9 20 76 80 00            MOV ECX,0x807620
005E5C97  56                        PUSH ESI
005E5C98  E8 B3 DE 0F 00            CALL 0x006e3b50
LAB_005e5c9d:
005E5C9D  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005E5CA0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E5CA6  5F                        POP EDI
005E5CA7  5E                        POP ESI
005E5CA8  8B E5                     MOV ESP,EBP
005E5CAA  5D                        POP EBP
005E5CAB  C3                        RET
LAB_005e5cac:
005E5CAC  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005E5CAF  68 FC DC 7C 00            PUSH 0x7cdcfc
005E5CB4  68 CC 4C 7A 00            PUSH 0x7a4ccc
005E5CB9  56                        PUSH ESI
005E5CBA  6A 00                     PUSH 0x0
005E5CBC  6A 4A                     PUSH 0x4a
005E5CBE  68 BC DC 7C 00            PUSH 0x7cdcbc
005E5CC3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005E5CC9  E8 02 78 0C 00            CALL 0x006ad4d0
005E5CCE  83 C4 18                  ADD ESP,0x18
005E5CD1  85 C0                     TEST EAX,EAX
005E5CD3  74 01                     JZ 0x005e5cd6
005E5CD5  CC                        INT3
LAB_005e5cd6:
005E5CD6  6A 4A                     PUSH 0x4a
005E5CD8  68 BC DC 7C 00            PUSH 0x7cdcbc
005E5CDD  6A 00                     PUSH 0x0
005E5CDF  56                        PUSH ESI
005E5CE0  E8 5B 01 0C 00            CALL 0x006a5e40
005E5CE5  5F                        POP EDI
005E5CE6  5E                        POP ESI
005E5CE7  8B E5                     MOV ESP,EBP
005E5CE9  5D                        POP EBP
005E5CEA  C3                        RET
