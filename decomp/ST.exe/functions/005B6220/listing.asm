FUN_005b6220:
005B6220  55                        PUSH EBP
005B6221  8B EC                     MOV EBP,ESP
005B6223  83 EC 48                  SUB ESP,0x48
005B6226  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B622B  53                        PUSH EBX
005B622C  56                        PUSH ESI
005B622D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005B6230  57                        PUSH EDI
005B6231  8D 55 BC                  LEA EDX,[EBP + -0x44]
005B6234  8D 4D B8                  LEA ECX,[EBP + -0x48]
005B6237  6A 00                     PUSH 0x0
005B6239  52                        PUSH EDX
005B623A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005B623D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B6243  E8 A8 75 17 00            CALL 0x0072d7f0
005B6248  8B F0                     MOV ESI,EAX
005B624A  83 C4 08                  ADD ESP,0x8
005B624D  85 F6                     TEST ESI,ESI
005B624F  75 70                     JNZ 0x005b62c1
005B6251  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005B6254  BF 0D 00 00 00            MOV EDI,0xd
005B6259  8D 73 66                  LEA ESI,[EBX + 0x66]
LAB_005b625c:
005B625C  8B 06                     MOV EAX,dword ptr [ESI]
005B625E  85 C0                     TEST EAX,EAX
005B6260  74 09                     JZ 0x005b626b
005B6262  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005B6265  50                        PUSH EAX
005B6266  E8 45 F4 12 00            CALL 0x006e56b0
LAB_005b626b:
005B626B  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
005B6271  83 C6 04                  ADD ESI,0x4
005B6274  4F                        DEC EDI
005B6275  75 E5                     JNZ 0x005b625c
005B6277  8D B3 74 01 00 00         LEA ESI,[EBX + 0x174]
005B627D  BF 0D 00 00 00            MOV EDI,0xd
LAB_005b6282:
005B6282  8D 8E 6F FF FF FF         LEA ECX,[ESI + 0xffffff6f]
005B6288  E8 23 F8 15 00            CALL 0x00715ab0
005B628D  8B CE                     MOV ECX,ESI
005B628F  E8 1C F8 15 00            CALL 0x00715ab0
005B6294  8A 86 6E FF FF FF         MOV AL,byte ptr [ESI + 0xffffff6e]
005B629A  84 C0                     TEST AL,AL
005B629C  74 0B                     JZ 0x005b62a9
005B629E  8D 8E 91 00 00 00         LEA ECX,[ESI + 0x91]
005B62A4  E8 07 F8 15 00            CALL 0x00715ab0
LAB_005b62a9:
005B62A9  81 C6 FB 01 00 00         ADD ESI,0x1fb
005B62AF  4F                        DEC EDI
005B62B0  75 D0                     JNZ 0x005b6282
005B62B2  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005B62B5  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005B62BA  5F                        POP EDI
005B62BB  5E                        POP ESI
005B62BC  5B                        POP EBX
005B62BD  8B E5                     MOV ESP,EBP
005B62BF  5D                        POP EBP
005B62C0  C3                        RET
LAB_005b62c1:
005B62C1  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005B62C4  68 CC CA 7C 00            PUSH 0x7ccacc
005B62C9  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B62CE  56                        PUSH ESI
005B62CF  6A 00                     PUSH 0x0
005B62D1  68 E5 00 00 00            PUSH 0xe5
005B62D6  68 38 CA 7C 00            PUSH 0x7cca38
005B62DB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B62E1  E8 EA 71 0F 00            CALL 0x006ad4d0
005B62E6  83 C4 18                  ADD ESP,0x18
005B62E9  85 C0                     TEST EAX,EAX
005B62EB  74 01                     JZ 0x005b62ee
005B62ED  CC                        INT3
LAB_005b62ee:
005B62EE  68 E5 00 00 00            PUSH 0xe5
005B62F3  68 38 CA 7C 00            PUSH 0x7cca38
005B62F8  6A 00                     PUSH 0x0
005B62FA  56                        PUSH ESI
005B62FB  E8 40 FB 0E 00            CALL 0x006a5e40
005B6300  5F                        POP EDI
005B6301  5E                        POP ESI
005B6302  5B                        POP EBX
005B6303  8B E5                     MOV ESP,EBP
005B6305  5D                        POP EBP
005B6306  C3                        RET
