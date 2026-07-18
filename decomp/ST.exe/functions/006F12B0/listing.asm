FUN_006f12b0:
006F12B0  55                        PUSH EBP
006F12B1  8B EC                     MOV EBP,ESP
006F12B3  83 EC 48                  SUB ESP,0x48
006F12B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F12BB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006F12BE  56                        PUSH ESI
006F12BF  8D 55 BC                  LEA EDX,[EBP + -0x44]
006F12C2  8D 4D B8                  LEA ECX,[EBP + -0x48]
006F12C5  6A 00                     PUSH 0x0
006F12C7  52                        PUSH EDX
006F12C8  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006F12CB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F12D1  E8 1A C5 03 00            CALL 0x0072d7f0
006F12D6  8B F0                     MOV ESI,EAX
006F12D8  83 C4 08                  ADD ESP,0x8
006F12DB  85 F6                     TEST ESI,ESI
006F12DD  75 25                     JNZ 0x006f1304
006F12DF  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006F12E2  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F12E5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006F12E8  50                        PUSH EAX
006F12E9  8B 02                     MOV EAX,dword ptr [EDX]
006F12EB  51                        PUSH ECX
006F12EC  8B 08                     MOV ECX,dword ptr [EAX]
006F12EE  51                        PUSH ECX
006F12EF  E8 2C FC 05 00            CALL 0x00750f20
006F12F4  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006F12F7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F12FD  5E                        POP ESI
006F12FE  8B E5                     MOV ESP,EBP
006F1300  5D                        POP EBP
006F1301  C2 08 00                  RET 0x8
LAB_006f1304:
006F1304  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006F1307  68 DC FA 7E 00            PUSH 0x7efadc
006F130C  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F1311  56                        PUSH ESI
006F1312  6A 00                     PUSH 0x0
006F1314  68 A9 00 00 00            PUSH 0xa9
006F1319  68 A4 FA 7E 00            PUSH 0x7efaa4
006F131E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F1323  E8 A8 C1 FB FF            CALL 0x006ad4d0
006F1328  83 C4 18                  ADD ESP,0x18
006F132B  85 C0                     TEST EAX,EAX
006F132D  74 01                     JZ 0x006f1330
006F132F  CC                        INT3
LAB_006f1330:
006F1330  68 AB 00 00 00            PUSH 0xab
006F1335  68 A4 FA 7E 00            PUSH 0x7efaa4
006F133A  6A 00                     PUSH 0x0
006F133C  56                        PUSH ESI
006F133D  E8 FE 4A FB FF            CALL 0x006a5e40
006F1342  5E                        POP ESI
006F1343  8B E5                     MOV ESP,EBP
006F1345  5D                        POP EBP
006F1346  C2 08 00                  RET 0x8
