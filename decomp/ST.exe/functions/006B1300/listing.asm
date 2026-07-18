FUN_006b1300:
006B1300  55                        PUSH EBP
006B1301  8B EC                     MOV EBP,ESP
006B1303  83 EC 48                  SUB ESP,0x48
006B1306  56                        PUSH ESI
006B1307  68 38 02 00 00            PUSH 0x238
006B130C  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006B1313  E8 F8 98 FF FF            CALL 0x006aac10
006B1318  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B131B  85 C0                     TEST EAX,EAX
006B131D  89 01                     MOV dword ptr [ECX],EAX
006B131F  75 0C                     JNZ 0x006b132d
006B1321  B8 FE FF FF FF            MOV EAX,0xfffffffe
006B1326  5E                        POP ESI
006B1327  8B E5                     MOV ESP,EBP
006B1329  5D                        POP EBP
006B132A  C2 08 00                  RET 0x8
LAB_006b132d:
006B132D  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
006B1333  8D 4D BC                  LEA ECX,[EBP + -0x44]
006B1336  8D 45 B8                  LEA EAX,[EBP + -0x48]
006B1339  6A 00                     PUSH 0x0
006B133B  51                        PUSH ECX
006B133C  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
006B133F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006B1344  E8 A7 C4 07 00            CALL 0x0072d7f0
006B1349  83 C4 08                  ADD ESP,0x8
006B134C  85 C0                     TEST EAX,EAX
006B134E  75 41                     JNZ 0x006b1391
006B1350  68 58 06 00 00            PUSH 0x658
006B1355  E8 B6 98 FF FF            CALL 0x006aac10
006B135A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B135D  68 58 06 00 00            PUSH 0x658
006B1362  8B 16                     MOV EDX,dword ptr [ESI]
006B1364  89 82 BC 01 00 00         MOV dword ptr [EDX + 0x1bc],EAX
006B136A  E8 A1 98 FF FF            CALL 0x006aac10
006B136F  8B 0E                     MOV ECX,dword ptr [ESI]
006B1371  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B1374  52                        PUSH EDX
006B1375  89 81 C0 01 00 00         MOV dword ptr [ECX + 0x1c0],EAX
006B137B  8B 06                     MOV EAX,dword ptr [ESI]
006B137D  50                        PUSH EAX
006B137E  E8 FD 02 00 00            CALL 0x006b1680
006B1383  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006B1386  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006B1389  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006B138F  EB 17                     JMP 0x006b13a8
LAB_006b1391:
006B1391  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006B1394  8B F0                     MOV ESI,EAX
006B1396  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B1399  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006B139F  50                        PUSH EAX
006B13A0  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006B13A3  E8 B8 9C FF FF            CALL 0x006ab060
LAB_006b13a8:
006B13A8  85 F6                     TEST ESI,ESI
006B13AA  74 1D                     JZ 0x006b13c9
006B13AC  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006B13B2  6A 5C                     PUSH 0x5c
006B13B4  68 C0 DA 7E 00            PUSH 0x7edac0
006B13B9  51                        PUSH ECX
006B13BA  56                        PUSH ESI
006B13BB  E8 80 4A FF FF            CALL 0x006a5e40
006B13C0  8B C6                     MOV EAX,ESI
006B13C2  5E                        POP ESI
006B13C3  8B E5                     MOV ESP,EBP
006B13C5  5D                        POP EBP
006B13C6  C2 08 00                  RET 0x8
LAB_006b13c9:
006B13C9  33 C0                     XOR EAX,EAX
006B13CB  5E                        POP ESI
006B13CC  8B E5                     MOV ESP,EBP
006B13CE  5D                        POP EBP
006B13CF  C2 08 00                  RET 0x8
